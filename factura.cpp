#include "iostream"
#include "conio.h"
#include "string.h"
#include "cmath"
using namespace std;
//VARIABLES GLOBALES

float total;
//PROTOTIPOS DE LAS FUNCIONES

int datos();
float costo();
void contenido();
float costototal();
//DEFINIENDO LA ESTRUCTURA.
const int longcad=20;
struct costoPorArticulo
{
   char nombreArticulo[longcad+1];
   int cantidad;
   float precio;
   float costoArticulo;
};


int datos(void){
    costoPorArticulo uno[20];
int numero,num=1;
cout<<"Cuantos articulos quiere comprar: ";
cin>>numero;
cout<<endl;
int i;


for(int i=0;i<numero;i++){
    fflush(stdin);
cout<<"Ingrese nombre del articulo #"<<num<<" : ";
gets(uno[i].nombreArticulo);
cout<<"Cantidad a comprar: ";
cin>>uno[i].cantidad;
cout<<"Ingrese precio del producto por unidad $: ";
cin>>uno[i].precio;


uno[i].costoArticulo = uno[i].cantidad * uno[i].precio;
cout<<"El precio total por el producto es: "<<uno[i].costoArticulo<<endl;
cout<<endl;

total=total + uno[i].costoArticulo;
num++;
}
for(int i=0;i<100;i++){
      cout<<"-";

  }
cout<<"\n \t\t\t\t\t\t FACTURA REALIZADA"<<endl<<endl;

for(int i=0;i<numero;i++){
    cout<<"Producto: "<<uno[i].nombreArticulo<<endl;
    cout<<"Unidades compradas: "<<uno[i].cantidad<<endl;
    cout<<"precio por unidad: "<<uno[i].precio<<endl;
    cout<<"Precio total por articulo: "<<uno[i].costoArticulo<<endl;
    cout<<endl;
}

  for(int i=0;i<100;i++){
      cout<<"-";

  }

cout<<endl;
cout<<"TOTAL A PAGAR POR PRODUCTOS COMPRADOS: "<<total<<endl;


}

float costo(){
    
datos();



}





int main(void){
    int No;
    char fec[40];
    
    cout<<endl;
    cout<<"\t\t\t\t\t\t PROCESO DE FACTURA "<<endl<<endl;
    cout<<"No.  ";cin>>No;
   cout<<"Fecha: "; gets(fec);

    

  for(int i=0;i<100;i++){
      cout<<"-";

  }
  cout<<endl;

    
costo();
cout<<"Factura No. "<<No<<endl;


    getch();
    return 0;
}

