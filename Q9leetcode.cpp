#include<iostream>

using namespace std;

int main(){
   int x;
   cin>>x;
   bool ans;
    long int temp1=x;  
   if(x<0){
      ans = false;
   }
   
   else{
    int temp=0;
    while(temp1!=0){
        temp = temp*10;
        temp += (temp1%10);
        temp1= temp1/10;
        
    }
    if (temp == x){
        ans = true;
    }
    else {
        ans = false;
    }
   }
   cout<<ans;
    return 0;
}