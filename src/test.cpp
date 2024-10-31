#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    std::string reset_position;
    int frame = 0;
    

    
    while (true)
    {

    auto can = Canvas(200,200);
    can.DrawPointLine(35 + frame,70,100 + frame,70);
    can.DrawPointCircle(25 + frame,70,10);
    can.DrawPointCircle(110 + frame,70,10);
    can.DrawPointLine(5 + frame,45,5 + frame,70);
    can.DrawPointLine(5 + frame,70, 14 + frame,70);
    can.DrawPointLine(5 + frame,45, 30 + frame,45);
    can.DrawPointLine(110 + frame,45, 130 + frame,45);
    can.DrawPointLine(130 + frame,45,130 + frame,70);

    Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
    Element lienzo = bgcolor(Color::White, canvas(&can));
    Render(pantalla, lienzo);
    std::cout << reset_position;
    pantalla.Print();
    reset_position = pantalla.ResetPosition(true);
    this_thread::sleep_for(0.1s);
    frame++;
    }

    return 0;
}