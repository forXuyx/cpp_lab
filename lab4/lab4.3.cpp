//
// Created by xyx on 23-6-8.
//
#include "iostream"

using namespace std;

// Enumeration for days of the week
enum class Day {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

// Enumeration for weather conditions
enum class Weather {
    Sunny,
    Rainy,
    Cloudy,
    Windy,
    Snowy
};

// Struct containing day and weather information
struct DayInfo {
    Day day;
    Weather weather;
};

bool canTravel(DayInfo dayInfo)
{
    if ((dayInfo.day == Day::Saturday || dayInfo.day == Day::Sunday) && dayInfo.weather == Weather::Sunny)
        return true;
    return false;
}

int main()
{
    DayInfo dayInfo;

    dayInfo.day = Day::Sunday;
    dayInfo.weather = Weather::Sunny;

    if (canTravel(dayInfo) == true)
        cout << "You can travel" << endl;
    else
        cout << "You cant" << endl;

    return 0;
}