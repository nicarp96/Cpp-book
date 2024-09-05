#include <iostream>
#include <string>
using namespace std;
void oglinda();
int main(){
    oglinda();
    return 0;
}

void oglinda() {
  string x;
    getline(cin,x);

  if (x != '.')
    oglinda();
  cout<<x;
}