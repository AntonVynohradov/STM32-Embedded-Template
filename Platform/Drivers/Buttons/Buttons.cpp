#include "Buttons.hpp"
#include "Buttons_Cfg.hpp"

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
    buttons.callCallback(GPIO_Pin);
}

auto Buttons::read(const Buttons::Pin type) -> bool const
{
    return static_cast<bool>(HAL_GPIO_ReadPin(Buttons_Cfg::Port, Buttons_Cfg::Pins.at(type)));  
}

auto Buttons::regCallback(void (*callback)(uint16_t GPIO_Pin, void* arg), void* argument) -> void
{
    if(callback != nullptr)
    {
        m_arg = argument;
        this->callback = callback;
    }
}

auto Buttons::callCallback(const int16_t GPIO_Pin) -> void
{
    if(this->callback != nullptr)
    {
        this->callback(GPIO_Pin, this->m_arg);
    }
}

