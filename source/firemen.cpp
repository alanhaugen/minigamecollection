#include "firemen.h"

Firemen::Firemen()
{
};

void Firemen::Init()
{
    camera     = new Camera();
    firemen    = new Sprite("data/firemen.bmp", 65, 90);
    background = new Sprite("data/building.bmp");

    components.Add(camera);
    components.Add(firemen);
    components.Add(background);

    speed = 1.5;
};

void Firemen::Update()
{
    if (input.Held(input.Key.LEFT))
    {
        firemen->matrix.Translate(glm::vec3(-1.0f * speed, 0.0f, 0.0f));
    }
    else if (input.Held(input.Key.RIGHT))
    {
        firemen->matrix.Translate(glm::vec3(1.0f * speed, 0.0f, 0.0f));
    }
};

void Firemen::UpdateAfterPhysics()
{
};

