#ifndef GETINFO_H
#define GETINFO_H
#include <QObject>
class GetInfo : public QObject
{
    Q_OBJECT
public:
    GetInfo();
    ~GetInfo();

public slots:
    void getFGWinName();
};

#endif // GETINFO_H