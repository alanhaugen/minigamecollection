#include "firemen.h"

Firemen::Firemen()
{
};

void Firemen::Init()
{
    camera = new Camera();

    components.Add(camera);
};

void Firemen::Update()
{
};

void Firemen::UpdateAfterPhysics()
{
};

