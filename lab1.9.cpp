# include <iostream>
# include <string>
# include <algorithm>
using namespace std;

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    reverse(input.begin(),input.end());
    cout << "The reversed string is " << input << endl;

    return 0;
}