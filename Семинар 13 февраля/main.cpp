//Standart Template Library
/*
 Программа - структура данных + алгоритмы = класс, объект:
 1) Контейнеры - "умные структуры"
 2) Алгоритмы: sort, find...
 3) Итераторы
 */

/*
 4) Контейнер array
 5) deque - двусторонняя очередь
 6) list - двусвязный список
 7) forward_list - односвязный список
 
 Дополнительные контейнеры на основе этих семи:
 8) stack
 9) queue
 10) priority_queue
 11) bitset
 */

#include <iostream>
#include <bitset>

int main()
{
    enum Color
    {
        red, yellow, green, blue, white, black, quantity
    };
    std::bitset<quantity> colors;
    colors.set(red);
    colors.set(blue);
    std::cout << "bitset of used colors " << colors << std::endl;
    std::cout << "quantity of used colors " << colors.count() << std::endl;
    std::cout << "bitset of not used colors " << ~colors << std::endl;
    return 0;
}
