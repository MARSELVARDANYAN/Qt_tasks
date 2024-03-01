#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    helloLabel = new QLabel("Hello, World!",this);

}

MainWindow::~MainWindow()
{
    delete helloLabel;
}

