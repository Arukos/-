#include <iostream>
#include "Baza.h"
#include"residential.h"
#include"Warehouse.h"
#include"Production.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    residential a;
    Warehouse b;
    Production c;
    Baza v;
    cout << "Выберите : 1)Жилые 2)Склады 3)Производственные"<<endl;
    int chose,chose2,chose3;
    bool r = true;
    cin >> chose;
    switch (chose) {
    case 1: {
        a.show();
        while (r) {
            cout << "1)Добавить 2)Удалить 0)Закончить" <<endl;
            cin >> chose2;
            if (chose2 == 1) {
                cout << "Введите по очереди тип дома, количество комнат, жилая площадь, адрес, цена, площадь:" << endl;
                a.add();
                a.show();
            }
            if(chose2 ==2) {
                a.show();
                cout << "Введите строку для удоления = ";
                cin >> chose3;
                a.clear(chose3);
                a.show();
            }
            if (chose2 == 0) {
                r = false;
                break;
            }
        }
        break;
    }
    case 2: {
        b.show();
        while (r) {
            cout << "1)Добавить 2)Удалить 0)Закончить" << endl;
            cin >> chose2;
            if (chose2 == 1) {
                cout << "Введите по очереди тип, отапливается, , адрес, цена, площадь:" << endl;
                b.add();
                b.show();
            }
            if (chose2 == 2) {
                b.show();
                cout << "Введите строку для удоления = ";
                cin >> chose3;
                b.clear(chose3);
                b.show();
            }
            if (chose2 == 0) {
                r = false;
                break;
            }
        }
        break;
    }
    case 3: {
        c.show();
        while (r) {
            cout << "1)Добавить 2)Удалить 0)Закончить" << endl;
            cin >> chose2;
            if (chose2 == 1) {
                cout << "Введите по очереди тип , оборудывание, адрес, цена, площадь:" << endl;
                c.add();
                c.show();
            }
            if (chose2 == 2) {
                c.show();
                cout << "Введите строку для удоления = ";
                cin >> chose3;
                c.clear(chose3);
                c.show();
            }
            if (chose2 == 0) {
                r = false;
                break;
            }
        }
        break;
    }
    default: {
        break; 
    }
   }
}
