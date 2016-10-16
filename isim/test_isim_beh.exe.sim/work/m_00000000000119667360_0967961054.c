/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/zzh1996/Desktop/COD/MIPS_FINAL/SignExtend.v";



static void Cont_26_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memcpy(t4, t3, 8);
    t7 = *((unsigned int *)t3);
    t8 = (t7 & 32768U);
    t5 = t8;
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (t9 & 32768U);
    t6 = t10;
    t11 = (t8 != 0);
    if (t11 == 1)
        goto LAB4;

LAB5:    t13 = (t10 != 0);
    if (t13 == 1)
        goto LAB6;

LAB7:    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 4294967295U);
    t17 = (t4 + 4);
    t18 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t18 & 4294967295U);
    t19 = (t0 + 2768);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t4, 8);
    xsi_driver_vfirst_trans(t19, 0, 31);
    t24 = (t0 + 2688);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 | 4294901760U);
    goto LAB5;

LAB6:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t15 | 4294901760U);
    goto LAB7;

}


extern void work_m_00000000000119667360_0967961054_init()
{
	static char *pe[] = {(void *)Cont_26_0};
	xsi_register_didat("work_m_00000000000119667360_0967961054", "isim/test_isim_beh.exe.sim/work/m_00000000000119667360_0967961054.didat");
	xsi_register_executes(pe);
}
