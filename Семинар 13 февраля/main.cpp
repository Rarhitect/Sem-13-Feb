//Standart Template Library
/*
 Программа - структура данных + алгоритмы = класс, объект:
 1) Контейнеры - "умные структуры"
 2) Алгоритмы: sort, find...
 3) Итераторы
 */

/*
 2) Контейнер tuple<N1, N2, ...> - хранит любое количество объектов
 */

#include <iostream>
#include <tuple>


template<int index, int Max, typename...Types>
struct tuple_printer
{
    static void print(std::ostream& s, const std::tuple<Types...> & tup)
    {
        s << std::get<index>(tup) << (index + 1 == Max ? "" : ", ");
        tuple_printer<index + 1, Max, Types...>::print(s, tup);
    }
};

template<int Max, typename ... Types>
struct tuple_printer<Max, Max, Types...>
{
    static void print(std::ostream & s, const std::tuple <Types...> & tup) {} ;
};

template <typename ... Types>
std::ostream& operator << (std::ostream& s, const std::tuple<Types...> & tup)
{
    tuple_printer<0, sizeof...(Types), Types...>::print(s, tup);
    return s;
}

int main()
{
    //get, make_tuple, tie(добавляет по ссылке), tuple_size<тип кортежа>::value - количество элементов, tuple_element<индекс, тип кортежа>::type - тип элемента tuple_cat() - конкатенация двух кортежей
    auto tup = std::make_tuple(22, 43.22, "Hello");
    std::cout << tup << std::endl;
    return 0;
}
