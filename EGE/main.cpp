#include <iostream>
#include <fstream>

using namespace std;

void max_sum_div()
{
    ifstream ifs("data.txt");
    /**
    +1. ввести количество цифр в сообщении
    2. найти максимальное чётное и максимальное нечётное число
    3. если нашли - складываем и выводим, не нашли - выводим -1
    */
    int n(0);
    ifs >> n;
    cout << n;
}

int main()
{
    max_sum_div();
    return 0;
}
