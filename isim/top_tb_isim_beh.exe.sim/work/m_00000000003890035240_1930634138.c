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
static const char *ng0 = "D:/Proyectos/Proyecto2Taller/P2-TD/stateMachine_2.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};



static void Always_37_0(char *t0)
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

LAB0:    t1 = (t0 + 4352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 5664);
    *((int *)t2) = 1;
    t3 = (t0 + 4384);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 2, t4, 2, t5, 2);
    t11 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 2, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(40, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    goto LAB8;

}

static void Cont_45_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 4600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3432);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 | t8);
    if (t9 != 3U)
        goto LAB5;

LAB4:    if (*((unsigned int *)t6) == 0)
        goto LAB6;

LAB7:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB5:    t11 = (t0 + 5808);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t15, 0, 8);
    t16 = 1U;
    t17 = t16;
    t18 = (t3 + 4);
    t19 = *((unsigned int *)t3);
    t16 = (t16 & t19);
    t20 = *((unsigned int *)t18);
    t17 = (t17 & t20);
    t21 = (t15 + 4);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 | t16);
    t23 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t23 | t17);
    xsi_driver_vfirst_trans(t11, 0, 0);
    t24 = (t0 + 5680);
    *((int *)t24) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t3) = 1;
    goto LAB5;

}

static void Always_47_2(char *t0)
{
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

LAB0:    t1 = (t0 + 4848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 5696);
    *((int *)t2) = 1;
    t3 = (t0 + 4880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(48, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    goto LAB7;

}

static void Always_51_3(char *t0)
{
    char t7[8];
    char t28[8];
    char t67[8];
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
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;

LAB0:    t1 = (t0 + 5096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 5712);
    *((int *)t2) = 1;
    t3 = (t0 + 5128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);

LAB5:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 2232U);
    t5 = *((char **)t4);
    t4 = (t0 + 2792);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(55, ng0);

LAB16:    xsi_set_current_line(56, ng0);
    t8 = (t0 + 1912U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t8 = (t9 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t8) == 0)
        goto LAB17;

LAB19:    t15 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t15) = 1;

LAB20:    t16 = (t7 + 4);
    t17 = (t9 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (~(t18));
    *((unsigned int *)t7) = t19;
    *((unsigned int *)t16) = 0;
    if (*((unsigned int *)t17) != 0)
        goto LAB22;

LAB21:    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1U);
    t25 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t25 & 1U);
    t26 = (t0 + 2072U);
    t27 = *((char **)t26);
    t29 = *((unsigned int *)t7);
    t30 = *((unsigned int *)t27);
    t31 = (t29 & t30);
    *((unsigned int *)t28) = t31;
    t26 = (t7 + 4);
    t32 = (t27 + 4);
    t33 = (t28 + 4);
    t34 = *((unsigned int *)t26);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB23;

LAB24:
LAB25:    t59 = (t28 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t28);
    t63 = (t62 & t61);
    t64 = (t63 != 0);
    if (t64 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3272);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB28:    goto LAB15;

LAB9:    xsi_set_current_line(60, ng0);

LAB29:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 1912U);
    t5 = *((char **)t3);
    memset(t7, 0, 8);
    t3 = (t5 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB33;

LAB31:    if (*((unsigned int *)t3) == 0)
        goto LAB30;

LAB32:    t8 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t8) = 1;

LAB33:    t9 = (t7 + 4);
    t15 = (t5 + 4);
    t18 = *((unsigned int *)t5);
    t19 = (~(t18));
    *((unsigned int *)t7) = t19;
    *((unsigned int *)t9) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB35;

LAB34:    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1U);
    t25 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t25 & 1U);
    t16 = (t7 + 4);
    t29 = *((unsigned int *)t16);
    t30 = (~(t29));
    t31 = *((unsigned int *)t7);
    t34 = (t31 & t30);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3272);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB38:    goto LAB15;

LAB11:    xsi_set_current_line(69, ng0);

LAB43:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 1912U);
    t5 = *((char **)t3);
    memset(t7, 0, 8);
    t3 = (t5 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB47;

LAB45:    if (*((unsigned int *)t3) == 0)
        goto LAB44;

LAB46:    t8 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t8) = 1;

