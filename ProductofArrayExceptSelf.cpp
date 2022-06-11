// CONTAINS ONLY FUNCTION PART
// LEETCODE 238 : Product of Array Except Self

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        //step1: create right array[]
        //step2: maintain a int mult variable
        //step3: create result array which carries 
                // product of mult and right[i+1] & update mult=mult*arr[i]
        //step4: fill the last index of result[n-1]=mult
        //step5: return result
        
        int n = nums.size();
        int mult = 1;
        vector<int> rightArray(n);
        
        for(int i=n-1; i>=0; i--){
            mult *= nums[i];
            rightArray[i] = mult;
        }
        
        mult = 1;
        vector<int> result(n);
        for(int i=0; i<n-1; i++) {
            
            result[i] = mult * rightArray[i+1];
            mult *= nums[i];
        }
       result[n-1] = mult;
      
        return result;
    }
};
