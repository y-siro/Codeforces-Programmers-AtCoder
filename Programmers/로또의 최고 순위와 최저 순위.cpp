#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> answer;
int zcnt=0, cnt=0;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    sort(lottos.begin(), lottos.end());
    sort(win_nums.begin(), win_nums.end());
    
    for(int i=0;i<lottos.size();++i){
        if(lottos[i]==0) zcnt++;
    }    
    for(int i=0;i<lottos.size();++i){
        for(int j=0;j<win_nums.size();++j){
            if(lottos[i]==win_nums[j]) cnt++;
        }
    }    
    int max_val=cnt+zcnt;
    if(max_val>=2) answer.push_back(7-max_val);
    else answer.push_back(6);
    
    if(cnt>=2) answer.push_back(7-cnt);
    else answer.push_back(6);  
        
    return answer;
}
