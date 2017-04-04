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
static const char *ng0 = "D:/Proyectos/Proyecto2Taller/P2-TD/switch_input_comparator.v";
static unsigned int ng1[] = {3U, 0U};
static unsigned int ng2[] = {2U, 0U};



static void Always_31_0(char *t0)
{
    char t7[8];
    char t31[8];
    char t34[8];
    char t49[8];
    char t52[8];
    char t60[8];
    char t92[8];
    char t108[8];
    char t111[8];
    char t126[8];
    char t129[8];
    char t137[8];
    char t169[8];
    char t177[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t35;
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
    char *t46;
    char *t47;
    char *t48;
    char *t50;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    char *t107;
    char *t109;
    char *t110;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t124;
    char *t125;
    char *t127;
    char *t128;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    int t161;
    int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    char *t176;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    char *t181;
    char *t182;
    char *t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    char *t191;
    char *t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    char *t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    char *t211;
    char *t212;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3488);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t5 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t7) = 1;

LAB9:    t22 = (t7 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t7);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(40, ng0);

LAB81:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB12:    goto LAB2;

LAB8:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(32, ng0);

LAB13:    xsi_set_current_line(33, ng0);
    t28 = (t0 + 1528U);
    t29 = *((char **)t28);
    t28 = (t0 + 1688U);
    t30 = *((char **)t28);
    memset(t31, 0, 8);
    t28 = (t29 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB15;

LAB14:    t32 = (t30 + 4);
    if (*((unsigned int *)t32) != 0)
        goto LAB15;

LAB18:    if (*((unsigned int *)t29) > *((unsigned int *)t30))
        goto LAB16;

LAB17:    memset(t34, 0, 8);
    t35 = (t31 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t35) != 0)
        goto LAB21;

LAB22:    t42 = (t34 + 4);
    t43 = *((unsigned int *)t34);
    t44 = *((unsigned int *)t42);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB23;

LAB24:    memcpy(t60, t34, 8);

LAB25:    memset(t92, 0, 8);
    t93 = (t60 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t60);
    t97 = (t96 & t95);
    t98 = (t97 & 1U);
    if (t98 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t93) != 0)
        goto LAB40;

LAB41:    t100 = (t92 + 4);
    t101 = *((unsigned int *)t92);
    t102 = (!(t101));
    t103 = *((unsigned int *)t100);
    t104 = (t102 || t103);
    if (t104 > 0)
        goto LAB42;

LAB43:    memcpy(t177, t92, 8);

LAB44:    t205 = (t177 + 4);
    t206 = *((unsigned int *)t205);
    t207 = (~(t206));
    t208 = *((unsigned int *)t177);
    t209 = (t208 & t207);
    t210 = (t209 != 0);
    if (t210 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(36, ng0);

LAB80:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB78:    goto LAB12;

LAB15:    t33 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB17;

LAB16:    *((unsigned int *)t31) = 1;
    goto LAB17;

LAB19:    *((unsigned int *)t34) = 1;
    goto LAB22;

LAB21:    t41 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB22;

LAB23:    t46 = (t0 + 1528U);
    t47 = *((char **)t46);
    t46 = (t0 + 1208U);
    t48 = *((char **)t46);
    memset(t49, 0, 8);
    t46 = (t47 + 4);
    if (*((unsigned int *)t46) != 0)
        goto LAB27;

LAB26:    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB27;

LAB30:    if (*((unsigned int *)t47) < *((unsigned int *)t48))
        goto LAB28;

LAB29:    memset(t52, 0, 8);
    t53 = (t49 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t53) != 0)
        goto LAB33;

LAB34:    t61 = *((unsigned int *)t34);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t64 = (t34 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB25;

LAB27:    t51 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB29;

LAB28:    *((unsigned int *)t49) = 1;
    goto LAB29;

LAB31:    *((unsigned int *)t52) = 1;
    goto LAB34;

LAB33:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB34;

LAB35:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t34 + 4);
    t75 = (t52 + 4);
    t76 = *((unsigned int *)t34);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB37;

