#ifndef SPACEINVADERS_H
#define SPACEINVADERS_H

#include <core/x-platform/scene.h>

class SpaceInvaders : public IScene
{
public:
    SpaceInvaders();

    void Init();
    void Update();
    void UpdateAfterPhysics();
};

#endif
