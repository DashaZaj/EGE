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
        for (int u(0); u<3; u++)
            answer += slice[u][i]*slice[u][j];
    }
    for (int u(0); u<3; u++){
    answer += slice[u][0]*(slice[u][0]-1)/2;
    answer += slice[u][18]*(slice[u][18]-1)/2;
    }
    cout << answer << endl;
}

int main()
{
    num_div_sum_multiple_distance();
    return 0;
}
