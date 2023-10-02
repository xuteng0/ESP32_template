#include "c_component.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "i2c_master.h"


#include "TestComponent.hpp"

extern "C" void app_main()
{
    TestComponent test;
    test.printMessage();

    c_component_function();

    i2c_master_init();

    while (true)
    {
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
