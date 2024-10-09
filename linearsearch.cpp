#include<iostream>
using namespace std;

void search( int n , int a , int arr[ ]){
    int count=0;
 for (int i=0; i<n; i++){
    if(arr[i]==a){
        cout<<"The element is on "<< i+1 <<" position in array"<<endl;
        count++;
    }
 }
 if(count==0){
    cout<<"Element is not in array";
 }
}
int main(){
    int n;
    cout<<"Enter the number of elements in array :";
    cin>>n;
    cout<<"Enter the array:\n";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int a;
    cout<<"Enter the element to be searched :";
    cin>>a;
    search( n , a , arr);
}