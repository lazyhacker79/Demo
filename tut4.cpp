#include<iostream>
using namespace std;
void selcectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int least = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[least]){
                least = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[least];
        arr[least] = temp;
    }
}
int main(){
    int n;
    cout<<"enter the size of the n: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter element no "<<i+1;
        cin>>arr[i];
    }

    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    selcectionSort(arr,n);
        cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
