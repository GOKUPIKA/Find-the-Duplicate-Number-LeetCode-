// FIND THE DUPLICATE NUMBER

#include<bits/stdc++.h>
using namespace std;

// making the function 
int duplicate(vector<int>&nums){
    int n=nums.size();

    // declaring and initialising the array of n+1 to store the count    
    int arr[n+1];    
    for(int i=0;i<n+1;i++){
        arr[i]=0;
    }
    for(int i=0;i<nums.size();i++){
        arr[nums[i]]++;
    }
    int ans=0;
    // checking for the duplicate number
    for(int i=0;i<n+1;i++){
        if(arr[i]>1){
            ans=i;
            break;
        }
    }
    return ans;
}

int main()
{
    vector<int> vect{3,1,3,4,2};
    cout<<" The duplicate value: "<<duplicate(vect);    
}