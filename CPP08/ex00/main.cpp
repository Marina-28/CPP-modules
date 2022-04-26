#include "easyfind.hpp"

int main()
{
    std::vector<int> vector;
    for (int count=0; count < 5; ++count)
        vector.push_back(count);
 
    easyfind(vector, 0);
    easyfind(vector, 5);
 
    std::cout << '\n';

    /********************************/

    std::array<int, 5> array;
    for (int count=0; count < 5; ++count)
        array[count] = count;

    easyfind(array, 0);
    easyfind(array, 5);

    std::cout << '\n';

    /********************************/

    std::deque<int> deq;
    for (int count=0; count < 5; ++count)
        deq.push_front(count);

    easyfind(deq, 0);
    easyfind(deq, 5);

    std::cout << '\n';

    /********************************/

    return 0;
}