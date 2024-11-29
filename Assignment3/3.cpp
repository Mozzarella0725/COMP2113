#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct Order {
    int id;
    int quantity;
    Order* next;
    Order(int id, int quantity) : id(id), quantity(quantity), next(nullptr) {}
};

class OrderList {
public:
    OrderList() : head(nullptr) {}          // Constructor, the list is initialised as empty
    
    void insert(int id, int quantity) {
        if (exists(id)) return; // Assumption 1: ignore if the id already exists

        Order* newOrder = new Order(id, quantity);

        if (head == nullptr || head->id > id) {
            newOrder->next = head;
            head = newOrder;
        } // insert the order at the beginning when the head is null / the order has larger id
        else {
            Order* current = head;
            while (current->next && current->next->id < id) { // find the correct place in ascending order
                current = current->next;
            }
            newOrder->next = current->next;
            current->next = newOrder;
        } // insert the order in the middle or end
    }     // Insert order in ascending order by ID

    void deleteOrder(int id) {
        if (head == nullptr) return; // ignore if empty list
        if (head->id == id) { // delete if the id is the head
            Order* temp = head;
            head = head->next;
            delete temp;
            temp = nullptr; // Prevent dangling pointer
            return;
        }

        Order* current = head;
        while (current->next && current->next->id != id) {
            current = current->next;
        } // find the id node
        if (current->next) {
            Order* temp = current->next;
            current->next = current->next->next;
            delete temp;
            temp = nullptr; // Prevent dangling pointer
        } // delete the found node
    }               // Delete order by ID

    void print() const {
        if (head == nullptr) {
            cout << "Empty list" << endl;
            return;
        } // ignore if empty list

        Order* current = head;
        while (current) {
            cout << current->id << ": " << current->quantity << endl; // Fixed: Added space after ":"
            current = current->next;
        }
    }                   // Print all orders in ascending order by ID
    
    ~OrderList() {
        while (head) {
            Order* temp = head;
            head = head->next;
            delete temp;
            temp = nullptr; // Prevent dangling pointer
        }
    }                           // Destructor

private:
    Order* head;

    bool exists(int id) const {
        Order* current = head;
        while (current) {
            if (current->id == id) return true; // return true if the id is found
            current = current->next; // search for the next order
        }
        return false;
    }              // Check if an order with the given ID exists
};

int main() {
    OrderList orders;
    string line;

    while (getline(cin, line)) {
        stringstream ss(line);
        string command;
        ss >> command;

        if (command == "insert") {
            int id, quantity;
            ss >> id >> quantity; // Validate input
            orders.insert(id, quantity);
        } else if (command == "delete") {
            int id;
            ss >> id;
            orders.deleteOrder(id);
        } else if (command == "print") {
            orders.print();
        }
    }
    return 0;
}
