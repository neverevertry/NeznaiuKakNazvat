#include <iostream>
# include < string>  

using namespace std;

int main()
{

	string str;
	string buf = "aeiouAEIOU";
	int glas = 0;
	int n, p;
	int a = 0, e = 0, i = 0, o = 0, u = 0, A = 0, E = 0, I = 0, O = 0, U = 0;
	cout << "Vvedite stroku: ";
	getline(cin, str);
	for (n = 0; n < str.size(); n++)
		for (p = 0; p < buf.size(); p++)
			if (str[n] == buf[p])
			{
					switch (str[n])
					{

					case 'a':
						a++;
						break;
					case 'e':
						e++;
						break;
					case 'i':
						i++;
						break;
					case 'o':
						o++;
						break;
					case 'u':
						u++;
						break;
					case 'A':
						A++;
						break;
					case 'E':
						E++;
						break;
					case 'I' :
						I++;
						break;
					case 'O':
						O++;
						break;
					case 'U':
						U++;
						break;
					}
					glas++;
					
				}
	cout << "Kol vo glasnih: " << glas << endl;
	cout << "a = " << a << endl;
	cout << "u = " << u << endl;
	cout << "e = " << e << endl;
	cout << "i = " << i << endl;
	cout << "o = " << o << endl;
	cout << "A = " << A << endl;
	cout << "U = " << U << endl;
	cout << "E = " << E << endl;
	cout << "I = " << I << endl;
	cout << "O = " << O << endl;
}