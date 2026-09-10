#include "../include/OrderBook.hpp"
#include <iostream>

void OrderBook::addOrder(Order order){
    if(order.side==Order::Side::BUY){
        buyOrders[order.price].push_back(order);
    }else if(order.side==Order::Side::SELL){
        sellOrders[order.price].push_back(order);
    }
}

void OrderBook::RemoveOrder(Order order){
    // when someone cancels an order
}

void OrderBook::printOrderBook()const{
    std::cout<<"BUY ORDERS:\n";

    for(const auto&[price,orders]:buyOrders){
        std::cout<<"Price: "<<price<<'\n';

        for(const auto&order:orders){
            std::cout<<"  Order ID: "<<order.id
                     <<", Amount: "<<order.amount<<'\n';
        }
    }

    std::cout<<"SELL ORDERS:\n";

    for(const auto&[price,orders]:sellOrders){
        std::cout<<"Price: "<<price<<'\n';

        for(const auto&order:orders){
            std::cout<<"  Order ID: "<<order.id
                     <<", Amount: "<<order.amount<<'\n';
        }
    }
}