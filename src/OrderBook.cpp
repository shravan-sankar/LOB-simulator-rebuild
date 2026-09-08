#include "../include/OrderBook.hpp"

void OrderBook::addOrder(Order order) {

    if (order.side == Order::Side::BUY) {
        buyOrders[order.price].push_back(order);
    }
    else if (order.side == Order::Side::SELL) {
        sellOrders[order.price].push_back(order);
    }
}