#include <iostream>
#include <string>
#include <time.h>

using namespace std;



struct mistress{
     float Salary,
     Pension_fund,
     Income_tax,
     Result;
};

int main(int argc, char *argv[])
{
    cout<<"Task 13.1 and 13.2 and 13.3: "<<endl;
    float Subsis;
    cout<<"Projit minimum: ";
    cin>>Subsis;

    srand(time(0));

    mistress slave[12];

    float Salary=0,Pension_fund=0,Income_tax=0,Result=0;

    float max=0,min;

    string mes[12]= {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};



    cout<<"Month\t"
          "Salary\t"
          "Pension fund\t"
          "Income tax\t"
          "result\t\t"
          "Subsistence";
    cout<<endl;
    for (int i = 0; i < 12; ++i) {
        cout<<mes[i]<<"\t";
        slave[i].Salary = 5001+rand()%15000;
        Salary += slave[i].Salary;

        if(slave[i].Salary > max){
            max = slave[i].Salary;
        }
        if(i<1){min = slave[i].Salary;}

        if(slave[i].Salary < min){
            min = slave[i].Salary;
        }

        cout<<slave[i].Salary<<"\t";


        slave[i].Pension_fund = slave[i].Salary * 0.02;
        Pension_fund += slave[i].Pension_fund;
        cout<<slave[i].Pension_fund<<"\t\t";
if(Salary>20000){
            slave[i].Income_tax = slave[i].Salary * 0.13;
            Income_tax += slave[i].Income_tax ;
        }else{slave[i].Income_tax = 0;}
        cout<<slave[i].Income_tax <<"\t\t";

        slave[i].Result =
                slave[i].Salary +
                slave[i].Pension_fund +
                slave[i].Income_tax;
        Result += slave[i].Result;
        cout<<slave[i].Result<<"\t\t";

   slave[i].Result > Subsis ? cout<<'+' : cout<<'-';
        cout<<endl;
    }
cout<<endl;


    cout<<"Result:\t"
        <<Salary<<"\t"
        <<Pension_fund<<"\t\t"
        <<Income_tax<<"\t\t"
        <<Result<<endl;

cout<<endl;

    cout<<"Average salary:\t"<<Result/12<<endl;
cout<<"MAX salary:\t"<<  max <<endl;
cout<<"MIN salary:\t"<<  min <<endl;
}

