#ifndef ARRAY_HPP
#define ARRAY_HPP

template <class T>
class Array
{
private:
    T *_arr;
    unsigned int _arr_size;
public:
    Array();
    Array(unsigned int n);
    Array(const Array &other);
    Array & operator=(const Array &other);
    ~Array();

    /**********************************************/

    T &operator[](unsigned int index);
    const unsigned int & size() const;
};


#endif