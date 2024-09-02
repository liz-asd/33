#include <iostream>
using namespace std;
void procesar(int *&vec);


int main(){
    int *A= new int[5]; *B= new int[5];
    procesar(A);
    procesar(B);
    delete []A;
    delete []B;
    return 0;
}
void procesar (int *&vec){
    int*menor= new int;
    int*mayor= new int;
    *mayor= 0;
    *menor= -1000;
    for(int i=0; i<5; i++){
        do{
            cout<<"A["<<i<<"]ingrese dato(par negativo):";
            cin>>vec[i];
            if(vec[i]>=0 ||vec[i]%2==-1)
            cout<<"Error..";
        }while(vec[i]>=0 ||vec[i]%2==-1);
        if(vec[i]<*menor)
          *menor=vec[i];
        if(vec[i]<*mayor)
          *mayor=vec[i] ;    
    }
    cout<<"vector-> |";
    for(int i=0; i<5; i++)
        cout<<vec[i]<<" | ";
    cout<<"\nMayor: "<<*mayor;
    cout<<"\nMenor: "<<*menor;
    delete menor;
    delete mayor;
    return;
}

