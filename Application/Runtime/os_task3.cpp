#include "os_task3.hpp"

OS_TASK3::OS_TASK3()
{
    m_TaskHandle = osThreadNew(this->run, NULL, &m_attributes);
}

auto OS_TASK3::run(void* argument) -> void
{
    while (true)
    {        
        osDelay(200);
    }
}