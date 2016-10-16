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
static const char *ng0 = "C:/Users/zzh1996/Desktop/COD/MIPS_FINAL/ALU.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};
static int ng6[] = {5, 0};
static int ng7[] = {6, 0};
static int ng8[] = {7, 0};
static int ng9[] = {8, 0};
static unsigned int ng10[] = {0U, 0U};
static int ng11[] = {9, 0};
static int ng12[] = {10, 0};
static int ng13[] = {11, 0};



static void Always_29_0(char *t0)
{
    char t7[8];
    char t8[8];
    char t12[8];
    char t52[8];
    char t53[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB29;

LAB30:
LAB32:
LAB31:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB33:    goto LAB2;

LAB7:    xsi_set_current_line(32, ng0);
    t9 = (t0 + 1048U);
    t10 = *((char **)t9);
    t9 = (t0 + 1208U);
    t11 = *((char **)t9);
    memset(t12, 0, 8);
    t9 = (t10 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB35;

LAB34:    t13 = (t11 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t10) < *((unsigned int *)t11))
        goto LAB36;

LAB37:    memset(t8, 0, 8);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t12);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t15) != 0)
        goto LAB41;

LAB42:    t22 = (t8 + 4);
    t23 = *((unsigned int *)t8);
    t24 = *((unsigned int *)t22);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB43;

LAB44:    t27 = *((unsigned int *)t8);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t22) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t8) > 0)
        goto LAB49;

LAB50:    memcpy(t7, t31, 8);

LAB51:    t32 = (t0 + 1768);
    xsi_vlogvar_assign_value(t32, t7, 0, 0, 32);
    goto LAB33;

LAB9:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t9 = *((char **)t3);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t4, 32, t9, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t7, 0, 0, 32);
    goto LAB33;

LAB11:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t9 = *((char **)t3);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 32, t4, 32, t9, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t7, 0, 0, 32);
    goto LAB33;

LAB13:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t9 = *((char **)t3);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t9);
    t18 = (t16 & t17);
    *((unsigned int *)t7) = t18;
    t3 = (t4 + 4);
    t10 = (t9 + 4);
    t11 = (t7 + 4);
    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t10);
    t23 = (t19 | t20);
    *((unsigned int *)t11) = t23;
    t24 = *((unsigned int *)t11);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB52;

LAB53:
LAB54:    t15 = (t0 + 1768);
    xsi_vlogvar_assign_value(t15, t7, 0, 0, 32);
    goto LAB33;

LAB15:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t9 = *((char **)t3);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t9);
    t18 = (t16 | t17);
    *((unsigned int *)t7) = t18;
    t3 = (t4 + 4);
    t10 = (t9 + 4);
    t11 = (t7 + 4);
    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t10);
    t23 = (t19 | t20);
    *((unsigned int *)t11) = t23;
    t24 = *((unsigned int *)t11);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB55;

LAB56:
LAB57:    t15 = (t0 + 1768);
    xsi_vlogvar_assign_value(t15, t7, 0, 0, 32);
    goto LAB33;

LAB17:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t9 = *((char **)t3);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t9);
    t18 = (t16 ^ t17);
    *((unsigned int *)t7) = t18;
    t3 = (t4 + 4);
    t10 = (t9 + 4);
    t11 = (t7 + 4);
    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t10);
    t23 = (t19 | t20);
    *((unsigned int *)t11) = t23;
    t24 = *((unsigned int *)t11);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB58;

LAB59:
LAB60:    t13 = (t0 + 1768);
    xsi_vlogvar_assign_value(t13, t7, 0, 0, 32);
    goto LAB33;

LAB19:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t9 = *((char **)t3);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t9);
    t18 = (t16 | t17);
    *((unsigned int *)t8) = t18;
    t3 = (t4 + 4);
    t10 = (t9 + 4);
    t11 = (t8 + 4);
    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t10);
    t23 = (t19 | t20);
    *((unsigned int *)t11) = t23;
    t24 = *((unsigned int *)t11);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB61;

LAB62:
LAB63:    memset(t7, 0, 8);
    t15 = (t7 + 4);
    t21 = (t8 + 4);
    t43 = *((unsigned int *)t8);
    t44 = (~(t43));
    *((unsigned int *)t7) = t44;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t21) != 0)
        goto LAB65;

LAB64:    t49 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t49 & 4294967295U);
    t50 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t50 & 4294967295U);
    t22 = (t0 + 1768);
    xsi_vlogvar_assign_value(t22, t7, 0, 0, 32);
    goto LAB33;

LAB21:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t9 = *((char **)t3);
    memset(t52, 0, 8);
    xsi_vlog_signed_less(t52, 32, t4, 32, t9, 32);
    memset(t8, 0, 8);
    t3 = (t52 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    t18 = *((unsigned int *)t52);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t3) != 0)
        goto LAB68;

LAB69:    t11 = (t8 + 4);
    t23 = *((unsigned int *)t8);
    t24 = *((unsigned int *)t11);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB70;

LAB71:    t27 = *((unsigned int *)t8);
    t28 = (~(t27));
    t29 = *((unsigned int *)t11);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t11) > 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t8) > 0)
        goto LAB76;

LAB77:    memcpy(t7, t14, 8);

LAB78:    t15 = (t0 + 1768);
    xsi_vlogvar_assign_value(t15, t7, 0, 0, 32);
    goto LAB33;

LAB23:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1208U);
    t9 = *((char **)t4);
    xsi_vlogtype_concat(t53, 48, 48, 2U, t9, 32, t3, 16);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t53, 0, 0, 32);
    goto LAB33;

