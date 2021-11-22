#include <iostream>
#include <fstream>

using namespace std;

void max_sum_div()
{
    ifstream ifs("data.txt");
    /**
    +1. ввести количество цифр в сообщении
    +2. найти максимальное чётное и максимальное нечётное число
    3. если нашли - складываем и выводим, не нашли - выводим -1
    */
    int n(0), cur(0), max_odd(0), max_even(0);
    ifs >> n;
    for (int i(0); i < n; i++){
        ifs >> cur;
        if (cur % 2 == 0 and cur > max_even) max_even = cur;
        else if (cur > max_odd) max_odd = cur;
    }
    cout << max_even << " " << max_odd;
}

int main()
{
    max_sum_div();
    return 0;
}
