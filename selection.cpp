#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of elements in array :";
	cin>>n;
	int arr[n];
        cout<<"Enter the Array elememts :"<<endl;
	for (int i=0; i<n; i++){
		cin>>arr[i];
	}
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
		        if(arr[j]<arr[i]){
				int temp = arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	for(int i=0; i<n; i++){
		cout<<arr[i];
	}
	return 0;
}
