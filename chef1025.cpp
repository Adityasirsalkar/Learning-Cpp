#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int array[n];
        for(int i=0; i<n; i++){
            cin>>array[i];
        }
        int count=0;
        int l=0;
        for(int i=0; i<n; i++){
            count = count + array[i];
            count = count - k;
            if(count<0){
              l = i+1;
              break;
            }
            
        }
         if(l>0){
            cout<<"NO "<<l<<endl;
         }
         else if(l==0){
            cout<<"YES"<<endl;
         }
    }
}