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

/* This file is designed for use with ISim build 0x7dea747 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/admin/Desktop/GG_VLSI/subtraction_2s_comp/subtraction_2s_comp.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};



static void Always_27_0(char *t0)
{
    char t7[8];
    char t16[8];
    char t29[8];
    char t32[8];
    char t49[8];
    char t61[8];
    char t73[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
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
    char *t30;
    char *t31;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t5 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB7;

LAB6:    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t5) > *((unsigned int *)t6))
        goto LAB8;

LAB9:    t10 = (t7 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t7);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(36, ng0);

LAB24:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    *((unsigned int *)t7) = t12;
    *((unsigned int *)t2) = 0;
    if (*((unsigned int *)t4) != 0)
        goto LAB26;

LAB25:    t21 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t21 & 4294967295U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 4294967295U);
    t5 = ((char*)((ng1)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t7, 32, t5, 32);
    t6 = (t0 + 1208U);
    t8 = *((char **)t6);
    memset(t29, 0, 8);
    xsi_vlog_unsigned_add(t29, 32, t16, 32, t8, 4);
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t29, 0, 0, 5);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1608);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t7, 32, t4, t8, 2, t9, 32, 1);
    t10 = ((char*)((ng1)));
    memset(t16, 0, 8);
    t17 = (t7 + 4);
    t18 = (t10 + 4);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t10);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t17);
    t15 = *((unsigned int *)t18);
    t20 = (t14 ^ t15);
    t21 = (t13 | t20);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t18);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB30;

LAB27:    if (t24 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t16) = 1;

LAB30:    t28 = (t16 + 4);
    t27 = *((unsigned int *)t28);
    t33 = (~(t27));
    t34 = *((unsigned int *)t16);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB31;

LAB32:
LAB33:
LAB13:    goto LAB2;

LAB7:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(30, ng0);

LAB14:    xsi_set_current_line(31, ng0);
    t17 = (t0 + 1208U);
    t18 = *((char **)t17);
    memset(t16, 0, 8);
    t17 = (t16 + 4);
    t19 = (t18 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    *((unsigned int *)t16) = t21;
    *((unsigned int *)t17) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB16;

LAB15:    t26 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t26 & 4294967295U);
    t27 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t27 & 4294967295U);
    t28 = ((char*)((ng1)));
    memset(t29, 0, 8);
    xsi_vlog_unsigned_add(t29, 32, t16, 32, t28, 32);
    t30 = (t0 + 1048U);
    t31 = *((char **)t30);
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t29, 32, t31, 4);
    t30 = (t0 + 1608);
    xsi_vlogvar_assign_value(t30, t32, 0, 0, 5);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1608);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t7, 32, t4, t8, 2, t9, 32, 1);
    t10 = ((char*)((ng1)));
    memset(t16, 0, 8);
    t17 = (t7 + 4);
    t18 = (t10 + 4);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t10);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t17);
    t15 = *((unsigned int *)t18);
    t20 = (t14 ^ t15);
    t21 = (t13 | t20);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t18);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB20;

LAB17:    if (t24 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t16) = 1;

LAB20:    t28 = (t16 + 4);
    t27 = *((unsigned int *)t28);
    t33 = (~(t27));
    t34 = *((unsigned int *)t16);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB21;

LAB22:
LAB23:    goto LAB13;

LAB16:    t22 = *((unsigned int *)t16);
    t23 = *((unsigned int *)t19);
    *((unsigned int *)t16) = (t22 | t23);
    t24 = *((unsigned int *)t17);
    t25 = *((unsigned int *)t19);
    *((unsigned int *)t17) = (t24 | t25);
    goto LAB15;

LAB19:    t19 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(33, ng0);
    t30 = (t0 + 1608);
    t31 = (t30 + 56U);
    t37 = *((char **)t31);
    memset(t32, 0, 8);
    t38 = (t32 + 4);
    t39 = (t37 + 4);
    t40 = *((unsigned int *)t37);
    t41 = (t40 >> 0);
    t42 = (t41 & 1);
    *((unsigned int *)t32) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 >> 0);
    t45 = (t44 & 1);
    *((unsigned int *)t38) = t45;
    t46 = (t0 + 1608);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memset(t49, 0, 8);
    t50 = (t49 + 4);
    t51 = (t48 + 4);
    t52 = *((unsigned int *)t48);
    t53 = (t52 >> 1);
    t54 = (t53 & 1);
    *((unsigned int *)t49) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 >> 1);
    t57 = (t56 & 1);
    *((unsigned int *)t50) = t57;
    t58 = (t0 + 1608);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    memset(t61, 0, 8);
    t62 = (t61 + 4);
    t63 = (t60 + 4);
    t64 = *((unsigned int *)t60);
    t65 = (t64 >> 2);
    t66 = (t65 & 1);
    *((unsigned int *)t61) = t66;
    t67 = *((unsigned int *)t63);
    t68 = (t67 >> 2);
    t69 = (t68 & 1);
    *((unsigned int *)t62) = t69;
    t70 = (t0 + 1608);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    memset(t73, 0, 8);
    t74 = (t73 + 4);
    t75 = (t72 + 4);
    t76 = *((unsigned int *)t72);
    t77 = (t76 >> 3);
    t78 = (t77 & 1);
    *((unsigned int *)t73) = t78;
    t79 = *((unsigned int *)t75);
    t80 = (t79 >> 3);
    t81 = (t80 & 1);
    *((unsigned int *)t74) = t81;
    xsi_vlogtype_concat(t29, 5, 4, 4U, t73, 1, t61, 1, t49, 1, t32, 1);
    t82 = (t0 + 1608);
    xsi_vlogvar_assign_value(t82, t29, 0, 0, 5);
    goto LAB23;

LAB26:    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t7) = (t13 | t14);
    t15 = *((unsigned int *)t2);
    t20 = *((unsigned int *)t4);
    *((unsigned int *)t2) = (t15 | t20);
    goto LAB25;

LAB29:    t19 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(39, ng0);
    t30 = (t0 + 1608);
    t31 = (t30 + 56U);
    t37 = *((char **)t31);
    memset(t32, 0, 8);
    t38 = (t32 + 4);
    t39 = (t37 + 4);
    t40 = *((unsigned int *)t37);
    t41 = (t40 >> 0);
    t42 = (t41 & 1);
    *((unsigned int *)t32) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 >> 0);
    t45 = (t44 & 1);
    *((unsigned int *)t38) = t45;
    t46 = (t0 + 1608);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memset(t49, 0, 8);
    t50 = (t49 + 4);
    t51 = (t48 + 4);
    t52 = *((unsigned int *)t48);
    t53 = (t52 >> 1);
    t54 = (t53 & 1);
    *((unsigned int *)t49) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 >> 1);
    t57 = (t56 & 1);
    *((unsigned int *)t50) = t57;
    t58 = (t0 + 1608);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    memset(t61, 0, 8);
    t62 = (t61 + 4);
    t63 = (t60 + 4);
    t64 = *((unsigned int *)t60);
    t65 = (t64 >> 2);
    t66 = (t65 & 1);
    *((unsigned int *)t61) = t66;
    t67 = *((unsigned int *)t63);
    t68 = (t67 >> 2);
    t69 = (t68 & 1);
    *((unsigned int *)t62) = t69;
    t70 = (t0 + 1608);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    memset(t73, 0, 8);
    t74 = (t73 + 4);
    t75 = (t72 + 4);
    t76 = *((unsigned int *)t72);
    t77 = (t76 >> 3);
    t78 = (t77 & 1);
    *((unsigned int *)t73) = t78;
    t79 = *((unsigned int *)t75);
    t80 = (t79 >> 3);
    t81 = (t80 & 1);
    *((unsigned int *)t74) = t81;
    xsi_vlogtype_concat(t29, 5, 4, 4U, t73, 1, t61, 1, t49, 1, t32, 1);
    t82 = (t0 + 1608);
    xsi_vlogvar_assign_value(t82, t29, 0, 0, 5);
    goto LAB33;

}


extern void work_m_00000000001688059671_0813183369_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_00000000001688059671_0813183369", "isim/subtraction_2s_comp_isim_beh.exe.sim/work/m_00000000001688059671_0813183369.didat");
	xsi_register_executes(pe);
}
