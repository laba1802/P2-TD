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
static const char *ng0 = "D:/Proyectos/Proyecto2Taller/state_machine.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {1, 0};
static int ng6[] = {10, 0};
static int ng7[] = {11, 0};
static int ng8[] = {100, 0};



static void Always_33_0(char *t0)
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

LAB0:    t1 = (t0 + 3872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 4688);
    *((int *)t2) = 1;
    t3 = (t0 + 3904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);
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

LAB6:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2952);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(34, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    goto LAB7;

}

static void Always_37_1(char *t0)
{
    char t9[8];
    char t30[8];
    char t69[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
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
    unsigned int t81;
    unsigned int t82;

LAB0:    t1 = (t0 + 4120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4704);
    *((int *)t2) = 1;
    t3 = (t0 + 4152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 2792);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB12;

LAB13:
LAB14:    goto LAB2;

LAB6:    xsi_set_current_line(40, ng0);

LAB15:    xsi_set_current_line(41, ng0);
    t10 = (t0 + 1912U);
    t11 = *((char **)t10);
    memset(t9, 0, 8);
    t10 = (t11 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (~(t12));
    t14 = *((unsigned int *)t11);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t10) == 0)
        goto LAB16;

LAB18:    t17 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t17) = 1;

LAB19:    t18 = (t9 + 4);
    t19 = (t11 + 4);
    t20 = *((unsigned int *)t11);
    t21 = (~(t20));
    *((unsigned int *)t9) = t21;
    *((unsigned int *)t18) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB21;

LAB20:    t26 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t26 & 1U);
    t27 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t27 & 1U);
    t28 = (t0 + 2072U);
    t29 = *((char **)t28);
    t31 = *((unsigned int *)t9);
    t32 = *((unsigned int *)t29);
    t33 = (t31 & t32);
    *((unsigned int *)t30) = t33;
    t28 = (t9 + 4);
    t34 = (t29 + 4);
    t35 = (t30 + 4);
    t36 = *((unsigned int *)t28);
    t37 = *((unsigned int *)t34);
    t38 = (t36 | t37);
    *((unsigned int *)t35) = t38;
    t39 = *((unsigned int *)t35);
    t40 = (t39 != 0);
    if (t40 == 1)
        goto LAB22;

LAB23:
LAB24:    t61 = (t30 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t30);
    t65 = (t64 & t63);
    t66 = (t65 != 0);
    if (t66 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB27:    goto LAB14;

LAB8:    xsi_set_current_line(45, ng0);

LAB28:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t4 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB32;

LAB30:    if (*((unsigned int *)t3) == 0)
        goto LAB29;

LAB31:    t5 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t5) = 1;

LAB32:    t7 = (t9 + 4);
    t10 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    *((unsigned int *)t9) = t21;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t10) != 0)
        goto LAB34;

LAB33:    t26 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t26 & 1U);
    t27 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t27 & 1U);
    t11 = (t9 + 4);
    t31 = *((unsigned int *)t11);
    t32 = (~(t31));
    t33 = *((unsigned int *)t9);
    t36 = (t33 & t32);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB37:    goto LAB14;

LAB10:    xsi_set_current_line(54, ng0);

LAB42:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t4 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB46;

LAB44:    if (*((unsigned int *)t3) == 0)
        goto LAB43;

LAB45:    t5 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t5) = 1;

LAB46:    t7 = (t9 + 4);
    t10 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    *((unsigned int *)t9) = t21;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t10) != 0)
        goto LAB48;

LAB47:    t26 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t26 & 1U);
    t27 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t27 & 1U);
    t11 = (t9 + 4);
    t31 = *((unsigned int *)t11);
    t32 = (~(t31));
    t33 = *((unsigned int *)t9);
    t36 = (t33 & t32);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB51:    goto LAB14;

LAB12:    xsi_set_current_line(63, ng0);

LAB56:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t4 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB60;

