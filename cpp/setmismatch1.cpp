#include <set>
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        set<int> seen;

        vector<int> res;

        for (int i = 0; i < nums.size(); i++){
            if (!seen.count(nums[i])){
                seen.insert(nums[i]);
            } else {
                res.push_back(nums[i]);
            }
        }

    
        for (int i = 1; i <= nums.size(); i++){
            if (!seen.count(i)){
                res.push_back(i);
            }
        }
        
        return res;
    }   
};