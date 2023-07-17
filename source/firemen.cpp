#include "firemen.h"

Firemen::Firemen()
{
};

void Firemen::Init()
{
    camera = new Camera();
    //camera = new Sprite("data/firemen.bmp");
    //camera = new Sprite("data/building.bmp");

    components.Add(camera);
    components.Add(firemen);
    components.Add(background);
};

void Firemen::Update()
{
};

void Firemen::UpdateAfterPhysics()
{
};

