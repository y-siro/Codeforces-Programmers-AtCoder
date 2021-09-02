/* complete cpp
*
*/

int idx = -1; char word=0;
string solution(string number, int k) {
    string answer = "";
    for (int i = 0; i < number.length() - k; ++i) {
        for (int j = idx + 1; j <= k + i; ++j) {
            if (word < number[j]) {
                idx = j;
                word = number[j];
            }
        }
        answer += word;
        word = 0;
    }
    return answer;
}

#################################################################################################################################################################################



/*
* incomplete cpp
*/

bool cmp(pair<int, char> a, pair<int, char> b) {
    if (a.second == b.second) return a.first > b.first;
    return a.second > b.second;
}
bool lc(pair<int, char> a, pair<int, char> b) {
    return a.first < b.first;
}
string solution(string number, int k) {
    string answer = "";
    vector<pair<int, char>> v;
    for (int i = 0; i < number.length(); ++i) {
        v.push_back(make_pair(i, number[i]));
    }
    int M = -1,idx;
    for (int i = 0; i < number.length()-k-1; ++i) {
        if (v[i].second - 48 > M) {
            M = v[i].second - 48;
            idx = i;
        }
    }
    for(int i=0;i<idx;++i){
        k--;

    cout << M << endl;
    sort(v.begin(), v.end(),cmp);
    while (k--) {
        v.erase(v.end());
    }
    sort(v.begin(), v.end(),lc);
    for (int i = 0; i < v.size(); ++i) {
        answer += v[i].second;
    }    
    return answer;
}
