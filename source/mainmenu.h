#ifndef MAINMENU_H
#define MAINMENU_H

#include <core/x-platform/scene.h>

class MainMenu : public IScene
{
public:
    MainMenu();

    void Init();
    void Update();
    void UpdateAfterPhysics();
};

#endif
