#include <iostream>
#include <vector>
#include <array>
#include <fstream>

using namespace std;

void num_div_sum_multiple_distance(){
    ifstream cin("data.txt");
    /*
    +1. создать три среза и записать туда числа
    +2. сохранять в массивы не сами числа, а остатки от деления их на 36
    3. запустить три цикла на подсчёт комлиментарных пар и вывести результат
    **/
    int N(0), num(0);
    cin >> N;
    array<array<int, 36>, 3> slice;
    for (int h(0); h < 3; h++)
        for (int l(0); l < 36; l++)
            slice[h][l] = 0;
    for (int i(0); i<N; i++){
        cin >> num;
        slice[i%3][num%36]++;
    }
    for (int j(0); j<3; j++){
        for (int i(0); i < 36; i++)
            cout << slice[j][i] << " ";
        cout << endl;
    }
}

int main()
{
    num_div_sum_multiple_distance();
    return 0;
}
