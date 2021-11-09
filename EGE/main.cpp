#include <iostream>

using namespace std;

void number_of_products_div()
{
/**
+1. считать число.
+2. добавить 1 в один из счётчиков
3. вычислить и вывести ответ n33*n11 + n33*n3 + n33*no + n33*(n33-1)/2 + n11*n3
*/
  int n(0), cur(0);
  int n33(0), n11(0), n3(0), no(0);

  cin >> n;
  for (int i(0); i < n; i++)
  {
      cin >> cur;
      if (cur%33 == 0) n33++;
      else if (cur%11 == 0) n11++;
      else if (cur%3 == 0) n3++;
  }
  no = n - n33 - n11 - n3;
  cout << n33 << " " << n11 << " " << n3 << " " << no << endl;
}

int main()
{
    number_of_products_div();
    return 0;
}
