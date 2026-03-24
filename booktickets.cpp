#include <iostream>
#include <string>
using namespace std;

class MovieTicket
{
private:
    string movieName;
    int seatNumber;
    float ticketPrice;
    bool isBooked;

public:
    // Default Constructor
    MovieTicket()
    {
        movieName = "Not Assigned";
        seatNumber = 0;
        ticketPrice = 200;
        isBooked = false;
    }

    // Parameterized Constructor
    MovieTicket(string name, int seat, float price)
    {
        movieName = name;
        seatNumber = seat;
        ticketPrice = price;
        isBooked = false;
    }

    // Book Ticket
    void bookTicket()
    {
        if (!isBooked)
        {
            isBooked = true;
            cout << "Ticket booked successfully for seat " << seatNumber << " for movie " << movieName << endl;
        }
        else
        {
            cout << "Seat already booked!" << endl;
        }
    }

    // Cancel Ticket
    void cancelTicket()
    {
        if (isBooked)
        {
            isBooked = false;
            cout << "Ticket for seat " << seatNumber << " has been cancelled." << endl;
        }
        else
        {
            cout << "Ticket is not booked yet!" << endl;
        }
    }

    // Display Ticket Details
    void displayTicketDetails()
    {
        cout << "\nMovie Name: " << movieName;
        cout << "\nSeat Number: " << seatNumber;
        cout << "\nTicket Price: Rs. " << ticketPrice;
        cout << "\nBooking Status: " << (isBooked ? "Booked" : "Not Booked") << endl;
    }

    // Calculate Total Cost
    float calculateTotalCost(int numberOfTickets)
    {
        return ticketPrice * numberOfTickets;
    }
};

int main()
{
    // Creating objects
    MovieTicket ticket1;                          // Default constructor
    MovieTicket ticket2("Avengers", 12, 250);     // Parameterized constructor

    // Booking tickets
    ticket1.bookTicket();
    ticket2.bookTicket();

    // Display ticket details
    ticket1.displayTicketDetails();
    ticket2.displayTicketDetails();

    // Cancel one ticket
    ticket2.cancelTicket();

    // Display again
    ticket2.displayTicketDetails();

    // Calculate total cost
    int n = 3;
    cout << "\nTotal cost for " << n << " tickets: Rs. "
         << ticket2.calculateTotalCost(n) << endl;

    return 0;
}
