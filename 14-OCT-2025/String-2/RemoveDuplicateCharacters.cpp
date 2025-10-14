#include <bits/stdc++.h>
using namespace std;
string removeDuplicate(string s){
   int index = 0;   
   for (int i = 0; i < s.size(); i++) {  
     for (int j = 0; j < i; j++) 
        if (s[i] == s[j])
           break;
     if (j == i)
        s[index++] = s[i];
   }
   s.resize(index);
   
   return s;
}

int main()
{
   string s = "helloworld";
   cout << removeDuplicate(s);
   return 0;
}
