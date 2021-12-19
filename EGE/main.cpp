#include <iostream>
#include <vector>

using namespace std;

void number_of_sums_div_30_not_farther_then_7(){
    /*
    +1. считать 6 чисел в цикличный буфер
    +2. проверить все пары на кратность 30
    +3. считать ещё одно число
    +4. проверит 5 новых пар
    +5. повторять 3 и 4 пункты
    +6. вспомнить, что N может быть меньше 6
    **/
    int N(0);
    int counter(0);
    cin >> N;
    if (N>= 7){
        vector <int> snake(7);
        int head(6), tail(0);
        for (int i(0); i < 7; i++)
            cin >> snake[i];
        for (int j(0); j<6; j++)
            for (int l(j+1); l < 7; l++)
                if ((snake[j] + snake[l]) % 30 == 0) counter++;
        for (int y(0); y < N-7; y++){
            if (head <6) head++;
            else head = 0;
            if (tail < 6) tail++;
            else tail = 0;
            cin >> snake[head];
            for (int i(0); i<7; i++){
                if (i != head){
                    if ((snake[head] + snake[i]) % 30 == 0) counter++;
                }
            }
        }
    }
    else{
        vector <int> numbers(N);
        for (int i(0); i < N; i++)
            cin >> numbers[i];
        for (int j(0); j<N-1; j++)
            for (int l(j+1); l < N; l++)
                if ((numbers[j] + numbers[l]) % 30 == 0) counter++;
    }
    cout << counter << endl;
}

int main()
{
    number_of_sums_div_30_not_farther_then_7();
    return 0;
}
