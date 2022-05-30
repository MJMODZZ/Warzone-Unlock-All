#include <string>
#include <iostream>

using namespace std;

int main()
{
	string Choosen;
	string Continue;

	std::cout << " MM    MM     JJJ  UU   UU NN   NN LL       OOOOO   CCCCC  KK  KK\n MMM  MMM     JJJ  UU   UU NNN  NN LL      OO   OO CC    C KK KK\n MM MM MM     JJJ  UU   UU NN N NN LL      OO   OO CC      KKKK\n MM    MM JJ  JJJ  UU   UU NN  NNN LL      OO   OO CC    C KK KK\n MM    MM  JJJJJ    UUUUU  NN   NN LLLLLLL  OOOO0   CCCCC  KK  KK ";
	std::cout << "\n\n\nWhat you want to Open?\n\n [1] Warzone Unlock All\n [2] Warzone Swapper\n [3] Spoofer\n [4] Perk Swapper\n [5] Exit\n\nWhat do you Want to use? > ";
	std::cin >> Choosen;

	// If user has choosen the Unlock All
	if (Choosen == "1") {

		cout << "\nUnlock all will be open. Press any Key to contine...";
		cin >> Continue;
	};
	// If user has choosen the Swapper
	if (Choosen == "2") {

		cout << "\nSwapper will be open. Press any Key to contine...";
		cin >> Continue;
	};
	// If user has choosen the Spoofer
	if (Choosen == "3") {

		cout << "\nSpoofer will be open. Press any Key to contine...";
		cin >> Continue;
	};
	// If user has choosen the Perk Swapper
	if (Choosen == "4") {

		cout << "\nPerk Swapper will be Open. Press any key to continue...";
		cin >> Continue;
	};
	// If user has choosen the Exit
	if (Choosen == "5") {

		cout << "\nLoader will be Exit in 10 Secounds...";
		cin >> Continue;
	}

}