LAB47:    t9 = (t7 + 4);
    t15 = (t5 + 4);
    t18 = *((unsigned int *)t5);
    t19 = (~(t18));
    *((unsigned int *)t7) = t19;
    *((unsigned int *)t9) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB49;

LAB48:    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1U);
    t25 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t25 & 1U);
    t16 = (t7 + 4);
    t29 = *((unsigned int *)t16);
    t30 = (~(t29));
    t31 = *((unsigned int *)t7);
    t34 = (t31 & t30);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3272);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB52:    goto LAB15;

LAB13:    xsi_set_current_line(78, ng0);

LAB57:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 1912U);
    t5 = *((char **)t3);
    memset(t7, 0, 8);
    t3 = (t5 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB61;

LAB59:    if (*((unsigned int *)t3) == 0)
        goto LAB58;

LAB60:    t8 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t8) = 1;

LAB61:    t9 = (t7 + 4);
    t15 = (t5 + 4);
    t18 = *((unsigned int *)t5);
    t19 = (~(t18));
    *((unsigned int *)t7) = t19;
    *((unsigned int *)t9) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB63;

LAB62:    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1U);
    t25 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t25 & 1U);
    t16 = (t0 + 2072U);
    t17 = *((char **)t16);
    memset(t28, 0, 8);
    t16 = (t17 + 4);
    t29 = *((unsigned int *)t16);
    t30 = (~(t29));
    t31 = *((unsigned int *)t17);
    t34 = (t31 & t30);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB67;

LAB65:    if (*((unsigned int *)t16) == 0)
        goto LAB64;

LAB66:    t26 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t26) = 1;

LAB67:    t27 = (t28 + 4);
    t32 = (t17 + 4);
    t36 = *((unsigned int *)t17);
    t37 = (~(t36));
    *((unsigned int *)t28) = t37;
    *((unsigned int *)t27) = 0;
    if (*((unsigned int *)t32) != 0)
        goto LAB69;

LAB68:    t44 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t44 & 1U);
    t45 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t45 & 1U);
    t46 = *((unsigned int *)t7);
    t47 = *((unsigned int *)t28);
    t48 = (t46 & t47);
    *((unsigned int *)t67) = t48;
    t33 = (t7 + 4);
    t41 = (t28 + 4);
    t42 = (t67 + 4);
    t49 = *((unsigned int *)t33);
    t50 = *((unsigned int *)t41);
    t53 = (t49 | t50);
    *((unsigned int *)t42) = t53;
    t54 = *((unsigned int *)t42);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB70;

LAB71:
LAB72:    t66 = (t67 + 4);
    t76 = *((unsigned int *)t66);
    t77 = (~(t76));
    t78 = *((unsigned int *)t67);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB73;

LAB74:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3272);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB75:    goto LAB15;

LAB17:    *((unsigned int *)t7) = 1;
    goto LAB20;

LAB22:    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t17);
    *((unsigned int *)t7) = (t20 | t21);
    t22 = *((unsigned int *)t16);
    t23 = *((unsigned int *)t17);
    *((unsigned int *)t16) = (t22 | t23);
    goto LAB21;

LAB23:    t39 = *((unsigned int *)t28);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t28) = (t39 | t40);
    t41 = (t7 + 4);
    t42 = (t27 + 4);
    t43 = *((unsigned int *)t7);
    t44 = (~(t43));
    t45 = *((unsigned int *)t41);
    t46 = (~(t45));
    t47 = *((unsigned int *)t27);
    t48 = (~(t47));
    t49 = *((unsigned int *)t42);
    t50 = (~(t49));
    t51 = (t44 & t46);
    t52 = (t48 & t50);
    t53 = (~(t51));
    t54 = (~(t52));
    t55 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t55 & t53);
    t56 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t56 & t54);
    t57 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t57 & t53);
    t58 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t58 & t54);
    goto LAB25;

LAB26:    xsi_set_current_line(56, ng0);
    t65 = ((char*)((ng2)));
    t66 = (t0 + 3272);
    xsi_vlogvar_assign_value(t66, t65, 0, 0, 2);
    goto LAB28;

LAB30:    *((unsigned int *)t7) = 1;
    goto LAB33;

LAB35:    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t7) = (t20 | t21);
    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t9) = (t22 | t23);
    goto LAB34;

