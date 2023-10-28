#include <bits/stdc++.h> 

int findSecondLargest(int n, vector<int> &arr)

{

    int maxi=INT_MIN;

    for(int i=0;i<arr.size();i++){

        maxi=max(maxi,arr[i]);

    }

    int ans=-1e9;

    for(int i=0;i<arr.size();i++){

        if(arr[i]<maxi){

            ans=max(ans,arr[i]);

        }

    }

    if(ans!=-1e9)   return ans;

    else return -1;

}