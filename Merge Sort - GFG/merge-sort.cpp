//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int as=m-l+1,bs=r-m;
         int a[m-l+1],b[r-m];
         for(int i=l;i<=m;i++){
             a[i-l]=arr[i];
         }
             for(int i=m+1;i<=r;i++){
             b[i-m-1]=arr[i];
         }
         int k=l;
         int i=0,j=0;
         while(i<as and j<bs){
             if(a[i]<b[j]){
                 arr[k]=a[i];
                 i++;
                 k++;
             }
             else {
                 arr[k]=b[j];
                 k++;
                 j++;
             }
         }
         while(i<as)arr[k++]=a[i++];
         while(j<bs)arr[k++]=b[j++];
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l>=r)return;
        int mid=l+(r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends