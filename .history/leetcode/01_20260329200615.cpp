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

class NumArray {
public:
    vector<int> prefix;

    NumArray(vector<int>& nums) {
        prefix.resize(nums.size() + 1);
        prefix[0] = 0;
        for(int i = 0; i < nums.size(); i++)
            prefix[i + 1] = prefix[i] + nums[i];
    }
    
    int sumRange(int left, int right) {
        return prefix[right + 1] - prefix[left];
    }
};

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

//https://leetcode.com/problems/pascals-triangle/?envType=problem-list-v2&envId=array

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;

        for(int i = 0; i < numRows; i++){
            vector<int> row(i + 1, 1);

            for(int j = 1; j < i; j++){
                row[j] = res[i-1][j-1] + res[i-1][j];
            }

            res.push_back(row);
        } 

        return res;
    }
};


//https://leetcode.com/problems/partition-labels/description/

vector<int> partitionLabels(string s){
    vector<int> last(26);

    for(int i=0;i<s.size();i++)
        last[s[i]-'a']=i;

    vector<int> ans;
    int start=0,end=0;

    for(int i=0;i<s.size();i++){
        end=max(end,last[s[i]-'a']);
        if(i==end){
            ans.push_back(end-start+1);
            start=i+1;
        }
    }

    return ans;
}

//https://leetcode.com/problems/sort-list/description/?envType=problem-list-v2&envId=merge-sort

class Solution {
public:
    ListNode* merge(ListNode* l1, ListNode* l2){
        ListNode dummy(0);
        ListNode* tail = &dummy;

        while(l1 && l2){
            if(l1->val < l2->val){
                tail->next = l1;
                l1 = l1->next;
            } else {
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }

        if(l1) tail->next = l1;
        else tail->next = l2;

        return dummy.next;
    }

    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;

        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* mid = slow->next;
        slow->next = NULL;

        ListNode* left = sortList(head);
        ListNode* right = sortList(mid);

        return merge(left,right);
    }
};

//https://leetcode.com/problems/merge-k-sorted-lists/description/?envType=problem-list-v2&envId=heap-priority-queue

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
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> res;
        int n = lists.size();
        for(int i=0;i<n;i++){
            while(lists[i]){
                res.push_back(lists[i]->val);
                lists[i] = lists[i]->next;
            }
        }
        sort(res.begin(),res.end());
        ListNode* ans = new ListNode(-1);
        ListNode* curr = ans;
        for(int i : res){
            ans->next = new ListNode(i);
            ans = ans->next;
        }
        return curr->next;
        
    }
};

//https://leetcode.com/problems/container-with-most-water/description/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0,end=height.size()-1;
        int ans = 0;
        while(start<end){
            int dist = end-start;
            int p = min(height[start],height[end]);
            ans = max(ans,dist*p);
            if(height[start]<height[end]) start++;
            else end--;
        }
        return ans;
    }
};

//https://leetcode.com/problems/sort-colors/description/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start=0,mid=0,end=nums.size()-1;
        while(mid<=end){
            if(nums[mid]==0){
                swap(nums[start],nums[mid]);
                start++;
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[end]);
                end--;
            }
            else{
                mid++;
            }
        }
    }
};


//https://leetcode.com/problems/rotate-list/description/?envType=problem-list-v2&envId=two-pointers

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
    ListNode* solve(ListNode* head){
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp->next != NULL){
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL; 
        temp->next = head;
        head = temp;
        return head; 
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next == NULL) return head;

        ListNode* temp = head;
        ListNode* curr = head;
        int cnt = 0;

        while(curr){
            curr = curr->next;
            cnt++;
        }
        while(k>cnt){
             k = k%cnt;
        }
        while(k--){
            temp = solve(temp);
        }
        return temp;
    }
};

//https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/description/?envType=problem-list-v2&envId=two-pointers


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for(int num : nums){
            if(i < 2 || num != nums[i-2]){
                nums[i] = num;
                i++;
            }
        }
        return i;
    }
};


//https://leetcode.com/problems/happy-number/description/?envType=problem-list-v2&envId=two-pointers

class Solution {
public:
    long long product(int n){
        long long p =1;
        p = n*n;
        return p;
    }
    int happy(int n){
        int num =n;
        int sum = 0;
        while(num>0){
            int d = num % 10;
            sum += product(d);
            num = num/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        set<int>s;
        int ans = happy(n);
        s.insert(ans);
        while(ans>0){
            ans = happy(ans);
            if(s.find(ans) != s.end()) break;
            s.insert(ans);
            
        }
        if(ans==1) return true;
        return false;
    }
};

//https://leetcode.com/problems/3sum/description/?envType=problem-list-v2&envId=two-pointers

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


//https://leetcode.com/problems/middle-of-the-linked-list/description/?envType=problem-list-v2&envId=two-pointers

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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
    }
};

//https://leetcode.com/problems/sort-array-by-parity/description/?envType=problem-list-v2&envId=two-pointers

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;
        
        while(i < j){
            if(nums[i] % 2 > nums[j] % 2){
                swap(nums[i], nums[j]);
            }
            
            if(nums[i] % 2 == 0) i++;
            if(nums[j] % 2 == 1) j--;
        }
        
        return nums;
    }
};

//https://leetcode.com/problems/pascals-triangle-ii/description/

class Solution {
public:
vector<int> getRow(int rowIndex) {
vector<int> res(rowIndex + 1);
res[0] = 1;

```
    for(int i = 1; i <= rowIndex; i++) {
        res[i] = (long long)res[i - 1] * (rowIndex - i + 1) / i;
    }
    
    return res;
}
```

};


//https://leetcode.com/problems/3sum-closest/description/?envType=problem-list-v2&envId=two-pointers

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int res = nums[0] + nums[1] + nums[2];
        for(int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;
            while(left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if(abs(target - sum) < abs(target - res)) {
                    res = sum;
                }
                if(sum < target) left++;
                else if(sum > target) right--;
                else return sum;
            }
        }
        return res;
    }
};
  
//https://leetcode.com/problems/symmetric-tree/description/?envType=problem-list-v2&envId=binary-tree

class Solution {
public:
    bool isMirror(TreeNode* left, TreeNode* right){
        if(left == NULL && right == NULL) return true;
        if(left == NULL || right == NULL) return false;
        if(left->val != right->val) return false;
        return isMirror(left->left, right->right) && 
               isMirror(left->right, right->left);
    }

    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return isMirror(root->left, root->right);
    }
};


//https://leetcode.com/problems/reverse-only-letters/submissions/1961787358/?envType=problem-list-v2&envId=two-pointers

class Solution {
public:
    string reverseOnlyLetters(string s) {
        int left = 0, right = s.size() - 1;
        
        while (left < right) {
            if (!isalpha(s[left])) {
                left++;
            } else if (!isalpha(s[right])) {
                right--;
            } else {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        } 
        
        return s;
    }
};


class Solution {
public:
    int countBinarySubstrings(string s) {
        int prev = 0, curr = 1, ans = 0;
        
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1]) {
                curr++;
            } else {
                ans += min(prev, curr);
                prev = curr;
                curr = 1;
            }
        }
        
        ans += min(prev, curr);
        return ans;
    }
};
