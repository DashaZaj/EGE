#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void number_of_sums_div_30_not_farther_then_7(){
    ifstream ifs("data.txt");
    /*
    +1. считать 6 чисел в цикличный буфер
    2. проверить все пары на кратность 30
    3. считать ещё одно число
    4. проверит 5 новых пар
    5. повторять 3 и 4 пункты
    6. вспомнить, что N может быть меньше 6
    **/
    int N(0);
    ifs >> N;
    vector <int> snake(6);
    int head(snake[0]), tail(snake[1]);
    for (int i(0); i < 6; i++)
        ifs >> snake[i];
    for (int i(0); i < 6; i++)
        cout << snake[i] << " ";
}

int main()
{
    number_of_sums_div_30_not_farther_then_7();
    return 0;
}
