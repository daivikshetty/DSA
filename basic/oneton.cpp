#include<iostream>
using namespace std;

int num=1;

void numPrint(int n){

      if(num>n){
            return;
      }
      else{
            cout<<num<<endl;
            num++;
            numPrint(n);
      }
}

int main()
{
    numPrint(5);
    return 0;
}