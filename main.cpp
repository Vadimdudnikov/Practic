#include <iostream>
#include <math.h>

using namespace std;

int main(){

int i=0, a=0;

cout<<"1. Дерево из ВОВа? "<<endl<<"1) Дуб"<<endl<<"2) Береза"<<endl<<"3) Клён"<<endl<<"4) Тельдрассил"<<endl<<endl;

cin>>a;
if(a==4){cout<<"Молодец!"<<endl<<endl;i++;}
else{cout<<"Неверно!"<<endl<<endl;}

cout<<"2. За кого? "<<endl<<"1) Орда"<<endl<<"2) Алтянс"<<endl<<"3) Мурлоки"<<endl<<"4) Наги"<<endl<<endl;
cin>>a;
if(a==1){cout<<"Молодец!"<<endl<<endl;i++;}
else{cout<<"Неверно!"<<endl<<endl;}

cout<<"3. Какой сейчас год? "<<endl<<"1) 2001"<<endl<<"2) 2019"<<endl<<"3) 2009"<<endl<<"4) 2007"<<endl<<endl;
cin>>a;
if(a==2){cout<<"Молодец!"<<endl<<endl;i++;}
else{cout<<"Неверно!"<<endl<<endl;}

cout<<"4. Фамилия нашего президента? "<<endl<<"1) Иванов"<<endl<<"2) Петров"<<endl<<"3) Агграмар"<<endl<<"4) Путин"<<endl<<endl;
cin>>a;
if(a==4){cout<<"Молодец!"<<endl<<endl;i++;}
else{cout<<"Неверно!"<<endl<<endl;}

cout<<"5. Кто приносит подарки на новый год? "<<endl<<"1) Зайчик"<<endl<<"2) Родители"<<endl<<"3) Дед мороз"<<endl<<"4) Учителя"<<endl<<endl;
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
