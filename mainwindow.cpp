#include "mainwindow.h"
#include <QLabel>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    auto *central = new QWidget(this);
    setCentralWidget(central);

    auto *layout = new QVBoxLayout(central);
    m_label = new QLabel("Hello, Qt6!", central);
    m_label->setStyleSheet("font-size: 24px; color: #333;");
    m_label->setAlignment(Qt::AlignCenter);
    layout->addWidget(m_label);
}

MainWindow::~MainWindow() = default;
