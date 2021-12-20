#include <iostream>
#include <vector>
#include <array>
#include <fstream>

using namespace std;

void num_div_sum_multiple_distance(){
    ifstream cin("data.txt");
    /*
    +1. ������� ��� ����� � �������� ���� �����
    2. ��������� � ������� �� ���� �����, � ������� �� ������� �� �� 36
    3. ��������� ��� ����� �� ������� �������������� ��� � ������� ���������
    **/
    int N(0), num(0);
    cin >> N;
    array<vector<int>, 3> slice;
    for (int i(0); i<N; i++){
        cin >> num;
        slice[i%3].push_back(num);
    }
    for (int j(0); j<3; j++){
        cout << slice[j].size() << endl;
    }
}

int main()
{
    num_div_sum_multiple_distance();
    return 0;
}
