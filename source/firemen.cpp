#include "firemen.h"

Firemen::Firemen()
{
};

void Firemen::Init()
{
    camera     = new Camera();
    person     = new Sprite("data/guy.bmp", 50, 10, 1, 1, 64, 64);
    firemen    = new Sprite("data/firemen.bmp", 65, 90);
    background = new Sprite("data/building.bmp");

    components.Add(camera);
    components.Add(person);
    components.Add(firemen);
    components.Add(background);

    speed = 1.5f;
    personSpeed = 0.8f;
    gravity = 0.3f;
    force = -1.0f;
};

void Firemen::Update()
{
    if (input.Held(input.Key.LEFT) && *firemen->matrix.x > 50)
    {
        firemen->matrix.Translate(glm::vec3(-1.0f * speed, 0.0f, 0.0f));
    }
    else if (input.Held(input.Key.RIGHT) && *firemen->matrix.x < 175)
    {
        firemen->matrix.Translate(glm::vec3(1.0f * speed, 0.0f, 0.0f));
    }
    
    person->matrix.Translate(glm::vec3(1.0f * personSpeed, 1.0f * force, 0.0f));
    force += gravity;

    if (*person->matrix.y > 85.0f)
    {
        force = -6.0f;
    }

    if (*person->matrix.x > 180.0f)
    {
        *person->matrix.x = 50.0f;
        *person->matrix.y = 10.0f;
        force = -1.0f;
        personSpeed = float(random.RandomRange(1, 5));
    }
};

void Firemen::UpdateAfterPhysics()
{
};

