#include <iostream>
#include <cstring>
using namespace std;
#include"Notebook.h"
int main()
{
    setlocale(0,"");

    string model;
    int memory;
    int cpu;

    cout << "введите характеристики 1 ноутбука\n";
    Notebook number1;
    cin >> number1;
    cout << "Notebook №1:";
    cout << number1;

    cout << "введите характеристики 2 ноутбука\n";
    Notebook number2;
    cin >> number2;
    cout << "Notebook №2:";
    cout << number2;
int k;
    for (;1;)
    {

    cout<<"\n\n1 - =\n";
    cout<<"2 - ==\n";
    cout<<"3 - !=\n";
    cout<<"4 - <\n";
    cout<<"5 - >\n";
    cout<<"6 - <=\n";
    cout<<"7 - >=\n";
    cout<<"8 - ++\n";
    cout<<"9 - --\n";
    cout<<"true - перегруженный оператор сработал, выставил значение ИСТИНА\n";
    cout<<"false - перегруженный оператор сработал, выставил значение ЛОЖЬ\n";
    cin >> k;

   switch(k)
        {
case(1):
    {
    number1=number2;
    cout << number1 << endl;
    cout << "оператор присваивания №1=№2\n" << endl;
    break;
    }
case(2):
    {
    int q=(number1==number2);
    if(q==1)
    cout << "true" << endl;
    else cout << "false" << endl;
    break;
    }
case(3):
   {
     int w=(number1!=number2);
     if(w==1)
     cout << "false" << endl;
     else cout << "true" << endl;
     break;
}
case(4):
 {
      cout << "Notebook №1 = " << number1;
      cout << "Notebook №2 = " << number2;
      if(number1<number2)
      {
      cout << "№1<№2 - true" << endl;
      }
      else cout << "false" << endl;
      break;
}
case(5):
    {
    cout << "Notebook №1 = " << number1;
    cout << "Notebook №2 = " << number2;
    if(number1>number2)
    {
      cout << "№1>№2 - true" << endl;
      }
      else cout << "false" << endl;
    break;
    }
case(6):
{
    cout << "Notebook №1 = " << number1;
    cout << "Notebook №2 = " << number2;
     if(number1<=number2)
        {
      cout << "№1<=№2 - true" << endl;
      }
      else cout << "false" << endl;
      break;
}
case(7):
{
    cout << "Notebook №1 = " << number1;
    cout << "Notebook №2 = " << number2;
      if(number1>=number2)
        {
      cout << "№1=>№2 - true" << endl;
      }
      else cout << "false" << endl;
    break;
}
case(8):
    {
    cout << "Введите номер ноутбука (1 или 2)\n";
    int p;
    cin >> p;
    if (p==1)
    {
        cout << "Notebook №1 before = " << number1;
        number1++;
        cout << "Notebook №1 after = " << number1;
    }

    if (p==2)
    {
        cout << "Notebook№2 before = " << number2;
        number2++;
        cout << "Notebook№2 after = " << number2;
    }
    break;
    }
    case(9):
    {
    cout << "Введите номер ноутбука (1 или 2)\n";
    int m;
    cin >> m;
    if (m==1)
    {
        cout << "Notebook №1 before = " << number1;
        number1--;
        cout << "Notebook №1 after = " << number1;
    }

    if (m==2)
    {
        cout << "Notebook №2 before = " << number2;
        number2--;
        cout << "Notebook №2 after = " << number2;
    }
    }
        }
    }
    return 0;
}
