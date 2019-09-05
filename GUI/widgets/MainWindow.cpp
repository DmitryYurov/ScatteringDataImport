// ************************************************************************** //
//
//  Prototype of data loader for bornagainproject.org
//
//! @homepage  http://www.bornagainproject.org
//! @license   GNU General Public License v3 or higher
//
// ************************************************************************** //

#include "MainWindow.h"
#include "SettingsList.h"
#include "TypeSelector.h"
#include <QAbstractButton>
#include <QCoreApplication>
#include <QHBoxLayout>
#include <QRect>
#include <QSettings>
#include <QStackedWidget>
#include <QVBoxLayout>

namespace
{
const QRect default_rect(100, 100, 800, 400);
} // namespace

MainWindow::MainWindow() : QMainWindow(), m_type_buttons(new TypeSelector(this))
{
    initSettings();
    setupCentralWidget();
}

MainWindow::~MainWindow()
{
    writeSettings();
}

void MainWindow::initSettings()
{
    SettingsList::initSettings();
    QSettings settings;
    setGeometry(settings.value(SettingsList::mainwindow_rect, default_rect).toRect());
}

void MainWindow::writeSettings() const
{
    QSettings settings;
    settings.setValue(SettingsList::mainwindow_rect, geometry());
}

void MainWindow::setupCentralWidget()
{
    auto central_wd = new QWidget(this);
    setCentralWidget(central_wd);

    auto data_widget = new QStackedWidget(central_wd);
    for (int id : TypeSelector::availableTypes())
        data_widget->insertWidget(id, new QWidget);
    connect(m_type_buttons, static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::buttonClicked),
            data_widget, &QStackedWidget::setCurrentIndex);
    data_widget->setCurrentIndex(m_type_buttons->checkedId());

    auto button_layout = new QVBoxLayout;
    for (auto button : m_type_buttons->buttons())
        button_layout->addWidget(button);

    auto main_layout = new QHBoxLayout;
    main_layout->addLayout(button_layout);
    main_layout->addWidget(data_widget);

    central_wd->setLayout(main_layout);
}
