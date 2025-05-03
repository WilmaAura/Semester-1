#include <iostream>

using namespace std;
int a, b;
int sum;

main ()
{
    a = 1;
    do
    {
        sum = 0;
        b = 19 - a;
        do
        {
            cout << b << " ";
            sum = sum + b;
            b = b - 2;
        } while (b > 0);

    cout << " = " << sum << endl
    ;
    a = a + 1;
    }
    while (a < 19);

    return 0;

}
