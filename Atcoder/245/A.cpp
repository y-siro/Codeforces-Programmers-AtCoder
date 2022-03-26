#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
 
int main(void) {
	fast;
	int a, b, c, d; cin >> a >> b >> c >> d;
	if (a == 0 and b == 0) {
		cout << "Takahashi"; return 0;
	}
	a *= 60; c *= 60;
	a += b; c += d;
	// cout << a << ' ' << c << '\n';
 
	if (a <= c) cout << "Takahashi";
	else cout << "Aoki";
}
