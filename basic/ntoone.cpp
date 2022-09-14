#include<iostream>
using namespace std;

void printNum(int n){
      if(n){
            cout<<n<<endl;
            printNum(n-1);
      }
      return;
}

int main()
{
    printNum(5);
    return 0;
}