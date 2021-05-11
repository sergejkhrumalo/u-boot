#ifndef __CONFIG_BE_MBM10_H
#define __CONFIG_BE_MBM10_H

#include <linux/sizes.h>
#include <config_distro_bootcmd.h>
#include <environment/ti/mmc.h>
#include <environment/ti/k3_rproc.h>
#include <environment/ti/k3_dfu.h>

/* DDR Configuration */
#define CONFIG_SYS_SDRAM_BASE1		0x880000000

/* SPL Loader Configuration */
// #ifdef CONFIG_TARGET_AM654_A53_EVM

#ifdef CONFIG_TARGET_BE_MBM10
#define CONFIG_SYS_INIT_SP_ADDR         (CONFIG_SPL_TEXT_BASE +	\
					 CONFIG_SYS_K3_NON_SECURE_MSRAM_SIZE)
#define CONFIG_SYS_DFU_DATA_BUF_SIZE	0x20000
#endif




#endif /* __CONFIG_BE_MBM10_H */


