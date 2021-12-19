#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void num_sum_div_67_distance_not_closer_than_5(){
    ifstream ifs("data.txt");
    /*
    +1. записываем числа в массив
    +2. проверяем и считаем все возможные с учётом условия пары на кратность 67-ми
    **/
    int N(0), counter(0);
    ifs >> N;
    vector <int> numbers(N);
    for (int i(0); i < N; i++){
        ifs >> numbers[i];
    }
    for (int i(0); i < N-5; i++){
        for (int j(i+5); j<N; j++){
            if ((numbers[i] + numbers[j])%67 == 0) counter++;
        }
    }
    cout << counter << endl;
}


int main()
{
    num_sum_div_67_distance_not_closer_than_5();
    return 0;
}
