// Henry Wong Project 2 Appointment Book
#include "Date.h"
#include "Appointment.h"
#include "Daily.h"
#include "oneTime.h"
#include "Monthly.h"
#include "Yearly.h"

//max appointments in book
const int maxSize = 10;

// For c, to list all appointments
void checkAppointment(int currentSize, Appointment *book[]) {
	for (int i = 0; i < currentSize; i++) {
		book[i]->print();
	}
}
// add appointments
void addAppointment(int currentSize, Appointment *book[]) {
	int m, d, y, h, t, choice, date;
	string desc;
	cout << "Enter a date and time in this format: mm dd yyyy hh mm" << endl;
	cin >> m >> d >> y >> h >> t;
	Date start(m, d, y);
	cout << "Enter a description:" << endl;
	cin >> desc;
	cout << "Enter the type of appointment (1) for one time (2) for daily (3) for monthly (4) for Yearly :";
	cin >> choice;
	if (choice == 1) {
		Appointment *one = new Onetime(m, d, y, h, t, desc);
		book[currentSize] = one;
		if (currentSize == maxSize) {
			cout << "No more space in Appointment" << endl;
		}
	}
	//Daily
	else if (choice == 2) {
		Appointment *two = new Daily(m, d, y, h, t, desc);
		if (two->occursOn(m, d, y) == true) {
			cout << "Error entered same day." << endl;
		}
		book[currentSize] = two;
		cout << "Enter an end date for the repeating appointment in this format: mm dd yyyy" << endl;
		cin >> m >> d >> y;
		Date end(m, d, y);
		if (start >= end) {
			cout << "Invalid date.Installing Virus." << endl;
		}
		if (currentSize == maxSize) {
			cout << "No more space in Appointment" << endl;
		}
	}
	//monthly
	else if (choice == 3) {
		Appointment *three = new Monthly(m, d, y, h, t, desc);
		if (three->occursOn(m, d, y) == true) {
			cout << "Error entered same day." << endl;
		}
		book[currentSize] = three;
		cout << "Enter an end date for the repeating appointment in this format: mm dd yyyy" << endl;
		cin >> m >> d >> y;
		Date end(m, d, y);
		if (start >= end) {
			cout << "Invalid Date. Installing Virus." << endl;
		}
		if (currentSize == maxSize) {
			cout << "No more space in Appointment" << endl;
		}
	}
	//yearly
	else if (choice == 4) {
		Appointment *four = new Yearly(m, d, y, h, t, desc);
		if (four->occursOn(m, d, y) == true) {
			cout << "Error entered same day." << endl;
		}
		book[currentSize] = four;
		cout << "Enter an end date for the repeating appointment in this format: mm dd yyyy" << endl;
		cin >> m >> d >> y;
		Date end(m, d, y);
		if (start >= end) {
			cout << "Invalid Date. Installing Virus." << endl;
		}
		if (currentSize == maxSize) {
			cout << "No more space in Appointment" << endl;
		}
		
	}
}
// display menu
void startMenu()
{
	cout << "---------------------------SCHEDULER---------------------------\n";
	cout << "a.) All appointments on one day.\n";
	cout << "b.) Add an appointment.\n";
	cout << "c.) List all apointments created.\n";
	cout << "Please enter an option, or enter 'q' to quit!\n";
}
int main() {
	int m, d, y;
	Appointment *book[maxSize]; //initialize array of size maxSize
	int currentSize = 0;
	bool run = true;
	//Keeps appointment running
	while (run) {
		startMenu();
		char choice;
		cin >> choice;
		// specific date
		if (choice == 'a') {
			cout << "Please enter a date to search for appointments using this format: mm dd yyyy" << endl;
			cin >> m >> d >> y;
			for (int i = 0; i < currentSize; i++) {
				if (book[i]->getMonth() == m && book[i]->getDay() == d && book[i]->getYear() == y) {
					cout << "Appointment for " << m << "/" << d << "/" << y << endl;
					book[i]->print();
				}
			}
		}
		// add appointment
		else if (choice == 'b') {
			addAppointment(currentSize, book);
			currentSize++;
		}
		// view all appointment
		else if (choice == 'c') {
			checkAppointment(currentSize, book);
		}
		else if (choice == 'q') {
			break;
		}
		else
			cout << "Please enter a valid choice" << endl;
	}
	system("PAUSE");
	return 0;
}