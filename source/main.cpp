#include <renderd7.hpp>

void Thread1(RenderD7::Parameter param) {
    while (true) {
        RenderD7::Thread::sleep(1000 * 1); // wait; also, this is needed to allow for concurrency (refer to the documentation for m3d::Thread::sleep())
    }
}

int main()
{
    RenderD7::Init::Main("Simple-Cam");
    RenderD7::Thread th1(Thread1, 1);
    th1.start();
    while (RenderD7::MainLoop())
    {
         
        C3D_FrameEnd(0);
    }
    th1.kill();
    RenderD7::Exit::Main();
}
