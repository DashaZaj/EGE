#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void min_sum_not_farther_than_4()
{
    ifstream ifs("data_min_sum.txt");
    /**
    +1. ввести и сохранить чила
    +2. составить и вывести пары, подход€щие под условие
    +3. найти и вывести минимум
    */
    int n(0);
    ifs >> n;
    vector <int> numbers(n,0);
    for (int i(0); i < n; i++)
        ifs >> numbers[i];

    int mini(1001), sum(0);
    for (int i(0); i < n-1; i++){
        for (int j(i+1); j < n; j++){
            sum = numbers[i]+numbers[j];
            if ( (abs(j - i) >= 4) and (mini > sum))
                mini = sum;
        }
    }
    cout << mini << endl;
}

int main()
{
    min_sum_not_farther_than_4();
    return 0;
}
