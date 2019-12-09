#define  _USE_MATH_DEFINE
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    cout<<" a: ";
    float a;
    cin>>a;
    cout<<"Cube volume: "<<pow(a,3)<<endl;
    a=6*(a*a);
    cout<<"Side: "<<a<<endl;
    a=a*a*a;
    cout<<"Volume: "<<a<<endl;

    cout<<"Outer radius: ";
    float orr;
    cin>> orr;
    cout<<"Inner radius: ";
    float ir;
    cin>>ir;
    orr= (M_PI*(orr*orr-ir*ir));
    cout<<"rez: "<<orr<<endl;

    return 0;
}
