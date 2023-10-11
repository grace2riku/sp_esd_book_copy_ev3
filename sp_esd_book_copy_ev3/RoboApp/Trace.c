#include "../InputCtrl/Course.h"
#include "../OutputCtrl/Drive.h"
#include "../NaviCtrl/Navi.h"

#include "Trace.h"

typedef enum {
    eDiagnosis,     /* 自己診断中 */
    eRunning,       /* 走行中 */
} robotState_t;

static robotState_t current_state;

static void tr_traceCource(void);


void tr_init(void) {
    cs_init();
    nv_init();
    dr_init();
    current_state = eDiagnosis; /* 電源オン直後は自己診断 */

    return;
}


void tr_term(void) {
    dr_term();
    nv_term();
    cs_term();

    return;
}


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


void tr_runnable(void) {
    switch (current_state) {
    case eDiagnosis:
        current_state = eRunning;
        break;
    case eRunning:
        /* 何もしない */
        break;    
    default:
        /* 何もしない */
        break;
    }
    return;
}


static void tr_traceCource(void) {
    diffCourse_t        diff;   /* コースとのズレ */
    directionVector_t   drct;   /* 進行方向 */

    diff = cs_detectDifference();   /* ズレを検出する */
    drct = nv_naviCourse(diff);     /* 進行方向を決める */
    dr_move(drct);                  /* 進行方向に進む */

    return;
}
