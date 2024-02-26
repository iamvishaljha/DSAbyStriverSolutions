// Finding largest from an array

#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int>& arr, int n){
    int largest=INT32_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest)
        largest=arr[i];
    }
    return largest;

}
int main(){

    vector<int> arr;
     arr={-5,-06,-1,-7,-88, -9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<largestElement(arr,n)<<endl;
}