#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void sum_div_30_not_farther_then_7(){
    ifstream ifs("data.txt");
    /**
    +1. ������� ����� � ������
    +2. ������� ��� ���� �� ���������� ������, ��� ����
    +3. ������� ����, ������� 30
    +4. ������� ���������� ���
    */
    int n(0);
    ifs >> n;
    vector <int> numbers(n, 0);
    for (int i(0); i < n; i++)
        ifs >> numbers[i];
    int counter(0);
    for (int i(0); i < n; i++){
        for (int j(i+1); j< i+7 and j<n; j++){
            int par = numbers[i] + numbers[j];
            if (par % 30 == 0) counter ++;
        }
    }
    cout << counter << endl;
}

int main()
{
    sum_div_30_not_farther_then_7();
    return 0;
}
