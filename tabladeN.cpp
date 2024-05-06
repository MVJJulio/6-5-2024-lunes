#include<iostream>
using namespace std;
int main(){
    int n=0;
    int i=0;
    int multiplicacion;
    cout<<"Introduzca el numero positivo para su tabla: ";
    cin>>n;
    while (i<=n){
        multiplicacion=n*i;
        cout<<n<<"x"<<i<<"="<<multiplicacion<<"\n";
        i++;
    }
    

    return 0;
}