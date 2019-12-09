#include <stdlib.h>
#include <iomanip>
#include <iostream>

using namespace std;
int main()
{
        int x,y,z,x1,y1,r1,r2;

        cout<<"Levaia niz koordinata nachala kvadrata:"<<endl<<"x:";
        cin>>x;
        cout<<"y:";
        cin>>y;
        cout<<"Vvedite dliny storoni:";
        cin>>z;
        cout<<"Vvedite koordinati tochki:"<<endl<<"x:";
        cin>>x1;
        cout<<"y:";
        cin>>y1;
        if (((x1<=x+z && x1>=x) && y1==y) || (y1<=y+z && (y1>=y && x1==x))) {cout<<"Na konture"<<endl;}
        else {
                if ((x1<=x+z && x1>=x)  ||  (y1<=y+z && y1>=y)) {cout<<"Vnytri"<<endl;}
                else {cout<<"Ne vnytri"<<endl;};
        }

        cout<<"Vvedite koordinati centra okryznostei:"<<endl;
        cin>>x>>y;
        cout<<"Vvedite radiys vnehnei okryznosti:"<<endl;
        cin>>r1;
        cout<<"Vvedite radiys vnitrennei okryznosti:"<<endl;
        cin>>r2;
        cout<<"Vvedite koordinati tochki:"<<endl;
        cin>>x1>>y1;
        if (x1>x+r1 || y1>y+r1) {cout<<"Za byblikom"<<endl;}
        else {
                if ((x1<x+r2 && x1>x-r2) || (y1<y+r2 && y1>y-r2)) {cout<<"Vnytri byblika"<<endl;}
                else {
                        cout<<"V byblike"<<endl;
                }
        }
}
