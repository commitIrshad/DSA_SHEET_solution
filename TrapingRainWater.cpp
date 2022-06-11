//LEECODE 42
// step 1: create lmax and rmax array.
// step 2: for each index element totalWaterHold will be min(rmax[i],lmax[i])-height[i]
// step 3: return the answer

class Solution {
public:
    int trap(vector<int>& height) {
     
        // prefind lmax and rmax for each index and store into array
        int n = height.size();
        int lmax[n] , rmax[n];
        long long totalWaterHold = 0;
       
        lmax[0] = height[0];
        for(int i=1; i<n; i++) {
            lmax[i] = max(height[i],lmax[i-1]);
        }
        
        rmax[n-1] = height[n-1];
        for(int i=n-2; i>=0; i--) {
            rmax[i] = max(height[i],rmax[i+1]);
        }
        
        for(int i=1; i<n-1; i++) {
         totalWaterHold = totalWaterHold + min(rmax[i],lmax[i]) - height[i] ;
        }
        
        return totalWaterHold;
    }
};
