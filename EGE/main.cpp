#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void num_three_prod_div_4(){
    ifstream cin("data.txt");
    /*
    +1. ввести данные
    +2. в процессе считывания данных считать количество чисел, кратных 4(div)
    3. вывести ответ(div*(n-1)*(n-2))
    **/
    int n(0), div(0);
    cin >> n;
    int cur(0);
    for (int i(0); i< n; i++){
        cin >> cur;
        if (cur % 4== 0) div++;
    }
    cout << div << endl;
}

int main()
{
    num_three_prod_div_4();
    return 0;
}
