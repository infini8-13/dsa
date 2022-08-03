#include<iostream>
using namespace std;

int largestSubarrayssum(int arr[], int n){
  //Brute force approach,time complexity O(n^3).
  int maxsum = 0;
  for(int i = 0; i<n; i++){
     for(int j = 0; j<n; j++){
       int sum = 0; 
       for(int k = i; k<=j; k++){
	 sum+=arr[k];
       }
       maxsum = max(maxsum,sum);
     }
  }
  return maxsum;
}

int main(){

  int arr[] = {10,20,30,40,50,60};
  int n = sizeof(arr)/sizeof(int);

  cout<<largestSubarrayssum(arr,n)<<endl;
  
  return 0;
}
