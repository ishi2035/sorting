#include<iostream>
using namespace std;
void binary(int arr[], int n, int k){
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if (arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
                k--;
            }
            if(k==0)
            return;
        }
    }
    return;

}
int main(){
    int n,k;
    cin>>n;
    int *arr= new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    binary(arr,n,k);
    cout<<"after "<<k<<"th  iteration output is: \n";
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
