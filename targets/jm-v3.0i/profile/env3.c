#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x3f21bb82, "JM SHTC3 v3.0");

void app_init_services() {
    thermometer_init(&temperature_shtc3);
    humidity_init(&humidity_shtc3);
}
