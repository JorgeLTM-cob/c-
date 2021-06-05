#include <iostream>
#include <string>

using namespace std;

void printer(char& c, bool& d){
   c++;
   d = true;
}

int main(){
   string str = "Geeksforgeeks";
   string::iterator it;
   bool j;
   for (it = str.begin(); it < str.end(); it++){
      j = false;
      printer(*it,j);
      cout << *it << " ";
   }
   cout << endl;
   cout << j << endl;

return 0;
}
