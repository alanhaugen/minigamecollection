#ifndef FIREMEN_H
#define FIREMENT_H

#include <core/x-platform/scene.h>

class Firemen : public IScene
{
public:
    Firemen();

    void Init();
    void Update();
    void UpdateAfterPhysics();
};

#endif
