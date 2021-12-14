#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void number_of_sums_div_30_not_farther_then_7(){
    ifstream ifs("data.txt");
    /*
    +1. ������� 6 ����� � ��������� �����
    +2. ��������� ��� ���� �� ��������� 30
    +3. ������� ��� ���� �����
    +4. �������� 5 ����� ���
    +5. ��������� 3 � 4 ������
    +6. ���������, ��� N ����� ���� ������ 6
    **/
    int N(0);
    int counter(0);
    ifs >> N;
    if (N>= 6){
        vector <int> snake(6);
        int head(5), tail(0);
        for (int i(0); i < 6; i++)
            ifs >> snake[i];
        for (int j(0); j<5; j++)
            for (int l(j); l < 6; l++)
                if ((snake[j] + snake[l]) % 30 == 0) counter++;
        for (int y(0); y < N-6; y++){
            if (head <5) head++;
            else head = 0;
            if (tail < 5) tail++;
            else tail = 0;
            ifs >> snake[head];
            for (int i(0); i<6; i++){
                if (i != head)
                    if ((snake[head] + snake[i]) % 30 == 0) counter++;
            }
        }
    }
    else{
        vector <int> numbers(N);
        for (int i(0); i < N; i++)
            ifs >> numbers[i];
        for (int j(0); j<N-1; j++)
            for (int l(j); l < N; l++)
                if ((numbers[j] + numbers[l]) % 30 == 0) counter++;
    }
    cout << counter << endl;
}

int main()
{
    number_of_sums_div_30_not_farther_then_7();
    return 0;
}
