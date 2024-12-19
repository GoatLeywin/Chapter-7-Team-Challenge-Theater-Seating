#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;
int main() {
    vector<double> seatPrices(15);
    vector<vector<char>> seatingChart(15, vector<char>(30, '#'));
    double totalSales = 0.0;

    while (true) {
        displayMenu();

        int choice;
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        switch (choice) {
            case 1:
                enterSeatPrices(seatPrices);
                break;
            case 2:
                displaySeatingChart(seatingChart);
                break;
            case 3:
                totalSales += sellTickets(seatingChart, seatPrices);
                break;
            case 4:
                cout << "Total Ticket Sales: $" << fixed << setprecision(2) << totalSales << endl;
                break;
            case 5:
                displayStatistics(seatingChart);
                break;
            case 6:
                cout << "Exiting the program. Goodbye!" << endl;
                exit(0);
            default:
                cout << "Invalid choice. Please enter a number between 1 and 6." << endl;
        }
    }
}
