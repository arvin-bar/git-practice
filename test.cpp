#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "enter word to be reversed" << endl;

	string word;
	string reversed;

	cin >> word;	

	int length = word.length();

	for(int i = 0; i < length; i++)
	{
		reversed[i] = word[length - i];
	}

	cout << "reversed word: " << reversed << endl;

}