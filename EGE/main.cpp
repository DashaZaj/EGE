#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void min_sum_distance()
{
    ifstream ifs("data_min_sum_distance.txt");
    /**
    ��������� ���������� ����� ���� ���������
    (������� �� ������ ������ � ���������, �� ����� ���� � ���������� �� ��������) �����
    �� ���������, ��� ���� ����� ������ ���������� ���� �� �����
    �� ���������� �� ����� 4 (�� ���� ����� ���� ������ ������ ������� 3 ������ �����).

    +1. ������� 4 ����� � "�������"
    +2. ����� � ������ - ������������� ������� �� ����������
    +3. �������� ������� �����
    +4. ������� ����� �����
    +!!5. ������� ������� � ���������� ������� ��� ��������
    +6. ������� ���� �� ����, ��� � ����� �������, � ����������� ��������
    +7. ��� �������� �� ����������� ����
    +8. ���������
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
