#include <iostream>
#include <fstream>

using namespace std;

void max_sum_div(){
    ifstream ifs("data_max_sum_div.txt");
    /**
    +1. ввести числа
    +2. найти максимальные числа, дающие остаток 1, 2, 3, 4, 5 или 6 при делении на 7 и два, кратных семи
    +3. проверить, кратно ли m1*m6, m2*m5, m3*m4 или m01*m02 трём и больше ли каждый из них -1 и найти большую сумму
    +4. если нашли, то вывести сумму, нет - вывести FAIL
    */
    int n(0), cur(0), m1(-1), m2(-1), m3(-1), m4(-1), m5(-1), m6(-1), m01(-1), m02(-1);
    ifs >> n;
    for (int i(0); i < n; i++){
        ifs >> cur;
        if (cur%7 == 0 and cur > m01) m01 = cur;
        else if (cur%7 == 0 and cur > m02) m02 = cur;
        else if (cur%7 == 1 and cur > m1) m1 = cur;
        else if (cur%7 == 2 and cur > m2) m2 = cur;
        else if (cur%7 == 3 and cur > m3) m3 = cur;
        else if (cur%7 == 4 and cur > m4) m4 = cur;
        else if (cur%7 == 5 and cur > m5) m5 = cur;
        else if (cur%7 == 6 and cur > m6) m6 = cur;
    }
    int max_sum(0);
    if (m01 > -1 and m02 > -1 and (m01*m02)%3 ==0 and m01+m02 > max_sum) max_sum = m01 + m02;
    else if (m1 > -1 and m6 > -1 and (m1*m6)%3 ==0 and m1+m6 > max_sum) max_sum = m1 + m6;
    else if (m2 > -1 and m5 > -1 and (m2*m5)%3 ==0 and m2+m5 > max_sum) max_sum = m2 + m5;
    else if (m3 > -1 and m4 > -1 and (m3*m4)%3 ==0 and m3+m4 > max_sum) max_sum = m3 + m4;
    if (max_sum > 0) cout << max_sum << endl;
    else cout << "FAIL" << endl;
}

int main()
{
    max_sum_div();
    return 0;
}
