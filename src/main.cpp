#include <iostream>
#include "../include/Order.hpp"
#include "../include/OrderBook.hpp"

int main() {

    // example of a buy and sell order in an orderbook

    Order buyOrder;
    buyOrder.id = 1;
    buyOrder.side = Order::Side::BUY;
    buyOrder.amount = 100;
    buyOrder.price = 10000;

    Order sellOrder;
    sellOrder.id = 2;
    sellOrder.side = Order::Side::SELL;
    sellOrder.amount = 50;
    sellOrder.price = 10100;

    OrderBook book;

    book.addOrder(buyOrder);
    book.addOrder(sellOrder);

    book.printOrderBook();
}