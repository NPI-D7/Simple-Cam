#include <renderd7.hpp>

int main()
{
    RenderD7::Init::Main("Simple-Cam");
    while (RenderD7::MainLoop())
    {
         
        C3D_FrameEnd(0);
    }
    RenderD7::Exit::Main();
}
