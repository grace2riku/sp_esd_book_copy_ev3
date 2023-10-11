#include "ev3api.h"

#include "Sensor.h"

static const sensor_port_t color_sensor = EV3_PORT_2;


void ss_init(void) {
    ev3_sensor_config(color_sensor, COLOR_SENSOR);
    return;
}


void ss_term(void) {

    return;
}


unsigned char ss_getLightValue(void) {
    unsigned char lightValue;

    lightValue = ev3_color_sensor_get_reflect(color_sensor);

    return lightValue;
}