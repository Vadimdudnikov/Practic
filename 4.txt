#include <iostream>

using namespace std;

int main()
{
    float a, b;
    cout<<"Mother's height: ";
    cin>>a;
    cout<<"Father's height: ";
    cin>>b;
    b = (a + b)/2;
    cout<<"Boy's height: "<<b+6.4<<endl;
    cout<<"Girl's height: "<<b-6.4<<"\n"<<endl;

    cout<<"Your gender? (1- woman, 2-man) ";
    cin>>a;
    cout<<"Your age: ";
    cin>>b;
    if (a==1){
        a = b*2-17;
        cout<<"Your man's age: "<<a<<"\n"<<endl;
    }
    else{
        if (a==2) {
            a = b/2+7;
            cout<<"Your woman's age: "<<a<<"\n"<<endl;
        }
        else{
            cout<<"Invalid Input"<<"\n"<<endl;

        }
   }
   return 0;
}
