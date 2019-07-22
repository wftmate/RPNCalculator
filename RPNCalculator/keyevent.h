#ifndef KEYEVENT_H
#define KEYEVENT_H

#include <QKeyEvent>

class KeyEvent
{
public:
    KeyEvent();

protected:
    void KeyPressEvent(QKeyEvent *);
    void KeyReleaseEvent(QKeyEvent *);

};

#endif // KEYEVENT_H
