// SPDX-License-Identifier: GPL-2.0
// Copyright 2021 Baikal Electronics.

#include <common.h>
#include <cpu_func.h>
#include <init.h>
#include <net.h>
#include <asm/cache.h>
#include <asm/global_data.h>
#include <asm/io.h>
#include <config.h>
#include <netdev.h>
#include <asm/system.h>
#include <asm/iproc-common/armpll.h>

DECLARE_GLOBAL_DATA_PTR;

int
dram_init(void)
{
  gd->ram_size = imx_ddr_size();

  return 0;
}

int
board_init(void)
{
  return 0;
}

