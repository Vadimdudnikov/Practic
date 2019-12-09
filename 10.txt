#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
        int a1,a2,a,b,c,d,m[3],i,max;
        cout<<"Vvedite 3 chisla a, b, c:";
        cin>>a>>b>>c;
        cout<<"VVedite chislo d:";
        cin>>d;
        if (a==d) {
                cout<<"Chislo a ravno d";
        }
        if (b==d) {
                cout<<"Chislo b ravno d";
        }
        if (c==d) {
                cout<<"Chislo c ravno d";
        }
        if ((a!=d) && (b!=d) && (c!=d)) {
                m[0]=d-a;
                m[1]=d-b;
                m[2]=d-c;
                max=m[0];
                for (i=0; i<3; i++) {
                        if (m[i]>max) {max=m[i]; cout<<max;}
                }
                if (max==m[0]) {cout<<"Maksimalnoe d-a = "<<max<<endl;}
                if (max==m[1]) {cout<<"Maksimalnoe d-b = "<<max<<endl;}
                if (max==m[2]) {cout<<"Maksimalnoe d-c = "<<max<<endl;}
        }
        cout<<"Vvedite stoimost knig: ";
        cin>>a1;
        cout<<"Vvedite summy vnesennyy pokypatelem: ";
        cin>>a2;
        if (a1==a2) {cout<<"Spasibo"<<endl;}
        if (a1>a2) {cout<<"Nedostatochno deneg: "<<a1-a2<<endl;}
        if (a1<a2) {cout<<"Vozmite sdachy: "<<a2-a1<<endl;}
}

