#include "LEDs.hpp"
#include "LEDs_Cfg.hpp"

auto LEDs::On(LEDs::Color led) -> void
{
    HAL_GPIO_WritePin(LEDs_Cfg::Port, LEDs_Cfg::Pins.at(led), GPIO_PIN_SET);
}

auto LEDs::Off(LEDs::Color led) -> void
{
    HAL_GPIO_WritePin(LEDs_Cfg::Port, LEDs_Cfg::Pins.at(led), GPIO_PIN_RESET);
}

auto LEDs::Toggle(LEDs::Color led) -> void
{
    HAL_GPIO_TogglePin(LEDs_Cfg::Port, LEDs_Cfg::Pins.at(led));
}  