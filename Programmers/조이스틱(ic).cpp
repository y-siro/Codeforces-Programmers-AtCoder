int solution(string name) {
    int answer = 0;
    int f = 1, l = name.length() - 1, fc = 0, lc=0;
    /*
    while (true) {
        if (name[f] == 'A') {
            f++; fc++;
        }
        else {
            break;
        }
    }
    while (true) {
        if (name[l] == 'A') {
            l--; lc++;
        }
        else {
            break;
        }
    }
    if (fc > lc) {
        while (true) {
            if (name[1] == 'A') {
                name.erase(name.begin() + 1);
            }
            else break;

        }
    }
    else {
        while (true) {
            if (name.back() == 'A') {
                name.erase(name.end());
            }
            else break;
        }
    }
    */
    int len = name.length();
    for (int i = 0; i < len; ++i) {
        int val = name[i] - 65;
        if (val > 13) {
            answer += 91 - name[i];
        }
        else {
            answer += name[i] - 65;
        }
        if (i != 0) answer++;
    }
    
    return answer;
}

// Unable to execute bidirectionalness in one direction
