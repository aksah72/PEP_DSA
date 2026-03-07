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


class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int boat = 0;
        int n = people.size();
        int i = 0 , j= n-1;
        while(i<=j){
            int sum = people[i]+people[j];
            if(sum<=limit){
                i++;
                j--;
            }
            else j--;
            boat++;
        }
        return boat;
    }
};


//https://leetcode.com/problems/length-of-last-word/submissions/1919115615/


class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;
        int len = 0;

        while (i >= 0 && s[i] == ' ') i--;

        while (i >= 0 && s[i] != ' ') {
            len++;
            i--;
        }

        return len;
    }
};

//https://leetcode.com/problems/merge-two-sorted-lists/description/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (list1 && list2) {
            if (list1->val <= list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }

        if (list1) tail->next = list1;
        if (list2) tail->next = list2;

        return dummy.next;
    }
};

//https://leetcode.com/problems/summary-ranges/description

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        int n = nums.size();
        
        if(n == 0) return result;
        
        int i = 0;
        
        while(i < n) {
            int start = nums[i];
            
            while(i + 1 < n && nums[i + 1] == nums[i] + 1) {
                i++;
            }
            
            if(start == nums[i]) {
                result.push_back(to_string(start));
            } else {
                result.push_back(to_string(start) + "->" + to_string(nums[i]));
            }
            
            i++;
        }
        
        return result;
    }
};

//https://leetcode.com/problems/contains-duplicate-ii/description/?envType=problem-list-v2&envId=array 

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> s;
        
        for(int i = 0; i < nums.size(); i++){
            if(s.count(nums[i])) return true;
            
            s.insert(nums[i]);
            
            if(s.size() > k){
                s.erase(nums[i - k]);
            }
        }
        return false;
    }
};

//https://leetcode.com/problems/intersection-of-two-arrays/description/?envType=problem-list-v2&envId=array

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(), nums1.end());
        vector<int> ans;

        for(int x : nums2){
            if(s.count(x)){
                ans.push_back(x);
                s.erase(x);
            }
        }
        return ans;
    }
};

//https://leetcode.com/problems/range-sum-query-immutable/description/?envType=problem-list-v2&envId=array



//https://leetcode.com/problems/3sum/description/?envType=problem-list-v2&envId=array

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;

            int l = i + 1;
            int r = nums.size() - 1;

            while(l < r){
                int sum = nums[i] + nums[l] + nums[r];

                if(sum == 0){
                    ans.push_back({nums[i], nums[l], nums[r]});

                    while(l < r && nums[l] == nums[l+1]) l++;
                    while(l < r && nums[r] == nums[r-1]) r--;

                    l++;
                    r--;
                }
                else if(sum < 0) l++;
                else r--;
            }
        }

        return ans;
    }
};