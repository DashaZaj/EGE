#include <iostream>
#include <vector>

using namespace std;

void number_of_products_div()
{
     /**
     +1. считать и запомнить числа
     +2. вывести все пары чисел
     +3. вместо пар вывести произведения
     +4. проверить делимость произведений
     +5. просчитать и вывести количество подходящих произведений
     */
     int n(0);
     cin >> n;
     vector <int> numbers(n,0);
     for (int i(0); i < n; i++)
        cin >> numbers[i];

     int good_pairs(0);

     for (int j(0); j < n-1; j++)
        for (int i(j+1); i < n; i++)
        {
            int cur_sum(numbers[j] * numbers[i]);
            if ( cur_sum% 70 == 0)
              good_pairs++;
        }
     cout << good_pairs << endl;
}

int main()
{
    number_of_products_div();
    return 0;
}
