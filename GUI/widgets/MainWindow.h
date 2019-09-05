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

class TypeSelector;

//! Application main window.

class MainWindow : public QMainWindow
{
public:
    MainWindow();
    ~MainWindow() override;

private:
    void initSettings();
    void writeSettings() const;
    void setupCentralWidget();

    TypeSelector* m_type_buttons;
};

#endif // MAINWINDOW_H
