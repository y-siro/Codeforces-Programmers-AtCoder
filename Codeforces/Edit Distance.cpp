#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define pb push_back
#define mp make_pair
#define vc vector
#define vi vector<int>
#define vl vector<ll>
#define pq priority_queue<int,vector<int>,less<int>>
#define pql priority_queue<int,vector<int>,greater<int>>
#define pi pair<int,int>
#define pr pair<ll,ll>
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v))
#define F first
#define S second
#define endl "\n"
typedef long long int ll;
int s, cnt = 0;
string str;
int main(void) {
	fast;
	cin >> str;
	s = str.length();

	for (int i = 0; i < s; i++) {
		if (str[i] != '0') {
			cnt--;
		}
		else {
			cnt++;
		}
	}

	if (cnt > 0) {
		for (int i = 0; i < s; i++) {
			cout << "1";
		}
	}
	else if(cnt==0){
		if (str.front() == '0') cout << "1";
		else cout << "0";

		cout << string(s - 1, str.front());
	}			
	else {
		for (int i = 0; i < s; i++) {
			cout << "0";
		}
	}

	return 0;
}
