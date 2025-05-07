#include <iostream>
#include <vector>
#include <algorithm>

#include "Counter.h"

/*
class Get_sum {
public:
    Get_sum(int* ar, int lenght): m_pAr(ar), m_length(lenght){};
    int operator()() {
        int sum{ 0 };
        for (size_t i = 0; i < m_length; i++)
        {
            sum += m_pAr[i];
        }
        return sum;
    }
private:
    int* m_pAr;
    int m_length;
};

class Get_count {
public:
    Get_count(int* ar, int lenght) : m_pAr(ar), m_length(lenght) {};
    int operator()() {
        int count{ 0 };
        for (size_t i = 0; i < m_length; i++)
        {
            if (divisionThree(m_pAr[i]) == true) {
                count += 1;
            }
        }
        return count;
    }
private:

    bool divisionThree(int data) {
        if (data == 3) {
            return true;
        }
        else if (data < 3) {
            return false;
        }
        else if (data > 3) {
            return true && divisionThree(data - 3);
        }
    }

    int* m_pAr;
    int m_length;
};

*/



int main()
{
    /*
    int inputArray[]{ 4, 1, 3, 6, 25, 54 };
    int  length = sizeof(inputArray) / sizeof(int);
    std::cout << "[IN]: ";
    for (size_t i = 0; i < length; i++)
    {
        std::cout << inputArray[i] << " ";
    };

    std::cout << std::endl;

    Get_sum get_sum(inputArray, length);
    std::cout << "[OUT]: get_sum() = " << get_sum();

    std::cout << std::endl;

    Get_count get_count(inputArray, length);
    std::cout << "[OUT]: get_count() = " << get_count();
    */

    std::vector<int> numbers = { 4, 1, 3, 6, 25, 54 };
    Counter counter = std::for_each(numbers.begin(), numbers.end(), Counter());
    std::cout << "[OUT]: get_sum() = " << counter.get_sum() << std::endl;
    std::cout << "[OUT]: get_count() = " << counter.get_count() << std::endl;
    
}