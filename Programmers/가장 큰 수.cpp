#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> v;
bool cmp(string a, string b) {
    if (a + b > b + a) return true;
    else return false;
}
string solution(vector<int> numbers) {
    string answer = "";
    for (int i = 0; i < numbers.size(); ++i) v.push_back(to_string(numbers[i]));
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); ++i) answer += v[i];
    if (answer.front() == '0') return "0";    
    return answer;
}
