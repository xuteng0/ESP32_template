extern "C" {
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "c_component.h"
}

#include "TestComponent.hpp"

extern "C" void app_main() {
    TestComponent test;
    test.printMessage();

    c_component_function();

    while (true) {
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
