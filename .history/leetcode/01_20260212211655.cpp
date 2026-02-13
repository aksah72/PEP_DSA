//https://leetcode.com/problems/gas-station/description/


class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int curr = 0,balance = 0,total = 0,start =0;
        int n = gas.size();
        for(int i  = 0;i<n;i++){
            balance = gas[i] - cost[i];
            total += balance;
            curr += balance;
            if(curr < 0){
                start = i+1;
                curr = 0;
            }
        }
        if(total < 0) return -1;
        return start;
        
    }
};



//https://leetcode.com/problems/boats-to-save-people/submissions/1917109207/



