#include <bits/stdc++.h>

using namespace std;

int main(){
   string str = "Jatin Goyal";

   transform(str.begin(), str.end(), str.begin(), ::toupper);
   cout << str << endl;

   transform(str.begin(), str.end(), str.begin(), ::tolower);
   cout << str << endl;


}
