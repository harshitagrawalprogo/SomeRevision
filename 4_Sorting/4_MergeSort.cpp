// merge sort

#include<bits/stdc++.h>
using namespace std;

void merge(int arr[] ,int start, int mid , int end ){
        int  u,v, n,k=0;
        n= end -start+1;

        int temp[n];
        u=start;
        v=mid+1;

        while(u<=mid && v<=end){
            if(arr[u] < arr[v]){
                temp[k]=arr[u];
                u++;
                k++;
            }
            else{
                temp[k]=arr[v];
                v++;
                k++;
            }
        }
        while (u<=mid)
        {
            temp[k]=arr[u];
                u++;
                k++;
        }
        while (v<=end)
        {
            temp[k]=arr[v];
                v++;
                k++;
        }
        for (int i = 0; i < n; i++)
        {
            arr[start+i]=temp[i];
        }
        

}

void mergeSort(int arr[], int n , int start, int end){
    if (start < end ){
        int mid = (start + end)/2 ;
        mergeSort(arr ,n , start , mid);
        mergeSort(arr ,n , mid + 1 , end);
        merge(arr , start , mid , end);
    }
}


int main(){
    int arr[10]={9,8,7,6,5,4,3,2,1,0};
    int n=10;
    mergeSort(arr , n , 0 , n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}