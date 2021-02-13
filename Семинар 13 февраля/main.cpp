//Standart Template Library
/*
 Программа - структура данных + алгоритмы = класс, объект:
 1) Контейнеры - "умные структуры"
 2) Алгоритмы: sort, find...
 3) Итераторы
 */

/*
 1) Контейнер pair<X,Y>
 */

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    pair<int, double> p(23, 84.32);
    cout << "first = " << p.first << endl;
    cout << "second = " << p.second << endl;
    
    return 0;
}
