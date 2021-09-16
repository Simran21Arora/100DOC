class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        
        int n=arr.size();
        
        int i,c=1,maxm=1,check=0;
        
        for(i=0;i<n-1;i++)
        {
            if((check==0 || check==1) && arr[i]>arr[i+1])
            {
                check=2;
                c++;
            }
            else if((check==0 || check==2) && arr[i]<arr[i+1])
            {
                check=1;
                c++;
            }
            else
            {
                maxm=max(c,maxm);
                
                if(arr[i]!=arr[i+1])
                    i--;
                
                c=1;
                check=0;
            }
        }
        
        return max(maxm,c);
    }
};
