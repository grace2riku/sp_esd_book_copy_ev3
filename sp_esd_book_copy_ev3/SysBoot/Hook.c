#include "Hook.h"
#include "SysCtrl.h"

void device_initialize(void) {
    sc_init();
    return;
}


void device_terminate(void) {
    sc_term();
    return;
}
