#include <string>
#include <iostream>
#include <Windows.h>
#include <cstring>
#include <cctype>
#include <algorithm>

using namespace std;

// apple 이 몇번 나오는지

int main()
{
 string s = "Apple Is not a apple, but apple is apple. ""Apple inc"" company name of apple fruit.";
 string a = "apple";
 string tmp;
 int count = 0;

 transform(s.begin(), s.end(), s.begin(), tolower); // 소문자로 변환
 
 for (int i = 0; i < s.length(); i++)
 {
  tmp = s.substr(i, a.length());
  if (tmp == a)
  {
   i = i + 4;
   count++;
  }
 }
 

 cout << count << endl;

}
}
}
