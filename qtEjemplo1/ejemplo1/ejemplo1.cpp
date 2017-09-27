#include "ejemplo1.h"

ejemplo1::ejemplo1(): Ui_Counter()
{
    
    setupUi(this);
    show();
    connect(button, SIGNAL(pressed()), this, SLOT(doButton()) );
    connect(BRestart, SIGNAL(clicked()), this, SLOT(doRestart()) );
    connect(button, SIGNAL(clicked()), this, SLOT(doButtonClick()) );
    connect(&mythread, SIGNAL(timeout()), this, SLOT(doIncrement()) );
    mythread.start();
}

ejemplo1::~ejemplo1()
{}

void ejemplo1::doButton()
{
    qDebug() << "pressed on button";
    running = false;
}

void ejemplo1::doButtonClick()
{
    qDebug() << "click on button";
    running = true;
}

void ejemplo1::doIncrement()
{
    if(running){
        lcdNumber->display(cont);
        cont++;
    }
}

void ejemplo1::doRestart()
{
    cont = 0;
    lcdNumber->display(cont);
}



