class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n=seats.size(),j=0,fl=0,res=0;
        for(int i=0;i<n;i++)
        {
            if(seats[i]==1 && fl==0)
            {
                res=max(res,i);
                fl=1;
                j=i;
            }
            else if(seats[i]==1 && fl==1)
            {
                res=max(res,(i-j)/2);
                j=i;
            }
            if(i==n-1 && seats[i]==0)
              res=max(res,i-j);
        }
        return res;
    }
};
