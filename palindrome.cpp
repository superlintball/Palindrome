/*
 * Author: Raveen Karnik
 * Date: 9-11-17
 * This program reads in a string of characters from the user and returns whether or not that string is a palindrome
 */

#include <iostream>

using namespace std;

//main code block
int main()
{
	//create a string for the input and fill it with the user's string
	char input[80];
	cout << "Enter a string, and I will tell you if it is a palindrome." << endl;
	cin.get(input, 80);
	cin.get();

	//initialize an empty string to fill with the cleaned input
	char cleaned[80];

	//go through the input and only put lowercase letters in the cleaned string
	int count = 0;
	for(int i = 0; i < 80; i++)
	{
		if(input[i] != '\0')
		{
			if(isalpha(input[i]))
			{
				cleaned[count] = tolower(input[i]);
				count++;
			}
		}
		else
		{
			cleaned[count] = '\0';
			break;
		}
	}

	//check if the input is a palindrome by comparing the beginning characters with the end ones
	bool isPalindrome = true;
	for(int i = 0; i < count/2; i++)
	{
		if(cleaned[i] != cleaned[count - 1 - i])
		{
			isPalindrome = false;
			break;
		}
	}

	//tell the user if they inputted a palindrome or not
	if(isPalindrome)
	{
		cout << "Palindrome." << endl;
	}
	else
	{
		cout << "Not a palindrome." << endl;
	}

	return 0;
}
