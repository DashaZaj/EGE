#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void sum_div_30_not_farther_then_7(){
    ifstream ifs("data.txt");
    /**
    +1. считать числа в вектор
    2. вывести все пары на расстоянии меньше, чем семь
    3. вывести пары, кратные 30
    4. вывести количество пар
    */
    int n(0);
    ifs >> n;
    vector <int> numbers(n, 0);
    for (int i(0); i < n; i++)
        ifs >> numbers[i];
    for (int i(0); i < n; i++)
        cout << numbers[i] << " ";
}

int main()
{
    sum_div_30_not_farther_then_7();
    return 0;
}
