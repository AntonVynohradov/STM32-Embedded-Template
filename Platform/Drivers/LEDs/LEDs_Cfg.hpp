#pragma once
#include <array>
#include <map>

#include "main.h"
#include "LEDs.hpp"

namespace LEDs_Cfg
{    
    static const std::map<LEDs::Color, uint16_t> Pins 
    {
        {LEDs::LED_GREEN,    GPIO_PIN_12}, 
        {LEDs::LED_BLUE,     GPIO_PIN_15},
        {LEDs::LED_RED,      GPIO_PIN_14},
        {LEDs::LED_ORANGE,   GPIO_PIN_13}
    };

    static const auto Port GPIOD;
}