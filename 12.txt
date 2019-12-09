#include <iostream>
#include <stdlib.h>

using namespace std;
int main()
{
        int n,i,fact,max,min,sum,arr[100];
        cout<<"Vvedite chislo N: ";
        cin>>n;
        fact=1;
        for (i=1; i<=n; i++) {
                fact=i*fact;
        }
        cout<<n<<"! = "<<fact<<endl;
        cout<<"Vvedite kollicestvo slychainix chisel: ";
        cin>>n;
        max=0;
        min=11;
        cout<<"CHisla: ";
        for (i=1; i<=n; i++) {
                arr[i] = rand() % 10 + 1;
                cout<<arr[i]<<" ";
                if (max<arr[i]) {max=arr[i];}
                if (min>arr[i]) {min=arr[i];}
                sum = sum + arr[i];
        }
        cout<<endl<<"Max = "<<max<<endl;
        cout<<"Min = "<<min<<endl;
        cout<<"Sum = "<<sum<<endl;
}
