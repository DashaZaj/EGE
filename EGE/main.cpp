#include <iostream>
#include <fstream>

using namespace std;

void max_sum_div()
{
    ifstream ifs("data.txt");
    /**
    +1. ������ ���������� ���� � ���������
    2. ����� ������������ ������ � ������������ �������� �����
    3. ���� ����� - ���������� � �������, �� ����� - ������� -1
    */
    int n(0);
    ifs >> n;
    cout << n;
}

int main()
{
    max_sum_div();
    return 0;
}
