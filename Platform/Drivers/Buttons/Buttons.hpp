#pragma once
#include <cstdint>

class Buttons
{
    public:
        enum Pin
        {
            USER_BUTTON = 0
        };

        static Buttons& getInstance()
        {
            static Buttons instance;
            return instance;
        }


        auto read(const Pin) -> bool const;
        auto regCallback(void (*callback)(uint16_t, void*), void*) -> void;
        auto callCallback(const int16_t GPIO_Pin) -> void;

    private:

        Buttons() = default;
        virtual ~Buttons() = default;
        
        void *m_arg = nullptr;
        void (*callback)(uint16_t, void*);
};

static Buttons& buttons = Buttons::getInstance();