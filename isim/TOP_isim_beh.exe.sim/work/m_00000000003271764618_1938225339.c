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
static const char *ng0 = "C:/Users/zzh1996/Desktop/COD/MIPS_FINAL/ControlUnit.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {8U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {9U, 0U};
static unsigned int ng5[] = {12U, 0U};
static int ng6[] = {3, 0};
static unsigned int ng7[] = {13U, 0U};
static int ng8[] = {4, 0};
static unsigned int ng9[] = {14U, 0U};
static int ng10[] = {5, 0};
static unsigned int ng11[] = {10U, 0U};
static int ng12[] = {7, 0};
static unsigned int ng13[] = {11U, 0U};
static unsigned int ng14[] = {15U, 0U};
static int ng15[] = {8, 0};
static unsigned int ng16[] = {35U, 0U};
static unsigned int ng17[] = {32U, 0U};
static unsigned int ng18[] = {36U, 0U};
static unsigned int ng19[] = {33U, 0U};
static unsigned int ng20[] = {37U, 0U};
static int ng21[] = {2, 0};
static unsigned int ng22[] = {43U, 0U};
static unsigned int ng23[] = {41U, 0U};
static unsigned int ng24[] = {40U, 0U};
static unsigned int ng25[] = {0U, 0U};
static unsigned int ng26[] = {34U, 0U};
static unsigned int ng27[] = {42U, 0U};
static unsigned int ng28[] = {38U, 0U};
static unsigned int ng29[] = {39U, 0U};
static int ng30[] = {6, 0};
static unsigned int ng31[] = {4U, 0U};
static int ng32[] = {9, 0};
static unsigned int ng33[] = {7U, 0U};
static int ng34[] = {10, 0};
static unsigned int ng35[] = {6U, 0U};
static int ng36[] = {11, 0};
static unsigned int ng37[] = {2U, 0U};
static unsigned int ng38[] = {3U, 0U};
static unsigned int ng39[] = {5U, 0U};
static unsigned int ng40[] = {1U, 0U};



static void Always_40_0(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 4608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 4928);
    *((int *)t2) = 1;
    t3 = (t0 + 4640);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng23)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng25)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng31)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng39)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng35)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng33)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng40)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng37)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB2;

LAB7:    xsi_set_current_line(57, ng0);

