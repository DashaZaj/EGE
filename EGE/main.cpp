#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void num_sum_div_67_distance_not_closer_than_5(){
    ifstream ifs("data.txt");
    /*
    1. ���������� ����� � ������
    2. ��������� � ������� ��� ��������� � ������ ������� ���� �� ��������� 67-��
    **/
    int N(0);
    ifs >> N;
    cout << N << endl;
}

int main()
{
    num_sum_div_67_distance_not_closer_than_5();
    return 0;
}
