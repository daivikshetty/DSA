#include<iostream>
using namespace std;

void printName(int n){
      if(n){
            cout<<"Daivik"<<endl;
            printName(n-1);
      }
      else{
            return;
      }
}

int main()
{
    printName(5);
    return 0;
}