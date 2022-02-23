#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
 
vector<pair<char, int> > A;
int func(char c) {
	for (int i = 0; i < A.size(); ++i) {
		if (A[i].first == c) return A[i].second;
	}
 
	return -1;
}
 
int main(void) {
	fast;
 
	int t; cin >> t;
	while (t--) {
		string k, s; cin >> k >> s;
		
		for(int i=0;i<k.size();++i) A.push_back({ k[i], i + 1 });
 
		int ret = 0;
		for (int i = 0; i < s.size() - 1; ++i) {
			int a = func(s[i]), b = func(s[i + 1]);
			ret += abs(a - b);
		}
		cout << ret << '\n'; 
		A.clear(); 
	}
}
