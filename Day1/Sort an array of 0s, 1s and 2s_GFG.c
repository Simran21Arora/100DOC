//Sort an array of 0s, 1s and 2s

// { Driver Code Starts
//Initial Template for C

#include <stdio.h>

 // } Driver Code Ends
//User function Template for C

void sort012(int a[], int n)
{
    int c1=0,c2=0,c3=0;
    
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            c1++;
        }
        else if(a[i]==1)
        {
            c2++;
        }
        else if(a[i]==2)
        {
            c3++;
        }
    }
    
    for(int i=0;i<c1;i++)
    {
        a[i]=0;
    }
    
        
    for(int i=c1;i<c1+c2;i++)
    {
        a[i]=1;
    }
    
        
    for(int i=c1+c2;i<n;i++)
    {
        a[i]=2;
    }
    
}

// { Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends
