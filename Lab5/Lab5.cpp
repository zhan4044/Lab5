// Lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;
string text;

void cypher() 
{
    string text;
    vector<int> CypherEncode({ 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' });
    cout << "Input text to cypher:" << endl;
    getline(cin, text);
    for (int i = 0; i < text.size(); i++)
    {
        if (90 >= (int)text[i] && (int)text[i]>=65){
            char str(CypherEncode[(int)text[i] - 65]);
            cout << str;

       }
        else if (122 >= (int)text[i] && (int)text[i] >= 97) {

            text[char (i)] = text[char (i)] - 32;
            char str(CypherEncode[(int)text[i] - 65]);
            
            str = str + 32;
            cout << str;
        }
        else {
            cout << " is not a letter" << endl;
            
        }
    }


}





int main()
{
    string text;
    cypher();

    cout << text;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


//"IF char IS BETWEEN 65 AND 90 //is a capital letter\n"
//"RETURN THE CHAR AT SLOT char-65 IN CODE TABLE\n"
//"ELSE IF char IS BETWEEN 97 AND 122 // is lower case letter\n"
//"SET upperCaseLetter TO char -32 // converts the number to upper case number\n"
//"SET upperCaseCode TO CHAR AT SLOT upperCaseCode-65 IN CODE TABLE // get upper case code\n"
//"RETURN upperCaseCode+32 // convert code back to lower case\n"
//"ELSE // is not letter\n"
//"RETURN char"
