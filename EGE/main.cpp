#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void max_sum_div()
{
    ifstream ifs("data.txt");
    /**
    +1. ������� � ��������� ��� �����
    +2. ������� ��� ����
    +3. ������ ��� ������� �����
    +4. ��������� ��������� ����
    +5. ������� ������ ���������� �����
    */
    int n(0);
    ifs >> n;
    vector <int> numbers(n, 0);
    for (int i(0); i < n; i++)
        ifs >> numbers[i];
    int max_sum(0);
    for (int i(0); i < n-1; i++){
        for (int j(i+1); j<n; j++){
           int sum(numbers[i] + numbers[j]);
           if (sum%2 == 1 and sum > max_sum)
                max_sum = sum;
        }
    }
    if (max_sum != 0) cout << max_sum << endl;
    else cout << -1 << endl;
}

int main()
{
    max_sum_div();
    return 0;
}
