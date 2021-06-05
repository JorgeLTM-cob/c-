#include <iostream>
#include <string>

using namespace std;

int main() {
   string str = "Jatin Goyal";
   string::iterator it;
//   char c;
 
   for (it = str.begin(); it < str.end(); it++){
      if ((*it > 64) && (*it < 91)) {
         *it = *it + 32;
      }
   }
   cout << str << endl; 

   for (it = str.begin(); it < str.end(); it++){
      if ((*it > 96) && (*it < 123)) {
         *it = *it - 32;
      }
   }
   cout << str << endl; 
}
