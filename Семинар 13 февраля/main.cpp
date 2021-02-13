//Standart Template Library
/*
 Программа - структура данных + алгоритмы = класс, объект:
 1) Контейнеры - "умные структуры"
 2) Алгоритмы: sort, find...
 3) Итераторы
 */


#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(10);
    vector<int>::iterator it;
    it = v.begin(); //итератор ведет себя как указатель на элемент вектора
    auto it1 = v.begin();
    //for(auto it = v.begin(); it != v.end(); ++it)  ---- v.end() ставит итератор на элемент следующий после последнего
    //for(auto i: v) --- копирование будет --- синтаксический сахар
    //for(auto &i: v) --- ссылается на сам элемент
    //for(const auto &i: v) --- не хотим копировать и менять элементы v
    
    return 0;
}
