// Dania Nasereddin 2-12-20 #19
// Lab 03 - Arrays and Functions
// This program will make a quiz with the questions and answers
// that are imputed by the user. The quiz can have up to 
// five questions and it will print it out in the end

#include <string>
#include <iostream>
using namespace std;


char menu();
void addQuestion(string quiz[5][2], int nquestions);
void displayQuiz(string quiz[5][2]);


int main() {
	string quiz[5][2];
	int nquestions = 0;
	char answer = '\0';

	cout << "Welcome to QuizMaker" << endl;
	cout << "Make a quiz up to 5 questions long!\n" << endl;

	while (answer == 'q' && nquestions < 5) 
	{
		answer = menu();
		addQuestion(quiz, nquestions);
	}

	cout << "Thank you for using QuizMaker!\n\n";
	cout << "Created Quiz\n";
	displayQuiz(quiz);

	system("PAUSE>nul");
	return 0;
}

char menu() 
{
	char answer = '\0';

	while (answer != 'a' && answer != 'b') 
	{
		cout << "\nWhat would you like to do?\n";
		cout << "a. Create a question\n";
		cout << "b. Quit\n";
		cout << "Choice: ";
		cin >> answer;

		if (answer != 'a' && answer != 'b') 
		{
			cout << "\n" << "Invalid option\n";
		}
	}
	return answer;
}
void addQuestion(string quiz[5][2], int nquestions) {
	string q;// = "Blank Question";
	string a; //= "Blank Answer";
	cout << "\nPlease enter your question: ";
	cin >> q;
	cout << "Please enter the answer: ";
	cin >> a;
	quiz[nquestions][0] = q;
	quiz[nquestions][1] = a;
	++nquestions;
	cout << "Question " << nquestions << " added!\n";
}

void displayQuiz(string quiz[5][2]) 
{
	for (int r = 0; r < 5; r++) 
	{
		cout << "Q" << r + 1 << ": ";
		cout << quiz[r][0] << "\n";
		cout << "A: ";
		cout << quiz[r][0] << "\n";
		//if(nquestions < 5)
	}

}
