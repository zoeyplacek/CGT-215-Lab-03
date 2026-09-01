#include <iostream>
using namespace std;
void printMenu(int& choice) {
	cout << "Welcome to my program, please select an operation to perform:" << endl; //greeting user
	cout << "1. Addition" << endl; //addition option
	cout << "2. Subtraction" << endl; //subtraction option
	cout << "3. Multiplication" << endl; //multiplication option
	cout << "3. Division" << endl; //division option
	cout << "\nYour Selection: "; //user selection prompt
	cin >> choice; 
}
void getChoices(float& A, float& B) {
	cout << "Please enter the first value:";
	cin >> A; //first user value input

	cout << "Please enter the second value:";
	cin >> B; //second user value input
}
void firstChoice(float A, float B) {
	float X = A + B; //addition equation
	cout << A << " + " << B << " = " << X << endl; //addition output to user
}
void secondChoice(float A, float B) {
	float X = A - B; //subtraction equation
	cout << A << " - " << B << " = " << X << endl; //subtracted output to user
}
void thirdChoice(float A, float B) {
	float X = A * B; //division equation
	cout << A << " * " << B << " = " << X << endl; //multiplied output to user
}
void fourthChoice(float A, float B) {
	float X = A / B; //division equation
	cout << A << "/" << B << " = " << X << endl; //divided output to user
}
int main() {
	int choice;
	float A;
	float B;
	printMenu(choice);
	getChoices(A, B);
	if (choice == 1) { //if user chose addition
		firstChoice(A, B);
	}
	if (choice == 2) { //if user chose subtraction
		secondChoice(A, B);
	}
	if (choice == 3) { //if user chose multiplication
		thirdChoice(A, B);
	}
	if (choice == 4) { //if user chose division
		fourthChoice(A, B);
	}
	return 0;
}
