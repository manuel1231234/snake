#include <iostream>
#include <Foco.hpp>

int main(int argc, char const *argv[])
{
    Foco foco1;
    Foco foco2;

    std::cout<<"Encendiendo foco"<<std::endl;
    foco1.Encender();
    std::cout<<"apagando foco"<<std::endl;

    return 0;
}