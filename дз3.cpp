#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	getline(cin, str);

	for (int i = 0; i < str.size(); i++)
	{
		switch (str[i])
		{
		case 'A': str[i] = 'a'; break;
		case 'E': str[i] = 'e'; break;
		case 'U': str[i] = 'u'; break;
		case 'I': str[i] = 'i'; break;
		case 'O': str[i] = 'o'; break;
		}
	}
	cout << str;




}