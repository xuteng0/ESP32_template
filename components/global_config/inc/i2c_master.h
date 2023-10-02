#pragma once

#include "driver/i2c.h"

#define I2C_MASTER_NUM 0            /*!< I2C master i2c port number */
#define I2C_MASTER_FREQ_HZ 400000   /*!< I2C master clock frequency */
#define I2C_MASTER_TX_BUF_DISABLE 0 /*!< I2C master doesn't need buffer */
#define I2C_MASTER_RX_BUF_DISABLE 0 /*!< I2C master doesn't need buffer */
#define I2C_MASTER_TIMEOUT_MS 100


#ifdef __cplusplus
extern "C" {
#endif

esp_err_t i2c_master_init(void);

#ifdef __cplusplus
}
#endif