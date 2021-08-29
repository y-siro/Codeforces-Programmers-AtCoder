int cnt;
const int M = 100;
queue<int> q;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;    
    for(int i=0;i<speeds.size();++i){
    	if((M-progresses[i])%speeds[i]==0) q.push((M-progresses[i])/speeds[i]);
    	else q.push(((M-progresses[i])/speeds[i])+1);
    }
    
    while(!q.empty()){
    	cnt=1;
    	int ch=q.front();
    	q.pop();
    	while(true){
    		if(q.front<=ch && !q.empty()){
    			cnt++;
    			q.pop();
    		}
    		else break;
    	}
    	answer.push_back(cnt);
    }
    
    return answer;
}

//main - input
