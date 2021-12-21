#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void num_three_prod_div_4(){
    ifstream cin("data.txt");
    /*
    вычисляется количество троек различных элементов, произведение которых делится на 4.
    +1. считать числа в вектор
    2. вывести все возможные пары чисел без учёта порядка
    3. вывести все тройки чисел без учёта порядка
    4. вывести только тройки, произведение членов которой кратно 4
    5. подсчитать в вывести их количество
    **/
    int N(0);
    cin >> N;
    vector <int> numbers(N, 0);
    for (int i(0); i < N; i++)
        cin >> numbers[i];
    for (int i(0); i < N; i++)
        cout << numbers[i] << " ";
}

int main()
{
    num_three_prod_div_4();
    return 0;
}
