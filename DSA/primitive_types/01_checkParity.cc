#include <iostream>
using namespace std;

int checkParity(unsigned long long n)
{
    int cnt = 0;
    while (n > 0)
    {
        if (n & 1)
            cnt++;
        n = n >> 1;
    }
    if (cnt % 2 == 0)
        return 0;
    else
        return 1;
}

int checkParity2(unsigned long long n)
{
    int res = 0;
    while (n > 0)
    {
        if (n & 1)
            res++;
        n = n & (n - 1);
    }
    return res & 1;
}
int main()
{
    unsigned long long n;
    cin >> n;
    cout << checkParity2(n) << endl;
}