#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void num_sum_div_67_distance_not_closer_than_5(){
    ifstream cin("data.txt");
    /*
    1. создать массив векторв, содержащих номера чисел, соответственно остатку от деления на 67
    2. найти пары векторов, остатки которых комплиминтарны
    3. для каждой пары остатков найти количество пар, отвечающих условию о расстоянии
    **/
    int N(0);
    cin >> N;
    cout << N << endl;
}


int main()
{
    num_sum_div_67_distance_not_closer_than_5();
    return 0;
}
