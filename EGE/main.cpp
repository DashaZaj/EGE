#include <iostream>
#include <fstream>

using namespace std;

void max_sum_div()
{
    ifstream ifs("data.txt");
    /**
    +1. ������ ���������� ���� � ���������
    +2. ����� ������������ ������ � ������������ �������� �����
    +3. ���� ����� - ���������� � �������, �� ����� - ������� -1
    */
    int n(0), cur(0), max_odd(-1001), max_even(-1001);
    ifs >> n;
    for (int i(0); i < n; i++){
        ifs >> cur;
        if (cur % 2 == 0 and cur > max_even) max_even = cur;
        else if (cur%2 == 1 and cur > max_odd) max_odd = cur;
    }
    if (max_even != -1001 and max_odd != -1001) cout << max_even + max_odd << endl;
    else cout << -1 << endl;
}

int main()
{
    max_sum_div();
    return 0;
}
