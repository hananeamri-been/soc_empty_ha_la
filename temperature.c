#include "temperature.h"
#include "sl_sensor_rht.h"

int16_t temperature_get_ble(void)
{
    uint32_t humidity;
    int32_t temperature;

    sl_sensor_rht_get(&humidity, &temperature);

    return (int16_t)(temperature / 10);
}
