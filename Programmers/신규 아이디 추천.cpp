#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

string solution(string new_id) {
    string answer = "";
    // stage 1 : 대문자를 소문자로 치환하기
    for(int i=0;i<new_id.size();++i){
        if(new_id[i]>='A' and new_id[i]<='Z') new_id[i]-='A'-'a';
    }

    // stage 2 : 지정 문자 제외하고 제거하기
    for(int i=0;i<new_id.size();++i){
        if(!(new_id[i]>='a' and new_id[i]<='z') and !(new_id[i]>='0' and new_id[i]<='9') and new_id[i]!='-' and new_id[i]!='_' and new_id[i]!='.'){
            new_id.erase(i--,1);
        }
    }

    // stage 3 : 마침표 연속 시 한개 로 치환
    for(int i=0;i<new_id.size();++i){
        if(new_id[i]=='.'){
            for(int j=i+1;;++j){
                if(new_id[j]=='.') new_id.erase(j--,1);
                else break;
            }
        }
    }

    // stage 4 : 시작, 끝 마침표 확인
    while(new_id.front()=='.'){
        new_id.erase(0,1);
    }
    while(new_id.back()=='.'){
        new_id.erase(new_id.size()-1,1);
    }

    // stage 5 : 빈 문자열일 시, a를 대입
    if(new_id.size()==0) new_id+='a';

    // stage 6 : 문자열 길이가 16자 이상이라면 15 이후 다 제거, stage 4 실행
    if(new_id.size()>15) new_id.erase(15,new_id.size()-15);
    while(new_id.back()=='.'){
        new_id.erase(new_id.size()-1,1);
    }

    // stage 7
    if(new_id.size()<=2){
        while(new_id.size()!=3){
            new_id+=new_id.back();
        }
    }

    for(int i=0;i<new_id.size();++i){
        answer+=new_id[i];
    }
    return answer;
}
