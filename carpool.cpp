class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int n = trips.size() ;
        vector<int> v(1001,0) ;
        
        for(int i = 0; i < n; i++)
        {
            v[trips[i][1]] += trips[i][0] ;
            v[trips[i][2]] -= trips[i][0] ;
        }
        for(int i = 0; i<1001 ;i++)
        {
            capacity-=v[i] ;
            if(capacity<0){
                return false ;
            }
        }
        return true ;
        // int pre = 0 , end =0 ; int cnt = 0; 
        // for(auto x : m)
        // {
        //     cout << x.first.first << " " << x.first.second << " " << x.second << endl ;
        //     if(x.first.first>=end)
        //     {
        //         cout << "hello" << endl;
        //         pre  = x.first.first ;
        //         end = x.first.second ;
        //         cnt = x.second; 
        //     }else{
        //         if((cnt+x.second)>capacity)
        //         {
        //             cout <<"garg" ;
        //             return false ;
        //         }else{
        //             cout << "pratham" ;
        //             pre  = x.first.first ;
        //             end = x.first.second ;
        //             cnt += x.second ;
        //         }
        //     }
        // }
        // return true ;
    }
};