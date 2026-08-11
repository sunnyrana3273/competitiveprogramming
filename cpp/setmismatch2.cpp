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
                res.push_back(sumOnetoN(nums.size()) - sumOfSet(seen));
            }
        }
    }

    int sumOfSet(set<int> a){
        int sum = 0;
        for (int i = 0; i < a.size(); i++){
            sum += a[i];
        }
        return sum;
    }

    int sumOneToN(int size){
        int sum = 0;
        for (int i = 1; i <= size; i++){
            sum += i;
        }
        return sum;
    }
};