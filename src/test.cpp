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
    can.DrawPointLine(90 + frame,45, 130 + frame,45); //derecha arriba
    can.DrawPointLine(130 + frame,45,130 + frame,70);
    can.DrawPointLine(120 + frame,70, 130 + frame,70);
    can.DrawPointLine(90 + frame,30, 106 + frame,45);
    can.DrawPointLine(35 + frame,48, 83 + frame,48);
    can.DrawPointLine(30 + frame,45, 34 + frame,48);//bviz
    can.DrawPointLine(84 + frame,48, 88+ frame,45); // bajo vidrio derecho
    can.DrawPointLine(90 + frame,30,90 + frame,45);
    can.DrawPointLine(54 + frame,48,54 + frame,70);
    can.DrawPointEllipse(59 + frame,52,2,1);
    can.DrawBlockCircleFilled(26 + frame,70,4);
    can.DrawBlockCircleFilled(110 + frame,70,4);
    can.DrawPointLine(123 + frame,48,123 + frame,51);
    can.DrawPointLine(123 + frame,48,129 + frame,48);
    can.DrawPointLine(123 + frame,51,129 + frame,51);
    can.DrawPointCircle(60 + frame,36,6);
    can.DrawPointLine(60 + frame,42,60 + frame,48);
    can.DrawPointLine(60 + frame,49,72 + frame,56);
    can.DrawPointLine(10 + frame,50,10 + frame,55);
    can.DrawPointLine(5 + frame,50,10 + frame,50);
    can.DrawPointLine(5 + frame,55,10 + frame,55);




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