LAB58:    if (*((unsigned int *)t3) == 0)
        goto LAB57;

LAB59:    t5 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t5) = 1;

LAB60:    t7 = (t9 + 4);
    t10 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    *((unsigned int *)t9) = t21;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t10) != 0)
        goto LAB62;

LAB61:    t26 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t26 & 1U);
    t27 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t27 & 1U);
    t11 = (t0 + 2072U);
    t17 = *((char **)t11);
    memset(t30, 0, 8);
    t11 = (t17 + 4);
    t31 = *((unsigned int *)t11);
    t32 = (~(t31));
    t33 = *((unsigned int *)t17);
    t36 = (t33 & t32);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB66;

LAB64:    if (*((unsigned int *)t11) == 0)
        goto LAB63;

LAB65:    t18 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t18) = 1;

LAB66:    t19 = (t30 + 4);
    t28 = (t17 + 4);
    t38 = *((unsigned int *)t17);
    t39 = (~(t38));
    *((unsigned int *)t30) = t39;
    *((unsigned int *)t19) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB68;

LAB67:    t46 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t46 & 1U);
    t47 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t47 & 1U);
    t48 = *((unsigned int *)t9);
    t49 = *((unsigned int *)t30);
    t50 = (t48 & t49);
    *((unsigned int *)t69) = t50;
    t29 = (t9 + 4);
    t34 = (t30 + 4);
    t35 = (t69 + 4);
    t51 = *((unsigned int *)t29);
    t52 = *((unsigned int *)t34);
    t55 = (t51 | t52);
    *((unsigned int *)t35) = t55;
    t56 = *((unsigned int *)t35);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB69;

LAB70:
LAB71:    t61 = (t69 + 4);
    t78 = *((unsigned int *)t61);
    t79 = (~(t78));
    t80 = *((unsigned int *)t69);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB74:    goto LAB14;

LAB16:    *((unsigned int *)t9) = 1;
    goto LAB19;

LAB21:    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t19);
    *((unsigned int *)t9) = (t22 | t23);
    t24 = *((unsigned int *)t18);
    t25 = *((unsigned int *)t19);
    *((unsigned int *)t18) = (t24 | t25);
    goto LAB20;

LAB22:    t41 = *((unsigned int *)t30);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t30) = (t41 | t42);
    t43 = (t9 + 4);
    t44 = (t29 + 4);
    t45 = *((unsigned int *)t9);
    t46 = (~(t45));
    t47 = *((unsigned int *)t43);
    t48 = (~(t47));
    t49 = *((unsigned int *)t29);
    t50 = (~(t49));
    t51 = *((unsigned int *)t44);
    t52 = (~(t51));
    t53 = (t46 & t48);
    t54 = (t50 & t52);
    t55 = (~(t53));
    t56 = (~(t54));
    t57 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t57 & t55);
    t58 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t58 & t56);
    t59 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t59 & t55);
    t60 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t60 & t56);
    goto LAB24;

LAB25:    xsi_set_current_line(41, ng0);
    t67 = ((char*)((ng2)));
    t68 = (t0 + 2952);
    xsi_vlogvar_assign_value(t68, t67, 0, 0, 2);
    goto LAB27;

LAB29:    *((unsigned int *)t9) = 1;
    goto LAB32;

LAB34:    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t9) = (t22 | t23);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t10);
    *((unsigned int *)t7) = (t24 | t25);
    goto LAB33;

LAB35:    xsi_set_current_line(47, ng0);

