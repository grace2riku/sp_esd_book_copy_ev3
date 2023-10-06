#ifndef COURSE_H
#define COURSE_H

typedef enum {
    eNoDiff,    /* ズレていない */
    eDiffLeft,  /* 左にズレている */
    eDiffRight, /* 右にズレている */
} diffCourse_t;

extern diffCourse_t cs_detectDifference(void);

#endif /* COURSE_H */