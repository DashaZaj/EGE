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
    5. вывести только наибольшую сумму
    */
    int n(0);
    ifs >> n;
    vector <int> numbers(n, 0);
    for (int i(0); i < n; i++)
        ifs >> numbers[i];
    cout << endl;
    for (int i(0); i < n-1; i++){
        for (int j(i+1); j<n; j++){
           int sum(numbers[i] + numbers[j]);
           if (sum%2 == 1)
                cout << sum << endl;
        }
    }

}

int main()
{
    max_sum_div();
    return 0;
}
