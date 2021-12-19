#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void num_sum_div_67_distance_not_closer_than_5(){
    ifstream ifs("data.txt");
    /*
    +1. записываем числа в массив
    2. проверяем и считаем все возможные с учётом условия пары на кратность 67-ми
    **/
    int N(0);
    ifs >> N;
    vector <int> numbers(N);
    for (int i(0); i < N; i++){
        ifs >> numbers[i];
    }
    for (int i(0); i < N; i++){
        cout << numbers[i] << " ";
    }
}


int main()
{
    num_sum_div_67_distance_not_closer_than_5();
    return 0;
}
