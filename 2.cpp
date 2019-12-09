#include <iostream>
#include <iomanip>
#include <float.h>
#include <limits.h>
#include <cmath>
using namespace std;

int main()
{
    cout<<"Type\t"<<setw(13)<< "size\t" <<setw(4)<<"min\t"<<setw(12)<<"max\t"<<endl;
    cout<<"int\t"<<setw(9)<<sizeof(int)<<"\t"<<INT_MIN<<"\t"<<INT_MAX<<endl;
    cout<<"unsigned int\t"<<sizeof(unsigned int)<<"\t"<<"0"<<"\t"<<setw(18)<<UINT_MAX<<endl;
    cout<<"long\t"<<setw(9)<<sizeof(long)<<"\t"<<LONG_MIN<<"\t"<<LONG_MAX<<endl;
    cout<<"unsigned long\t"<<sizeof(unsigned long)<<"\t"<<"0"<<"\t"<<setw(18)<<ULONG_MAX<<endl;
    cout<<"float\t"<<setw(9)<<sizeof(float)<<"\t"<<FLT_MIN<<"\t"<<FLT_MAX<<endl;
    cout<<"double\t"<<setw(9)<<sizeof(double)<<"\t"<<DBL_MIN<<"\t"<<DBL_MAX<<endl;
    cout<<"long double\t"<<sizeof(long double)<<"\t"<<LDBL_MIN<<"\t"<<setw(10)<<LDBL_MAX<<endl;
    cout<<"char\t"<<setw(9)<<sizeof(char)<<"\t"<<CHAR_MIN<<"\t"<<setw(11)<<CHAR_MAX<<endl;
    cout<<"unsigned char\t"<<sizeof(unsigned char)<<"\t"<<"0"<<"\t"<<setw(11)<<UCHAR_MAX<<endl;
    cout << "bool"<<setw(13)<< sizeof(bool)<<setw(8)<<"0"<<setw(21)<<fixed<<setprecision(2)<<(pow(2,sizeof(bool) * 8.0) - 1)<<endl;
    return 0;
}
