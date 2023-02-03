// NUMBER PALÝNDROME WORD IS THE SENTENCES 

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	const int MAX = 100;
	char message[MAX];
	cout << "Enter a word" << endl;
	cin.get(message, MAX);
	int len = strlen(message);
	bool ispalindrome = true;

	for (int i = 0; i < len; i++) {
		if (message[i] != message[len - 1 - i]) {
			ispalindrome = false;
		}
		else ispalindrome = true;
	}


	if (ispalindrome == false) {
		cout << "this is not palindrome word";
	}
	else 	cout << "this is palindrome word";
	return 0;
	//This problem is taken from SAKARYA UNIVERSITY LECTURE NOTES STUDY QUESTIONS SENG
}

