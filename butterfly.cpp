#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<endl;
    for (int i=0; i<n; i++){
        for(int j=0; j<(2*n)+1; j++){
            if(j<=i||j>=(2*n)-i){
               cout<<" *";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    // for(int i=0; i<(2*n)+1; i++){
    //     cout<<" *";
    // }
    // cout<<endl;


     for (int i=n; i>=0; i--){
        for(int j=0; j<(2*n)+1; j++){
            if(j<=i||j>=(2*n)-i){
               cout<<" *";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }


}
// *             * 
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * *     * * * 
// * *         * *
// *             * 