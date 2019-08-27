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
#include "TypeButtonGroup.h"
#include <QAbstractButton>
#include <QButtonGroup>
#include <QCoreApplication>
#include <QRect>
#include <QSettings>
#include <QVBoxLayout>

namespace {
const QRect default_rect(100, 100, 800, 400);
}

MainWindow::MainWindow()
    : QMainWindow()
    , m_type_buttons(TypeButtonGroup::makeButtonGroup())
{
    initSettings();
    auto layout = new QVBoxLayout;
    for (auto button : m_type_buttons->buttons())
        layout->addWidget(button);
    setCentralWidget(new QWidget);
    centralWidget()->setLayout(layout);
}

MainWindow::~MainWindow() { writeSettings(); }

void MainWindow::initSettings() {
  QCoreApplication::setApplicationName(SettingsList::app_name);
  QCoreApplication::setApplicationVersion(SettingsList::app_ver);
  QCoreApplication::setOrganizationName(SettingsList::app_org);
  QSettings settings;

  setGeometry(
      settings.value(SettingsList::MainWindow::rect, default_rect).toRect());
}

void MainWindow::writeSettings() const {
  QSettings settings;
  settings.setValue(SettingsList::MainWindow::rect, geometry());
}
