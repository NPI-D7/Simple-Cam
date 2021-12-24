#include <renderd7.hpp>

//rnd7::Clock clocktr;
//rnd7::Time tr = clocktr.getCurrentTime();
int main()
{
    RenderD7::Init::Main("Simple-Cam");
    
   // clocktr.restart();
    while (RenderD7::MainLoop())
    {
        RenderD7::OnScreen(Top);
        RenderD7::DrawText(0, 30, 1.3f, RenderD7::Color::Hex("#FFFFFF"), "Hi");
      //  RenderD7::DrawText(0, 0, 1.3f, RenderD7::Color::Hex("#FFFFFF"), std::to_string(tr.asSeconds()));
        C3D_FrameEnd(0);
    }
    RenderD7::Exit::Main();
}
