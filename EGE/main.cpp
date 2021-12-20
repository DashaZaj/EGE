#include <iostream>
#include <vector>
#include <array>
#include <fstream>

using namespace std;

void num_sum_div_67_distance_not_closer_than_5() {
    ifstream cin("data.txt");
    /*
    +1. ������� ����������� ����� ������ 5
    +2. ��������� ������ ��������� �������� �� ������� �� 67 �� ���� ����������� ������
    +3. ���������� � ������ �������� �������� ����� � ��������, ��������������� ����� � head ������; ������� ����� � ����� ��������
    **/
    int N(0);
    cin >> N;
    int tail(0), head(4);
    vector <int> buffer(5);
    array <int, 67> remains;
    for (int t(0); t < 67; t++)
        remains[t] = 0;
    for (int i(0); i<5; i++)
        cin >> buffer[i];
    int answer(0);
    for (int j(0); j<N-5; j++){
        remains[buffer[tail]%67]++;
        if (head <4) head++;
        else head = 0;
        if (tail < 4) tail++;
        else tail = 0;
        cin >> buffer[head];
        int d = buffer[head]%67;
        if (d == 0) answer += remains[0];
        else answer += remains[67-d];

    }
    cout << answer << endl;
}


int main() {
    num_sum_div_67_distance_not_closer_than_5();
    return 0;
}
