// PRUEBAULtima.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


#include <iostream>
#include<time.h>
#include <NTL/ZZ.h>

using namespace std;
using namespace NTL;
class algoritmos
{
    //private:

public:
    algoritmos();
    ZZ resto(ZZ a, ZZ b);
    ZZ ejer1Recur(ZZ a, ZZ b);
    ZZ ejer2(ZZ a, ZZ b);
    ZZ ejer3(ZZ a, ZZ b);
    ZZ ejer4(ZZ a, ZZ b);
    ZZ ejer5(ZZ a, ZZ b);
    ZZ ejer6(ZZ a, ZZ b);
};
algoritmos::algoritmos() {}
ZZ algoritmos::resto(ZZ a, ZZ b) {
    ZZ c;
    c = a - ((a / b) * b);
    return c;
}
ZZ algoritmos::ejer1Recur(ZZ a, ZZ b)
{
    ZZ r = resto(a, b);
    while (r != 0)
    {
        cout << "a: " << a << " b: " << b << " r: " << r << endl;
        a = b;
        b = r;
        r = resto(a, b);
    }
    return b;
}
ZZ algoritmos::ejer2(ZZ a, ZZ b)
{
    ZZ r = resto(a, b);
    do {
        cout << "a y b son: " << a << "-" << b << "\n";
        if (r > b / 2)
        
            r = b - r;
        
        a = b;
        b = r;
        r = resto(a, b);
    } while (r != 0);
    return b;
}

ZZ algoritmos:: ejer3(ZZ a, ZZ b)
{
    ZZ r = resto(a, b);
    int cont = 0;
    if (b == 0)
    {
        return a;
    }
    cont++;
    cout << "a y b son: " << a << "-" << b << "\n";
    return ejer3(b, r);
}
ZZ algoritmos::ejer4(ZZ a, ZZ b)
{
    int cont = 1;

    if (abs(b) > abs(a))
    {
        return ejer4(b, a);
    }
    cout << "a y b son: " << a << "-" << b << "\n";
    if (b == 0)
    {
        return a;
    }
    if (a % 2 == 0 && b % 2 == 0)
    {
        return 2 * ejer4(a / 2, b / 2);
    }
    if (a % 2 == 0 && b % 2 != 0)
    {
        return ejer4(a / 2, b);
    }

    if (a % 2 != 0 && b % 2 == 0)
    {
        return ejer4(a, b / 2);
        cout << a;
    }
    else
    {
        return ejer4((abs(a) - abs(b)) / 2, b);
    }

}
ZZ algoritmos::ejer5(ZZ a, ZZ b)
{
    int g = 1;
    ZZ M = ZZ(2);
    while (resto(a, M) == 0 && resto(b, M) == 0)
    {
        cout << "a y b son: " << a << "-" << b << "\n";
        a = a / M;
        b = b / M;
        g = 2 * g;
        cout << "a y b son: " << a << "-" << b << "\n";
    }
    cout << "a y b son: " << a << "-" << b << "\n";
    while (a != 0)
    {
        while (resto(a, M) == 0)
        {
            a = a / M;
        }
        while (resto(b, M) == 0)
        {
            b = b / M;
        }
        ZZ t = (abs(a - b) / M);
        if (a >= b)
        {
            a = t;
        }
        else
        {
            b = t;
        }
        cout << "a y b son: " << a << "-" << b << "\n";
    }
    return(g * b);
}
ZZ algoritmos::ejer6(ZZ a, ZZ b)
{
    while (a != b)
    {
        if (a > b)
        {
            cout << "a y b son: " << a << "-" << b << "\n";
            a = a - b;//cout<<a<<"-"<<b<<endl;
        }
        else
        {
            b = b - a;
            cout << "a y b son: " << a << "-" << b << "\n";
        }

    }
    return a;
}

int main()
{
    algoritmos obj;
    ZZ a = conv<ZZ>("9654684654654684687984684654654321324654684987984165468465654646849889785132165498986465498463649864563546846535468486654987987987687684646543546847687879879874354354355132134648798796165198198495631354897986454649864649865468744685335168549865498649865416531354986846456465489684684654654535");
    ZZ b = conv<ZZ>("6984849848646543135165468465465465468498468465435135135132131654654646846884646468468846846465465465461355131656486646654313216546546848989446554354897987987986846543131321354654687987987498498468465465413513546546898747987684684654354684864646868465464897988735435465484684351835438468449876");
    ZZ e1, e2, e3, e4, e5, e6,e7, r;
   // e1=obj.ejer1Recur(a,b);
    e2 = obj.ejer2(a, b);
  //  e3 = obj.ejer3(a, b);
   //e4=obj.ejer4(a,b);
   // e7 = obj.ejer5(a, b);
   //e5=obj.ejer6(a,b);
    int time = 0;
    time = (clock() - (time)) / 1000;
    cout << "Tiempo: " << time << " segundos";
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
