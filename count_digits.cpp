#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int countdigit(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        n = n / 10;
        cnt++;
    }
    return cnt;
}
int countdigit_method2(int n)
{
    int cnt = (int)(log10(n) + 1);

    return cnt;
}
int main()
{
    int n;
    cin >> n;
    int digit = countdigit(n);
    int digit2 = countdigit_method2(n);
    cout << digit << endl;
    cout << digit2 << endl;
    return 0;
}