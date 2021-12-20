#include <iostream>
#include <vector>
#include <array>
#include <fstream>

using namespace std;

void num_sum_div_67_distance_not_closer_than_5() {
    ifstream cin("data.txt");
    /*
    1. создать циклический буфер длиной 5
    2. заполнять массив счётчиков остатков от деления на 67 по мере продвижения буфера
    3. прибавлять к ответу значение счётчика чисел с остатком, комплиментарным числу в head буфера; вывести ответ в конце процесса
    **/
    int N(0);
    cin >> N;
    cout << N << endl;
}


int main() {
    num_sum_div_67_distance_not_closer_than_5();
    return 0;
}
