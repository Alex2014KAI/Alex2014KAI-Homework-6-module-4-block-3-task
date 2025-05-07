#include "Counter.h"

Counter::Counter(): summ(0), divideBy3Counter(0) {}

void Counter::operator()(int num)
{
    summ += num;
    if (divisionThree(num) == true) {
        divideBy3Counter += 1;
    }
}

int Counter::get_sum() const
{
    return summ;
}

int Counter::get_count() const
{
    return divideBy3Counter;
}

bool Counter::divisionThree(int data)
{
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
