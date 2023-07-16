#ifndef MOUSEGAME_H
#define MOUSEGAME_H

#include <core/x-platform/scene.h>

class MouseGame : public IScene
{
public:
    MouseGame();

    void Init();
    void Update();
    void UpdateAfterPhysics();
};

#endif
