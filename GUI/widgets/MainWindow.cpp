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
#include <QCoreApplication>
#include <QRect>
#include <QSettings>

namespace {
const QRect default_rect(100, 100, 800, 400);
}

MainWindow::MainWindow() { initSettings(); }

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
