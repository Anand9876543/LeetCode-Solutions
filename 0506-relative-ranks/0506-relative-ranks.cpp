class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<pair<int,int>> athletes(n);
        for(int i=0;i<n;++i){
            athletes[i]={score[i],i};
        }
        sort(athletes.rbegin(),athletes.rend());
        vector<string> answer(n);
        for(int i=0;i<n;++i){
            int ogInx=athletes[i].second;
            if(i==0){
                answer[ogInx]="Gold Medal";
            }else if(i==1){
                answer[ogInx]="Silver Medal";
            }else if(i==2){
                answer[ogInx]="Bronze Medal";
            }else{
                answer[ogInx]=to_string(i+1);
            }
        }
        return answer;
    }
};