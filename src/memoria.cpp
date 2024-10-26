#include <TazoDorado.hpp>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
 {
//     int entero = 0;
//     bool booleano = 0;
//     char letra = 'A';
//     float decimal = 0.5;

//     cout << "Tamaño : " << sizeof(entero) << endl;
//     cout << "Tamaño : " << sizeof(booleano) << endl;
//     cout << "Tamaño : " << sizeof(letra) << endl;
//     cout << "Tamaño : " << sizeof(decimal) << endl;
//     cout << "Tamaño : " << sizeof(TazoDorado) << endl;
//     cout << endl;

//     TazoDorado Tazo1;
//     TazoDorado Tazo2;
//     cout << "Direccion Tazo : " << &Tazo1 << endl;
//     cout << "Direccion Tazo : " << &Tazo2 << endl;

//     TazoDorado tazos[20];
//     for(size_t i = 0; i < 20; i++)
//     {
//         cout << "Direccion Tazo" << i << " : " << &tazos[i] << endl;
//     }

    TazoDorado* direccion;
    cout << "Direccion de direccion" << &direccion << endl;
    direccion = (int *) malloc(sizeof(TazoDorado));
    cout << "Direccion dinamica" << direccion << endl;
    cout << "Direccion dinamica" << direccion << endl;
    
    direccion -> Inicialisar();
    cout << "Valor en direccion" << direccion->flotando() << endl;
//_C++_____________________________________________
   
    TazoDorado *direccion2;
    direccion2 = new TazoDorado();
    cout << "Valor en direccion" << direccion->flotando() << endl;

    return 0;
}
