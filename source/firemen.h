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
    Sprite* person;

    float speed;
    float personSpeed;
    float force;
    float gravity;

public:
    Firemen();

    void Init();
    void Update();
    void UpdateAfterPhysics();
};

#endif
