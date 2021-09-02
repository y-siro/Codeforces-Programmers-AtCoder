int solution(vector<vector<int>> routes) {
    int cnt = 1;
    sort(routes.begin(), routes.end());
    int c=routes[0][1];
    for (int i = 0; i < routes.size() - 1; ++i) {
        if (c > routes[i][1]) {
            c = routes[i][1];
        }
        if (c < routes[i + 1][0]) {
            cnt++;
            c = routes[i + 1][1];
        }
    }
    return cnt;
}
