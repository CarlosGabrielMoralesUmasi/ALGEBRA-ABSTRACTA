//**carlosMorles.cpp//
#include <iostream>
#include<string>
using namespace std;

class vigenere
{
private:
    string clave;
public:
    vigenere();
    string cifrando(string );
    string alfabeto;
    string descifrar(string);
    string cifrarascii(string);
    string cifrarhex(string);
    string agregarAQUI(string mens);
    string DagregarAQUI(string mens);
    string cifrandoCamClave(string mens);
    void selec(string);
};
vigenere::vigenere()
{
    alfabeto = "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ,.";
    clave = "Pablo Neruda";
}
//************************************************************************************
string vigenere::cifrando(string mens){
    string mensCifrado;
    int tam = alfabeto.length();
    int pocision,pocision1,pocision_cifrado;
    int cont=0;
    for (int i=0;i<mens.length(); i ++)
    {
        pocision1=alfabeto.find(mens[i]);
        pocision=alfabeto.find(clave[cont]);
        pocision_cifrado=(pocision1+pocision)%tam;
        if (cont==clave.length()-1){
            cont=0;
        }
        else{
            cont++;
        }
        mensCifrado=mensCifrado+alfabeto[pocision_cifrado];
    }
    return mensCifrado;
}
//************************************************************************************
string vigenere::descifrar(string mens){
    string mensdescifrado;
    int tam = alfabeto.length();
    int pocision,pocision1,pocision_descifrado,value;
    int cont=0;
    for (int i=0;i<mens.length(); i ++)
    {
        pocision1=alfabeto.find(mens[i]);
        pocision=alfabeto.find(clave[cont]);

        if(pocision1<pocision){

            pocision_descifrado=(pocision1-pocision)+tam;
        }
        else{
                pocision_descifrado=(pocision1-pocision)%tam;

        }
        if (cont==clave.length()-1){
            cont=0;
        }
        else{
        cont++;
        }
        mensdescifrado=mensdescifrado+alfabeto[pocision_descifrado];
    }
    return mensdescifrado;
}
//************************************************************************************
string vigenere::cifrarascii(string mens)
{
  int aux2,aux;
  for(int i=0;i<mens.length(); i ++)
  {
    aux=int(mens[i]);
    aux2=int(clave[i%clave.length()]);
    cout<<aux<<"     "<<mens[i]<<"     "<<aux2<<"     "<< clave[i%clave.length()]<<"     "<<(aux2+aux)%122<<endl;
    if(mens[i]==' ' or mens[i]==',' or mens[i]=='.')
    {
      mens[i]=mens[aux];
    }
    mens[i]=(aux2+aux)%122 ;
  }
  return mens;
}
//************************************************************************************
string vigenere::cifrarhex(string mens)
{
  int aux2,aux;
  for(int i=0;i<mens.length(); i ++)
  {
    aux=int(mens[i]);
    aux2=int(clave[i%clave.length()]);
    cout<<hex<<aux<<"     "<<mens[i]<<"     "<<hex<<aux2<<"     "<< clave[i%clave.length()]<<"     "<<(aux2+aux)%122<<endl;
    if(mens[i]==' ' or mens[i]==',' or mens[i]=='.')
    {
      mens[i]=mens[aux];
    }
    mens[i]=(aux2+aux)%122 ;
  }
  return mens;
}
//************************************************************************************
string vigenere::agregarAQUI(string mens)
{
  string mensCifrado,A;
  A="AQUI";
    int tam = alfabeto.length();
    int pocision,pocision1,pocision_cifrado;
    int cont=0,agregar;
    int conta=10;
    agregar=mens.length()%4;
    string Bdoble(agregar,'W');
    for(int i=0;i<mens.length()/10; i ++)
    {
      mens.insert(conta,A);
      conta+=10;
    }
    mens+=Bdoble;
    for (int i=0;i<mens.length(); i ++)
    {
        
        pocision1=alfabeto.find(mens[i]);
        pocision=alfabeto.find(clave[cont]);
        pocision_cifrado=(pocision1+pocision)%tam;
        if (cont==clave.length()-1)
        {
          cont=0;
        }
        else
        {
          cont++;
        }
        mensCifrado=mensCifrado+alfabeto[pocision_cifrado];
    }
    return mensCifrado;
}//************************************************************************************
string vigenere::DagregarAQUI(string mens)
{
    string mensdescifrado;
    int tam = alfabeto.length();
    int pocision,pocision1,pocision_descifrado,value;
    int cont=0;
    for (int i=0;i<mens.length(); i ++)
    {
        pocision1=alfabeto.find(mens[i]);
        pocision=alfabeto.find(clave[cont]);

        if(pocision1<pocision){

            pocision_descifrado=(pocision1-pocision)+tam;
        }
        else{
                pocision_descifrado=(pocision1-pocision)%tam;

        }
        if (cont==clave.length()-1){
            cont=0;
        }
        else{
        cont++;
        }
        mensdescifrado=mensdescifrado+alfabeto[pocision_descifrado];
    }
    return mensdescifrado;
}
//************************************************************************************
string vigenere::cifrandoCamClave(string mens){
    string mensCifrado;
    int tam = alfabeto.length();
    int pocision,pocision1,pocision_cifrado;
    int cont=0;
    for (int i=0;i<mens.length(); i ++)
    {
        pocision1=alfabeto.find(mens[i]);
        pocision=alfabeto.find(clave[cont]);
        pocision_cifrado=(pocision1+pocision)%tam;
        if (cont==clave.length()-1){
            pocision1=alfabeto.find(mens[i]);
            pocision=alfabeto.find(clave[i-clave.length()-1]);
            pocision_cifrado=(pocision1+pocision)%tam;
        }
        else{
            pocision1=alfabeto.find(mens[i]);
            pocision=alfabeto.find(clave[cont]);
            pocision_cifrado=(pocision1+pocision)%tam;
        }
        mensCifrado=mensCifrado+alfabeto[pocision_cifrado];
    }
    return mensCifrado;
}
//************************************************************************************
void vigenere::selec(string mens)
{
    int a;
    cout << endl;
    cout<<"ASCII -> 1"<<endl;
    cout<<"HEX -> 2"<<endl;
    cin >> a;
    cout << "\n";
    switch (a) 
    {
      case 1:
      cout<<"******************ASCII*******************"<<endl;
        cifrarascii(mens);
        cout<<endl<<endl;
        break;
       
      case 2:
       cout<<"******************HEX*******************"<<endl;
        cifrarhex(mens);
        cout<<endl<<endl;
    }    
    
}
int main()
{
  string mens="Puedo escribir los versos mas tristes esta noche.Escribir, por ejemplo La noche esta estrellada, y tiritan, azules, los astros, a lo lejos.El viento de la noche gira en el cielo y canta. Puedo escribir los versos mas tristes esta noche. Yo la quise,y a veces ella tambien me quiso.";
  vigenere emisor;
  vigenere receptor;
  vigenere ascii;
  vigenere hex;
  vigenere seleccion;
  vigenere agregar;
  vigenere Dagregar;
  vigenere Cambioclave;
  seleccion.selec(mens);
  string a;
  a=ascii.cifrarascii(mens);
  cout<<endl<<endl<<endl;
  hex.cifrarhex(a);
  cout<<endl<<endl<<"mens CIFRADO AGREGANDO 'AQUI' y 'W' :"<<endl<<endl;
  string AQUI=agregar.agregarAQUI(mens);
  cout<<AQUI<<endl <<endl;
  cout<<endl<<endl<<"mens DESCIFRADO sin (AGREGANDO 'AQUI' y 'W' ):"<<endl<<endl;
  string DAQUI=Dagregar.DagregarAQUI(AQUI);
  cout<<DAQUI<<endl <<endl;
  cout<<endl<<endl<<"mens Cifrado cambiando clave :"<<endl<<endl;
  string clave=Cambioclave.cifrandoCamClave(mens);
  cout<<clave<<endl<<endl;
  string msg=emisor.cifrando(mens);
  cout<<endl<<endl<<"mens CIFRADO: "<<endl<<endl;
  cout<<msg<<endl<<endl;
  string mens_descifrado=receptor.descifrar(msg);
  cout<<endl<<endl<<"mens DESCIFRADO: "<<endl<<endl;
  cout<<mens_descifrado<<endl<<endl;
}
//comprobado desde replit
