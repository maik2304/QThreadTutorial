#include <QApplication>
#include <QMessageBox>
#include "mythread.h"

#include "QObject"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MyThread* thread = new MyThread("test");

    thread->start();

    QMessageBox::information( 0, "Threading", "Close me to stop!" );

    thread->stopped(true);

    thread->wait();

    return a.exec();
}