LAB36:    xsi_set_current_line(62, ng0);

LAB39:    xsi_set_current_line(63, ng0);
    t17 = (t0 + 2072U);
    t26 = *((char **)t17);
    t17 = (t26 + 4);
    t36 = *((unsigned int *)t17);
    t37 = (~(t36));
    t38 = *((unsigned int *)t26);
    t39 = (t38 & t37);
    t40 = (t39 != 0);
    if (t40 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3272);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB42:    goto LAB38;

LAB40:    xsi_set_current_line(63, ng0);
    t27 = ((char*)((ng3)));
    t32 = (t0 + 3272);
    xsi_vlogvar_assign_value(t32, t27, 0, 0, 2);
    goto LAB42;

LAB44:    *((unsigned int *)t7) = 1;
    goto LAB47;

LAB49:    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t7) = (t20 | t21);
    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t9) = (t22 | t23);
    goto LAB48;

LAB50:    xsi_set_current_line(71, ng0);

LAB53:    xsi_set_current_line(72, ng0);
    t17 = (t0 + 2072U);
    t26 = *((char **)t17);
    t17 = (t26 + 4);
    t36 = *((unsigned int *)t17);
    t37 = (~(t36));
    t38 = *((unsigned int *)t26);
    t39 = (t38 & t37);
    t40 = (t39 != 0);
    if (t40 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3272);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB56:    goto LAB52;

LAB54:    xsi_set_current_line(72, ng0);
    t27 = ((char*)((ng4)));
    t32 = (t0 + 3272);
    xsi_vlogvar_assign_value(t32, t27, 0, 0, 2);
    goto LAB56;

LAB58:    *((unsigned int *)t7) = 1;
    goto LAB61;

LAB63:    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t7) = (t20 | t21);
    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t9) = (t22 | t23);
    goto LAB62;

LAB64:    *((unsigned int *)t28) = 1;
    goto LAB67;

LAB69:    t38 = *((unsigned int *)t28);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t28) = (t38 | t39);
    t40 = *((unsigned int *)t27);
    t43 = *((unsigned int *)t32);
    *((unsigned int *)t27) = (t40 | t43);
    goto LAB68;

LAB70:    t56 = *((unsigned int *)t67);
    t57 = *((unsigned int *)t42);
    *((unsigned int *)t67) = (t56 | t57);
    t59 = (t7 + 4);
    t65 = (t28 + 4);
    t58 = *((unsigned int *)t7);
    t60 = (~(t58));
    t61 = *((unsigned int *)t59);
    t62 = (~(t61));
    t63 = *((unsigned int *)t28);
    t64 = (~(t63));
    t68 = *((unsigned int *)t65);
    t69 = (~(t68));
    t51 = (t60 & t62);
    t52 = (t64 & t69);
    t70 = (~(t51));
    t71 = (~(t52));
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t70);
    t73 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t73 & t71);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t74 & t70);
    t75 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t75 & t71);
    goto LAB72;

LAB73:    xsi_set_current_line(79, ng0);
    t81 = ((char*)((ng3)));
    t82 = (t0 + 3272);
    xsi_vlogvar_assign_value(t82, t81, 0, 0, 2);
    goto LAB75;

}

static void Always_85_4(char *t0)
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

LAB0:    t1 = (t0 + 5344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 5728);
    *((int *)t2) = 1;
    t3 = (t0 + 5376);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(85, ng0);

LAB5:    xsi_set_current_line(86, ng0);
    t4 = (t0 + 3112);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(88, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 2952);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 2);
    goto LAB17;

LAB9:    xsi_set_current_line(90, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    goto LAB17;

LAB11:    xsi_set_current_line(92, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    goto LAB17;

LAB13:    xsi_set_current_line(94, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    goto LAB17;

}


extern void work_m_00000000003890035240_1930634138_init()
{
	static char *pe[] = {(void *)Always_37_0,(void *)Cont_45_1,(void *)Always_47_2,(void *)Always_51_3,(void *)Always_85_4};
	xsi_register_didat("work_m_00000000003890035240_1930634138", "isim/top_tb_isim_beh.exe.sim/work/m_00000000003890035240_1930634138.didat");
	xsi_register_executes(pe);
}
