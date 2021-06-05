#include <bits/stdc++.h>
using namespace std;

void TraverseString(string &str, int N){
   string:: iterator it;
   for (it = str.begin(); it != str.end(); it++){
      cout << *it << " ";
   }
   cout << endl;
}

int main(){
   string str;
   cin >> str;
   int N = str.length();
   TraverseString(str, N);
}
