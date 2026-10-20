#pragma once

class App
{
public:
    App();
    virtual ~App();

    int  Init();
    void Destroy();
    int  Update();
    int  Render();
};
