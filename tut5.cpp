#include<iostream>
using namespace std;
char compare(int x, int y){
    if(x<y) return '<';
    else if(x>y) return '>';
    else return '=';
}

int BinarySearch(int arr[],int s,int y){
    int left=0;
    int right=s-1;
    while(left<=right){
        int middle = (left + right)/2;
        switch(compare(y,arr[middle])){
            case '=':
                return middle;
            case '<':
                right = middle-1;
                break;
            case '>':
                left = middle+1;
                break;
        }
    }
    return -1;
}
int main(){
    int s;
    cout<<"enter the size of the n: ";
    cin>>s;
    int arr[s];
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    cout<<endl;
    int x;
    cout<<"enter the x: ";
    cin>>x;
    int y;
    cout<<"enter the y: ";
    cin>>y;
    cout<<"the output of the given array is below: "<<endl;
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
    int result = BinarySearch(arr,s,y);
    if(result!=-1)
        cout<<"Found= "<<y<<" at index "<<result<<endl;
    else 
        cout<<x<<" not found in the array"<<endl;
    return 0;
}
