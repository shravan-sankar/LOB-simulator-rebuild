#pragma once

#include <cstdint>

struct Order {

    enum class Side {BUY , SELL};
    enum class Status {PENDING, ACCEPTED, PARTIAL_FILL, CANCELLED, EXPIRED, REJECTED};

    int id;
    Side side;
    int amount;
    uint64_t price;
    Status status;
};