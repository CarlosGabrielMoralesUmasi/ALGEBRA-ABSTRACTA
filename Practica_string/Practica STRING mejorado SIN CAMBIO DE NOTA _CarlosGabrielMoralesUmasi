// Algebra abstracta 1.2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include<fstream>
#include<stdlib.h>
using namespace std;
void word1(string a)
{   
    char b[4];
    for (int i = 0; i < a.length(); i++)
    {
        b[i] = a[i];
    }
    for (int i = 0; i < a.length(); i++)
    {
        cout << b[i] << endl;
    }
}
void word3(string a)
{
    for (int i = 0; i < a.length(); i++)
    {
        if (islower(a[i]))
        {
            a[i] = toupper(a[i]);
        }
        else if (isupper(a[i]))
        {
            a[i] = tolower(a[i]);
        }
        cout << a[i];
    }
    cout << endl;
}
void word4(int a, int b)
{
    string c,d,e,f;
    c = to_string(a);
    d = to_string(b);
    e = to_string(a * 2);
    f = to_string(b * 2);
    cout << c+d << endl;
    cout << e + f << endl;
}

void word6(string a)
{
    string b= "Yo desaprobe el curso de Algebra Abstracta";
    b.replace(2, 11, a);
    cout << b << endl;
}
void word7(string a, string b)
{
    int n;
    n = 0;
    if (a.find(b))
    {
        n += 1;
    }
    if(a.rfind(b))
    {
        n += 1;
    }
    cout << n << endl;;
}
void word8(string a)
{
    string::const_iterator iterador1 = a.begin();
    cout << "Iteradores: " << endl;
    while (iterador1 != a.end())
    {
        cout << *iterador1 << endl;
        iterador1++;
    }
    cout << endl;
}
void word9(string a, string b)
{
    a.insert((a.length() / 2), b);
    cout << a << endl;
}
void word10(string a, string b, string c)
{
    int n=a.find(b);
    a.find(b);
    while (n != string::npos)
    {
        a.replace(n, 5, c);
        n = a.find(b, n + 1);
    }
    cout << a << endl;
}
void word11(string a, string b)
{
    int resultado = a.compare(b);
    if (resultado > 0)
    {
        cout << a << endl;
    }
    if (resultado < 0)
    {
        cout << b << endl;
    }
    if(resultado==0)
    {
        cout << "Son lexicograficamente iguales" << endl;
    }
}
void word12()
{
    ofstream archivo;
    archivo.open("Numeros.txt", ios::out);
    if (archivo.fail())
    {
        cout << "No se pudo crear" << endl;
        exit(1);
    }
    int a,b,c;
    
    cout << "Escriba un numero del 1 al 10: " << endl,
        cin >> a;
    for (int i = 0; i < a; i++)
    {
        b = rand() % (1000 - 1) + 1;
        archivo << b<<" ";
    }
    archivo.close();    
}
void word13()
{
    ifstream archivo;
    string a; int b;
    archivo.open("Numeros.txt", ios::in);
    if (archivo.fail())
    {
        exit(1);
    }
    while (!archivo.eof())
    {
        getline(archivo, a);
        cout << a;
    }
    archivo.close();

}
void Ejer7(string a)
{
    string b="    ";
    for (int i = 0; i < a.length(); i++)//pasamos por todas las posiciones de a
    {
        b[i] = a[i] + 13;//aumentamos la letra en 13 posiciones
        if (!(isalpha(b[i])))//vemos si no es una letra(acaba el abecedario)
        {
            b[i] = b[i] - 26;//restamos posisiones
        }

    }
    cout << "Palabra: " << a << endl;
    cout << "Palabra cifrada: " << b << endl;
}
void Ejer11(string a, string b)
{
    string c;
    a.append(b);
    c.append(a);
    cout << a << endl;
}
void Ejer12(string a)
{
    cout << "Adivine la palabra: " << endl;
}
void Ejer19(string a)
{
    string b = "******";
    a.insert((a.length() / 2), b);
    cout << a << endl;
}
void Ejer21(string a)
{
    int posicion = a.find(",");
    while (posicion != string::npos)
    {
        a.replace(posicion, 1, " ");
        posicion = a.find(",", posicion + 1);
    }
    cout << a << endl;
}
void Ejer22(string a)
{
    string::reverse_iterator iterador1 = a.rbegin();
    cout << a << endl;
    while (iterador1 != a.rend())
    {
        cout << *iterador1;
        iterador1++;
    }
    cout << endl;
}

int main()
{
    //word1("GATO");
    //word2: Capacity es el máximo número de caracteres que un string puede mantener sin crecer y size es cuantos caracteres existen en el string.    
    /*word3("JoTAequIS");
    word4(13, 12);
    //word5(10000, 'a');
    word6(" aprobe ");
    word7("Como poco coco como, poco coco compro.", "coco");
    word8("Una frase jxjxjx");
    word9("gato", "ti");
    word10("Cuando te diga que te creo, no me creas, porque ya no creo lo que creo.", " creo", " temo");
    word11("Algebra", "Abstracta");*/
   // word12();
    word13();

    /*Ejer7("GATITO");
    Ejer11("Jota", "Equis");

    Ejer19(" Osilvestre");
    Ejer21("OHH,Silvestre,jx,jx,jx,jx");
    Ejer22("ALGEBRA ASBTRACTA");*/
} 
