#include "Road.h"
#include "Course.h"

void cs_init(void) {
    rd_init();
    return;
}


void cs_term(void) {
    rd_term();
    return;
}


diffCourse_t cs_detectDifference(void) {
    roadColor_t     color;
    diffCourse_t    diff;

    color = rd_getRoadColor();

    switch (color) {
    case eWhite:
        diff = eDiffRight;
        break;
    case eLightGray:
        diff = eDiffRight;
        break;
    case eGray:
        diff = eNoDiff;
        break;
    case eDarkGray:
        diff = eDiffLeft;
        break;
    case eBlack:
        diff = eDiffLeft;
        break;    
    default:
        diff = eDiffLeft;
        break;
    }

    return diff;
}
