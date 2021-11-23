#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void number_of_sums_div()
{
    ifstream ifs("number_of_sums_div_data.txt");
    /**
    +1. vector cчётчиков по остаткам от деления на 40
    +2. считываем числа и считаем, сколько есть чисел с разными остатками от деления на 40
    3. собираем пары
    */
    vector<int> counters_sm_or_eqw40(40,0);
    vector<int> counters_big40(40,0);

    int n(0);
    while (n != -9999){
        ifs >> n;
        if (n <= 40) counters_sm_or_eqw40[n%40] ++;
        if (n > 40) counters_big40[n%40]++;
    }

    int sum(0);
    for (int i(1); i < 19; i++)
        sum += counters_big40[i] * counters_big40[40-i];
    sum += counters_big40[0]*(counters_big40[0]-1)/2;
    sum += counters_big40[20]*(counters_big40[20]-1)/2;
    cout << sum << endl;
}

int main()
{
    number_of_sums_div();
    return 0;
}
