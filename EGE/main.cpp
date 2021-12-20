#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void num_div_sum_multiple_distance(){
    ifstream cin("data.txt");
    /*
    +1. записать числа в массив
    2. запустить вложенный цикл по всем возможным парам и посчитать подходящие условию
    **/
    int N(0);
    cin >> N;
    vector <int> numbers(N);
    for (int i(0); i < N; i++)
        cin >> numbers[i];
    for (int i(0); i < N; i++)
        cout << numbers[i] << " ";
}

int main()
{
    num_div_sum_multiple_distance();
    return 0;
}