LAB54:    xsi_set_current_line(58, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    goto LAB53;

LAB9:    xsi_set_current_line(63, ng0);

LAB55:    xsi_set_current_line(64, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    goto LAB53;

LAB11:    xsi_set_current_line(69, ng0);

LAB56:    xsi_set_current_line(70, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    goto LAB53;

LAB13:    xsi_set_current_line(75, ng0);

LAB57:    xsi_set_current_line(76, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    goto LAB53;

LAB15:    xsi_set_current_line(81, ng0);

LAB58:    xsi_set_current_line(82, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    goto LAB53;

LAB17:    xsi_set_current_line(87, ng0);

LAB59:    xsi_set_current_line(88, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng12)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    goto LAB53;

LAB19:    xsi_set_current_line(93, ng0);

LAB60:    xsi_set_current_line(94, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    goto LAB53;

LAB21:    xsi_set_current_line(99, ng0);

LAB61:    xsi_set_current_line(100, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng15)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    goto LAB53;

LAB23:    xsi_set_current_line(105, ng0);

LAB62:    xsi_set_current_line(106, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    goto LAB53;

LAB25:    xsi_set_current_line(112, ng0);

LAB63:    xsi_set_current_line(113, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB53;

LAB27:    xsi_set_current_line(120, ng0);

LAB64:    xsi_set_current_line(121, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB53;

LAB29:    xsi_set_current_line(128, ng0);

LAB65:    xsi_set_current_line(129, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB53;

LAB31:    xsi_set_current_line(136, ng0);

LAB66:    xsi_set_current_line(137, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng21)));
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB53;

LAB33:    xsi_set_current_line(144, ng0);

LAB67:    xsi_set_current_line(145, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    goto LAB53;

LAB35:    xsi_set_current_line(150, ng0);

LAB68:    xsi_set_current_line(151, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3528);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB53;

LAB37:    xsi_set_current_line(157, ng0);

LAB69:    xsi_set_current_line(158, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng21)));
    t4 = (t0 + 3528);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB53;

LAB39:    xsi_set_current_line(164, ng0);

LAB70:    xsi_set_current_line(165, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);

LAB71:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB72;

LAB73:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB74;

LAB75:    t2 = ((char*)((ng26)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB76;

LAB77:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB78;

LAB79:    t2 = ((char*)((ng27)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB80;

LAB81:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB82;

LAB83:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB84;

LAB85:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB86;

LAB87:    t2 = ((char*)((ng28)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB88;

LAB89:    t2 = ((char*)((ng29)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB90;

LAB91:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB92;

LAB93:    t2 = ((char*)((ng31)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB94;

LAB95:    t2 = ((char*)((ng33)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB96;

LAB97:    t2 = ((char*)((ng35)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB98;

LAB99:    t2 = ((char*)((ng25)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB100;

LAB101:    t2 = ((char*)((ng37)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB102;

LAB103:    t2 = ((char*)((ng38)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB104;

LAB105:
LAB106:    goto LAB53;

LAB41:    xsi_set_current_line(205, ng0);

LAB111:    xsi_set_current_line(206, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    goto LAB53;

LAB43:    xsi_set_current_line(210, ng0);

LAB112:    xsi_set_current_line(211, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(212, ng0);
    t2 = ((char*)((ng10)));
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    goto LAB53;

LAB45:    xsi_set_current_line(215, ng0);

LAB113:    xsi_set_current_line(216, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(217, ng0);
    t2 = ((char*)((ng8)));
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    goto LAB53;

LAB47:    xsi_set_current_line(220, ng0);

LAB114:    xsi_set_current_line(221, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(222, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    goto LAB53;

LAB49:    xsi_set_current_line(225, ng0);

LAB115:    xsi_set_current_line(226, ng0);
    t5 = (t0 + 1368U);
    t7 = *((char **)t5);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t7 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB119;

LAB116:    if (t20 != 0)
        goto LAB118;

LAB117:    *((unsigned int *)t8) = 1;

LAB119:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB120;

LAB121:    xsi_set_current_line(230, ng0);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t7 = (t5 + 4);
    t9 = (t2 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB127;

LAB124:    if (t20 != 0)
        goto LAB126;

LAB125:    *((unsigned int *)t8) = 1;

LAB127:    t23 = (t8 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB128;

LAB129:
LAB130:
LAB122:    goto LAB53;

LAB51:    xsi_set_current_line(236, ng0);

LAB132:    xsi_set_current_line(237, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 2888);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    goto LAB53;

LAB72:    xsi_set_current_line(168, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB106;

LAB74:    xsi_set_current_line(169, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB106;

LAB76:    xsi_set_current_line(170, ng0);
    t5 = ((char*)((ng21)));
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB106;

LAB78:    xsi_set_current_line(171, ng0);
    t5 = ((char*)((ng21)));
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB106;

LAB80:    xsi_set_current_line(172, ng0);
    t5 = ((char*)((ng12)));
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB106;

LAB82:    xsi_set_current_line(173, ng0);
    t5 = ((char*)((ng1)));
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB106;

LAB84:    xsi_set_current_line(174, ng0);
    t5 = ((char*)((ng6)));
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB106;

LAB86:    xsi_set_current_line(175, ng0);
    t5 = ((char*)((ng8)));
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB106;

LAB88:    xsi_set_current_line(176, ng0);
    t5 = ((char*)((ng10)));
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB106;

LAB90:    xsi_set_current_line(177, ng0);
    t5 = ((char*)((ng30)));
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB106;

LAB92:    xsi_set_current_line(179, ng0);

LAB107:    xsi_set_current_line(180, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 2888);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3208);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    goto LAB106;

LAB94:    xsi_set_current_line(184, ng0);
    t5 = ((char*)((ng32)));
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB106;

LAB96:    xsi_set_current_line(185, ng0);
    t5 = ((char*)((ng34)));
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB106;

LAB98:    xsi_set_current_line(186, ng0);
    t5 = ((char*)((ng36)));
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB106;

LAB100:    xsi_set_current_line(188, ng0);

LAB108:    xsi_set_current_line(189, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 3688);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng32)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);
    goto LAB106;

LAB102:    xsi_set_current_line(193, ng0);

LAB109:    xsi_set_current_line(194, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 3688);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng36)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);
    goto LAB106;

LAB104:    xsi_set_current_line(198, ng0);

LAB110:    xsi_set_current_line(199, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 3688);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng34)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);
    goto LAB106;

LAB118:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB119;

LAB120:    xsi_set_current_line(226, ng0);

LAB123:    xsi_set_current_line(227, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 2088);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    xsi_set_current_line(228, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    goto LAB122;

LAB126:    t10 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB127;

LAB128:    xsi_set_current_line(230, ng0);

LAB131:    xsi_set_current_line(231, ng0);
    t24 = ((char*)((ng3)));
    t30 = (t0 + 2088);
    xsi_vlogvar_assign_value(t30, t24, 0, 0, 1);
    xsi_set_current_line(232, ng0);
    t2 = ((char*)((ng21)));
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    goto LAB130;

}


extern void work_m_00000000003271764618_1938225339_init()
{
	static char *pe[] = {(void *)Always_40_0};
	xsi_register_didat("work_m_00000000003271764618_1938225339", "isim/TOP_isim_beh.exe.sim/work/m_00000000003271764618_1938225339.didat");
	xsi_register_executes(pe);
}
