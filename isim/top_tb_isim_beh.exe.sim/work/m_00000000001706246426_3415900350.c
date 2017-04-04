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
static const char *ng0 = "D:/Proyectos/Proyecto2Taller/P2-TD/displayController.v";
static int ng1[] = {0, 0};
static int ng2[] = {5, 0};
static int ng3[] = {6, 0};
static int ng4[] = {8, 0};
static int ng5[] = {9, 0};
static int ng6[] = {7, 0};
static unsigned int ng7[] = {0U, 0U};
static int ng8[] = {1, 0};
static unsigned int ng9[] = {1U, 0U};
static int ng10[] = {2, 0};
static unsigned int ng11[] = {2U, 0U};
static int ng12[] = {3, 0};
static unsigned int ng13[] = {3U, 0U};
static int ng14[] = {4, 0};
static unsigned int ng15[] = {14U, 0U};
static unsigned int ng16[] = {13U, 0U};
static unsigned int ng17[] = {11U, 0U};
static unsigned int ng18[] = {7U, 0U};
static unsigned int ng19[] = {63U, 0U};
static unsigned int ng20[] = {121U, 0U};
static unsigned int ng21[] = {36U, 0U};
static unsigned int ng22[] = {48U, 0U};
static unsigned int ng23[] = {4U, 0U};
static unsigned int ng24[] = {25U, 0U};
static unsigned int ng25[] = {5U, 0U};
static unsigned int ng26[] = {18U, 0U};
static unsigned int ng27[] = {6U, 0U};
static unsigned int ng28[] = {12U, 0U};
static unsigned int ng29[] = {8U, 0U};
static unsigned int ng30[] = {9U, 0U};
static unsigned int ng31[] = {70U, 0U};



static void Always_44_0(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 5704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 8256);
    *((int *)t2) = 1;
    t3 = (t0 + 5736);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1664U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB15;

LAB13:    if (*((unsigned int *)t2) == 0)
        goto LAB12;

LAB14:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB15:    t5 = (t13 + 4);
    t11 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t13) = t15;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB17;

LAB16:    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 1U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 1U);
    t12 = (t13 + 4);
    t22 = *((unsigned int *)t12);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB18;

LAB19:
LAB20:
LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(45, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3664);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    goto LAB8;

LAB9:    xsi_set_current_line(46, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 3664);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB11;

LAB12:    *((unsigned int *)t13) = 1;
    goto LAB15;

LAB17:    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t16 | t17);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t18 | t19);
    goto LAB16;

LAB18:    xsi_set_current_line(47, ng0);
    t27 = ((char*)((ng3)));
    t28 = (t0 + 3664);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 4);
    goto LAB20;

}

static void Always_51_1(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 5952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 8272);
    *((int *)t2) = 1;
    t3 = (t0 + 5984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);

LAB5:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 1664U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB12;

LAB10:    if (*((unsigned int *)t2) == 0)
        goto LAB9;

LAB11:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB12:    t5 = (t13 + 4);
    t11 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t13) = t15;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB14;

LAB13:    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 1U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 1U);
    t12 = (t13 + 4);
    t22 = *((unsigned int *)t12);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB15;

LAB16:
LAB17:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(52, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 3824);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    goto LAB8;

LAB9:    *((unsigned int *)t13) = 1;
    goto LAB12;

LAB14:    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t16 | t17);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t18 | t19);
    goto LAB13;

LAB15:    xsi_set_current_line(53, ng0);
    t27 = ((char*)((ng5)));
    t28 = (t0 + 3824);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 4);
    goto LAB17;

}

static void Always_57_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 6200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 8288);
    *((int *)t2) = 1;
    t3 = (t0 + 6232);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(57, ng0);

LAB5:    xsi_set_current_line(58, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 3984);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB2;

}

static void Always_62_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 6448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 8304);
    *((int *)t2) = 1;
    t3 = (t0 + 6480);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(62, ng0);

LAB5:    xsi_set_current_line(63, ng0);
    t4 = (t0 + 1824U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(64, ng0);
    t7 = ((char*)((ng8)));
    t8 = (t0 + 4144);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    goto LAB15;

LAB9:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 4144);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB15;

