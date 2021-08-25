#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int m_f = 0, cnt = 0;
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;

int solution(vector<vector<int>> jobs) { 
    int answer = 0;
    sort(jobs.begin(), jobs.end());
    while (!q.empty() || cnt < jobs.size()) {
        if (m_f >= jobs[cnt][0] && cnt < jobs.size()) {
            q.push(make_pair(jobs[cnt][1], jobs[cnt][0]));
            cnt++;
            continue;
        }

        else {
            if (!q.empty()) {
                m_f += q.top().first;
                answer += m_f - q.top().second;
                q.pop();
            }
            else {
                m_f = jobs[cnt][0];
            }
        }
    }

    answer /= jobs.size();
    return answer;
}

int main(void) {
    fast;
    // input func
    // 
    return 0;
}
