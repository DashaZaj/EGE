#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void min_sum_not_farther_than_4()
{
    ifstream ifs("data_min_sum.txt");
    /**
    +1. ������ � ��������� ����
    2. ��������� � ������� ����, ���������� ��� �������
    3. ����� � ������� �������
    */
    int n(0);
    ifs >> n;
    vector <int> numbers(n,0);
    for (int i(0); i < n; i++)
        ifs >> numbers[i];

    for (int i(0); i < n; i++)
        cout << numbers[i] << " ";
}

int main()
{
    min_sum_not_farther_than_4();
    return 0;
}
