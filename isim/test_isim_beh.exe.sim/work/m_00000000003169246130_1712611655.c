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
static const char *ng0 = "C:/Users/zzh1996/Desktop/COD/MIPS_FINAL/SplitWord.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};



static void Always_28_0(char *t0)
{
    char t7[8];
    char t29[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    goto LAB17;

LAB9:    xsi_set_current_line(33, ng0);

LAB18:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t4);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB22;

LAB19:    if (t19 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t7) = 1;

LAB22:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t8 = (t2 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB29;

LAB26:    if (t19 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t7) = 1;

LAB29:    t22 = (t7 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB30;

LAB31:
LAB32:
LAB25:    goto LAB17;

LAB11:    xsi_set_current_line(40, ng0);

LAB33:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t4);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB37;

LAB34:    if (t19 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t7) = 1;

LAB37:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t8 = (t2 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB44;

LAB41:    if (t19 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t7) = 1;

LAB44:    t22 = (t7 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB45;

LAB46:
LAB47:
LAB40:    goto LAB17;

LAB13:    xsi_set_current_line(47, ng0);

LAB48:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t4);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB52;

LAB49:    if (t19 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t7) = 1;

LAB52:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t8 = (t2 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB59;

LAB56:    if (t19 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t7) = 1;

LAB59:    t22 = (t7 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t8 = (t2 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB66;

LAB63:    if (t19 != 0)
        goto LAB65;

LAB64:    *((unsigned int *)t7) = 1;

LAB66:    t22 = (t7 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t29, 0, 8);
    t2 = (t29 + 4);
    t5 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 24);
    *((unsigned int *)t29) = t11;
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 24);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t14 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    xsi_vlogtype_sign_extend(t7, 32, t29, 8);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);

LAB69:
LAB62:
LAB55:    goto LAB17;

LAB15:    xsi_set_current_line(58, ng0);

LAB70:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t4);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB74;

LAB71:    if (t19 != 0)
        goto LAB73;

LAB72:    *((unsigned int *)t7) = 1;

LAB74:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t8 = (t2 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB81;

LAB78:    if (t19 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t7) = 1;

LAB81:    t22 = (t7 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t8 = (t2 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB88;

LAB85:    if (t19 != 0)
        goto LAB87;

LAB86:    *((unsigned int *)t7) = 1;

LAB88:    t22 = (t7 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB89;

LAB90:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 24);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 24);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);

LAB91:
LAB84:
LAB77:    goto LAB17;

LAB21:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(35, ng0);
    t31 = (t0 + 1048U);
    t32 = *((char **)t31);
    memset(t30, 0, 8);
    t31 = (t30 + 4);
    t33 = (t32 + 4);
    t34 = *((unsigned int *)t32);
    t35 = (t34 >> 0);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t31) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 65535U);
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 65535U);
    xsi_vlogtype_sign_extend(t29, 32, t30, 16);
    t40 = (t0 + 1768);
    xsi_vlogvar_assign_value(t40, t29, 0, 0, 32);
    goto LAB25;

LAB28:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(37, ng0);
    t23 = (t0 + 1048U);
    t31 = *((char **)t23);
    memset(t30, 0, 8);
    t23 = (t30 + 4);
    t32 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 16);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 >> 16);
    *((unsigned int *)t23) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 65535U);
    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & 65535U);
    xsi_vlogtype_sign_extend(t29, 32, t30, 16);
    t33 = (t0 + 1768);
    xsi_vlogvar_assign_value(t33, t29, 0, 0, 32);
    goto LAB32;

LAB36:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(42, ng0);
    t31 = (t0 + 1048U);
    t32 = *((char **)t31);
    memset(t29, 0, 8);
    t31 = (t29 + 4);
    t33 = (t32 + 4);
    t34 = *((unsigned int *)t32);
    t35 = (t34 >> 0);
    *((unsigned int *)t29) = t35;
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t31) = t37;
    t38 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t38 & 65535U);
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 65535U);
    t40 = (t0 + 1768);
    xsi_vlogvar_assign_value(t40, t29, 0, 0, 32);
    goto LAB40;

