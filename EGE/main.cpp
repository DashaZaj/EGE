#include <iostream>
#include <fstream>

using namespace std;

void num_three_prod_div_4(){
    ifstream cin("data.txt");
    /*
    1. ввести данные
    2. в процессе считывания данных считать количество чисел, чратных 4(div)
    3. вывести ответ(div*(n-1)*(n-2))
    **/
    int n(0);
    cin >> n;
    cout << n << endl;
}

int main()
{
    num_three_prod_div_4();
    return 0;
}
