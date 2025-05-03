#include <iostream>

//Program
/*\
- 3 + 26 - 6 + 24 - 9 + 22 - 12 + 20 - 15 + 18 - 18 + 16 - 21 + 14 - 24 + 12 - 27 + 10 =
*/
using namespace std;
int a, b, c, sum;

int main ()
{
a = -3;
b = 26;
c = 0;
sum = 0;
do
{
   if (c % 2 == 0)
   {
     cout << b << " ";
     sum += b;
     b = b - 2;

   }
   else
   {
    cout << a << " " ;
    sum += a;
    a = a - 3;

   }
c++;
}
while(a >= -27 && b > 0);

cout << " = " << sum << endl;
return 0;
}
