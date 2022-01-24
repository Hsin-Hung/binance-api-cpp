#include "binanceAPIUtils.h"

std::string get_OrderSide(OrderSide side)
{

    switch (side)
    {

    case OrderSide::BUY:
        return "BUY";
    case OrderSide::SELL:
        return "SELL";

    default:
        std::cout << "no such type" << std::endl;
    }

    return "";
}

std::string get_OrderType(OrderType type)
{

    switch (type)
    {

    case OrderType::LIMIT:
        return "LIMIT";
    case OrderType::MARKET:
        return "MARKET";
    case OrderType::STOP_LOSS:
        return "STOP_LOSS";
    case OrderType::STOP_LOSS_LIMIT:
        return "STOP_LOSS_LIMIT";
    case OrderType::TAKE_PROFIT:
        return "TAKE_PROFIT";
    case OrderType::TAKE_PROFIT_LIMIT:
        return "TAKE_PROFIT_LIMIT";
    case OrderType::LIMIT_MAKER:
        return "LIMIT_MAKER";
    default:
        std::cout << "no such type" << std::endl;
    }

    return "";
}

std::string get_TimeInForce(TimeInForce time)
{

    switch (time)
    {

    case TimeInForce::GTC:
        return "GTC";
    case TimeInForce::IOC:
        return "IOC";
    case TimeInForce::FOK:
        return "FOK";
    default:
        std::cout << "no such type" << std::endl;
    }

    return "";
}

std::string get_OrderResponseType(OrderResponseType type)
{

    switch (type)
    {

    case OrderResponseType::ACK:
        return "ACK";
    case OrderResponseType::RESULT:
        return "RESULT";
    case OrderResponseType::FULL:
        return "FULL";
    default:
        std::cout << "no such type" << std::endl;
    }

    return "";
}

std::string get_KCChartIntervals(KCChartIntervals interval)
{

    switch (interval)
    {

    case KCChartIntervals::_1m:
        return "1m";
    case KCChartIntervals::_3m:
        return "3m";
    case KCChartIntervals::_5m:
        return "5m";
    case KCChartIntervals::_15m:
        return "15m";
    case KCChartIntervals::_30m:
        return "30m";
    case KCChartIntervals::_1h:
        return "1h";
    case KCChartIntervals::_2h:
        return "2h";
    case KCChartIntervals::_4h:
        return "4h";
    case KCChartIntervals::_6h:
        return "6h";
    case KCChartIntervals::_8h:
        return "8h";
    case KCChartIntervals::_12h:
        return "12h";
    case KCChartIntervals::_1d:
        return "1d";
    case KCChartIntervals::_3d:
        return "3d";
    case KCChartIntervals::_1w:
        return "1w";
    case KCChartIntervals::_1M:
        return "1M";
    default:
        std::cout << "no such interval" << std::endl;
    }

    return "";
}

std::string get_Action(Action action)
{

    switch (action)
    {

    case Action::GET:
        return "GET";
    case Action::POST:
        return "POST";
    case Action::PUT:
        return "PUT";
    case Action::DELETE:
        return "DELETE";
    default:
        std::cout << "no such type" << std::endl;
    }

    return "";
}