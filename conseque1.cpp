class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n  = nums.size() ;
        int i =0 , j= 0; int cnt =0 ; int maxi = -1 ;
        while(i<n)
        {
            if(nums[i]==0)
            {
                cnt++ ;
            }
            while(cnt>k)
            {
                if(nums[j]==0){
                    cnt-- ;
                }
                j++ ;
            }
            maxi = max(maxi,i-j+1) ;  
            i++ ;
            // if(nums[i]==1&&cnt<=k&&i<n)
            // {
            //     i++ ;
            // }else if(nums[i]==0&&cnt<=k&&i<n)
            // {
            //     i++ ; cnt++ ;
            // }else if(nums[i]==0&&cnt>k&&i<n&&j<n){
            //     maxi = max(maxi,i-j+1) ;
            //     if(nums[j]==0){cnt-- ;} j++ ;
            // }
            
        }
        cout << maxi << endl ;
        return maxi;
    }
};