#pragma once

#include <map>

#include "Buttons.hpp"
#include "main.h"

namespace Buttons_Cfg
{
    static const std::map<Buttons::Pin, uint16_t> Pins 
    {
        {Buttons::USER_BUTTON,    GPIO_PIN_0}, 
        
    };

    static const auto Port GPIOA;
}