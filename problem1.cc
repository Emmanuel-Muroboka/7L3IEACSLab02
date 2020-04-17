#include "problem1.h"
#include <iostream>

namespace problem1
{
   std::string encryption(std::string text1, int k)
   {
       std::string encrypted = "";
       for(int i=0; i<text1.length(); i++)
       {
           if(isupper(text1[i]))
               encrypted +=  char(int(text1[i]+k-65)%26 +65);
           else
               encrypted += char(int(text1[i]+k-97)%26 +97);
       }
       return encrypted;
   }

   std::string decryption(std::string text2, int s)
   {
       std::string decrypted = "";
       for(int i=0; i<text2.length(); i++)
       {
           if(isupper(text2[i]))
               decrypted += char(int(text2[i]+s-65)%26 +65);
           else
               decrypted += char(int(text2[i]+s-97)%26 +97);
       }
       return decrypted;
   }
}
