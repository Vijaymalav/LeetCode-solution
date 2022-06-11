#include<bits/stdc++.h>
class Solution {
public:
     int minOperations(vector<int>& num, int x) {
          int size = num.size();
          int total = 0;
          int len = 0;
          for(int i : num) total += i;
          if(total == x) return size;
          int nd = total - x;
          int i = 0 , j = 0;
          int sum = 0;
          while( j < size ) {
                sum += num[j];  
                while(i < j && sum > nd){
                        sum -= num[i++];
                }
                if(sum == nd){
                    
                    len = max(len, j-i+1);
                }
                j++;
          } 
          if(len == 0) return -1;  
          return size-len;
    }
};