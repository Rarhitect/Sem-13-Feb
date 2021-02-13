//Standart Template Library
/*
 Программа - структура данных + алгоритмы = класс, объект:
 1) Контейнеры - "умные структуры"
 2) Алгоритмы: sort, find...
 3) Итераторы
 */

/*
 3) Контейнер vector - динамический массив
 */

#include <iostream>
#include <vector>

void print_sz_n_cap(const std::vector<int> & v)
{
    std::cout << "size = " << v.size() << "; capacity = " << v.capacity() << std::endl;
}

int main()
{
    //push_back, emplace_back, size, capacity, begin/end, operator[], at,
    std::vector<int> v1;
    std::vector<int> v2(4);
    std::vector<int> v3(128);
    v3.resize(100);
    print_sz_n_cap(v1);
    print_sz_n_cap(v2);
    print_sz_n_cap(v3);
    return 0;
}
