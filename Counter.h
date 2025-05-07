#pragma once

#include <vector>

struct Counter {
public:
    Counter();
    void operator()(int num);
    int get_sum() const;
    int get_count() const;

private:
    bool divisionThree(int data);

    std::vector<int> m_pAr;
    int summ;
    int divideBy3Counter;

};

