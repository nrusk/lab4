#include <iostream>

using namespace std;

// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}

void factorial() {
	// I recommend writing your factorial code here
	int n;
	int i = 1;
	int answer = 1;

	cout << "Factorial:" << endl;
	cout << "Enter a number: ";
	cin >> n;

	while (n < 0) {
		cout << "Please enter a POSITIVE number: ";
		cin >> n;
	}
	cout << n << "!" << " = ";

	while (i < n) {
		cout << i << " * ";
		answer = answer + (answer * i);
		i++;
	}
	cout << n << " = " << answer << endl;

}

void arithmetic() {
	// I recommend writing your arithmetic series code here
	int startNumber;
	int addingNumber;
	int elementsNumber;

	cout << "Arithmetic Series:" << endl;
	cout << "Enter a number to start at: ";
	cin >> startNumber;

	int nextNumber = startNumber;
	int answer = startNumber;

	cout << "Enter a number to add each time: ";
	cin >> addingNumber;

	cout << "Enter the number of elements in the series: ";
	cin >> elementsNumber;
	while (elementsNumber < 0) {
		cout << "Please enter a POSITIVE number: ";
		cin >> elementsNumber;
	}
	
	for (int i = 1; i < elementsNumber; i++) {
			cout << nextNumber << " + ";
			nextNumber += addingNumber;
			answer = answer + nextNumber;
		}	
	cout << nextNumber << " = " << answer << endl;
}

void geometric() {
	// I recommend writing your geometric series code here
	int startNumber;
	int multiplyingNumber;
	int elementsNumber;

	cout << "Geometric Series:" << endl;
	cout << "Enter a number to start at: ";
	cin >> startNumber;

	int nextNumber = startNumber;
	int answer = startNumber;

	cout << "Enter a number to multiply by each time: ";
	cin >> multiplyingNumber;

	cout << "Enter the number of elements in the series: ";
	cin >> elementsNumber;
	while (elementsNumber < 0) {
		cout << "Please enter a POSITIVE number: ";
		cin >> elementsNumber;
	}

	for (int i = 1; i < elementsNumber; i++) {
		cout << nextNumber << " * ";
		nextNumber = nextNumber * multiplyingNumber;
		answer = answer + nextNumber;
	}
	cout << nextNumber << " = " << answer << endl;
}

int main() {
	int choice;
	char again;

	do {
		printMenu();
		cin >> choice;

		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;

	} while (again == 'y' || again == 'Y');
}