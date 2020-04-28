//Carlos Morales
#include <iostream>
#include<time.h>
using namespace std;

int resto(int a, int b) {
    int c;
    c = a - ((a / b) * b);
    return c;
}
void ejer1(int a, int b)
{
    int r;
    for (int i = 0; i < a; i++)
    {
        r = resto(a, b);
        cout << "a y b son: " << a << "-" << b << "\n";
        if (r == 0)
        {
            cout << "Por lo tanto el MCD es: " << b << endl;
            break;
        }
        else
        {
            a = b;
            b = r;
        }
    }
}
int ejer1Recur(int a, int b)
{
    int r;
    r = resto(a, b);
    if (r == 0)
    {
        return b;
        cout << b << endl;
    }
    else
    {
        a = b;
        b = r;
    }
    return r;
}
void ejer2(int a, int b)
{
    int r;
    cout << endl;
    for (int i = 0; i < a * b; i++)
    {
        r = resto(a, b);
        cout << "a y b son: " << a << "-" << b << "\n";
        if (r == 0)
        {
            cout << "Por lo tanto el MCD es: " << b << endl;
            break;
        }
        if (r > b / 2)
        {
            r = b - r;
        }

        a = b;
        b = r;
    }
    cout << endl;
}
int ejer7(int a, int b)
{
    int r;
    r = resto(a, b);
    if (r == 0)
    {
        return b;
    }
    if (r > b / 2)
    {
        r = b - r;
    }
    a = b;
    b = r;
    return r;
}
int ejer3(int a, int b)
{
    int r, cont = 0;
    if (b == 0)
    {
        return a;
    }
    cont++;
    cout << "a y b son: " << a << "-" << b << "\n";
    return ejer3(b, resto(a, b));
}
int ejer4(int a, int b)
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
int ejer5(int a, int b)
{
    int g = 1;
    while (resto(a, 2) == 0 && resto(b, 2) == 0)
    {
        cout << "a y b son: " << a << "-" << b << "\n";
        a = a / 2;
        b = b / 2;
        g = 2 * g;
        cout << "a y b son: " << a << "-" << b << "\n";
    }
    cout << "a y b son: " << a << "-" << b << "\n";
    while (a != 0)
    {
        while (resto(a, 2) == 0)
        {
            a = a / 2;
        }
        while (resto(b, 2) == 0)
        {
            b = b / 2;
        }
        int t = (abs(a - b) / 2);
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
int ejer6(int a, int b)
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
    clock_t time = clock();
    int a = 159021255466, b = 26065453322257, c, d, e;
    ejer1(a, b);
    ejer1Recur(a, b);
    ejer2(a, b);
    d = ejer7(a, b);
    cout << "Por lo tanto el MCD es: " << d << endl;
    cout << endl;
    c = ejer4(a, b);
    cout << "Por lo tanto el MCD es: " << c << endl;
    cout << endl;
    e = ejer6(a, b);
    cout << "Por lo tanto el MCD es: " << e << endl;
    resto(a, b);
    time = (clock() - time) / 1000;
    cout << "Tiempo: " << time << " segundos";
}
//probado desde Visual Studio Community
