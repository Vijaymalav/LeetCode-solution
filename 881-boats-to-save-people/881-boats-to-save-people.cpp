class Solution {
public:
       int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i=0,j=people.size()-1;
        int boats=1,count=0,peoplecount=0;
        while(i<=j){
            if(count+people[j]<=limit && peoplecount<2){
                count+=people[j];
                peoplecount++;//taking count of people in a boat
                j--;
            }
            else if(count+people[i]<=limit && peoplecount<2){
                count+=people[i];
                 peoplecount++;//taking count of people in a boat
                i++;
            }else{
                boats++;
                count=people[j];
                peoplecount=1;//taking count of people in a boat
                j--;
            }
        }
        return boats;
    }
};