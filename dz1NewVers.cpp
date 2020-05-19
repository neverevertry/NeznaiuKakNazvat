#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	getline(cin, str);
		int count[5] = { 0,0,0,0,0 };
		char vow[5] = { 'a', 'o', 'u', 'i', 'e' };
		int total = 0;
		for (int i = 0; i < str.size(); i++)
		{
			switch (str[i])
			{
			case'a': {
				count[0]++;
				total++; }break;
			case'o': {
				count[1]++;
				total++; }break;
			case 'u': {
				count[2]++;
				total++; }break;
			case 'i': {
				count[3]++;
				total++; }break;
			case 'e': {
				count[4]++;
				total++; }break;
			}
		}
		for (int i = 0; i < 5; i++)
			cout << vow[i] << ":" << count[i] << endl;

}