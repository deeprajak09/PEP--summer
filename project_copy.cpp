#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/* ===================== FLIGHT CLASS ===================== */
class Flight {
public:
    int flightNo;
    string flightName;
    string source;
    string destination;
    int seats;
    float ticketCharge;

    void add() {
        cout << "Enter Flight No: ";
        cin >> flightNo;
        cin.ignore();

        cout << "Enter Flight Name: ";
        getline(cin, flightName);

        cout << "Enter Source: ";
        getline(cin, source);

        cout << "Enter Destination: ";
        getline(cin, destination);

        cout << "Enter Seats: ";
        cin >> seats;

        cout << "Enter Ticket Charge: ";
        cin >> ticketCharge;
    }

    void display() {
        cout << flightNo << " | " << flightName << " | "
             << source << " -> " << destination
             << " | Rs." << ticketCharge << endl;
    }
};

/* ===================== CUSTOMER CLASS ===================== */
class Customer {
public:
    int id;
    string name;
    int age;
    string address;
    string mobile;

    void add() {
        cout << "Enter Customer ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();

        cout << "Enter Address: ";
        getline(cin, address);

        cout << "Enter Mobile No: ";
        getline(cin, mobile);
    }

    void display() {
        cout << id << " | " << name << " | "
             << age << " | " << mobile << endl;
    }
};

/* ===================== BOOKING CLASS ===================== */
class Booking {
public:
    int flightNo;
    int customerId;
    int seatNo;

    void add() {
        cout << "Enter Flight No: ";
        cin >> flightNo;

        cout << "Enter Customer ID: ";
        cin >> customerId;

        cout << "Enter Seat No: ";
        cin >> seatNo;
    }

    void display() {
        cout << "Flight: " << flightNo
             << " | Customer: " << customerId
             << " | Seat: " << seatNo << endl;
    }
};

/* ===================== FUNCTIONS ===================== */

void addFlight() {
    Flight f;
    ofstream file("flights.txt", ios::app);
    f.add();
    file << f.flightNo << "|" << f.flightName << "|"
         << f.source << "|" << f.destination << "|"
         << f.seats << "|" << f.ticketCharge << endl;
    file.close();
    cout << "Flight Added Successfully\n";
}

void listFlights() {
    ifstream file("flights.txt");
    Flight f;
    string line;
    cout << "\n--- FLIGHTS ---\n";
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

void addCustomer() {
    Customer c;
    ofstream file("customers.txt", ios::app);
    c.add();
    file << c.id << "|" << c.name << "|"
         << c.age << "|" << c.address << "|"
         << c.mobile << endl;
    file.close();
    cout << "Customer Added Successfully\n";
}

void listCustomers() {
    ifstream file("customers.txt");
    string line;
    cout << "\n--- CUSTOMERS ---\n";
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

void bookSeat() {
    Booking b;
    ofstream file("bookings.txt", ios::app);
    b.add();
    file << b.flightNo << "|"
         << b.customerId << "|"
         << b.seatNo << endl;
    file.close();
    cout << "Seat Booked Successfully\n";
}

void listBookings() {
    ifstream file("bookings.txt");
    string line;
    cout << "\n--- BOOKINGS ---\n";
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

/* ===================== MAIN ===================== */
int main() {
    int choice;
    do {
        cout << "\n===== AIRWAYS RESERVATION SYSTEM =====\n";
        cout << "1. Add Flight\n";
        cout << "2. List Flights\n";
        cout << "3. Add Customer\n";
        cout << "4. List Customers\n";
        cout << "5. Book Seat\n";
        cout << "6. List Bookings\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1: addFlight(); break;
        case 2: listFlights(); break;
        case 3: addCustomer(); break;
        case 4: listCustomers(); break;
        case 5: bookSeat(); break;
        case 6: listBookings(); break;
        case 7: cout << "Thank You!\n"; break;
        default: cout << "Invalid Choice\n";
        }
    } while (choice != 7);

    return 0;
}