LAB38:    *((unsigned int *)t92) = 1;
    goto LAB41;

LAB40:    t99 = (t92 + 4);
    *((unsigned int *)t92) = 1;
    *((unsigned int *)t99) = 1;
    goto LAB41;

LAB42:    t105 = (t0 + 1528U);
    t106 = *((char **)t105);
    t105 = (t0 + 1688U);
    t107 = *((char **)t105);
    memset(t108, 0, 8);
    t105 = (t106 + 4);
    if (*((unsigned int *)t105) != 0)
        goto LAB46;

LAB45:    t109 = (t107 + 4);
    if (*((unsigned int *)t109) != 0)
        goto LAB46;

LAB49:    if (*((unsigned int *)t106) < *((unsigned int *)t107))
        goto LAB47;

LAB48:    memset(t111, 0, 8);
    t112 = (t108 + 4);
    t113 = *((unsigned int *)t112);
    t114 = (~(t113));
    t115 = *((unsigned int *)t108);
    t116 = (t115 & t114);
    t117 = (t116 & 1U);
    if (t117 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t112) != 0)
        goto LAB52;

LAB53:    t119 = (t111 + 4);
    t120 = *((unsigned int *)t111);
    t121 = *((unsigned int *)t119);
    t122 = (t120 || t121);
    if (t122 > 0)
        goto LAB54;

LAB55:    memcpy(t137, t111, 8);

LAB56:    memset(t169, 0, 8);
    t170 = (t137 + 4);
    t171 = *((unsigned int *)t170);
    t172 = (~(t171));
    t173 = *((unsigned int *)t137);
    t174 = (t173 & t172);
    t175 = (t174 & 1U);
    if (t175 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t170) != 0)
        goto LAB71;

LAB72:    t178 = *((unsigned int *)t92);
    t179 = *((unsigned int *)t169);
    t180 = (t178 | t179);
    *((unsigned int *)t177) = t180;
    t181 = (t92 + 4);
    t182 = (t169 + 4);
    t183 = (t177 + 4);
    t184 = *((unsigned int *)t181);
    t185 = *((unsigned int *)t182);
    t186 = (t184 | t185);
    *((unsigned int *)t183) = t186;
    t187 = *((unsigned int *)t183);
    t188 = (t187 != 0);
    if (t188 == 1)
        goto LAB73;

LAB74:
LAB75:    goto LAB44;

LAB46:    t110 = (t108 + 4);
    *((unsigned int *)t108) = 1;
    *((unsigned int *)t110) = 1;
    goto LAB48;

LAB47:    *((unsigned int *)t108) = 1;
    goto LAB48;

LAB50:    *((unsigned int *)t111) = 1;
    goto LAB53;

LAB52:    t118 = (t111 + 4);
    *((unsigned int *)t111) = 1;
    *((unsigned int *)t118) = 1;
    goto LAB53;

LAB54:    t123 = (t0 + 1528U);
    t124 = *((char **)t123);
    t123 = (t0 + 1208U);
    t125 = *((char **)t123);
    memset(t126, 0, 8);
    t123 = (t124 + 4);
    if (*((unsigned int *)t123) != 0)
        goto LAB58;

LAB57:    t127 = (t125 + 4);
    if (*((unsigned int *)t127) != 0)
        goto LAB58;

LAB61:    if (*((unsigned int *)t124) > *((unsigned int *)t125))
        goto LAB59;

LAB60:    memset(t129, 0, 8);
    t130 = (t126 + 4);
    t131 = *((unsigned int *)t130);
    t132 = (~(t131));
    t133 = *((unsigned int *)t126);
    t134 = (t133 & t132);
    t135 = (t134 & 1U);
    if (t135 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t130) != 0)
        goto LAB64;

