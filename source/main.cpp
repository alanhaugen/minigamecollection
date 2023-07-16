#include <core/application.h>
#include "mainmenu.h"
#include "firemen.h"
#include "breakout.h"
#include "mousegame.h"
#include "spaceinvaders.h"

int main(int argc, char **argv)
{
    Application application(argc, argv);
    //application.AddScene(new MainMenu());
    application.AddScene(new Firemen());
    application.AddScene(new Breakout());
    application.AddScene(new MouseGame());
    application.AddScene(new SpaceInvaders());

    return application.Exec();
}

