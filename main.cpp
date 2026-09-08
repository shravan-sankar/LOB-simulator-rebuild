#include <iostream>
#include <cstdint>
#include "include/Order.hpp"

int main() {


    // example of a simple order
    Order order;

    order.id = 1;
    order.side = Order::Side::BUY;
    order.amount = 100;
    order.price = 10025;

    std::cout << "Order " << order.id << ": ";

    if (order.side == Order::Side::BUY)
        std::cout << "BUY ";
    else
        std::cout << "SELL ";

    std::cout << order.amount << " @ £"
              << order.price / 100.0 << '\n';

    return 0;
}