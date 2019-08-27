// ************************************************************************** //
//
//  Prototype of data loader for bornagainproject.org
//
//! @homepage  http://www.bornagainproject.org
//! @license   GNU General Public License v3 or higher
//
// ************************************************************************** //

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <memory>

class QButtonGroup;

//! Application main window.

class MainWindow : public QMainWindow {
public:
  MainWindow();
  ~MainWindow() override;

private:
  void initSettings();
  void writeSettings() const;

  std::unique_ptr<QButtonGroup> m_type_buttons;
};

#endif // MAINWINDOW_H
