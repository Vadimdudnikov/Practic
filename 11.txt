#include <iostream>
#include <stdlib.h>
using namespace std;
int main ()
{
        int n,n1,i;
        float n2;
        cout<<"Vvedite nomer mesaca: ";
        cin>>n;
        cout<<"Vrema goda ";
        switch (n) {
                case 1:cout<<"Zima"<<endl;break;
                case 2:cout<<"Zima"<<endl;break;
                case 3:cout<<"Vesna"<<endl;break;
                case 4:cout<<"Vesna"<<endl;break;
                case 5:cout<<"Vesna"<<endl;break;
                case 6:cout<<"Leto"<<endl;break;
                case 7:cout<<"Leto"<<endl;break;
                case 8:cout<<"Leto"<<endl;break;
                case 9:cout<<"Osen"<<endl;break;
                case 10:cout<<"Osen"<<endl;break;
                case 11:cout<<"Osen"<<endl;break;
                case 12:cout<<"Zima"<<endl;break;
        }
        cout<<"Vvedite chislo ot 1 do 99"<<endl;
        cin>>n1;
        if (n1<21) {
                switch (n1) {
                        case 1:cout<<"Mne "<<n1<<" god";break;
                }
                for (i=2; i<5; i++) {
                        if (i==n1) {cout<<"Mne "<<n1<<" goda"<<endl;}
                }
                for (i=5; i<20; i++) {
                        if (i==n1) {cout<<"Mne "<<n1<<" let"<<endl;}
                }
                if (n1==21) {cout<<"Mne "<<n1<<" god"<<endl;}
        } else {
                n2=n1%10;
                if (n2==1) {cout<<"Mne "<<n1<<" god";}
                for (i=2; i<5; i++) {
                        if (i==n2) {cout<<"Mne "<<n1<<" goda"<<endl;}
                }
                for (i=5; i<10; i++) {
                        if (i==n2) {cout<<"Mne "<<n1<<" let"<<endl;}
                }
                if (n2==0) {cout<<"Mne "<<n1<<" god"<<endl;}
        }
}
