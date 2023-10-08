#include "Motor.h"

void mt_drvMotor(mt_direction_t direction) {
    switch (direction.front_back) {
    case eSTOP:
        /* code */
        break;
    case eFRONT:
        /* code */   
    case eBACK:
        /* 後進の関数は用意していない */   
    default:
        break;
    }

    switch (direction.left_right) {
    case eNO_TURN:
        /* code */
        break;
    case eLEFT_TURN:
        /* code */
        break;
    case eRIGHT_TURN:
        /* code */
        break;    
    }
}