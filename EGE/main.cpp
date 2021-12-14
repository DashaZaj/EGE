#include <iostream>
#include <array>
#include <fstream>

using namespace std;

void max_sum_multiple_distance(){
    ifstream ifs("data.txt");
    /*
    +1. считать количество чисел, найти два максимума в каждом срезе с нужной кратностью
    2. собрать суммы из максимумов каждого среза, найти и вывести максимум
    **/
    array<array<int, 2>, 6> maxs;
    for(int i(0); i < 6; i++)
        for (int j(0); j<2; j++)
            maxs[i][j] = 0;
    int N(0), a(0);
    ifs >> N;
    for (int i(0); i < N; i++){
        ifs >> a;
        if (a > maxs[i%6][0]){
                maxs[i%6][1] = maxs[i%6][0];
                maxs[i%6][0] = a;
        }
        else if ( a > maxs[i%6][1]) maxs[i%6][1] = a;
    }
    int maxi(0);
    for (int i(0); i < 6; i++){
        if (maxs[i][0] + maxs[i][1] > maxi) maxi = maxs[i][0] + maxs[i][1];
    }
    cout << maxi << endl;
}

int main()
{
    max_sum_multiple_distance();
    return 0;
}
