#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int t;
 cin>>t;
 while(t--){
     
     int limak , bob;
     cin>>limak>>bob;
     int i=1;
     while(limak>=0 && bob>=0){
         if(i%2==1){
             limak -= i;
         }
         else if(i%2==0){
             bob -=i;
         }
         i++;
         if(limak<0){
             cout<<"Bob\n";
         }
         else if(bob<0){
             cout<<"Limak\n";
         }
     }
 }
}
