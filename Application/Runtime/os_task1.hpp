#pragma once

#include "cmsis_os.h"
#include "LEDs.hpp"

class OS_TASK1
{
public:
    static auto run(void* argument) -> void;

    static OS_TASK1& getInstance()
    {
        static OS_TASK1 instance;
        return instance;
    }

private:
    OS_TASK1();
    ~OS_TASK1() = default;

    osThreadId_t m_TaskHandle;

    osThreadAttr_t const m_attributes = {
            .name = "osTask_1",
            .stack_size = 128 * 4,
            .priority = (osPriority_t)osPriorityNormal,
    };

    LEDs m_leds;
};

static OS_TASK1& os_task1 = OS_TASK1::getInstance();