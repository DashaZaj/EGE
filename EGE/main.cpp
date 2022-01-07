#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void num_three_prod_div_4(){
    ifstream cin("data.txt");
    /*
    +1. ввести данные
    +2. в процессе считывания данных считать количество чисел, кратных 4(div4) и числа, кратные 2(div2)
    +3. вывести ответ
    **/
    int n(0), div4(0), div2(0), no(0);
    cin >> n;
    int cur(0);
    for (int i(0); i < n; i++){
        cin >> cur;
        if (cur % 4 == 0) div4++;
        else if (cur % 2 == 0) div2++;
        else no++;
    }
    int n2 = no + div2;
    cout << div4*(n2*(n2-1)/2) + (div4*(div4-1)/2)*n2 + div4*(div4-1)*(div4-2)/6 + (div2*(div2-1)/2)*no + div2*(div2-1)*(div2-2)/6 << endl;
}

int main()
{
    num_three_prod_div_4();
    return 0;
}
