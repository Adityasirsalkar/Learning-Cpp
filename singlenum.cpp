#include<bits/stdc++.h>
using namespace std;

int singlenumber(const std::vector<int> & nums){
    int answer=0;
    for(int val: nums){
        answer = answer^val ;
    }

 return answer;
}
int main(){
   
   vector<int> myVector;
    int num;
    char choice;

    // Taking input until the user stops
    do {
        cout << "Enter a number: ";
        cin >> num;
        myVector.push_back(num);  // Add the number to the vector

        cout << "Do you want to enter another number? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');


 int answer = singlenumber(myVector);
 cout<<answer;

}