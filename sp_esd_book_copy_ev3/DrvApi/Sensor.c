#include "ev3api.h"

#include "Sensor.h"

#define PORT_LIGHT EV3_PORT_2

unsigned char ss_getLightValue(void) {
    unsigned char lightValue;

    lightValue = ev3_color_sensor_get_reflect(PORT_LIGHT);

    return lightValue;
}