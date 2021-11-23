#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// 모의고사 - 완전 탐색

vector<int> solution(vector<int> answers) {
    vector<int> answer, v1, v2, v3;
    int c1=0, c2=0, c3=0,max_cnt=-1e9;
    v1.resize(10001); v2.resize(10001); v3.resize(10001);
    for(int i=1;i<=10000;++i){
        if(i%10==1) {
            v1[i]=1; v3[i]=3;
        }
        else if(i%10==2){
            v1[i]=2; v3[i]=3;
        }
        else if(i%10==3){
            v1[i]=3; v3[i]=1;
        }
        else if(i%10==4){
            v1[i]=4; v3[i]=1;
        }
        else if(i%10==5){
            v1[i]=5; v3[i]=2;
        }
        else if(i%10==6){
            v1[i]=1; v3[i]=2;
        }
        else if(i%10==7){
            v1[i]=2; v3[i]=4;
        }
        else if(i%10==8){
            v1[i]=3; v3[i]=4;
        }
        else if(i%10==9){
            v1[i]=4; v3[i]=5;
        }
        else if(i%10==0){
            v1[i]=5; v3[i]=5;
        }
        if(i%8==1) v2[i]=2;
        else if(i%8==2) v2[i]=1;
        else if(i%8==3) v2[i]=2;
        else if(i%8==4) v2[i]=3;
        else if(i%8==5) v2[i]=2;
        else if(i%8==6) v2[i]=4;
        else if(i%8==7) v2[i]=2;
        else if(i%8==0) v2[i]=5;
    }

    for(int i=1;i<=answers.size();++i){
        if(answers[i]==v1[i]) c1++;
        if(answers[i]==v2[i]) c2++;
        if(answers[i]==v3[i]) c3++;
    }
    max_cnt=max(c1,max(c2,c3));
    if(max_cnt==c1) answer.push_back(c1);
    if(max_cnt==c2) answer.push_back(c2);
    if(max_cnt==c3) answer.push_back(c3);
    return answer;
}
