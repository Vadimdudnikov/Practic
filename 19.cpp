#include <iostream>
#include <stdlib.h>

using namespace std;
int main() {
        string mes[14]= {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec","Sum","Av" };
        float zp[14];
        float  sum=0;
        int i,j, r=0;

        printf("     ");
        for(i=0;i<=13;i++)
        cout<<mes[i]<<"  ";
        printf("\n");

        for(i=1;i<=10;i++){
        printf("%2d|",i);
                for(j=0;j<12;j++){
                        printf("%5d",r=(rand()% (5000-1000+1) + 1000));
                        sum=sum+r;
                }
                printf(" ");
                zp[i]=sum/12;
                cout<<sum;
                printf(" ");
                printf("%.0f",zp[i]);
                printf("\n");
                sum=0;
        }
        return 0;
}
