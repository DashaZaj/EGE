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
    int answer(0);
    for (int i(1); i<18; i++){
        int j(36-i);
        answer += slice[0][i]*slice[0][j];
        answer += slice[1][i]*slice[1][j];
        answer += slice[2][i]*slice[2][j];
    }
    answer += slice[0][0]*(slice[0][0]-1)/2;
    answer += slice[1][0]*(slice[1][0]-1)/2;
    answer += slice[2][0]*(slice[2][0]-1)/2;
    answer += slice[0][18]*(slice[0][18]-1)/2;
    answer += slice[1][18]*(slice[1][18]-1)/2;
    answer += slice[2][18]*(slice[2][18]-1)/2;
    cout << answer << endl;
}

int main()
{
    num_div_sum_multiple_distance();
    return 0;
}
