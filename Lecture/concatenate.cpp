/** Author: Dustin Busch , Concatenate two Strings **/

#include <iostream>

int main(){
  char s1[] = "Apples and ", s2[] = "oranges";
  //create new string s, which contains s1 and s2 below:
  int len1 = 0;
  int len2 = 0;
  while (s1[len1] != '\0'){
    len1++;
  }
  while (s2[len2] != '\0'){
    len2++;
  }
  int len = len1 + len2;
  char s[len + 1];
  for (int j = 0; j < len1; j++){
    s[j] = s1[j];
  }
  for (int j = len1; j <= len1 + len2; j++){
    if (j == len1 + len2){
      s[j] = '\0';
    }
    else{
      s[j] =s2[j - len1];
    }
  }
  std:: cout << "Concatenated string: " << s << std::endl;
  return 0;
}
