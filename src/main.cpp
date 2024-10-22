#include <iostream>
#include <TazoDorado.hpp>

int main(){

    TazoDorado coqueto;

    coqueto.flotar();

    std::cout
        <<"El coqueto esta flotando?"
        <<std::endl
        <<coqueto.flotando()
        <<std::endl;
}