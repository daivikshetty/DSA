#include<iostream>
using namespace std;
int n=0;

void call(){
      if(n<6){
            cout<<n<<endl;
            n++;
            call();
      }
      else{
            return;
      }
}

int main()
{
    call();
    return 0;
}