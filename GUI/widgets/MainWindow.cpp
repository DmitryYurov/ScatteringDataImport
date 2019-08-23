// ************************************************************************** //
//
//  Prototype of data loader for bornagainproject.org
//
//! @homepage  http://www.bornagainproject.org
//! @license   GNU General Public License v3 or higher
//
// ************************************************************************** //

#include "MainWindow.h"
#include <QCoreApplication>

MainWindow::MainWindow()
{
  init_application();
}

MainWindow::~MainWindow() = default;

void MainWindow::init_application() {
  QCoreApplication::setApplicationName("Data loader prototype");
  QCoreApplication::setApplicationVersion("0.0");
}
