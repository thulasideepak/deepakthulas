#include <stdio.h>
#include <ctype.h>
int main()
{
 char a;
 int LowercaseVowel, UppercaseVowel;
 do
 {
  printf("Enter an alphabet: ");
  scanf(" %c", &c);
  }
   while (!isalpha(c));
   lowercaseVowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
   UppercaseVowel=(c=='A'||c=='E'||c=='I'||c=='O'||c =='U');
   if(LowercaseVowel||UppercaseVowel)
   {
   printf("%c is a vowel.",c);
   }
    else
    {
   printf("%c is a consonant.",c);
   }
    return 0;
}
