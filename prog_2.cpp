/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

******************************************************************************/
#include<iostream>
using namespace std;
void find_even(int n){
    int count=1;
   for(int i=1;i<=n;i++){
       if(i%2==0 && count<=10){
           cout<<i<<" ";
           count++;
       }
   }
    
}
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    
    find_even(n);
    return 0;
}