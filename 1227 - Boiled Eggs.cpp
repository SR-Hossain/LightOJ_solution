#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n, p, q;
        cin >> n >> p >> q;
        int cnt = 0;
        int pp = p;
        int qq = q;
        while (n--)
        {
            int k;
            cin >> k;
            qq -= k;
            pp--;
            if (pp == -1 or qq < 0)
                break;
            else cnt++;
        }
        while(n-- > 0){  // you have to take all inputs
            cin>>p;
        }
        cout << "Case " << i << ": " << cnt << '\n';
    }
}
