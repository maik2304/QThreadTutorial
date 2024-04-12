#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QObject>
#include <QThread>


class MyThread : public QThread
{

private:
    QString m_text;
    bool m_stopThread;
public:
    MyThread(const QString &text);
public slots:
    void stopped(bool stop);
protected:
    void run() override;

};

#endif // MYTHREAD_H
