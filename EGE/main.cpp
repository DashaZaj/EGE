#include <iostream>
#include <vector>
#include <array>
#include <fstream>

using namespace std;

void num_sum_div_67_distance_not_closer_than_5() {
    ifstream cin("data.txt");
    /*
    +1. ������� ����������� ����� ������ 5
    2. ��������� ������ ��������� �������� �� ������� �� 67 �� ���� ����������� ������
    3. ���������� � ������ �������� �������� ����� � ��������, ��������������� ����� � head ������; ������� ����� � ����� ��������
    **/
    int N(0);
    cin >> N;
    int teil(0), head(4);
    vector <int> buffer(5);
    for (int i(0); i<5; i++)
        cin >> buffer[i];
    for (int i(0); i<5; i++)
        cout << buffer[i] << endl;
}


int main() {
    num_sum_div_67_distance_not_closer_than_5();
    return 0;
}
