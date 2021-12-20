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
    int head(3), tail(0);
    for (int j(0); j < n-4; j++){
        if (min1 > worm[tail]) min1 = worm[tail];
        if (head <3) head++;
        else head = 0;
        if (tail < 3) tail++;
        else tail = 0;
        ifs >> worm[head];
        if (par > (min1 + worm[head])) par = min1 + worm[head];
    }
    cout << par << endl;
}

int main()
{
    min_sum_distance();
    return 0;
}
