#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
        int arr[6],arr1[4],x,x1,i,summa1,summa2;
        cout<<"Vvedite 6-ti znachnoe chislo: ";
        cin>>x;
        i=0;
        while (x>0) {
                arr[i]=x%10;
                i++;
                x=x/10;
        }
        for (i=0; i<=2; i++) {
                summa1=summa1+arr[i];
        }
        for (i=3; i<=5; i++) {
                summa2=summa2+arr[i];
        }
        if (summa1==summa2) {
                cout<<"Y vas shastlivii bilet"<<endl;
        } else {
                cout<<"Y vas ne schastlivii bilet"<<endl;
        }
        cout<<"Vvedite 4-h znachoe chislo: ";
        cin>>x1;
        i=0;
        summa1=0;
        summa2=0;
        while (x1>0) {
                arr1[i]=x1%10;
                i++;
                x1=x1/10;
        }
        if ((arr1[0]==arr1[3]) && (arr1[1]==arr1[2])) {
                cout<<"Chislo palindrom"<<endl;
        } else {
                cout<<"Chislo ne palindrom"<<endl;
        }
}
