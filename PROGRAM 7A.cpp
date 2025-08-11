// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: ARRAYS IN C++ (EXPERIMENT: 7A)

// CODE: 

#include <iostream>
using namespace std;
int main() {
   int numbers[5];
   
   cout<<"ENTER 5 NUMBERS:";
   
   for(int i=0; i<5;i++) {
       cin>>numbers[i];
   } 

   for (int n=0; n<5; n++) {
          cout<<numbers[n]<<" ";
   }
    return 0;
} 

// OUTPUT:

// ENTER 5 NUMBERS:10
// 20
// 30
// 40
// 50
// 10 20 30 40 50 
