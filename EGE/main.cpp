#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void min_sum_distance()
{
    ifstream ifs("data_min_sum_distance.txt");
    /**
    находится наименьшая сумма двух различных
    (стоящих на разных местах в сообщении, но может быть и одинаковых по значению) чисел
    из сообщения, при этом числа должны находиться друг от друга
    на расстоянии не менее 4 (то есть между ними должно стоять минимум 3 других числа).

    +1. считать 4 числа в "червяка"
    +2. число в хвосте - потенциальный минимум из пройденных
    +3. сдвинуть червяка влево
    +4. считать пятое число
    +!!5. вывести червяка и пройденный минимум для проверки
    +6. собрать пару из того, что в зубах червяка, и пройденного минимума
    +7. это кандидат на минимальную пару
    +8. повторяем
    */
    int min1(2001), n(0), par(2001);
    ifs >> n;
    vector <int> worm(4, 0);
    for (int i(0); i<4; i++){
        ifs >> worm[i];
    }

    for (int j(0); j < n-4; j++){
        if (min1 > worm[0]) min1 = worm[0];
        int temp(0);
        for (int i(3); i>=0; i=i-1){
            temp = temp + worm[i];
            worm[i] = temp - worm[i];
            temp = temp - worm[i];
        }
        ifs >> worm[3];
        if (par > (min1 + worm[3])) par = min1 + worm[3];
    }
    cout << par << endl;
}

int main()
{
    min_sum_distance();
    return 0;
}
