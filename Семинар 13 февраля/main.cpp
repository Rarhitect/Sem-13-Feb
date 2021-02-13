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
#include <utility>

using namespace std;

int main()
{
    pair<int, double> p(23, 84.32);
    cout << "first = " << p.first << endl;
    cout << "second = " << p.second << endl;
    
    int i = 0;
    auto p1 = make_pair(i, i);
    cout << "first = " << p1.first << endl;
    cout << "second = " << p1.second << endl;
    
    auto p2 = make_pair(ref(i), ref(i));
    cout << "first = " << p2.first << endl;
    cout << "second = " << p2.second << endl;
    
    p2.first++;
    p2.second++;
    cout << "first = " << p2.first << endl;
    cout << "second = " << p2.second << endl;
    cout << "i = " << i << endl;
    return 0;
}
