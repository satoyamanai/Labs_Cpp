#include <iostream>
#include <string>
using namespace std;

int CalculateVowels(string str)  //计算字符串中的元音个数
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'
            || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {   
            count++;
        }
    }
    return count;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin,str);

    int count = CalculateVowels(str);
    cout << "The number of vowels in the string is: " << count << endl;

    return 0;
}