#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{


    string frase;
    string aux = "";
    cout<<"ingrese una frase"<<endl;
    getline(cin,frase);

    for (int i = frase.size(); i >=0 ; i--)
         aux += frase[i];

    cout<<"El texto normal es: "<<frase<<endl;
    cout<<"El texto invertido es: "<<aux<<endl;
    return 0;

}

