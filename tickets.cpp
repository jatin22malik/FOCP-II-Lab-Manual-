#include<iostream>
using namespace std;

class MovieTicket
{
private:
    string movieName;
    int seatNumber;
    int ticketPrice;
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
    MovieTicket(string name, int seat, int cost)
    {
        movieName = name;
        seatNumber = seat;
        ticketPrice = cost;
        isBooked = false;
    }

    void bookTicket()
    {
        isBooked = true;
        cout << "Ticket Booked Successfully!\n";
    }
    

    void cancelTicket()
    {
        isBooked = false;
        cout << "Ticket Cancelled!\n";
    }

    void displayTicketDetails()
    {
        cout << "\nMovie Name: " << movieName << endl;
        cout << "Seat Number: " << seatNumber << endl;
        cout << "Ticket Price: " << ticketPrice << endl;

        if (isBooked)
            cout << "Status: Booked\n";
        else
            cout << "Status: Not Booked\n";
    }

    int calculateTotalPrice(int numberOfTickets)
    {
        return ticketPrice * numberOfTickets;
    }

    ~MovieTicket()
    {
        cout << "\nThank you for using Movie Ticket System.\n";
    }
};

int main()
{
    MovieTicket t1("Jaat", 45, 300);

    t1.bookTicket();
    t1.displayTicketDetails();

    int total = t1.calculateTotalPrice(3);
    cout << "\nTotal Price for 3 tickets: " << total << endl;

    t1.cancelTicket();
    t1.displayTicketDetails();

    return 0;
}