#include <iostream>

void shaker_sort(int array[], std::size_t size)
{
    for (std::size_t left_idx = 0, right_idx = size - 1;left_idx < right_idx;)
    {
        for (std::size_t idx = left_idx; idx < right_idx; ++idx)
        {
            if (array[idx + 1] < array[idx])
            {
                std::swap(array[idx], array[idx + 1]);
            }
        }
        --right_idx;

        for (std::size_t idx = right_idx; idx > left_idx; --idx)
        {
            if (array[idx - 1] >  array[idx])
            {
                std::swap(array[idx - 1], array[idx]);
            }
        }
        ++left_idx;
    }
}

int main()
{
    const std::size_t size = 10;
    int Array[size];
    for(std::size_t i = 0 ; i<size ; ++i)
    {
       Array[i] = rand() % 100;
       std::cout << Array[i] << " " ;
    }
    shaker_sort(Array, size);
    std::cout << std::endl;
    for (size_t i = 0 ; i<size; ++i)
    {
       std::cout << Array[i] << " " ;
    }
    return 0;
}
