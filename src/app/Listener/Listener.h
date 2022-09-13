#ifndef __LISTENER_H__
#define __LISTENER_H__

#include "Button.h"
#include "Led.h"

class Listener
{
private :
    Button *powerButton;
    Led *light;
public:
    Listener(Button *button, Led *led);
    ~Listener();
    void checkEvent();
};

#endif /* __LISTENER_H__ */
