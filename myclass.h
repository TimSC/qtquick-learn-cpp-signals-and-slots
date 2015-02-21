#ifndef COUNTER
#define COUNTER

#include <QObject>
#include <QDebug>

class MyClass : public QObject
{
    Q_OBJECT
public:
    MyClass()
    {

    }

    virtual ~MyClass()
    {

    }

public slots:
    void cppSlot(const QString &msg)
    {
        qDebug() << "Called the C++ slot with message:" << msg;
    }

    QVariant getList()
    {
        QList<QVariant> newLi;
        QString tmp("test1");
        newLi.push_back(tmp);
        QString tmp2("test2");
        newLi.push_back(tmp2);

        return newLi;

/*        li.clear();
        QString tmp("test1");
        li.push_back(tmp);
        tmp = "test2";
        li.push_back(tmp);
        tmp = "test3";
        li.push_back(tmp);*/
    }
};

#endif // COUNTER

