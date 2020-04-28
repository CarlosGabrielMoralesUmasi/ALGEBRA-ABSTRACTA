// Carloseee.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include<iostream>
#include<string>


using namespace std;


//ejercicio 1
void palabras(string a, string b)
{
    for (int i = 0; i < a.length(); i++)
    {
        b[i] = a[i] + 13;
        if (!(isalpha(b[i])))
        {
            b[i] = b[i] - 26;
        }

    }
    cout << "Palabra: " << a << endl;
    cout << "Palabra cifrada: " << b << endl;
}
//ejercicio 2
void nombre(string a, string b)
{
    string c;
    for (int i = 0; i <a.length(); i++)
    {
        c+=a[i];
        
        //c += b[i]; 
    }
    for (int i = 0; i < b.length(); i++)
    {   

        c += b[i];
    }
    cout << "Nombre completo: " << c << endl;

}
//ejercicio 3
void palabra(string a)
{
    if (a.length() % 2 == 0)
    {
        string b("****");
        a.insert((a.length() / 2), b);
        cout << a << endl;
    }
    else
    {
        cout << "La palabra no tiene tiene orden par." << endl;
    }
}
//ejercicio 4
void strtok(string a)
{
    for (int i = 0; i < a.length(); i++)
    {
        if (!(isalpha(a[i])))
        {
            a[i] = ' ';
        }
    }
    cout << a << endl;
}
//ejercicio 5
void revez(string a)
{
    int b;
    string inver("");
    b = a.length();
    for (int i = b; i > -1;i--)
    {
        inver+=a[i];
    }
    cout << inver;
}
//ejercicio 6(word)
void word1(string lista)
{
    char lista2[4];
    

    for (int i = 0; i < 4; i++)

       	{
           lista2[i] = lista[i];
        }
   	cout << "string: " << endl;
   	for (int i = 0; i < 4;i++)
       	{
       	  cout << lista[i];
       	}
    	cout << endl;
   	cout << "char: " << endl;
 	for (int i = 0; i < 4; i++)
       	{
       	  cout << lista2[i];
       	}
    
}
//ejercicio 7
void word3(string a)
{
    string b;
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
}
void word4(int a, int b)//doble: a*2,b*2
{
    string c,d,e,f;
    c = to_string(a);
    d = to_string(b);
    e = c + d;
    cout << e;
    
}
//ejercicio 5 word
    //string letrita(1000,'a');
void word6(string a, string b,string c)
{
    string n;
    cout << a << endl;
    for (int i = 3; i < 12; i++)
    {
        a[i]=0;
      
    }
    
    for (int i = 3,j=0; i < 12,j<6; i++,j++)
    {
        a[i] += c[j];
        
    }
    cout << a;
    
}
/*void word7(string a, string b)
{
    int n;
    n = 1;
    for (int i = 0; i < a.length(); i += b.length())
    {
        if (a[i]==b[i])
        {
            n++;
        }
        cout << n << endl;
    }
    
}*/
void word8(string a)    
{
    for (int i = 0; i < a.length(); i++)
    {
        cout << a[i] << endl;
    }
}
void word9(string a, string b)
{
    if (a.length() % 2 == 0)
    {
        a.insert((a.length() / 2), b);
        cout << a << endl;
    }
    else
    {        
        cout << "La palabra no tiene tiene orden par." << endl;
    }
}
int main()
{
   //palabras("amigo", "     ");18.7
   //nombre("Alejandra","Fernandez");18.11
   // palabra("AMIGo");18.19
   // strtok("hola,que tal,ola");18.21
    //revez("hola");18.22
    word1("hola");
    //word3("JoTaEquis");
    //word4(12,17);
   // word6("Yo desaprobe el curso de Algebra Abstracta", "", "aprobe");
    //word7("Como poco coco como, como coco compro.", "como");
    //word8("Cancion");
   //ord9("gato", "ti");
}
