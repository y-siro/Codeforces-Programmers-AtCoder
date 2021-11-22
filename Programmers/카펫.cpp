#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int sb=brown-4;
    vector<int> imp;
    for(int i=1;i<=yellow;++i){
        if(yellow%i==0) imp.push_back(i);
    }
    for(int i=imp.size()-1;i>=0;--i){
        for(int j=0;j<imp.size();++j){
            if(imp[i]*imp[j]==yellow and 2*imp[i]+2*imp[j]==sb){
                answer.push_back(imp[i]+2);
                answer.push_back(imp[j]+2);
                return answer;
            }
        }
    }
    return answer;
}
