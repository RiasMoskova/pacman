#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int entero = 0;
    bool booleano = 0;
    char letra = 'A';
    float decimal = 0.5;

    cout << "Tamaño : " << sizeof(entero) << endl;
    cout << "Tamaño : " << sizeof(booleano) << endl;
    cout << "Tamaño : " << sizeof(letra) << endl;
    cout << "Tamaño : " << sizeof(decimal) << endl;

    return 0;
}