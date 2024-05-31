#include "os_task2.hpp"
#include "main.h"

OS_TASK2::OS_TASK2()
{
    m_TaskHandle = osThreadNew(this->run, this, &m_attributes);
    buttons.regCallback(this->button_callback, this);
}

auto OS_TASK2::run(void* argument) -> void
{
    OS_TASK2 *task = static_cast<OS_TASK2 *>(argument);

    while (true)
    {
        task->m_leds.Toggle(LEDs::LED_GREEN);
        osDelay(700);
    }
}

auto OS_TASK2::button_callback(uint16_t pin, void *arg) -> void
{
    OS_TASK2 *task = static_cast<OS_TASK2 *>(arg);

    task->m_leds.Toggle(LEDs::LED_BLUE);
}