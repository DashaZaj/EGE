#include <iostream>

using namespace std;

void number_of_products_div()
{
/**
+1. считать число.
+2. добавить 1 в один из счётчиков
+3. вычислить и вывести ответ n70*n14 + n70*n35 + n70*n10 + n70*n7 + n70*n5 + n70*n2 + n70*no+ n70*(n70-1)/2 + n10*n7 + n35*n2 + n14*n5 + n10*n35 + n10*n14 + n35*n14
*/
  int n(0), cur(0);
  int n70(0), n35(0), n10(0), n14(0), n7(0), n5(0), n2(0), no(0);

  cin >> n;
  for (int i(0); i < n; i++)
  {
      cin >> cur;
      if (cur%70 == 0) n70++;
      else if (cur%35 == 0) n35++;
      else if (cur%14 == 0) n14++;
      else if (cur%10 == 0) n10++;
      else if (cur%7 == 0) n7++;
      else if (cur%5 == 0) n5++;
      else if (cur%2 == 0) n2++;
  }
  no = n - n70 - n35 - n14 - n10 - n7 - n5 - n2;
  cout << n70*n14 + n70*n35 + n70*n10 + n70*n7 + n70*n5 + n70*n2 + n70*no+ n70*(n70-1)/2 + n10*n7 + n35*n2 + n14*n5 + n10*n35 + n10*n14 + n35*n14 << endl;
}

int main()
{
    number_of_products_div();
    return 0;
}
