# Theater Seating Program - README
## Overview
This program simulates a theater ticket sales system. It allows users to:

Set seat prices for each row.
Display a seating chart with available (#) and taken (*) seats.
Sell tickets by entering row and seat numbers.
Display the total ticket sales.
Show the number of sold and available seats for each row and the entire auditorium.
The auditorium has 15 rows and 30 seats per row.

The program is designed as a collaborative project for three team members, with tasks divided for equal workload. It uses GitHub for version control and can be implemented as a single-file or multi-file project.

## Team Responsibilities
### Cole: Function main and Repository Setup
Responsibilities:

Design and implement the main function, which orchestrates the program flow by calling other functions.
Set up a GitHub repository and share it with team members.
Integrate all other functions into the main program.
Handle input validation and error messages at the program level.
Tasks:

Create and initialize the repository.
Call functions for:
Entering seat prices.
Displaying the seating chart.
Selling tickets.
Showing ticket sales and seat availability.
Ensure seamless flow between the functions.
### Isaac: Seating Chart and Price Management
Responsibilities:

Handle seating chart display and management.
Implement functions to:
Display the seating chart.
Allow entry of seat prices and store them in an array.
Update the seating chart after ticket sales.
Tasks:

Create a function to display the seating chart.
Create a function to enter and store seat prices.
Create a function to update the seating chart after tickets are sold.
### Zach: Ticket Sales and Statistics
Responsibilities:

Manage ticket sales and statistics.
Implement functions to:
Sell tickets.
Calculate total ticket sales.
Display statistics about sold and available seats.
Tasks:

Create a function to sell tickets:
Validate seat availability.
Calculate the total cost of tickets sold.
Create a function to track total sales.
Create a function to show statistics about:
Seats sold and available per row.
Seats sold and available for the entire theater.
## Function Breakdown
### Function Definitions
#### main() (Cole)

Orchestrates program execution by calling all other functions.
#### enter_seat_prices() (Isaac)

Prompts the user to input prices for each row and stores them in an array.
#### display_seating_chart() (Isaac)

Displays the seating chart with taken (*) and available (#) seats.
#### update_seating_chart(row, seat) (Isaac)

Updates the chart to mark purchased seats as taken (*).
#### sell_tickets() (Zach)

Prompts the user to select row and seat(s) and calculates the total price.
Validates that selected seats are available.
#### calculate_total_sales() (Zach)

Keeps a running total of ticket sales.
#### display_statistics() (Zach)

Shows:
Seats sold and available per row.
Seats sold and available in the entire auditorium.
