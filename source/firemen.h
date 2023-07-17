#ifndef FIREMEN_H
#define FIREMEN_H

#include <core/x-platform/scene.h>
#include <core/components/camera.h>
#include <core/components/sprite.h>

class Firemen : public IScene
{
private:
    Camera* camera;
    Sprite* background;
    Sprite* firemen;

    float speed;

public:
    Firemen();

    void Init();
    void Update();
    void UpdateAfterPhysics();
};

#endif
