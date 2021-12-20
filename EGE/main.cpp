#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void num_div_sum_multiple_distance(){
    ifstream cin("data.txt");
    /*
    +1. записать числа в массив
    +2. запустить вложенный цикл по всем возможным парам и посчитать подходящие условию
    **/
    int N(0), counter(0);
    cin >> N;
    vector <int> numbers(N);
    for (int i(0); i < N; i++)
        cin >> numbers[i];
    for (int i(0); i < N-1; i++){
        for (int j(i+1); j<N; j++){
            if ((numbers[i] + numbers[j])%36==0 and (j-i)%3==0) counter++;
        }
    }
    cout << counter << endl;
}

int main()
{
    num_div_sum_multiple_distance();
    return 0;
}
