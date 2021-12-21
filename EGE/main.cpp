#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void num_three_prod_div_4(){
    ifstream cin("data.txt");
    /*
    +1. ввести данные
    2. в процессе считывания данных считать количество чисел, чратных 4(div)
    3. вывести ответ(div*(n-1)*(n-2))
    **/
    int n(0);
    cin >> n;
    vector <int> numbers(n,0);
    for (int i(0); i< n; i++)
        cin >> numbers[i];
    for (int i(0); i< n; i++)
        cout << numbers[i] << " ";
}

int main()
{
    num_three_prod_div_4();
    return 0;
}
