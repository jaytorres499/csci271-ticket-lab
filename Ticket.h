//
// Your comments here...
//

#ifndef FIRSTSTRUCT_TICKET_H
#define FIRSTSTRUCT_TICKET_H

#include <string>

/**
 * @struct Ticket
 * @brief A simple struct to hold data for a single theater ticket.
 *
 * This struct will use all public members for direct access.
 */
struct Ticket {
    // TODO: Add the data members for the Ticket struct here.
    std::string section; //section
    int row; //row number
    int seat; //seat number
    double price; // ticket price
};

#endif //FIRSTSTRUCT_TICKET_H