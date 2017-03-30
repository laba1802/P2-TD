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
static const char *ng0 = "D:/Proyectos/Proyecto2Taller/P2-TD/floor_input_comparator.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};



static void Always_29_0(char *t0)
{
    char t14[8];
    char t17[8];
    char t32[8];
    char t35[8];
    char t43[8];
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
    char *t13;
    char *t15;
    char *t16;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(33, ng0);

LAB37:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB39;

LAB38:    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB39;

LAB42:    if (*((unsigned int *)t3) > *((unsigned int *)t4))
        goto LAB40;

LAB41:    memset(t17, 0, 8);
    t12 = (t14 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t12) != 0)
        goto LAB45;

LAB46:    t15 = (t17 + 4);
    t19 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t15);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB47;

LAB48:    memcpy(t43, t17, 8);

LAB49:    t48 = (t43 + 4);
    t70 = *((unsigned int *)t48);
    t71 = (~(t70));
    t72 = *((unsigned int *)t43);
    t73 = (t72 & t71);
    t74 = (t73 != 0);
    if (t74 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB64:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(30, ng0);

LAB9:    xsi_set_current_line(31, ng0);
    t11 = (t0 + 1048U);
    t12 = *((char **)t11);
    t11 = (t0 + 1208U);
    t13 = *((char **)t11);
    memset(t14, 0, 8);
    t11 = (t12 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB11;

LAB10:    t15 = (t13 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB11;

LAB14:    if (*((unsigned int *)t12) < *((unsigned int *)t13))
        goto LAB12;

LAB13:    memset(t17, 0, 8);
    t18 = (t14 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (~(t19));
    t21 = *((unsigned int *)t14);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t18) != 0)
        goto LAB17;

LAB18:    t25 = (t17 + 4);
    t26 = *((unsigned int *)t17);
    t27 = *((unsigned int *)t25);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB19;

LAB20:    memcpy(t43, t17, 8);

LAB21:    t75 = (t43 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB36:    goto LAB8;

LAB11:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB13;

LAB12:    *((unsigned int *)t14) = 1;
    goto LAB13;

LAB15:    *((unsigned int *)t17) = 1;
    goto LAB18;

LAB17:    t24 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB18;

LAB19:    t29 = (t0 + 1048U);
    t30 = *((char **)t29);
    t29 = (t0 + 1368U);
    t31 = *((char **)t29);
    memset(t32, 0, 8);
    t29 = (t30 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB23;

LAB22:    t33 = (t31 + 4);
    if (*((unsigned int *)t33) != 0)
        goto LAB23;

LAB26:    if (*((unsigned int *)t30) > *((unsigned int *)t31))
        goto LAB24;

LAB25:    memset(t35, 0, 8);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t32);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t36) != 0)
        goto LAB29;

LAB30:    t44 = *((unsigned int *)t17);
    t45 = *((unsigned int *)t35);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t47 = (t17 + 4);
    t48 = (t35 + 4);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB21;

LAB23:    t34 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB25;

LAB24:    *((unsigned int *)t32) = 1;
    goto LAB25;

LAB27:    *((unsigned int *)t35) = 1;
    goto LAB30;

LAB29:    t42 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB30;

LAB31:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t43) = (t55 | t56);
    t57 = (t17 + 4);
    t58 = (t35 + 4);
    t59 = *((unsigned int *)t17);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t35);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t71 & t69);
    t72 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB33;

LAB34:    xsi_set_current_line(31, ng0);
    t81 = ((char*)((ng1)));
    t82 = (t0 + 1928);
    xsi_vlogvar_assign_value(t82, t81, 0, 0, 1);
    goto LAB36;

LAB39:    t11 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB41;

LAB40:    *((unsigned int *)t14) = 1;
    goto LAB41;

LAB43:    *((unsigned int *)t17) = 1;
    goto LAB46;

LAB45:    t13 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB46;

LAB47:    t16 = (t0 + 1048U);
    t18 = *((char **)t16);
    t16 = (t0 + 1368U);
    t24 = *((char **)t16);
    memset(t32, 0, 8);
    t16 = (t18 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB51;

LAB50:    t25 = (t24 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB51;

LAB54:    if (*((unsigned int *)t18) < *((unsigned int *)t24))
        goto LAB52;

LAB53:    memset(t35, 0, 8);
    t30 = (t32 + 4);
    t22 = *((unsigned int *)t30);
    t23 = (~(t22));
    t26 = *((unsigned int *)t32);
    t27 = (t26 & t23);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t30) != 0)
        goto LAB57;

LAB58:    t37 = *((unsigned int *)t17);
    t38 = *((unsigned int *)t35);
    t39 = (t37 & t38);
    *((unsigned int *)t43) = t39;
    t33 = (t17 + 4);
    t34 = (t35 + 4);
    t36 = (t43 + 4);
    t40 = *((unsigned int *)t33);
    t41 = *((unsigned int *)t34);
    t44 = (t40 | t41);
    *((unsigned int *)t36) = t44;
    t45 = *((unsigned int *)t36);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB59;

LAB60:
LAB61:    goto LAB49;

LAB51:    t29 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB53;

LAB52:    *((unsigned int *)t32) = 1;
    goto LAB53;

LAB55:    *((unsigned int *)t35) = 1;
    goto LAB58;

LAB57:    t31 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB58;

LAB59:    t50 = *((unsigned int *)t43);
    t51 = *((unsigned int *)t36);
    *((unsigned int *)t43) = (t50 | t51);
    t42 = (t17 + 4);
    t47 = (t35 + 4);
    t52 = *((unsigned int *)t17);
    t53 = (~(t52));
    t54 = *((unsigned int *)t42);
    t55 = (~(t54));
    t56 = *((unsigned int *)t35);
    t59 = (~(t56));
    t60 = *((unsigned int *)t47);
    t61 = (~(t60));
    t67 = (t53 & t55);
    t68 = (t59 & t61);
    t62 = (~(t67));
    t63 = (~(t68));
    t64 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t64 & t62);
    t65 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t65 & t63);
    t66 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t66 & t62);
    t69 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t69 & t63);
    goto LAB61;

LAB62:    xsi_set_current_line(34, ng0);
    t49 = ((char*)((ng1)));
    t57 = (t0 + 1928);
    xsi_vlogvar_assign_value(t57, t49, 0, 0, 1);
    goto LAB64;

}


extern void work_m_00000000000811299115_2622938889_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_00000000000811299115_2622938889", "isim/floor_input_comparator_tb_isim_beh.exe.sim/work/m_00000000000811299115_2622938889.didat");
	xsi_register_executes(pe);
}
