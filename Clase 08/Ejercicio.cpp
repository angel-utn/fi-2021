#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
int i,n,minimo,maximo,cn;
minimo=0;
cn=0;
for(i=1;i<=5;i++){
    cout<<"ingresar numero: ";
    cin>>n;
    if(n>0){
         if(minimo==0||n<minimo){
            minimo=n;
         }
    }
    if(n<0){
        cn++;
       if(n>maximo||cn==1){
            maximo=n;
       }
    }
}
if(cn==0){
   cout<<"no hubo negativos"<<endl;
}else{
    cout<<"maximo de los negativos: "<<maximo<<endl;
}
if(minimo==0){
    cout<<"no hubo positivos"<<endl;
}else{
    cout<<"minimo de los positivos: "<<minimo<<endl;
}
return 0;
}
