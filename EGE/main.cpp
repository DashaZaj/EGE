#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void number_of_sums_div_30_not_farther_then_7(){
    ifstream ifs("data.txt");
    /*
    +1. ������� 6 ����� � ��������� �����
    2. ��������� ��� ���� �� ��������� 30
    3. ������� ��� ���� �����
    4. �������� 5 ����� ���
    5. ��������� 3 � 4 ������
    6. ���������, ��� N ����� ���� ������ 6
    **/
    int N(0);
    ifs >> N;
    vector <int> snake(6);
    int head(snake[0]), tail(snake[1]);
    for (int i(0); i < 6; i++)
        ifs >> snake[i];
    for (int i(0); i < 6; i++)
        cout << snake[i] << " ";
}

int main()
{
    number_of_sums_div_30_not_farther_then_7();
    return 0;
}
