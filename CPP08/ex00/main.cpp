#include "easyfind.hpp"

int main()
{
    std::cout << "/********************************/\n";
    std::cout << "Vector:\n";

    std::vector<int> vector;
    for (int count=0; count < 5; ++count)
        vector.push_back(count);
 
    easyfind(vector, 0);
    easyfind(vector, 5);
 
    std::cout << '\n';

    /********************************/

    std::cout << "/********************************/\n";
    std::cout << "Array:\n";

    std::array<int, 5> array;
    for (int count=0; count < 5; ++count)
        array[count] = count;

    easyfind(array, 0);
    easyfind(array, 5);

    std::cout << '\n';

    /********************************/

    std::cout << "/********************************/\n";
    std::cout << "Deque:\n";

    std::deque<int> deq;
    for (int count=0; count < 5; ++count)
        deq.push_front(count);

    easyfind(deq, 4);
    easyfind(deq, 5);

    std::cout << '\n';

    /********************************/

    std::cout << "/********************************/\n";
    std::cout << "List:\n";

    std::list<int> list;
    for (int count=0; count < 5; ++count)
        list.push_back(count);
    easyfind(list, 0);
    easyfind(list, 5);

    return 0;
}