LAB43:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(44, ng0);
    t23 = (t0 + 1048U);
    t31 = *((char **)t23);
    memset(t29, 0, 8);
    t23 = (t29 + 4);
    t32 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 16);
    *((unsigned int *)t29) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 >> 16);
    *((unsigned int *)t23) = t37;
    t38 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t38 & 65535U);
    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & 65535U);
    t33 = (t0 + 1768);
    xsi_vlogvar_assign_value(t33, t29, 0, 0, 32);
    goto LAB47;

LAB51:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB52;

LAB53:    xsi_set_current_line(49, ng0);
    t31 = (t0 + 1048U);
    t32 = *((char **)t31);
    memset(t30, 0, 8);
    t31 = (t30 + 4);
    t33 = (t32 + 4);
    t34 = *((unsigned int *)t32);
    t35 = (t34 >> 0);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t31) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 255U);
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 255U);
    xsi_vlogtype_sign_extend(t29, 32, t30, 8);
    t40 = (t0 + 1768);
    xsi_vlogvar_assign_value(t40, t29, 0, 0, 32);
    goto LAB55;

LAB58:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(51, ng0);
    t23 = (t0 + 1048U);
    t31 = *((char **)t23);
    memset(t30, 0, 8);
    t23 = (t30 + 4);
    t32 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 8);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 >> 8);
    *((unsigned int *)t23) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 255U);
    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & 255U);
    xsi_vlogtype_sign_extend(t29, 32, t30, 8);
    t33 = (t0 + 1768);
    xsi_vlogvar_assign_value(t33, t29, 0, 0, 32);
    goto LAB62;

LAB65:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB66;

LAB67:    xsi_set_current_line(53, ng0);
    t23 = (t0 + 1048U);
    t31 = *((char **)t23);
    memset(t30, 0, 8);
    t23 = (t30 + 4);
    t32 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 16);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 >> 16);
    *((unsigned int *)t23) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 255U);
    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & 255U);
    xsi_vlogtype_sign_extend(t29, 32, t30, 8);
    t33 = (t0 + 1768);
    xsi_vlogvar_assign_value(t33, t29, 0, 0, 32);
    goto LAB69;

LAB73:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB74;

LAB75:    xsi_set_current_line(60, ng0);
    t31 = (t0 + 1048U);
    t32 = *((char **)t31);
    memset(t29, 0, 8);
    t31 = (t29 + 4);
    t33 = (t32 + 4);
    t34 = *((unsigned int *)t32);
    t35 = (t34 >> 0);
    *((unsigned int *)t29) = t35;
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t31) = t37;
    t38 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t38 & 255U);
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 255U);
    t40 = (t0 + 1768);
    xsi_vlogvar_assign_value(t40, t29, 0, 0, 32);
    goto LAB77;

LAB80:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB81;

LAB82:    xsi_set_current_line(62, ng0);
    t23 = (t0 + 1048U);
    t31 = *((char **)t23);
    memset(t29, 0, 8);
    t23 = (t29 + 4);
    t32 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 8);
    *((unsigned int *)t29) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 >> 8);
    *((unsigned int *)t23) = t37;
    t38 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t38 & 255U);
    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & 255U);
    t33 = (t0 + 1768);
    xsi_vlogvar_assign_value(t33, t29, 0, 0, 32);
    goto LAB84;

LAB87:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB88;

LAB89:    xsi_set_current_line(64, ng0);
    t23 = (t0 + 1048U);
    t31 = *((char **)t23);
    memset(t29, 0, 8);
    t23 = (t29 + 4);
    t32 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 16);
    *((unsigned int *)t29) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 >> 16);
    *((unsigned int *)t23) = t37;
    t38 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t38 & 255U);
    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & 255U);
    t33 = (t0 + 1768);
    xsi_vlogvar_assign_value(t33, t29, 0, 0, 32);
    goto LAB91;

}


extern void work_m_00000000003169246130_1712611655_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_00000000003169246130_1712611655", "isim/test_isim_beh.exe.sim/work/m_00000000003169246130_1712611655.didat");
	xsi_register_executes(pe);
}
