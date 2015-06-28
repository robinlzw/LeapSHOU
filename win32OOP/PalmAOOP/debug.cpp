#include "debug.h"
#include <QTimer>
debug::debug(QObject *parent) :
    QObject(parent)
{
    QTimer *debugTimer = new QTimer(this);
    connect(debugTimer,SIGNAL(timeout()),this,SLOT(debugcout()));
    debugTimer->start(20);
//    QTimer *debugTimer = new QTimer(this);
//    Operate *OP = new Operate(this);
//    connect(debugTimer,SIGNAL(timeout()),OP,SLOT(showDesktop()));
//    debugTimer->start(1000);
    VM.show();
    DP.show();
    DP.DTTurntableChange(100,100,600,600,1);
    DP.DTTurntableShow();

//    DP.DTTurntableHide();
}

void debug::debugcout(){
    //
    //std::cout<<VM.getX()<<std::endl;
    //std::cout<<FGW.getFGWinName()<<std::endl;

}