LAB11:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 4144);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB15;

LAB13:    xsi_set_current_line(67, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 4144);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB15;

}

static void Always_75_4(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 6696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 8320);
    *((int *)t2) = 1;
    t3 = (t0 + 6728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(76, ng0);

LAB5:    xsi_set_current_line(77, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 4304);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 18, t4, 18, t5, 18);
    t11 = (t0 + 4304);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 18, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(78, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4304);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 18, 0LL);
    goto LAB8;

}

static void Always_85_5(char *t0)
{
    char t4[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;

LAB0:    t1 = (t0 + 6944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 8336);
    *((int *)t2) = 1;
    t3 = (t0 + 6976);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(86, ng0);

LAB5:    xsi_set_current_line(87, ng0);
    t5 = (t0 + 4304);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 16);
    *((unsigned int *)t4) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 16);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 3U);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 3U);

LAB6:    t16 = ((char*)((ng7)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 2, t16, 2);
    if (t17 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng9)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t17 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng11)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t17 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng13)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t17 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(90, ng0);

LAB16:    xsi_set_current_line(91, ng0);
    t18 = (t0 + 4144);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t21, t20, 8);
    t22 = (t0 + 4464);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 7);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB15;

LAB9:    xsi_set_current_line(96, ng0);

LAB17:    xsi_set_current_line(97, ng0);
    t3 = (t0 + 3984);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memcpy(t21, t6, 8);
    t7 = (t0 + 4464);
    xsi_vlogvar_assign_value(t7, t21, 0, 0, 7);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB15;

LAB11:    xsi_set_current_line(102, ng0);

LAB18:    xsi_set_current_line(103, ng0);
    t3 = (t0 + 3824);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memcpy(t21, t6, 8);
    t7 = (t0 + 4464);
    xsi_vlogvar_assign_value(t7, t21, 0, 0, 7);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB15;

LAB13:    xsi_set_current_line(108, ng0);

LAB19:    xsi_set_current_line(109, ng0);
    t3 = (t0 + 3664);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memcpy(t21, t6, 8);
    t7 = (t0 + 4464);
    xsi_vlogvar_assign_value(t7, t21, 0, 0, 7);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB15;

}

static void Cont_114_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 7192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 4624);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8464);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 15U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 3);
    t18 = (t0 + 8352);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_117_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 7440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 8368);
    *((int *)t2) = 1;
    t3 = (t0 + 7472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(118, ng0);

LAB5:    xsi_set_current_line(119, ng0);
    t4 = (t0 + 4464);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 7, t7, 7);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 7, t2, 7);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 7, t2, 7);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 7, t2, 7);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng23)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 7, t2, 7);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng25)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 7, t2, 7);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng27)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 7, t2, 7);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 7, t2, 7);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng29)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 7, t2, 7);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng30)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 7, t2, 7);
    if (t8 == 1)
        goto LAB25;

LAB26:
LAB28:
LAB27:    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 4784);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);

LAB29:    goto LAB2;

LAB7:    xsi_set_current_line(120, ng0);
    t9 = ((char*)((ng19)));
    t10 = (t0 + 4784);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 7);
    goto LAB29;

LAB9:    xsi_set_current_line(121, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 4784);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB29;

LAB11:    xsi_set_current_line(122, ng0);
    t3 = ((char*)((ng21)));
    t4 = (t0 + 4784);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB29;

LAB13:    xsi_set_current_line(123, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 4784);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB29;

LAB15:    xsi_set_current_line(124, ng0);
    t3 = ((char*)((ng24)));
    t4 = (t0 + 4784);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB29;

LAB17:    xsi_set_current_line(125, ng0);
    t3 = ((char*)((ng26)));
    t4 = (t0 + 4784);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB29;

LAB19:    xsi_set_current_line(126, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 4784);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB29;

LAB21:    xsi_set_current_line(127, ng0);
    t3 = ((char*)((ng28)));
    t4 = (t0 + 4784);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB29;

