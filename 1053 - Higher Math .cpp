#include <bits/stdc++.h>
using namespace std;
bool work(int a, int b, int c)
{
    return ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (c * c + b * b == a * a));
}
int main()
{
    int t, a, b, c;
    int i = 1;
    for ((cin >> t); i <= t; i++)
    {
        cin >> a >> b >> c;
        cout << "Case " << i << ": " << (work(a, b, c) ? "yes\n" : "no\n");
    }
}
