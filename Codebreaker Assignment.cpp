// CodeBreaker Training
// Shjon Oelke
# include <iostream>
# include <vector>
# include <iterator>
# include <string>
# include <algorithm>
# include <cctype>
using namespace std;

int main()
{
	string identification;
	// Display Title of the program to the user
	cout << "Welcome to the Codebreaker Training simulation!" << endl;
	// Ask the recruit to log in using their name
	cout << "Please enter log in information" << endl;
	cin >> identification;
	// Hold the recruit's name in a var, and address them by it throughout the simulation.
	cout << "You have logged in as : " + identification + " welcome to the simulation!" << endl;
	// Display an overview of what Keywords II is to the recruit
	cout << "This program is designed to test your abilities to find and eliminate enemy signals." << endl;
	// Display directions to the recruit on how to use Keywords
	cout << "You must use the following keywords and attempt to guess the correct code out of them." << endl;
	cout << "You will have a total of 3 attempts to guess the correct keyword combination." << endl;
	// Create a collection of 10 words you had written down manually
	vector<string> keywordList;
	vector<string> hiddenList;

	cout << "Keyword List: " << endl;
	keywordList.push_back("dog");
	keywordList.push_back("oar");
	keywordList.push_back("guy");
	keywordList.push_back("gel");
	keywordList.push_back("sac");
	keywordList.push_back("war");
	keywordList.push_back("arc");
	keywordList.push_back("oak");
	keywordList.push_back("mad");
	keywordList.push_back("Tar");

	vector<string> ::iterator it1;
	vector<string> ::iterator it2;
	// Create an int var to count the number of simulations being run starting at 1
	int x;
	int number;
	const int count = 3;
	for (x = 1; x <= number; x++)
	{
		if (number % x == 0) {

			cout << x << "*" << number / x << "=" << number << endl;

		}
		count + 1;
	}
	cout << "This application has deployed" << x << " times" << endl;
	return 0;
	// Display the simulation # is starting to the recruit.
	cout << "The simulation is now starting" << endl;
	// Pick new 3 random words from your collection as the secret code word the recruit has to guess.
	hiddenList.push_back("guy");
	hiddenList.push_back("tar");
	hiddenList.push_back("oak");

	it1 = hiddenList.begin();
	it2 = hiddenList.end();

	random_shuffle(hiddenList.begin(), hiddenList.end());
	// While recruit hasn’t made too many incorrect guesses and hasn’t guessed the secret word
	 string userInput = hiddenList[0];
	const int guessLimit = 3;
	int wrongGuess = 0;
	string correctWords(hiddenList.size(),'-');
	string Guessed = "";
	while ((wrongGuess < guessLimit) && (correctWords != hiddenList))
	//     Tell recruit how many incorrect guesses he or she has left
		{
		cout << "You have guessed incorrectly" << endl;
		cout << "You have" << (guessLimit - wrongGuess);
		"chances left";

		//     Show recruit the letters he or she has guessed
		cout << "you have guessed the following letters :" << Guessed << endl;
		//     Show player how much of the secret word he or she has guessed
		cout << "You have guessed" << correctWords << " out of the secret words" << endl;
		}
	//     Get recruit's next guess
	cout << "Please try again" << endl;
		cin >> userInput;
	//     While recruit has entered a letter that he or she has already guessed
		while (Guessed.find(userInput) != string::npos)
		{

			cout << " You've already guessed " << userInput << endl;
			//          Get recruit ’s guess
			cout << "Please try again" << endl;
			cin >> userInput;
		}
	//     Add the new guess to the group of used letters
		Guessed += userInput;
	//     If the guess is in the secret word
		if (hiddenList.find(userInput) != string::npos)
		{
			//          Tell the recruit the guess is correct
			cout << "You found a secret letter!" << endl;
			//		Update the word guessed so far with the new letter
			Guessed += userInput;
		}
	
	//     Otherwise
		else
		{
			//          Tell the recruit the guess is incorrect
			cout << "Sorry, your guess is incorrect";
	//          Increment the number of incorrect guesses the recruit has made
		++wrongGuess;
		}
	// If the recruit has made too many incorrect guesses
		if (wrongGuess > guessLimit)
		{
			//     Tell the recruit that he or she has failed the Keywords II course.
			cout << "You have reached the maximum number of attempts. We regret to inform you that you have failed this test. Have a nice day." << endl;
		}

	// Otherwise
		else {
	//     Congratulate the recruit on guessing the secret words
			cout << "Congrats! you have guessed all words" << endl;
		}
	// Ask the recruit if they would like to run the simulation again
		cout << "Would you like to run the simulation again? Please type Y or N" << endl;
	// If the recruit wants to run the simulation again
		char answer;
		char Y;
		char N;
		if (answer == Y)
		{
	//     Increment the number of simulations ran count	
	//     Move program execution back up to // Display the simulation # is starting to the recruit.

			return 0;
		}
	// Otherwise
		else
			//     Display End of Simulations to the recruit
		{
			cout << "this is the end of the simulation.Thank you for playing!" << endl;
		}
	//     Pause the Simulation with press any key to continue
		system("Pause");
		cout << "Press any key to continue.." << endl;
}



