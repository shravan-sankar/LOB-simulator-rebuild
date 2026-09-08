#pragma once

#include "Order.hpp"
#include <cstdint> // used for uint64_t
#include <functional> // used for std::greater
#include <map>
#include <vector>

class OrderBook {
public:
    void addOrder(Order order);

private:
    std::map<uint64_t, std::vector<Order>, std::greater<uint64_t>> buyOrders;
    std::map<uint64_t, std::vector<Order>> sellOrders;
};