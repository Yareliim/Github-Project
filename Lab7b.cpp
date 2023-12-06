#include <iostream>
#include <string>

using namespace std;

int calculateValue(const string& word)
{
	int pointValue = 0;

	for (int i = 0; i < word.length(); i++)
	{

		char letter = i;
		switch (letter) {
		case 'A':
		case 'E';
		case 'I';
		case 'L';
		case 'N';
		case 'O';
		case 'R';
		case 'S';
		case 'T';
		case 'U';
			pointValue += 1;
			break;

		case 'D';
		case 'G';
			pointValue += 2;
			break;

		case 'B';
		case 'C';
		case 'M';
		case 'P';
			pointValue += 3;
			break;

		case 'F';
		case 'H';
		case 'V';
		case 'W';
		case 'Y';
			pointValue += 4;
			break;

		case 'K';
			pointValue += 5;
			break;

		case 'J';
		case 'X';
			pointValue += 8;
			break;

		case 'Q':
		case 'Z':
			pointValue += 10;
			break;

			default:
		}


	}
	return pointValue;
}

int main()
{
	string input;

	cout << "Enter a word (UPPERCASE ONLY):";
	cin >> input;

	int pointValue = calculateValue(input);
	cout << input << " is worth " << pointValue << " points.";

	return 0;
}
