#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
        int n,i,k;
        float k1,sum1;
        k=5;
        n=5;
        i=0;
        while (n<=250) {
                i=i+1;
                cout<<i<<" den - "<<k<<" slov, slovarnii zapas "<<n<<endl;
                k=k+2;
                n=k+n;
        }
        i=i+1;
        cout<<i<<" den - "<<k<<" slov, slovarnii zapas "<<n<<endl;
        cout<<"Za "<<i<<" dnei"<<endl;
        cout<<endl;
        cout<<"Vvedite kolichestvo ribok: ";
        cin>>n;
        k1=5,00;
        sum1=0;
        cout<<fixed;
        cout.precision(2);
        while (n>0) {
                sum1=k1+sum1+2;
                cout<<n<<" r., vrema : "<<k1+2<<endl;
                n=n-1;
                k1=(k1*0.05)+k1;
        }
        cout<<"Takoe kolichestvo ribok malchik perelozit v banky za "<<sum1<<endl;;
}
