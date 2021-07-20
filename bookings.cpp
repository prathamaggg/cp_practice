class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        int l = bookings.size() ;
        vector<int> v(n+1) ;
        
        for(int i = 0; i < l; i++)
        {
            v[bookings[i][0]] += bookings[i][2] ;
            if(bookings[i][1]+1>n){continue ;}
            v[bookings[i][1]+1]-=bookings[i][2] ;
        }
        vector<int> ans(n,0) ;
        for(int i = 0;i<n;i++)
        {
            cout << v[i] << " " ;
            ans[i] = v[i+1] ;
        }
        for(int i = 1; i < n; i++ )
        {
            ans[i]+=ans[i-1] ;
        }
        
        return ans ;
    }
};