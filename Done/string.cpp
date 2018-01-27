#include <bits/stdc++.h>

int main()
{    char string[100000];
   int c = 0,sum=0, count[26] = {0};

  
   gets(string);

   while (string[c] != '\0')
   {
     
      if ((string[c] >= 'a' && string[c] <= 'z') || (string[c] >= 'A' && string[c] <= 'Z'))

      {
         if (string[c] >= 'a' && string[c] <= 'z')
         {
         count[string[c]-'a']++;
         }
         else if (string[c] >= 'A' && string[c] <= 'Z')
         {
         count[string[c]-'A']++;
         }
      }

      c++;
   }

   for (c = 0; c < 26; c++)
   {
     

      if (count[c] > 1)
         sum=sum + (count[c]-1);
   }
    printf("%d",sum);
    return 0;
}
