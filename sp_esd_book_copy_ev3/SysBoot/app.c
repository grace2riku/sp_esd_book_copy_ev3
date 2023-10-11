/**
 ******************************************************************************
 ** ファイル名 : app.c
 **
 ** 概要 : 
 **
 ** 注記 : 
 ******************************************************************************
 **/

#include "ev3api.h"
#include "app.h"
#include "etroboc_ext.h"
#include "SysCtrl.h"
#include "Hook.h"
#include "Trace.h"

#if defined(BUILD_MODULE)
    #include "module_cfg.h"
#else
    #include "kernel_cfg.h"
#endif


/* メインタスク */
void main_task(intptr_t unused)
{
    device_initialize();

    tr_runnable();

    sta_cyc(TRACE_CYC);
 

    ext_tsk();
}


void trace_task(intptr_t unused)
{
    sc_traceMain();
}
