#include "Trace.h"

typedef enum {
    eDiagnosis,     /* 自己診断中 */
    eRunning,       /* 走行中 */
} robotState_t;

static robotState_t current_state;

static void tr_traceCource(void);


void tr_run(void) {
    switch (current_state)
    {
    case eDiagnosis:    /* 自己診断中 */
        /* なにもしない */
        break;
    case eRunning:    /* 走行中 */
        /* 走行する */
        tr_traceCource();
        break;    
    default:
        /* 何もしない */
        break;
    }
    return;
}


static void tr_traceCource(void) {

    return;
}
