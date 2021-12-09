#include <renderd7.hpp>

void Thread1(RenderD7::Parameter param) {
    while (true) {
        RenderD7::Thread::sleep(1000 * 1); // wait; also, this is needed to allow for concurrency (refer to the documentation for m3d::Thread::sleep())
    }
}
rnd7::Clock clocktr;
rnd7::Time tr = clocktr.getCurrentTime();
int main()
{
    RenderD7::Init::Main("Simple-Cam");
    //RenderD7::Thread th1(Thread1, 1);
    //th1.start();
    clocktr.restart();
    while (RenderD7::MainLoop())
    {
        RenderD7::OnScreen(Top);
        RenderD7::DrawText(0, 0, 1.3f, RenderD7::Color::Hex("#FFFFFF"), std::to_string(tr.asSeconds()));
        C3D_FrameEnd(0);
    }
   // th1.kill();
    RenderD7::Exit::Main();
}
