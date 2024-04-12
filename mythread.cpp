#include "mythread.h"
#include <QDebug>


MyThread::MyThread(const QString &text ):
    m_text(text),
    m_stopThread(false)
{

}

void MyThread::run()
{
    while( !m_stopThread)
    {
    qDebug() << m_text;
    sleep( 1 );
    }
}

void MyThread::stopped(bool stop)
{
    m_stopThread = stop;
}
