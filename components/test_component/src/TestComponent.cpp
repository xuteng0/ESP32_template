#include "TestComponent.hpp"
#include "esp_log.h"

static const char* TAG = "TestComponent";

TestComponent::TestComponent() {}

void TestComponent::printMessage() {
    ESP_LOGI(TAG, "Hello from TestComponent!");
}
