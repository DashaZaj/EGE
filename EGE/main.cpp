#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void number_of_sums_div()
{
    ifstream ifs("number_of_sums_div_data.txt");
    /**
    +1. vector cчётчиков по остаткам от деления на 40
    2. считываем числа и считаем, сколько есть чивел с разными остатками от деления на 40
    3. собираем пары
    */
    vector<int> counters(40,0);

    int n(0);
    ifs >> n;
    counters[n%40] ++;

    for (int i(0); i < counters.size(); i++)
        cout << i << ":" << counters[i] << endl;
}

int main()
{
    number_of_sums_div();
    return 0;
}
