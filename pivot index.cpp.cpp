#include<iostream>
using namespace std;

int pivot(int arr[], int n){
    int s=0;
    int e= n-1;
    
    int mid = s+(e-s)/2;  // i have find mid
    
    while(s<e){
        
        if(arr[mid]>=arr[0]){
            s=mid+1;  // mid to next
            
        } else{
            e= mid;
        }
        
        mid = s+(e-s)/2; //  i have updated mid 
        
        }
        return s;
}

 int main(){
     
     
      int arr[5]={3,8,1,17,15};
      cout<<" pivot is "<<pivot(arr,5)<<endl;
 }