#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QString>


MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString fn="c:/WPath/PRINTER.3D/пружина.gcode";
    QFile GCFile(fn);
    if (GCFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {


        while (!GCFile.atEnd())
        {
            QByteArray line = GCFile.readLine();
            GCPars.ParsGC((uint8_t*)line.data(), line.size());

        }

        GCFile.close();
     }

}

MainWindow::~MainWindow()
{
    delete ui;
}
