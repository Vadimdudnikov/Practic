#include <iostream>

using namespace std;
int main()
{
        float c0, cdop, k, c, cpred;
        int i;
        c0=1.5;
        cdop=0.05;
        k=1.05;
        cpred=c0;
        for(i=1;;i++){
                 c=cpred/k;
                 cout<<"Day "<<i<<" Misyak= "<<c<<endl;
                 if(c<=cdop){
                        break;
                 }
                 cpred=c;
        }
        cout<<"Kollichestvo ndey do preselnogo znachenia= "<<i<<endl<<endl;
        c0=0.2;
        cdop=0.05;
        k=1.01;
        cpred=c0;
        for(i=1;;i++){
                 c=cpred/k;
                 cout<<"Day "<<i<<" Ftor= "<<c<<endl;
                 if(c<=cdop) {
                        break;
                 }
                 cpred=c;
        }
        cout<<"Kollichestvo dnei do predelnogo znachenia= "<<i<<endl<<endl;
}
