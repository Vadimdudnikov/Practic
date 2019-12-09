#include <stdlib.h>
#include <iomanip>
#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;
int main()
{
        float a,b,c,x,x1,x2,y,y1,y2,x3,y3,P,S,v1,v2,v3,b1,b2,b3,m1,m2,m3;

        cout<<"Pervaia storona: ";
        cin>>x1>>y1;
        cout<<"Vtoraia storona: ";
        cin>>x2>>y2;
        cout<<"Tretaia storona: ";
        cin>>x3>>y3;

        a=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
        b=((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1));
        c=((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));

        P=(a+b+c)/2;
        S=sqrt(P*(P-a)*(P-b)*(P-c));
        v1=2*S/a;
        v2=2*S/b;
        v3=2*S/c;
        b1=2*(sqrt(a*b*P*(P-c))/(a+b));
        b2=2*(sqrt(b*c*P*(P-a))/(b+c));
        b3=2*(sqrt(a*c*P*(P-b))/(a+c));
        m1=(sqrt(2*a*a+2*b*b-c*c))/2;
        m2=(sqrt(2*b*b+2*c*c-a*a))/2;
        m3=(sqrt(2*c*c+2*a*a-b*b))/2;


        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
        cout<<"c="<<c<<endl<<endl;
        cout<<"Perimetr = "<<P<<endl;
        cout<<"Ploshad = "<<S<<endl<<endl;
        cout<<"Mediana k storone"<<endl<<"a = "<<m1<<endl<<"b = "<<m2<<endl<<"c ="<<m3<<endl<<endl;
        cout<<"Bissektrisa k storone"<<endl<<"a = "<<b1<<endl<<"b = "<<b2<<endl<<"c = "<<b3<<endl<<endl;
        cout<<"Visoti k storonam"<<endl<<"a = "<<v1<<endl<<"b = "<<v2<<endl<<"c = "<<v3<<endl;

}
