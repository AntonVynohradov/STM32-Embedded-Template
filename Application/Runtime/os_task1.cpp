#include "os_task1.hpp"
#include "LEDs.hpp"

OS_TASK1::OS_TASK1()
{
    m_TaskHandle = osThreadNew(this->run, this, &m_attributes);
}

auto OS_TASK1::run(void* argument) -> void
{
    OS_TASK1 *task = static_cast<OS_TASK1 *>(argument);

    while (true)
    {
        task->m_leds.Toggle(LEDs::LED_RED);        
        osDelay(500);
    }
}