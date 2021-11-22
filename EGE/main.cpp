#include <iostream>
#include <fstream>

using namespace std;

void max_sum_div(){
    ifstream ifs("data_max_sum_div.txt");
    /**
    +1. ввести числа
    2. найти максимальные числа, дающие остаток 1, 2, 3, 4, 5 или 6 при делении на 7 и два, кратных семи
    3. проверить, кратно ли m1*m6, m2*m5, m3*m4 или m01*m02 трём и больше ли их сумма -1
    4. если да, то вывести сумму, нет - вывести FAIL
    */
    int n(0), cur(0);
    ifs >> n;
    for (int i(0); i < n; i++){
        ifs >> cur;
        cout << cur << endl;
    }
}

int main()
{
    max_sum_div();
    return 0;
}
