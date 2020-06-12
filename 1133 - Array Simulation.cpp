#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t, n, m;
	char choice;
	long long int x, y;
	cin >> t;
	for (int cs = 1; cs <= t; cs++) {
		cin >> n;
		cin >> m;
		vector<long long int> a(n);
        a.reserve(n);
		for (int i = 0; i < n; i++) {
            long long int kk;
			cin >> kk;
            a[i] = kk;
		}
		for (int k = 0; k < m; k++) {
			cin >> choice;
			switch(choice) {
				case 'S': 
					cin >> x;
					for (int i = 0; i < n; i++) {
						a[i] += x;
					}
					break;
				case 'M': 
					cin >> x;
					for (int i = 0; i < n; i++) {
						a[i] *= x;
					}
					break;
				case 'D': 
					cin >> x;
					for (int i = 0; i < n; i++) {
						a[i] /= x;
					}
					break;
				case 'R': 
					for (int i = 0, j = n-1; i < j; i++, j--) {
						swap(a[i], a[j]);
					}
					break;
				case 'P': 
					cin >> x;
					cin >> y;
					swap(a[x], a[y]);
					break;
			}
		}	
		printf("Case %d:\n", cs);
		for (int i = 0; i < n; i++) {
			cout<<a[i];
			if(i != n-1)cout<<' ';
		}
        cout<<'\n';
	}
}
