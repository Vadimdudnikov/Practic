#include <math.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
        int x,v1,v2,a1,a2,t,s1,s2;
        cout<<"Rasstoianie mezdy mashinami: ";
        cin>>x;
        cout<<"Vvedite skorost pervogo avtomobila: ";
        cin>>v1;
        cout<<"Vvedite skorost vtorogo avtomobila: ";
        cin>>v2;
        cout<<"Vvedite yskorenie pervogo avtomobila: ";
        cin>>a1;
        cout<<"Vvedite yskorenie vtorogo avtomobila: ";
        cin>>a2;
        t=(-(v1+v2)+sqrt((v1+v2)*(v1+v2)+(a1+a2)*2*x))/(a1+a2);
        cout<<"Vrema vstrechi: "<<t<<endl;
        s1=((a1*(t*t))/2)+v1*t;
        s2=((a2*(t*t))/2)+v2*t;
        cout<<"Rasstoinaie proidenoe pervim avtomobilem: "<<s1<<endl;
        cout<<"Rasstoinaie proidenoe vtorim avtomobilem: "<<s2<<endl;
}
