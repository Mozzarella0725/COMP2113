#include <iostream>


struct Order {
    int id;
    int quantity;
    Order* next;
    Order(int id, int quantity) : id(id), quantity(quantity), next(nullptr) {}
};

class OrderList {
public:
    OrderList();                           // Constructor
    void insert(int id, int quantity);      // Insert order in ascending order by ID
    void deleteOrder(int id);               // Delete order by ID
    void print() const;                     // Print all orders in ascending order by ID
    ~OrderList();                           // Destructor

private:
    Order* head;
    bool exists(int id) const;              // Check if an order with the given ID exists
};