class Solution {
public:
    int maximumPopulation(vector<vector<int>>& log) {
        int pop[101] = {0};
        for(int i=0;i<log.size();i++){
            for(int j=log[i][0];j<log[i][1];j++){
                pop[j-1950]++;
            }
        }
        int p=0,mxyr=1950;
        for(int i=0;i<101;i++){
            if(p<pop[i]){
                mxyr=(i+1950);
                p=pop[i];
            }
        }
        return mxyr;
    }
};