#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long 
 
ll x, n;
 
int main(void) {
	fast;
 
	ll t; cin >> t;
	while (t--) {
		cin >> x >> n;
		if (n == 0) {
			cout << x << '\n'; continue;
		}
 
		ll res = n % 4;
		if (x % 2 == 0) {
			if (res == 0) {
				cout << x << '\n'; continue;
			}
			else if (res == 1) {
				cout << x - n << '\n'; continue;
			}
			else if (res == 2) {
				cout << x + 1<<'\n'; continue;
			}
			else if (res == 3) {
				cout << x + n + 1 << '\n'; continue;
			}
		}
		else {
			if (res == 0) {
				cout << x << '\n'; continue;
			}
			else if (res == 1) {
				cout << x + n << '\n'; continue;
			}
			else if (res == 2) {
				cout << x - 1 << '\n'; continue;
			}
			else if (res == 3) {
				cout << x - n - 1 << '\n'; continue;
			}
		}
	}
}
