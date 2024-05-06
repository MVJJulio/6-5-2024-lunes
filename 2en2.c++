#include<iostream>
using namespace std;
int main(){
    int n=0;
    int i=0;
    cout<<"Introduza un numero positivo: ";
    cin>>n;
    if(n>0){
    while (i<n){
        cout<<i<<"\n";
        i+=2;
    }
    }
    else{
        cout<<"Error, N debe ser positivo";
    }

    return 0;
}