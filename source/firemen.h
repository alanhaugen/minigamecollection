#ifndef FIREMEN_H
#define FIREMEN_H

#include <core/x-platform/scene.h>
#include <core/components/camera.h>

class Firemen : public IScene
{
private:
    Camera* camera;

public:
    Firemen();

    void Init();
    void Update();
    void UpdateAfterPhysics();
};

#endif
