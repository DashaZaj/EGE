#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void max_sum_div()
{
    ifstream ifs("data.txt");
    /**
    +1. считать и сохранить все числа
    +2. вывести все пары
    +3. вместо пар вывести суммы
    +4. проверить делимость сумм
    +5. вывести только наибольшую сумму
    */
    int n(0);
    ifs >> n;
    vector <int> numbers(n, 0);
    for (int i(0); i < n; i++)
        ifs >> numbers[i];
    int max_sum(0);
    for (int i(0); i < n-1; i++){
        for (int j(i+1); j<n; j++){
           int sum(numbers[i] + numbers[j]);
           int product(numbers[i]*numbers[j]);
           if (sum%7 == 0 and product%3 ==0 and sum > max_sum)
                max_sum = sum;
        }
    }
    if (max_sum != 0) cout << max_sum << endl;
    else cout << "FAIL" << endl;
}

int main()
{
    max_sum_div();
    return 0;
}
