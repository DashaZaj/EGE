#include <iostream>
#include <array>
#include <fstream>

using namespace std;

void max_sum_multiple_distance(){
    ifstream ifs("data.txt");
    /*
    1. считать количество чисел, найти два максимума в каждом срезе с нужной кратностью
    2. собрать суммы из максимумов каждого среза, найти и вывести максимум
    **/
    array<array<int, 2>, 6> maxs;
    cout << "Hello world!" << endl;
}

int main()
{
    max_sum_multiple_distance();
    return 0;
}
