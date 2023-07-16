#ifndef BREAKOUT_H
#define BREAKOUT_H

#include <core/x-platform/scene.h>

class Breakout : public IScene
{
public:
    Breakout();

    void Init();
    void Update();
    void UpdateAfterPhysics();
};

#endif
