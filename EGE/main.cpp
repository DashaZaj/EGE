#include <iostream>
#include <fstream>

using namespace std;

void max_sum_div(){
    ifstream ifs("data_max_sum_div.txt");
    /**
    +1. ������ �����
    2. ����� ������������ �����, ������ ������� 1, 2, 3, 4, 5 ��� 6 ��� ������� �� 7 � ���, ������� ����
    3. ���������, ������ �� m1*m6, m2*m5, m3*m4 ��� m01*m02 ��� � ������ �� �� ����� -1
    4. ���� ��, �� ������� �����, ��� - ������� FAIL
    */
    int n(0), cur(0);
    ifs >> n;
    for (int i(0); i < n; i++){
        ifs >> cur;
        cout << cur << endl;
    }
}

int main()
{
    max_sum_div();
    return 0;
}
