#include <iostream>
#include <vector>
#include <array>
#include <fstream>

using namespace std;

void num_sum_div_67_distance_not_closer_than_5() {
    ifstream cin("data.txt");
    /*
    +1. создать массив векторв, содержащих номера чисел, соответственно остатку от деления на 67
    +2. найти пары векторов, остатки которых комплиминтарны
    +3. для каждой пары остатков найти количество пар, отвечающих условию о расстоянии
    **/
    int N(0);
    cin >> N;
    array<vector<int>, 67> indexes_of_remains;
    for (int i(0); i < N; i++) {
        int num(0);
        cin >> num;
        indexes_of_remains[num % 67].push_back(i);
    }

    int counter(0);
    for (int i(1); i < 34; i++) {
        int j(67-i), f(0);
        vector<int> v1=indexes_of_remains[i];
        vector<int> v2=indexes_of_remains[j];
        for (int l(0); l < v1.size(); l++) {
            for (; f < v2.size(); f++){
                if (v2[f]-v1[l] >= 5){
                    counter+= v2.size()-f;
                    //cout << "1: " << v1[f] << " " << v2[l] << " v.size=" << v2.size()-f << endl;
                    break;
                }
            }
        }
        f = 0;
        for (int l(0); l < v2.size(); l++) {
            for (; f < v1.size(); f++){
                if (v1[f]-v2[l] >= 5){
                    counter+= v1.size()-f;
                    //cout << "2: "<< v1[f] << " " << v2[l] << " v.size=" << v1.size()-f << endl;
                    break;
                }
            }
        }
    }
    int f = 0;
    vector<int> v0=indexes_of_remains[0];
    for (int l(0); l < v0.size(); l++) {
        for (; f < v0.size(); f++){
            if (v0[f]-v0[l] >= 5){
                counter+= v0.size()-f;
                //cout << v0[f] << " " << v0[l] << " v.size=" << v0.size()-f << endl;
                break;
            }
        }
    }
    cout << counter << endl;

}


int main() {
    num_sum_div_67_distance_not_closer_than_5();
    return 0;
}
