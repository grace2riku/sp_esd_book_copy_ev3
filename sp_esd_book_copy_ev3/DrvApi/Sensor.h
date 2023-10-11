#ifndef SENSOR_H
#define SENSOR_H

#define WHITE_THRESHORD         91  /* 白の上限値 */
#define LIGHTGRAY_THRESHORD     69  /* 淡い灰色の上限値 */
#define GRAY_THRESHORD          48  /* 灰色の上限値 */
#define DARKGRAY_THRESHORD      27  /* 濃い灰色の上限値 */
#define BLACK_THRESHORD         9   /* 黒の上限値 */

extern void ss_init(void);
extern void ss_term(void);
unsigned char ss_getLightValue(void);

#endif /* SENSOR_H */