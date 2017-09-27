#ifndef ejemplo1_H
#define ejemplo1_H

#include <QtGui>
#include "ui_counterDlg.h"
#include "thread.h"

class ejemplo1 : public QWidget, public Ui_Counter
{

Q_OBJECT
    public:
        ejemplo1();
        virtual ~ejemplo1();
        
    public slots:
        void doButton();
        void doButtonClick();
        void doIncrement();
        void doRestart();
    
    private:
        int cont = 0;
        bool running = true;
        Mythread mythread;
  
};

#endif // ejemplo1_H
