#include <iostream>
#include <string>
#include <Windows.h>

using std::cout;
using std::endl;
using namespace std;

//Functions
void introMenu();
void menu(int&c);
void storyMenu();
void multiplayerMenu();
void settingsMenu();
void textRED();
void textBLUE();
void textGREEN();
void textBlueBackground();
void textRedBackground();
void textGreenBackground();

int main()
{
	//Intro Menu
	introMenu();

	int choice = 0;

	textRED();
	//Main Menu
	menu(choice);
	
	while (choice > 0) 
	{
		textBLUE();
		switch (choice)
		{
		case 1:
			storyMenu();
			return 0;

		case 2:
			multiplayerMenu();
			return 0;

		case 3:
			settingsMenu();
			return 0;

		case 4:
			std::cout << "Thank you for playing ...\n";
			return 0;

		default:
			std::cout << "Invalid input. Please try again\n";
		}

		menu(choice);
	}

	system("PAUSE");

	return 0;
}

void introMenu() {
	std::cout << "Welcome to...\n";
	std::cout << "Press ENTER to continue\n";
	// code cin.get(); learnt from https://www.youtube.com/watch?v=Hc_6f5Heang 
	cin.get();
}

void menu(int &c)
{
	std::cout << "1. Story\n2. Multiplayer\n3. Settings\n4. Quit ";
	std::cin >> c;
}

void storyMenu() {
	std::cout << "Story\n";
	std::cout << "1. New Story\n2. Load Story\n";
}

void multiplayerMenu() {
	std::cout << "Multiplayer\n";
	std::cout << "1. Quick Match\n2. Tournament\n3. Local Match\n4. Stats\n";
}

void settingsMenu(){
	std::cout << "Settings\n";
	std::cout << "1. Game Speed\n2. Brightness\n3. Language\n4. Theme\n5. Sound\n6. Manage files\n";
}

// Learnt  from https://www.youtube.com/watch?v=K8dLM8kRE_o&t=425s to add colours
void textRED() {
	HANDLE text = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(text, FOREGROUND_RED | FOREGROUND_INTENSITY);
}

void textBLUE() {
	HANDLE text = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(text, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
}

void textGREEN() {
	HANDLE text = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(text, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
}

void textBlueBackground() {
	HANDLE text = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(text, BACKGROUND_BLUE | FOREGROUND_INTENSITY);
}

void textRedBackground() {
	HANDLE text = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(text, BACKGROUND_RED | FOREGROUND_INTENSITY);
}

void textGreenBackground() {
	HANDLE text = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(text, BACKGROUND_GREEN | FOREGROUND_INTENSITY);
}