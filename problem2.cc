#include <problem2.h>
#include <iostream>
#include<string>



std::string encrypt(std::string text, int s)
{
    std::string result = "";




    for (int i=0;i<text.length();i++)
    {

        if (isupper(text[i]))
            result += char(int(text[i]+s-65)%26 +65);

    else
        result += char(int(text[i]+s-97)%26 +97);
    }

    return result;
}


std::string decencrypt(std::string text, int s)
{
    std::string result = "";


    for (int i=0;i<text.length();i++)
    {

        if (isupper(text[i]))
            result += char(int(text[i]-s-65)%26 +65);

    else
        result += char(int(text[i]-s-97)%26 +97);
    }

    return result;
}


