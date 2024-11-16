#include <iostream>
using namespace std;
int revnumber(int n)
{
    int rev = 0;
    while (n != 0)
    {
        int temp = n % 10;

        rev = rev * 10 + temp;
        n = n / 10;
    }
    return rev;
}
int main()
{
    int n;
    cin >> n;
    int reverse = revnumber(n);
    cout << reverse;

    return 0;
}
