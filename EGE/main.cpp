#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void num_three_prod_div_4(){
    ifstream cin("data.txt");
    /*
    ����������� ���������� ����� ��������� ���������, ������������ ������� ������� �� 4.
    +1. ������� ����� � ������
    +2. ������� ��� ��������� ���� ����� ��� ����� �������
    3. ������� ��� ������ ����� ��� ����� �������
    4. ������� ������ ������, ������������ ������ ������� ������ 4
    5. ���������� � ������� �� ����������
    **/
    int N(0);
    cin >> N;
    vector <int> numbers(N, 0);
    for (int i(0); i < N; i++)
        cin >> numbers[i];
    for (int i(0); i < N-1; i++){
        for (int j(i+1); j< N; j++)
            cout << numbers[i] << " " << numbers[j] << endl;
    }
}

int main()
{
    num_three_prod_div_4();
    return 0;
}
