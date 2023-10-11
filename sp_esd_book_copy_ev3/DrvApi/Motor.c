#include "ev3api.h"

#include "Motor.h"

static const motor_port_t
    left_motor      = EV3_PORT_C,
    right_motor     = EV3_PORT_B;


void mt_init(void) {
    /* モーター出力ポートの設定 */
    ev3_motor_config(left_motor, LARGE_MOTOR);
    ev3_motor_config(right_motor, LARGE_MOTOR);

    /* 走行モーターエンコーダーリセット */
    ev3_motor_reset_counts(left_motor);
    ev3_motor_reset_counts(right_motor);

    return;
}


void mt_term(void) {
    ev3_motor_stop(left_motor, false);
    ev3_motor_stop(right_motor, false);

    return;
}


void mt_drvMotor(mt_direction_t direction) {
    signed char forward;      /* 前後進命令 */
    signed char turn;         /* 旋回命令 */

    switch (direction.front_back) {
    case eSTOP:
        forward = 0;
        break;
    case eFRONT:
        forward = 30;
        break;
    case eBACK:
        forward = 0;
        break;
    default:
        forward = 0;
        break;
    }

    switch (direction.left_right) {
    case eNO_TURN:
        turn = 0;
        break;
    case eLEFT_TURN:
        turn = -80;
        break;
    case eRIGHT_TURN:
        turn = 80;
        break;
    default:
        turn = 0;
        break;
    }

    /* 左右モータでロボットのステアリング操作を行う */
    ev3_motor_steer(
        left_motor,
        right_motor,
        (int)forward,
        (int)turn
    );

}