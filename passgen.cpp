#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

using namespace std;	

int main(){
  srand(time(0));
  int pass_lenght = 0;
  cout << "Enter password lenght:";
  cin >> pass_lenght;
  std::string pass = "";
  for(int  i = 0;i < pass_lenght;i++){
    char key = (char)(rand() % 92);
    key += 33;
    pass += key;	     
  }
  cout << pass << endl;
  return 0;
}
