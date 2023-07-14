#include <core/application.h>
#include "firemen.h"
#include "breakout.h"
#include "littlemouse.h"
#include "spaceinvaders.h"

int main(int argc, char **argv)
{
    Application application(argc, argv);
    application.AddScene(new Firemen());
    application.AddScene(new Breakout());
    application.AddScene(new LittleMouse());
    application.AddScene(new SpaceInvaders());

    return application.Exec();
}

