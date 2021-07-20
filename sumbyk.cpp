class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size() ;
        map<int,int> m; 
        vector<int> rem(n,0) ;
        for(int i = 0; i < n; i++)
        {
            if(i!=0)
            {
                nums[i] += nums[i-1] ;
                
            }
            rem[i] = nums[i]%k ;
            if(rem[i]<0){
                rem[i] = rem[i] + k ;
            }
        }
        int cnt = 0; 
        
        for(int i= 0 ; i < n; i++)
        {
            cout << rem[i] << " " ;
            if(m.count(rem[i]))
            {
                cnt+= m[rem[i]] ;
            }
            m[rem[i]]++ ;
        }
        return cnt+m[0] ;
    }
};