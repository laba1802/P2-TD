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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000368422736_3887296477_init();
    work_m_00000000000878885905_3355361811_init();
    work_m_00000000003720951524_2622938889_init();
    work_m_00000000001850024850_2105830394_init();
    work_m_00000000001447974423_2381739659_init();
    work_m_00000000000391901604_2314991682_init();
    work_m_00000000003890035240_1930634138_init();
    work_m_00000000001706246426_3415900350_init();
    work_m_00000000001659856477_3823007873_init();
    work_m_00000000002762552457_3115858369_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002762552457_3115858369");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}