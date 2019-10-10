#include <iostream>

using namespace std;
float suma(int, int);
float prom(float &, int &);
int main(){
    int n, opcion;
    float promedio, r=0;
    cout<<"\n ..:: M E N U ::.."<<endl;
    cout<<"1. Por Referencia\n2. Por valor\n Elige: "; cin>>opcion;
    switch(opcion){
    case 1:
        cout<<"Cuantos valores introducira? "; cin>>n;
        cout<<prom(r,n);
        break;
    case 2:
        cout<<"¿Cuantos numeros introducira? "; cin>>n;
        promedio=suma(r, n)/n;
        cout<<"El promedio es: "<<promedio;
        break;
        }
    return 0;
}

float suma(int r, int v){
    float dato;
    if (v>0){
        cout<<"Introduzca dato: "; cin>>dato;
        v-=1;
        return suma(r+=dato, v);
    }if (v==0)
        return r;
}
float prom( float &r, int &v){
    int dato;
    float p;
    for(int i=0; i<v; i++){
        cout<<"Introduzca un dato: "; cin>>dato;
        r+=dato;
    }
    p=r/v;
    return p;
}
