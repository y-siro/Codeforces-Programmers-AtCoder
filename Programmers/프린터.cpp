#include <string>
#include <vector>
#include <queue>
#define mp make_pair
#define pq priority_queue<int,vector<int>,less<int>>
using namespace std;

int idx,val,cnt=0;
queue<pair<int,int>> q;
pq qq;
int solution(vector<int> priorities, int location) {
    int answer = 0;
    for(int i=0;i<priorities.size();++i){
    	q.push(mp(i,priorities[i]));
    	qq.push(priorities[i]);
    }
    
    while(!q.empty()){
    	idx = q.front().first;
    	val = q.front().second;
    	q.pop();
    	if(qq.top() == val){
    		qq.pop();
    		cnt++;
    		if(idx==location){
    			answer = cnt;
    			break;
    		}
    	}
    	else q.push(mp(idx,val));
    }
    
    return answer;
}
