#include "os_task4.hpp"

OS_TASK4::OS_TASK4()
{
    m_TaskHandle = osThreadNew(this->run, NULL, &m_attributes);
}

auto OS_TASK4::run(void* argument) -> void
{
    while (true)
    {
        osDelay(600);
    }
}