LAB23:    xsi_set_current_line(128, ng0);
    t3 = ((char*)((ng29)));
    t4 = (t0 + 4784);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB29;

LAB25:    xsi_set_current_line(129, ng0);
    t3 = ((char*)((ng31)));
    t4 = (t0 + 4784);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB29;

}

static void Cont_133_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;

LAB0:    t1 = (t0 + 7688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 4784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8912);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 8848);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t22, 0, 8);
    t23 = 2U;
    t24 = t23;
    t25 = (t4 + 4);
    t26 = *((unsigned int *)t4);
    t23 = (t23 & t26);
    t27 = *((unsigned int *)t25);
    t24 = (t24 & t27);
    t23 = (t23 >> 1);
    t24 = (t24 >> 1);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 | t23);
    t30 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t30 | t24);
    xsi_driver_vfirst_trans(t18, 0, 0);
    t31 = (t0 + 8784);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t35, 0, 8);
    t36 = 4U;
    t37 = t36;
    t38 = (t4 + 4);
    t39 = *((unsigned int *)t4);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t36 = (t36 >> 2);
    t37 = (t37 >> 2);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 | t36);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 | t37);
    xsi_driver_vfirst_trans(t31, 0, 0);
    t44 = (t0 + 8720);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memset(t48, 0, 8);
    t49 = 8U;
    t50 = t49;
    t51 = (t4 + 4);
    t52 = *((unsigned int *)t4);
    t49 = (t49 & t52);
    t53 = *((unsigned int *)t51);
    t50 = (t50 & t53);
    t49 = (t49 >> 3);
    t50 = (t50 >> 3);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 | t49);
    t56 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t56 | t50);
    xsi_driver_vfirst_trans(t44, 0, 0);
    t57 = (t0 + 8656);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    memset(t61, 0, 8);
    t62 = 16U;
    t63 = t62;
    t64 = (t4 + 4);
    t65 = *((unsigned int *)t4);
    t62 = (t62 & t65);
    t66 = *((unsigned int *)t64);
    t63 = (t63 & t66);
    t62 = (t62 >> 4);
    t63 = (t63 >> 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t68 | t62);
    t69 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t69 | t63);
    xsi_driver_vfirst_trans(t57, 0, 0);
    t70 = (t0 + 8592);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    memset(t74, 0, 8);
    t75 = 32U;
    t76 = t75;
    t77 = (t4 + 4);
    t78 = *((unsigned int *)t4);
    t75 = (t75 & t78);
    t79 = *((unsigned int *)t77);
    t76 = (t76 & t79);
    t75 = (t75 >> 5);
    t76 = (t76 >> 5);
    t80 = (t74 + 4);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t81 | t75);
    t82 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t82 | t76);
    xsi_driver_vfirst_trans(t70, 0, 0);
    t83 = (t0 + 8528);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    memset(t87, 0, 8);
    t88 = 64U;
    t89 = t88;
    t90 = (t4 + 4);
    t91 = *((unsigned int *)t4);
    t88 = (t88 & t91);
    t92 = *((unsigned int *)t90);
    t89 = (t89 & t92);
    t88 = (t88 >> 6);
    t89 = (t89 >> 6);
    t93 = (t87 + 4);
    t94 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t94 | t88);
    t95 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t95 | t89);
    xsi_driver_vfirst_trans(t83, 0, 0);
    t96 = (t0 + 8384);
    *((int *)t96) = 1;

LAB1:    return;
}

static void Cont_134_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 7936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 8976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}


extern void work_m_00000000001706246426_3415900350_init()
{
	static char *pe[] = {(void *)Always_44_0,(void *)Always_51_1,(void *)Always_57_2,(void *)Always_62_3,(void *)Always_75_4,(void *)Always_85_5,(void *)Cont_114_6,(void *)Always_117_7,(void *)Cont_133_8,(void *)Cont_134_9};
	xsi_register_didat("work_m_00000000001706246426_3415900350", "isim/top_tb_isim_beh.exe.sim/work/m_00000000001706246426_3415900350.didat");
	xsi_register_executes(pe);
}
