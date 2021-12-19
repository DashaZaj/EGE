#include <iostream>
#include <vector>
#include <array>
#include <fstream>

using namespace std;

void num_sum_div_67_distance_not_closer_than_5(){
    ifstream cin("data.txt");
    /*
    +1. создать массив векторв, содержащих номера чисел, соответственно остатку от деления на 67
    2. найти пары векторов, остатки которых комплиминтарны
    3. для каждой пары остатков найти количество пар, отвечающих условию о расстоянии
    **/
    int N(0);
    cin >> N;
    array<vector<int>, 67> indexes_of_remains;
    for (int i(0); i < N; i++){
        int num(0);
        cin >> num;
        indexes_of_remains[num%67].push_back(i);
    }
    for (int i(0); i < 67; i++){
        if (indexes_of_remains[i].size()>0){
            cout << i << ": ";
            for (int j(0); j < indexes_of_remains[i].size(); j++) {
                cout << indexes_of_remains[i][j] << " ";
            }
            cout << endl;
        }
    }
}


int main()
{
    num_sum_div_67_distance_not_closer_than_5();
    return 0;
}
