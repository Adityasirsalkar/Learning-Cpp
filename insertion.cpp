#include<iostream>

using namespace std;

int main(){
  int n;
  cout<<"Enter the number of elements in array :";
  cin>>n;
  int array[n];
  cout<<"Enter the array :"<<endl;
  for(int i=0; i<n; i++){
    cin>>array[i];
  }  
  for(int i=0; i<n; i++ ){
   int current = array[i];
   int j;
   for(j=i-1; j>=0 && array[j]>current; j-- ){
    array[j+1]=array[j];
   }
   array[j+1]=current;
  }
  for(int i=0; i<n; i++){
    cout<<array[i]<<" ";
  }
    return 0;
};