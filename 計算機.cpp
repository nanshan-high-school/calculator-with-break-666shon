#include <iostream>
using namespace std;
int main() {
  int Formula[100000],a=0;
  cout<<"輸入要加的數字\n0會停止";
  for(int i=0;true;i++){
  cin>>Formula[i];
  if(Formula[i]!=0)
  a=a+Formula[i];
  else
  break;
  }
  cout<<"總合為"<<a;
}