LAB65:    t138 = *((unsigned int *)t111);
    t139 = *((unsigned int *)t129);
    t140 = (t138 & t139);
    *((unsigned int *)t137) = t140;
    t141 = (t111 + 4);
    t142 = (t129 + 4);
    t143 = (t137 + 4);
    t144 = *((unsigned int *)t141);
    t145 = *((unsigned int *)t142);
    t146 = (t144 | t145);
    *((unsigned int *)t143) = t146;
    t147 = *((unsigned int *)t143);
    t148 = (t147 != 0);
    if (t148 == 1)
        goto LAB66;

LAB67:
LAB68:    goto LAB56;

LAB58:    t128 = (t126 + 4);
    *((unsigned int *)t126) = 1;
    *((unsigned int *)t128) = 1;
    goto LAB60;

LAB59:    *((unsigned int *)t126) = 1;
    goto LAB60;

LAB62:    *((unsigned int *)t129) = 1;
    goto LAB65;

LAB64:    t136 = (t129 + 4);
    *((unsigned int *)t129) = 1;
    *((unsigned int *)t136) = 1;
    goto LAB65;

LAB66:    t149 = *((unsigned int *)t137);
    t150 = *((unsigned int *)t143);
    *((unsigned int *)t137) = (t149 | t150);
    t151 = (t111 + 4);
    t152 = (t129 + 4);
    t153 = *((unsigned int *)t111);
    t154 = (~(t153));
    t155 = *((unsigned int *)t151);
    t156 = (~(t155));
    t157 = *((unsigned int *)t129);
    t158 = (~(t157));
    t159 = *((unsigned int *)t152);
    t160 = (~(t159));
    t161 = (t154 & t156);
    t162 = (t158 & t160);
    t163 = (~(t161));
    t164 = (~(t162));
    t165 = *((unsigned int *)t143);
    *((unsigned int *)t143) = (t165 & t163);
    t166 = *((unsigned int *)t143);
    *((unsigned int *)t143) = (t166 & t164);
    t167 = *((unsigned int *)t137);
    *((unsigned int *)t137) = (t167 & t163);
    t168 = *((unsigned int *)t137);
    *((unsigned int *)t137) = (t168 & t164);
    goto LAB68;

LAB69:    *((unsigned int *)t169) = 1;
    goto LAB72;

LAB71:    t176 = (t169 + 4);
    *((unsigned int *)t169) = 1;
    *((unsigned int *)t176) = 1;
    goto LAB72;

LAB73:    t189 = *((unsigned int *)t177);
    t190 = *((unsigned int *)t183);
    *((unsigned int *)t177) = (t189 | t190);
    t191 = (t92 + 4);
    t192 = (t169 + 4);
    t193 = *((unsigned int *)t191);
    t194 = (~(t193));
    t195 = *((unsigned int *)t92);
    t196 = (t195 & t194);
    t197 = *((unsigned int *)t192);
    t198 = (~(t197));
    t199 = *((unsigned int *)t169);
    t200 = (t199 & t198);
    t201 = (~(t196));
    t202 = (~(t200));
    t203 = *((unsigned int *)t183);
    *((unsigned int *)t183) = (t203 & t201);
    t204 = *((unsigned int *)t183);
    *((unsigned int *)t183) = (t204 & t202);
    goto LAB75;

LAB76:    xsi_set_current_line(33, ng0);

LAB79:    xsi_set_current_line(34, ng0);
    t211 = (t0 + 1528U);
    t212 = *((char **)t211);
    t211 = (t0 + 2088);
    xsi_vlogvar_assign_value(t211, t212, 0, 0, 3);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB78;

}


extern void work_m_00000000001850024850_2105830394_init()
{
	static char *pe[] = {(void *)Always_31_0};
	xsi_register_didat("work_m_00000000001850024850_2105830394", "isim/top_tb_isim_beh.exe.sim/work/m_00000000001850024850_2105830394.didat");
	xsi_register_executes(pe);
}