LAB25:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t9 = *((char **)t3);
    memset(t7, 0, 8);
    t3 = (t7 + 4);
    t10 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 0);
    *((unsigned int *)t7) = t17;
    t18 = *((unsigned int *)t10);
    t19 = (t18 >> 0);
    *((unsigned int *)t3) = t19;
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 31U);
    t23 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t23 & 31U);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_lshift(t8, 32, t4, 32, t7, 5);
    t11 = (t0 + 1768);
    xsi_vlogvar_assign_value(t11, t8, 0, 0, 32);
    goto LAB33;

LAB27:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t9 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t8 + 4);
    t10 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 0);
    *((unsigned int *)t8) = t17;
    t18 = *((unsigned int *)t10);
    t19 = (t18 >> 0);
    *((unsigned int *)t3) = t19;
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t20 & 31U);
    t23 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t23 & 31U);
    memset(t12, 0, 8);
    xsi_vlog_signed_arith_rshift(t12, 32, t4, 32, t8, 5);
    t11 = (t0 + 1768);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 32);
    goto LAB33;

LAB29:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t9 = *((char **)t3);
    memset(t7, 0, 8);
    t3 = (t7 + 4);
    t10 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 0);
    *((unsigned int *)t7) = t17;
    t18 = *((unsigned int *)t10);
    t19 = (t18 >> 0);
    *((unsigned int *)t3) = t19;
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 31U);
    t23 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t23 & 31U);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_rshift(t8, 32, t4, 32, t7, 5);
    t11 = (t0 + 1768);
    xsi_vlogvar_assign_value(t11, t8, 0, 0, 32);
    goto LAB33;

LAB35:    t14 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB37;

LAB36:    *((unsigned int *)t12) = 1;
    goto LAB37;

LAB39:    *((unsigned int *)t8) = 1;
    goto LAB42;

LAB41:    t21 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB42;

LAB43:    t26 = ((char*)((ng2)));
    goto LAB44;

LAB45:    t31 = ((char*)((ng1)));
    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t7, 32, t26, 32, t31, 32);
    goto LAB51;

LAB49:    memcpy(t7, t26, 8);
    goto LAB51;

LAB52:    t27 = *((unsigned int *)t7);
    t28 = *((unsigned int *)t11);
    *((unsigned int *)t7) = (t27 | t28);
    t13 = (t4 + 4);
    t14 = (t9 + 4);
    t29 = *((unsigned int *)t4);
    t30 = (~(t29));
    t33 = *((unsigned int *)t13);
    t34 = (~(t33));
    t35 = *((unsigned int *)t9);
    t36 = (~(t35));
    t37 = *((unsigned int *)t14);
    t38 = (~(t37));
    t39 = (t30 & t34);
    t40 = (t36 & t38);
    t41 = (~(t39));
    t42 = (~(t40));
    t43 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t43 & t41);
    t44 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t44 & t42);
    t45 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t45 & t41);
    t46 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t46 & t42);
    goto LAB54;

LAB55:    t27 = *((unsigned int *)t7);
    t28 = *((unsigned int *)t11);
    *((unsigned int *)t7) = (t27 | t28);
    t13 = (t4 + 4);
    t14 = (t9 + 4);
    t29 = *((unsigned int *)t13);
    t30 = (~(t29));
    t33 = *((unsigned int *)t4);
    t39 = (t33 & t30);
    t34 = *((unsigned int *)t14);
    t35 = (~(t34));
    t36 = *((unsigned int *)t9);
    t40 = (t36 & t35);
    t37 = (~(t39));
    t38 = (~(t40));
    t41 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t41 & t37);
    t42 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t42 & t38);
    goto LAB57;

LAB58:    t27 = *((unsigned int *)t7);
    t28 = *((unsigned int *)t11);
    *((unsigned int *)t7) = (t27 | t28);
    goto LAB60;

LAB61:    t27 = *((unsigned int *)t8);
    t28 = *((unsigned int *)t11);
    *((unsigned int *)t8) = (t27 | t28);
    t13 = (t4 + 4);
    t14 = (t9 + 4);
    t29 = *((unsigned int *)t13);
    t30 = (~(t29));
    t33 = *((unsigned int *)t4);
    t39 = (t33 & t30);
    t34 = *((unsigned int *)t14);
    t35 = (~(t34));
    t36 = *((unsigned int *)t9);
    t40 = (t36 & t35);
    t37 = (~(t39));
    t38 = (~(t40));
    t41 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t41 & t37);
    t42 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t42 & t38);
    goto LAB63;

LAB65:    t45 = *((unsigned int *)t7);
    t46 = *((unsigned int *)t21);
    *((unsigned int *)t7) = (t45 | t46);
    t47 = *((unsigned int *)t15);
    t48 = *((unsigned int *)t21);
    *((unsigned int *)t15) = (t47 | t48);
    goto LAB64;

LAB66:    *((unsigned int *)t8) = 1;
    goto LAB69;

LAB68:    t10 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB69;

LAB70:    t13 = ((char*)((ng2)));
    goto LAB71;

LAB72:    t14 = ((char*)((ng1)));
    goto LAB73;

LAB74:    xsi_vlog_unsigned_bit_combine(t7, 32, t13, 32, t14, 32);
    goto LAB78;

LAB76:    memcpy(t7, t13, 8);
    goto LAB78;

}


extern void work_m_00000000000624848084_0886308060_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_00000000000624848084_0886308060", "isim/toptest_isim_beh.exe.sim/work/m_00000000000624848084_0886308060.didat");
	xsi_register_executes(pe);
}
