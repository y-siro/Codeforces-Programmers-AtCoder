#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
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
ll K, len, cnt=0,sum;
string s;

ll stob(string str) {
	sum = 0;
	len = str.length();
	for (int i = 0; i < len; i++) {
		if (str[i] == '1') {
			sum += pow(2,(len - i - 1));
		}
	}

	return sum;
}

int main(void) {
	
	cin >> K;
	cin >> s;
	
	while (stob(s)>K) {
		len = s.length();
		for (int i = 0; i < len-1; i++) {
			if (s[i+1] == '1') {
				s.erase(s.begin() + i+1);
				cnt++;
				break;

			}
			if (i == len - 2) {
				s.erase(s.begin() + i+1);
				cnt++;
				break;
			}
		}
	}
	cout << cnt;
	return 0;
}

	
