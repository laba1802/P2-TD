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
static const char *ng1 = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA ";
static unsigned int ng2[] = {3U, 0U};
static unsigned int ng3[] = {2U, 0U};



static void Always_31_0(char *t0)
{
    char t12[8];
    char t15[8];
    char t30[8];
    char t33[8];
    char t41[8];
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
    char *t13;
    char *t14;
    char *t16;
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
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3328);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 0, ng1, 2, t0, (char)118, t5, 3);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(42, ng0);

LAB39:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t12, 0, 8);
    t2 = (t3 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB41;

LAB40:    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB41;

LAB44:    if (*((unsigned int *)t3) > *((unsigned int *)t4))
        goto LAB42;

LAB43:    memset(t15, 0, 8);
    t13 = (t12 + 4);
    t6 = *((unsigned int *)t13);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t13) != 0)
        goto LAB47;

LAB48:    t16 = (t15 + 4);
    t17 = *((unsigned int *)t15);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB49;

LAB50:    memcpy(t41, t15, 8);

LAB51:    t55 = (t41 + 4);
    t68 = *((unsigned int *)t55);
    t69 = (~(t68));
    t70 = *((unsigned int *)t41);
    t71 = (t70 & t69);
    t72 = (t71 != 0);
    if (t72 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(47, ng0);

LAB68:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB66:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(33, ng0);

LAB9:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t11 = *((char **)t4);
    memset(t12, 0, 8);
    t4 = (t5 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB11;

LAB10:    t13 = (t11 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB11;

LAB14:    if (*((unsigned int *)t5) < *((unsigned int *)t11))
        goto LAB12;

LAB13:    memset(t15, 0, 8);
    t16 = (t12 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t16) != 0)
        goto LAB17;

LAB18:    t23 = (t15 + 4);
    t24 = *((unsigned int *)t15);
    t25 = *((unsigned int *)t23);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB19;

LAB20:    memcpy(t41, t15, 8);

LAB21:    t73 = (t41 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t41);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(38, ng0);

LAB38:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB36:    goto LAB8;

LAB11:    t14 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB13;

LAB12:    *((unsigned int *)t12) = 1;
    goto LAB13;

LAB15:    *((unsigned int *)t15) = 1;
    goto LAB18;

LAB17:    t22 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB18;

LAB19:    t27 = (t0 + 1048U);
    t28 = *((char **)t27);
    t27 = (t0 + 1368U);
    t29 = *((char **)t27);
    memset(t30, 0, 8);
    t27 = (t28 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB23;

LAB22:    t31 = (t29 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB23;

LAB26:    if (*((unsigned int *)t28) > *((unsigned int *)t29))
        goto LAB24;

LAB25:    memset(t33, 0, 8);
    t34 = (t30 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t30);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t34) != 0)
        goto LAB29;

LAB30:    t42 = *((unsigned int *)t15);
    t43 = *((unsigned int *)t33);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t45 = (t15 + 4);
    t46 = (t33 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB21;

LAB23:    t32 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB25;

LAB24:    *((unsigned int *)t30) = 1;
    goto LAB25;

LAB27:    *((unsigned int *)t33) = 1;
    goto LAB30;

LAB29:    t40 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB30;

LAB31:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t15 + 4);
    t56 = (t33 + 4);
    t57 = *((unsigned int *)t15);
    t58 = (~(t57));
    t59 = *((unsigned int *)t55);
    t60 = (~(t59));
    t61 = *((unsigned int *)t33);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t69 & t67);
    t70 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB33;

LAB34:    xsi_set_current_line(34, ng0);

LAB37:    xsi_set_current_line(35, ng0);
    t79 = ((char*)((ng2)));
    t80 = (t0 + 1928);
    xsi_vlogvar_assign_value(t80, t79, 0, 0, 2);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    goto LAB36;

LAB41:    t11 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB43;

LAB42:    *((unsigned int *)t12) = 1;
    goto LAB43;

LAB45:    *((unsigned int *)t15) = 1;
    goto LAB48;

LAB47:    t14 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB48;

LAB49:    t22 = (t0 + 1048U);
    t23 = *((char **)t22);
    t22 = (t0 + 1368U);
    t27 = *((char **)t22);
    memset(t30, 0, 8);
    t22 = (t23 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB53;

LAB52:    t28 = (t27 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB53;

LAB56:    if (*((unsigned int *)t23) < *((unsigned int *)t27))
        goto LAB54;

LAB55:    memset(t33, 0, 8);
    t31 = (t30 + 4);
    t20 = *((unsigned int *)t31);
    t21 = (~(t20));
    t24 = *((unsigned int *)t30);
    t25 = (t24 & t21);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t31) != 0)
        goto LAB59;

LAB60:    t35 = *((unsigned int *)t15);
    t36 = *((unsigned int *)t33);
    t37 = (t35 & t36);
    *((unsigned int *)t41) = t37;
    t34 = (t15 + 4);
    t40 = (t33 + 4);
    t45 = (t41 + 4);
    t38 = *((unsigned int *)t34);
    t39 = *((unsigned int *)t40);
    t42 = (t38 | t39);
    *((unsigned int *)t45) = t42;
    t43 = *((unsigned int *)t45);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB61;

LAB62:
LAB63:    goto LAB51;

LAB53:    t29 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB55;

LAB54:    *((unsigned int *)t30) = 1;
    goto LAB55;

LAB57:    *((unsigned int *)t33) = 1;
    goto LAB60;

LAB59:    t32 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB60;

LAB61:    t48 = *((unsigned int *)t41);
    t49 = *((unsigned int *)t45);
    *((unsigned int *)t41) = (t48 | t49);
    t46 = (t15 + 4);
    t47 = (t33 + 4);
    t50 = *((unsigned int *)t15);
    t51 = (~(t50));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t33);
    t57 = (~(t54));
    t58 = *((unsigned int *)t47);
    t59 = (~(t58));
    t65 = (t51 & t53);
    t66 = (t57 & t59);
    t60 = (~(t65));
    t61 = (~(t66));
    t62 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t62 & t60);
    t63 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t63 & t61);
    t64 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t64 & t60);
    t67 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t67 & t61);
    goto LAB63;

LAB64:    xsi_set_current_line(43, ng0);

LAB67:    xsi_set_current_line(44, ng0);
    t56 = ((char*)((ng2)));
    t73 = (t0 + 1928);
    xsi_vlogvar_assign_value(t73, t56, 0, 0, 2);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    goto LAB66;

}


extern void work_m_00000000003720951524_2622938889_init()
{
	static char *pe[] = {(void *)Always_31_0};
	xsi_register_didat("work_m_00000000003720951524_2622938889", "isim/top_tb_isim_beh.exe.sim/work/m_00000000003720951524_2622938889.didat");
	xsi_register_executes(pe);
}
