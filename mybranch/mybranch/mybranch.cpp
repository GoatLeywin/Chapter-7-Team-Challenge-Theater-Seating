#include <iostream>
using namespace std;

double sellTickets();
void displaySeatingChart();

double sellTickets(int row, int startSeat, int numberOfSeats) {
    double totalPrice = 0.0;
    for (int j = startSeat; j < startSeat + numberOfSeats; ++j) {
        if (seatingChart[row][j] == '#') {
            seatingChart[row][j] = '*'; // Mark seat as taken
            totalPrice += seatPrices[row];
        }
        else {
            cout << "Seat " << (j + 1) << " in Row " << (row + 1) << " is already taken.\n";
            return -1; // Indicate failure
        }
    }
    return totalPrice;
}

void displaySeatingChart()
{
    int const ROWS = 15;
    int const COLUMNS = 30;

    cout << "\n\t\tSeats\n";
    cout << "\t123456789012345678901234567890\n";
    for (int i = 0; i < ROWS; ++i) {
        cout << "Row " << (i + 1) << "\t";
        for (int j = 0; j < COLUMNS; ++j) {
            cout << seatingChart[i][j];
        }
        cout << "\n";
    }
}