#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int l=0;
        int array[2*n];
        for(int i=0; i<2*n; i++){
            cin>>array[i];
        }
        for(int i=0; i<2*n; i++){
            int count=0;
            for(int j=0; j<2*n; j++){
                if(array[i]==array[j]){
                    count++;
                }
                if(count>2){
                   l++; 
                }
            }
        }
        if(l>0){
            cout<<"NO\n";
        }
        else if(l==0){
            cout<<"YES\n";
        }

    }
}