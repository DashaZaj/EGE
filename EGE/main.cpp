#include <iostream>
#include <vector>

using namespace std;

void number_of_products_div()
{
     /**
     +1. ������� � ��������� �����
     +2. ������� ��� ���� �����
     +3. ������ ��� ������� ������������
     +4. ��������� ��������� ������������
     +5. ���������� � ������� ���������� ���������� ������������
     */
     int n(0);
     cin >> n;
     vector <int> numbers(n,0);
     for (int i(0); i < n; i++)
        cin >> numbers[i];

     int good_pairs(0);

     for (int j(0); j < n-1; j++)
        for (int i(j+1); i < n; i++)
        {
            int cur_sum(numbers[j] * numbers[i]);
            if ( cur_sum% 70 == 0)
              good_pairs++;
        }
     cout << good_pairs << endl;
}

int main()
{
    number_of_products_div();
    return 0;
}
