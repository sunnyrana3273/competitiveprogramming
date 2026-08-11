#include <cmath>

class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {

        vector<int> result(nums.size());

        for (int i = 0; i < nums.size(); i++){
            int moves = abs(nums[i]);
            
            // right
            if (nums[i] > 0){
                // extends beyond right side of arr
                if (i + nums[i] > nums.size()){
                    /*
                    int temp = moves - ((nums.size() - 1) - i);
                    int index = (temp - 1) % nums.size();
                    result[i] = nums[index];
                    */
                    int temp = (nums.size()-1) - i;

                    for (int j = 0; j < nums.size(); j++){
                        
                    }
                    }
                } else {
                    result[i] = nums[i + moves];
                }
            }
            
            // left
            if (nums[i] < 0){
                // extends beyond left side of arr
                if (i + nums[i] < 0){
                    int temp = moves - i;
                    int index = nums.size();
                    result[i] = nums[index];
                } else {
                    result[i] = nums[i - moves];
                }             
            }
            
            //done
            if (moves == 0){
                result[i] = nums[i];
            }
        }

        return result;
    }
};