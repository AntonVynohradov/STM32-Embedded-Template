#pragma once

class LEDs
{
    public:

    enum Color
    {
        LED_GREEN = 0,
        LED_BLUE,
        LED_RED,
        LED_ORANGE
    };

    LEDs() = default;
    ~LEDs() = default;

    auto On(Color) -> void;
    auto Off(Color) -> void;
    auto Toggle(Color) -> void;

};