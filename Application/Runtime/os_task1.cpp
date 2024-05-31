#include "os_task1.hpp"
#include "LEDs.hpp"

OS_TASK1::OS_TASK1()
{
    m_TaskHandle = osThreadNew(this->run, NULL, &m_attributes);
}

auto OS_TASK1::run(void* argument) -> void
{
    LEDs ledRed;
    while (true)
    {
        ledRed.Toggle(LEDs::LED_RED);
        osDelay(500);
    }
}