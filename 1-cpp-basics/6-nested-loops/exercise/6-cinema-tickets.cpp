#include <iostream>
#include <iomanip>
#include <string>

int main() {
    int totalTickets = 0;
    int studentTickets = 0;
    int standardTickets = 0;
    int kidTickets = 0;

    std::string movieName;
    while (std::getline(std::cin, movieName) && movieName != "Finish") {
        int capacity;
        std::cin >> capacity;
        std::cin.ignore(); 

        int ticketsSold = 0;
        std::string ticketType;
        while (ticketsSold < capacity && std::getline(std::cin, ticketType) && ticketType != "End") {
            ticketsSold++;
            totalTickets++;
            if (ticketType == "student") {
                studentTickets++;
            } else if (ticketType == "standard") {
                standardTickets++;
            } else if (ticketType == "kid") {
                kidTickets++;
            }
        }

        double occupancy = (static_cast<double>(ticketsSold) / capacity) * 100;
        std::cout << movieName << " - " << std::fixed << std::setprecision(2) << occupancy << "% full." << std::endl;
    }

    std::cout << "Total tickets: " << totalTickets << std::endl;
    std::cout << std::fixed << std::setprecision(2) << (static_cast<double>(studentTickets) / totalTickets) * 100 << "% student tickets." << std::endl;
    std::cout << std::fixed << std::setprecision(2) << (static_cast<double>(standardTickets) / totalTickets) * 100 << "% standard tickets." << std::endl;
    std::cout << std::fixed << std::setprecision(2) << (static_cast<double>(kidTickets) / totalTickets) * 100 << "% kids tickets." << std::endl;

    return 0;
}