LAB38:    xsi_set_current_line(48, ng0);
    t17 = (t0 + 2072U);
    t18 = *((char **)t17);
    t17 = (t18 + 4);
    t38 = *((unsigned int *)t17);
    t39 = (~(t38));
    t40 = *((unsigned int *)t18);
    t41 = (t40 & t39);
    t42 = (t41 != 0);
    if (t42 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB41:    goto LAB37;

LAB39:    xsi_set_current_line(48, ng0);
    t19 = ((char*)((ng3)));
    t28 = (t0 + 2952);
    xsi_vlogvar_assign_value(t28, t19, 0, 0, 2);
    goto LAB41;

LAB43:    *((unsigned int *)t9) = 1;
    goto LAB46;

LAB48:    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t9) = (t22 | t23);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t10);
    *((unsigned int *)t7) = (t24 | t25);
    goto LAB47;

LAB49:    xsi_set_current_line(56, ng0);

LAB52:    xsi_set_current_line(57, ng0);
    t17 = (t0 + 2072U);
    t18 = *((char **)t17);
    t17 = (t18 + 4);
    t38 = *((unsigned int *)t17);
    t39 = (~(t38));
    t40 = *((unsigned int *)t18);
    t41 = (t40 & t39);
    t42 = (t41 != 0);
    if (t42 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB55:    goto LAB51;

LAB53:    xsi_set_current_line(57, ng0);
    t19 = ((char*)((ng4)));
    t28 = (t0 + 2952);
    xsi_vlogvar_assign_value(t28, t19, 0, 0, 2);
    goto LAB55;

LAB57:    *((unsigned int *)t9) = 1;
    goto LAB60;

LAB62:    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t9) = (t22 | t23);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t10);
    *((unsigned int *)t7) = (t24 | t25);
    goto LAB61;

LAB63:    *((unsigned int *)t30) = 1;
    goto LAB66;

LAB68:    t40 = *((unsigned int *)t30);
    t41 = *((unsigned int *)t28);
    *((unsigned int *)t30) = (t40 | t41);
    t42 = *((unsigned int *)t19);
    t45 = *((unsigned int *)t28);
    *((unsigned int *)t19) = (t42 | t45);
    goto LAB67;

LAB69:    t58 = *((unsigned int *)t69);
    t59 = *((unsigned int *)t35);
    *((unsigned int *)t69) = (t58 | t59);
    t43 = (t9 + 4);
    t44 = (t30 + 4);
    t60 = *((unsigned int *)t9);
    t62 = (~(t60));
    t63 = *((unsigned int *)t43);
    t64 = (~(t63));
    t65 = *((unsigned int *)t30);
    t66 = (~(t65));
    t70 = *((unsigned int *)t44);
    t71 = (~(t70));
    t53 = (t62 & t64);
    t54 = (t66 & t71);
    t72 = (~(t53));
    t73 = (~(t54));
    t74 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t74 & t72);
    t75 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t75 & t73);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t76 & t72);
    t77 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t77 & t73);
    goto LAB71;

LAB72:    xsi_set_current_line(64, ng0);
    t67 = ((char*)((ng3)));
    t68 = (t0 + 2952);
    xsi_vlogvar_assign_value(t68, t67, 0, 0, 2);
    goto LAB74;

}

static void Always_69_2(char *t0)
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

LAB0:    t1 = (t0 + 4368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 4720);
    *((int *)t2) = 1;
    t3 = (t0 + 4400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(70, ng0);
    t4 = (t0 + 2792);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB12;

LAB13:
LAB15:
LAB14:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB16:    goto LAB2;

LAB6:    xsi_set_current_line(72, ng0);
    t9 = ((char*)((ng5)));
    t10 = (t0 + 2632);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 3);
    goto LAB16;

LAB8:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2632);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB16;

LAB10:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2632);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB16;

LAB12:    xsi_set_current_line(78, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 2632);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB16;

}


extern void work_m_00000000003328060463_0457016286_init()
{
	static char *pe[] = {(void *)Always_33_0,(void *)Always_37_1,(void *)Always_69_2};
	xsi_register_didat("work_m_00000000003328060463_0457016286", "isim/state_machine_tb_isim_beh.exe.sim/work/m_00000000003328060463_0457016286.didat");
	xsi_register_executes(pe);
}
