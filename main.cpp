#include <iostream>
#include <math.h>

using namespace std;

int main(){

int i=0, a=0;

cout<<"1. Какое дерево сожгла Сильвана? "<<endl<<"1) Нордрассил"<<endl<<"2) Береза"<<endl<<"3) Клён"<<endl<<"4) Тельдрассил"<<endl<<endl;

cin>>a;
if(a==4){cout<<"Молодец!"<<endl<<endl;i++;}
else{cout<<"Неверно!"<<endl<<endl;}

cout<<"2. За кого? "<<endl<<"1) Орда"<<endl<<"2) Алтянс"<<endl<<"3) Мурлоки"<<endl<<"4) Наги"<<endl<<endl;
cin>>a;
if(a==1){cout<<"Молодец!"<<endl<<endl;i++;}
else{cout<<"Неверно!"<<endl<<endl;}

cout<<"3. Имя сына Аллерии и Туралиона? "<<endl<<"1) Артур"<<endl<<"2) Аратор"<<endl<<"3) Арати"<<endl<<"4) Магнус"<<endl<<endl;
cin>>a;
if(a==2){cout<<"Молодец!"<<endl<<endl;i++;}
else{cout<<"Неверно!"<<endl<<endl;}

cout<<"4. Имя предводителя пантеона титанов? "<<endl<<"1) Саргерас"<<endl<<"2) Один"<<endl<<"3) Агграмар"<<endl<<"4) Амантул"<<endl<<endl;
cin>>a;
if(a==4){cout<<"Молодец!"<<endl<<endl;i++;}
else{cout<<"Неверно!"<<endl<<endl;}

cout<<"5. Во что превращались эредары после осквернения? "<<endl<<"1) Дренеи"<<endl<<"2) Осквернённые"<<endl<<"3) Манари"<<endl<<"4) Натрезимы"<<endl<<endl;
cin>>a;
if(a==3){cout<<"Молодец!"<<endl<<endl;i++;}
else{cout<<"Неверно!"<<endl<<endl;}

cout<<"Ваша оценка "<<i<<"!"<<endl;

switch (i) {
case 1:
cout<<"Ужасно"<<endl;
break;
case 2:
cout<<"Плохо"<<endl;
break;
case 3:
cout<<"Удовлетворительно"<<endl;
break;
case 4:
cout<<"Хорошо"<<endl;
break;
case 5:
cout<<"Отлично"<<endl;
break;
}


return 0;

}
