//#See docs / devel / tracing.txt for syntax documentation.

//#allwinner - cpucfg.c
void cb_allwinner_cpucfg_cpu_reset(uint8_t cpu_id,uint32_t reset_addr) {

  for (auto it = py_allwinner_cpucfg_cpu_reset.begin();
       it != py_allwinner_cpucfg_cpu_reset.end(); ++it) {
    boost::python::call(*it,cpu_id,reset_addr);
  }
}
void cb_allwinner_cpucfg_read(uint64_t offset,uint64_t data,unsigned size) {

  for (auto it = py_allwinner_cpucfg_read.begin();
       it != py_allwinner_cpucfg_read.end(); ++it) {
    boost::python::call(*it,offset,data,size);
  }
}
void cb_allwinner_cpucfg_write(uint64_t offset,uint64_t data,unsigned size) {

  for (auto it = py_allwinner_cpucfg_write.begin();
       it != py_allwinner_cpucfg_write.end(); ++it) {
    boost::python::call(*it,offset,data,size);
  }
}

//#allwinner - h3 - dramc.c
void cb_allwinner_h3_dramc_rowmirror_disable(void) {

  for (auto it = py_allwinner_h3_dramc_rowmirror_disable.begin();
       it != py_allwinner_h3_dramc_rowmirror_disable.end(); ++it) {
    boost::python::call(*it);
  }
}
void cb_allwinner_h3_dramc_rowmirror_enable(uint64_t addr) {

  for (auto it = py_allwinner_h3_dramc_rowmirror_enable.begin();
       it != py_allwinner_h3_dramc_rowmirror_enable.end(); ++it) {
    boost::python::call(*it,addr);
  }
}
void cb_allwinner_h3_dramcom_read(uint64_t offset,uint64_t data,unsigned size) {

  for (auto it = py_allwinner_h3_dramcom_read.begin();
       it != py_allwinner_h3_dramcom_read.end(); ++it) {
    boost::python::call(*it,offset,data,size);
  }
}
void cb_allwinner_h3_dramcom_write(uint64_t offset,uint64_t data,unsigned size) {

  for (auto it = py_allwinner_h3_dramcom_write.begin();
       it != py_allwinner_h3_dramcom_write.end(); ++it) {
    boost::python::call(*it,offset,data,size);
  }
}
void cb_allwinner_h3_dramctl_read(uint64_t offset,uint64_t data,unsigned size) {

  for (auto it = py_allwinner_h3_dramctl_read.begin();
       it != py_allwinner_h3_dramctl_read.end(); ++it) {
    boost::python::call(*it,offset,data,size);
  }
}
void cb_allwinner_h3_dramctl_write(uint64_t offset,uint64_t data,unsigned size) {

  for (auto it = py_allwinner_h3_dramctl_write.begin();
       it != py_allwinner_h3_dramctl_write.end(); ++it) {
    boost::python::call(*it,offset,data,size);
  }
}
void cb_allwinner_h3_dramphy_read(uint64_t offset,uint64_t data,unsigned size) {

  for (auto it = py_allwinner_h3_dramphy_read.begin();
       it != py_allwinner_h3_dramphy_read.end(); ++it) {
    boost::python::call(*it,offset,data,size);
  }
}
void cb_allwinner_h3_dramphy_write(uint64_t offset,uint64_t data,unsigned size) {

  for (auto it = py_allwinner_h3_dramphy_write.begin();
       it != py_allwinner_h3_dramphy_write.end(); ++it) {
    boost::python::call(*it,offset,data,size);
  }
}

//#allwinner - sid.c
void cb_allwinner_sid_read(uint64_t offset,uint64_t data,unsigned size) {

  for (auto it = py_allwinner_sid_read.begin(); it != py_allwinner_sid_read.end();
       ++it) {
    boost::python::call(*it,offset,data,size);
  }
}
void cb_allwinner_sid_write(uint64_t offset,uint64_t data,unsigned size) {

  for (auto it = py_allwinner_sid_write.begin(); it != py_allwinner_sid_write.end();
       ++it) {
    boost::python::call(*it,offset,data,size);
  }
}

//#avr_power.c
void cb_avr_power_read(uint8_t value) {

  for (auto it = py_avr_power_read.begin(); it != py_avr_power_read.end(); ++it) {
    boost::python::call(*it,value);
  }
}
void cb_avr_power_write(uint8_t value) {

  for (auto it = py_avr_power_write.begin(); it != py_avr_power_write.end(); ++it) {
    boost::python::call(*it,value);
  }
}

//#eccmemctl.c
void cb_ecc_mem_writel_mer(uint32_t val) {

  for (auto it = py_ecc_mem_writel_mer.begin(); it != py_ecc_mem_writel_mer.end();
       ++it) {
    boost::python::call(*it,val);
  }
}
void cb_ecc_mem_writel_mdr(uint32_t val) {

  for (auto it = py_ecc_mem_writel_mdr.begin(); it != py_ecc_mem_writel_mdr.end();
       ++it) {
    boost::python::call(*it,val);
  }
}
void cb_ecc_mem_writel_mfsr(uint32_t val) {

  for (auto it = py_ecc_mem_writel_mfsr.begin(); it != py_ecc_mem_writel_mfsr.end();
       ++it) {
    boost::python::call(*it,val);
  }
}
void cb_ecc_mem_writel_vcr(uint32_t val) {

  for (auto it = py_ecc_mem_writel_vcr.begin(); it != py_ecc_mem_writel_vcr.end();
       ++it) {
    boost::python::call(*it,val);
  }
}
void cb_ecc_mem_writel_dr(uint32_t val) {

  for (auto it = py_ecc_mem_writel_dr.begin(); it != py_ecc_mem_writel_dr.end();
       ++it) {
    boost::python::call(*it,val);
  }
}
void cb_ecc_mem_writel_ecr0(uint32_t val) {

  for (auto it = py_ecc_mem_writel_ecr0.begin(); it != py_ecc_mem_writel_ecr0.end();
       ++it) {
    boost::python::call(*it,val);
  }
}
void cb_ecc_mem_writel_ecr1(uint32_t val) {

  for (auto it = py_ecc_mem_writel_ecr1.begin(); it != py_ecc_mem_writel_ecr1.end();
       ++it) {
    boost::python::call(*it,val);
  }
}
void cb_ecc_mem_readl_mer(uint32_t ret) {

  for (auto it = py_ecc_mem_readl_mer.begin(); it != py_ecc_mem_readl_mer.end();
       ++it) {
    boost::python::call(*it,ret);
  }
}
void cb_ecc_mem_readl_mdr(uint32_t ret) {

  for (auto it = py_ecc_mem_readl_mdr.begin(); it != py_ecc_mem_readl_mdr.end();
       ++it) {
    boost::python::call(*it,ret);
  }
}
void cb_ecc_mem_readl_mfsr(uint32_t ret) {

  for (auto it = py_ecc_mem_readl_mfsr.begin(); it != py_ecc_mem_readl_mfsr.end();
       ++it) {
    boost::python::call(*it,ret);
  }
}
void cb_ecc_mem_readl_vcr(uint32_t ret) {

  for (auto it = py_ecc_mem_readl_vcr.begin(); it != py_ecc_mem_readl_vcr.end();
       ++it) {
    boost::python::call(*it,ret);
  }
}
void cb_ecc_mem_readl_mfar0(uint32_t ret) {

  for (auto it = py_ecc_mem_readl_mfar0.begin(); it != py_ecc_mem_readl_mfar0.end();
       ++it) {
    boost::python::call(*it,ret);
  }
}
void cb_ecc_mem_readl_mfar1(uint32_t ret) {

  for (auto it = py_ecc_mem_readl_mfar1.begin(); it != py_ecc_mem_readl_mfar1.end();
       ++it) {
    boost::python::call(*it,ret);
  }
}
void cb_ecc_mem_readl_dr(uint32_t ret) {

  for (auto it = py_ecc_mem_readl_dr.begin(); it != py_ecc_mem_readl_dr.end(); ++it) {
    boost::python::call(*it,ret);
  }
}
void cb_ecc_mem_readl_ecr0(uint32_t ret) {

  for (auto it = py_ecc_mem_readl_ecr0.begin(); it != py_ecc_mem_readl_ecr0.end();
       ++it) {
    boost::python::call(*it,ret);
  }
}
void cb_ecc_mem_readl_ecr1(uint32_t ret) {

  for (auto it = py_ecc_mem_readl_ecr1.begin(); it != py_ecc_mem_readl_ecr1.end();
       ++it) {
    boost::python::call(*it,ret);
  }
}
void cb_ecc_diag_mem_writeb(uint64_t addr,uint32_t val) {

  for (auto it = py_ecc_diag_mem_writeb.begin(); it != py_ecc_diag_mem_writeb.end();
       ++it) {
    boost::python::call(*it,addr,val);
  }
}
void cb_ecc_diag_mem_readb(uint64_t addr,uint32_t ret) {

  for (auto it = py_ecc_diag_mem_readb.begin(); it != py_ecc_diag_mem_readb.end();
       ++it) {
    boost::python::call(*it,addr,ret);
  }
}

//#empty_slot.c
void cb_empty_slot_write(uint64_t addr,unsigned width,uint64_t value,unsigned size,const char *name) {

  for (auto it = py_empty_slot_write.begin(); it != py_empty_slot_write.end(); ++it) {
    boost::python::call(*it,addr,width,value,unsigned size,const char *name);
  }
}

//#slavio_misc.c
void cb_slavio_misc_update_irq_raise(void) {

  for (auto it = py_slavio_misc_update_irq_raise.begin();
       it != py_slavio_misc_update_irq_raise.end(); ++it) {
    boost::python::call(*it);
  }
}
void cb_slavio_misc_update_irq_lower(void) {

  for (auto it = py_slavio_misc_update_irq_lower.begin();
       it != py_slavio_misc_update_irq_lower.end(); ++it) {
    boost::python::call(*it);
  }
}
void cb_slavio_set_power_fail(int power_failing,uint8_t config) {

  for (auto it = py_slavio_set_power_fail.begin();
       it != py_slavio_set_power_fail.end(); ++it) {
    boost::python::call(*it,power_failing,config);
  }
}
void cb_slavio_cfg_mem_writeb(uint32_t val) {

  for (auto it = py_slavio_cfg_mem_writeb.begin();
       it != py_slavio_cfg_mem_writeb.end(); ++it) {
    boost::python::call(*it,val);
  }
}
void cb_slavio_cfg_mem_readb(uint32_t ret) {

  for (auto it = py_slavio_cfg_mem_readb.begin(); it != py_slavio_cfg_mem_readb.end();
       ++it) {
    boost::python::call(*it,ret);
  }
}
void cb_slavio_diag_mem_writeb(uint32_t val) {

  for (auto it = py_slavio_diag_mem_writeb.begin();
       it != py_slavio_diag_mem_writeb.end(); ++it) {
    boost::python::call(*it,val);
  }
}
void cb_slavio_diag_mem_readb(uint32_t ret) {

  for (auto it = py_slavio_diag_mem_readb.begin();
       it != py_slavio_diag_mem_readb.end(); ++it) {
    boost::python::call(*it,ret);
  }
}
void cb_slavio_mdm_mem_writeb(uint32_t val) {

  for (auto it = py_slavio_mdm_mem_writeb.begin();
       it != py_slavio_mdm_mem_writeb.end(); ++it) {
    boost::python::call(*it,val);
  }
}
void cb_slavio_mdm_mem_readb(uint32_t ret) {

  for (auto it = py_slavio_mdm_mem_readb.begin(); it != py_slavio_mdm_mem_readb.end();
       ++it) {
    boost::python::call(*it,ret);
  }
}
void cb_slavio_aux1_mem_writeb(uint32_t val) {

  for (auto it = py_slavio_aux1_mem_writeb.begin();
       it != py_slavio_aux1_mem_writeb.end(); ++it) {
    boost::python::call(*it,val);
  }
}
void cb_slavio_aux1_mem_readb(uint32_t ret) {

  for (auto it = py_slavio_aux1_mem_readb.begin();
       it != py_slavio_aux1_mem_readb.end(); ++it) {
    boost::python::call(*it,ret);
  }
}
void cb_slavio_aux2_mem_writeb(uint32_t val) {

  for (auto it = py_slavio_aux2_mem_writeb.begin();
       it != py_slavio_aux2_mem_writeb.end(); ++it) {
    boost::python::call(*it,val);
  }
}
void cb_slavio_aux2_mem_readb(uint32_t ret) {

  for (auto it = py_slavio_aux2_mem_readb.begin();
       it != py_slavio_aux2_mem_readb.end(); ++it) {
    boost::python::call(*it,ret);
  }
}
void cb_apc_mem_writeb(uint32_t val) {

  for (auto it = py_apc_mem_writeb.begin(); it != py_apc_mem_writeb.end(); ++it) {
    boost::python::call(*it,val);
  }
}
void cb_apc_mem_readb(uint32_t ret) {

  for (auto it = py_apc_mem_readb.begin(); it != py_apc_mem_readb.end(); ++it) {
    boost::python::call(*it,ret);
  }
}
void cb_slavio_sysctrl_mem_writel(uint32_t val) {

  for (auto it = py_slavio_sysctrl_mem_writel.begin();
       it != py_slavio_sysctrl_mem_writel.end(); ++it) {
    boost::python::call(*it,val);
  }
}
void cb_slavio_sysctrl_mem_readl(uint32_t ret) {

  for (auto it = py_slavio_sysctrl_mem_readl.begin();
       it != py_slavio_sysctrl_mem_readl.end(); ++it) {
    boost::python::call(*it,ret);
  }
}
void cb_slavio_led_mem_writew(uint32_t val) {

  for (auto it = py_slavio_led_mem_writew.begin();
       it != py_slavio_led_mem_writew.end(); ++it) {
    boost::python::call(*it,val);
  }
}
void cb_slavio_led_mem_readw(uint32_t ret) {

  for (auto it = py_slavio_led_mem_readw.begin(); it != py_slavio_led_mem_readw.end();
       ++it) {
    boost::python::call(*it,ret);
  }
}

//#milkymist - hpdmc.c
void cb_milkymist_hpdmc_memory_read(uint32_t addr,uint32_t value) {

  for (auto it = py_milkymist_hpdmc_memory_read.begin();
       it != py_milkymist_hpdmc_memory_read.end(); ++it) {
    boost::python::call(*it,addr,value);
  }
}
void cb_milkymist_hpdmc_memory_write(uint32_t addr,uint32_t value) {

  for (auto it = py_milkymist_hpdmc_memory_write.begin();
       it != py_milkymist_hpdmc_memory_write.end(); ++it) {
    boost::python::call(*it,addr,value);
  }
}

//#milkymist - pfpu.c
void cb_milkymist_pfpu_memory_read(uint32_t addr,uint32_t value) {

  for (auto it = py_milkymist_pfpu_memory_read.begin();
       it != py_milkymist_pfpu_memory_read.end(); ++it) {
    boost::python::call(*it,addr,value);
  }
}
void cb_milkymist_pfpu_memory_write(uint32_t addr,uint32_t value) {

  for (auto it = py_milkymist_pfpu_memory_write.begin();
       it != py_milkymist_pfpu_memory_write.end(); ++it) {
    boost::python::call(*it,addr,value);
  }
}
void cb_milkymist_pfpu_vectout(uint32_t a,uint32_t b,uint32_t dma_ptr) {

  for (auto it = py_milkymist_pfpu_vectout.begin();
       it != py_milkymist_pfpu_vectout.end(); ++it) {
    boost::python::call(*it,a,b,dma_ptr);
  }
}
void cb_milkymist_pfpu_pulse_irq(void) {

  for (auto it = py_milkymist_pfpu_pulse_irq.begin();
       it != py_milkymist_pfpu_pulse_irq.end(); ++it) {
    boost::python::call(*it);
  }
}

//#aspeed_scu.c
void cb_aspeed_scu_write(uint64_t offset,unsigned size,uint32_t data) {

  for (auto it = py_aspeed_scu_write.begin(); it != py_aspeed_scu_write.end(); ++it) {
    boost::python::call(*it,offset,size,data);
  }
}

//#mps2 - scc.c
void cb_mps2_scc_read(uint64_t offset,uint64_t data,unsigned size) {

  for (auto it = py_mps2_scc_read.begin(); it != py_mps2_scc_read.end(); ++it) {
    boost::python::call(*it,offset,data,size);
  }
}
void cb_mps2_scc_write(uint64_t offset,uint64_t data,unsigned size) {

  for (auto it = py_mps2_scc_write.begin(); it != py_mps2_scc_write.end(); ++it) {
    boost::python::call(*it,offset,data,size);
  }
}
void cb_mps2_scc_reset(void) {

  for (auto it = py_mps2_scc_reset.begin(); it != py_mps2_scc_reset.end(); ++it) {
    boost::python::call(*it);
  }
}
void cb_mps2_scc_cfg_write(unsigned function,unsigned device,uint32_t value) {

  for (auto it = py_mps2_scc_cfg_write.begin(); it != py_mps2_scc_cfg_write.end();
       ++it) {
    boost::python::call(*it,function,device,uint32_t value);
  }
}
void cb_mps2_scc_cfg_read(unsigned function,unsigned device,uint32_t value) {

  for (auto it = py_mps2_scc_cfg_read.begin(); it != py_mps2_scc_cfg_read.end();
       ++it) {
    boost::python::call(*it,function,device,uint32_t value);
  }
}

//#mps2 - fpgaio.c
void cb_mps2_fpgaio_read(uint64_t offset,uint64_t data,unsigned size) {

  for (auto it = py_mps2_fpgaio_read.begin(); it != py_mps2_fpgaio_read.end(); ++it) {
    boost::python::call(*it,offset,data,size);
  }
}
void cb_mps2_fpgaio_write(uint64_t offset,uint64_t data,unsigned size) {

  for (auto it = py_mps2_fpgaio_write.begin(); it != py_mps2_fpgaio_write.end();
       ++it) {
    boost::python::call(*it,offset,data,size);
  }
}
void cb_mps2_fpgaio_reset(void) {

  for (auto it = py_mps2_fpgaio_reset.begin(); it != py_mps2_fpgaio_reset.end();
       ++it) {
    boost::python::call(*it);
  }
}

//#msf2 - sysreg.c
void cb_msf2_sysreg_write(uint64_t offset,uint32_t val,uint32_t prev) {

  for (auto it = py_msf2_sysreg_write.begin(); it != py_msf2_sysreg_write.end();
       ++it) {
    boost::python::call(*it,offset,val,prev);
  }
}
void cb_msf2_sysreg_read(uint64_t offset,uint32_t val) {

  for (auto it = py_msf2_sysreg_read.begin(); it != py_msf2_sysreg_read.end(); ++it) {
    boost::python::call(*it,offset,val);
  }
}
void cb_msf2_sysreg_write_pll_status(void) {

  for (auto it = py_msf2_sysreg_write_pll_status.begin();
       it != py_msf2_sysreg_write_pll_status.end(); ++it) {
    boost::python::call(*it);
  }
}

//#imx7_gpr.c
void cb_imx7_gpr_read(uint64_t offset) {

  for (auto it = py_imx7_gpr_read.begin(); it != py_imx7_gpr_read.end(); ++it) {
    boost::python::call(*it,offset);
  }
}
void cb_imx7_gpr_write(uint64_t offset,uint64_t value) {

  for (auto it = py_imx7_gpr_write.begin(); it != py_imx7_gpr_write.end(); ++it) {
    boost::python::call(*it,offset,value);
  }
}

//#mos6522.c
void cb_mos6522_set_counter(int index,unsigned int val) {

  for (auto it = py_mos6522_set_counter.begin(); it != py_mos6522_set_counter.end();
       ++it) {
    boost::python::call(*it,index,val);
  }
}
void cb_mos6522_get_next_irq_time(uint16_t latch,int64_t d,int64_t delta) {

  for (auto it = py_mos6522_get_next_irq_time.begin();
       it != py_mos6522_get_next_irq_time.end(); ++it) {
    boost::python::call(*it,latch,d,delta);
  }
}
void cb_mos6522_set_sr_int(void) {

  for (auto it = py_mos6522_set_sr_int.begin(); it != py_mos6522_set_sr_int.end();
       ++it) {
    boost::python::call(*it);
  }
}
void cb_mos6522_write(uint64_t addr,uint64_t val) {

  for (auto it = py_mos6522_write.begin(); it != py_mos6522_write.end(); ++it) {
    boost::python::call(*it,addr,val);
  }
}
void cb_mos6522_read(uint64_t addr,unsigned val) {

  for (auto it = py_mos6522_read.begin(); it != py_mos6522_read.end(); ++it) {
    boost::python::call(*it,addr,val);
  }
}

//#npcm7xx_clk.c
void cb_npcm7xx_clk_read(uint64_t offset,uint32_t value) {

  for (auto it = py_npcm7xx_clk_read.begin(); it != py_npcm7xx_clk_read.end(); ++it) {
    boost::python::call(*it,offset,value);
  }
}
void cb_npcm7xx_clk_write(uint64_t offset,uint32_t value) {

  for (auto it = py_npcm7xx_clk_write.begin(); it != py_npcm7xx_clk_write.end();
       ++it) {
    boost::python::call(*it,offset,value);
  }
}

//#npcm7xx_gcr.c
void cb_npcm7xx_gcr_read(uint64_t offset,uint32_t value) {

  for (auto it = py_npcm7xx_gcr_read.begin(); it != py_npcm7xx_gcr_read.end(); ++it) {
    boost::python::call(*it,offset,value);
  }
}
void cb_npcm7xx_gcr_write(uint64_t offset,uint32_t value) {

  for (auto it = py_npcm7xx_gcr_write.begin(); it != py_npcm7xx_gcr_write.end();
       ++it) {
    boost::python::call(*it,offset,value);
  }
}

//#npcm7xx_rng.c
void cb_npcm7xx_rng_read(uint64_t offset,uint64_t value,unsigned size) {

  for (auto it = py_npcm7xx_rng_read.begin(); it != py_npcm7xx_rng_read.end(); ++it) {
    boost::python::call(*it,offset,value,size);
  }
}
void cb_npcm7xx_rng_write(uint64_t offset,uint64_t value,unsigned size) {

  for (auto it = py_npcm7xx_rng_write.begin(); it != py_npcm7xx_rng_write.end();
       ++it) {
    boost::python::call(*it,offset,value,size);
  }
}

//#npcm7xx_pwm.c
void cb_npcm7xx_pwm_read(const char *id,uint64_t offset,uint32_t value) {

  for (auto it = py_npcm7xx_pwm_read.begin(); it != py_npcm7xx_pwm_read.end(); ++it) {
    boost::python::call(*it,*id,offset,value);
  }
}
void cb_npcm7xx_pwm_write(const char *id,uint64_t offset,uint32_t value) {

  for (auto it = py_npcm7xx_pwm_write.begin(); it != py_npcm7xx_pwm_write.end();
       ++it) {
    boost::python::call(*it,*id,offset,value);
  }
}
void cb_npcm7xx_pwm_update_freq(const char *id,uint8_t index,uint32_t old_value,uint32_t new_value) {

  for (auto it = py_npcm7xx_pwm_update_freq.begin();
       it != py_npcm7xx_pwm_update_freq.end(); ++it) {
    boost::python::call(*it,*id,index,old_value,uint32_t new_value);
  }
}
void cb_npcm7xx_pwm_update_duty(const char *id,uint8_t index,uint32_t old_value,uint32_t new_value) {

  for (auto it = py_npcm7xx_pwm_update_duty.begin();
       it != py_npcm7xx_pwm_update_duty.end(); ++it) {
    boost::python::call(*it,*id,index,old_value,uint32_t new_value);
  }
}

//#stm32f4xx_syscfg.c
void cb_stm32f4xx_syscfg_set_irq(int gpio,int line,int level) {

  for (auto it = py_stm32f4xx_syscfg_set_irq.begin();
       it != py_stm32f4xx_syscfg_set_irq.end(); ++it) {
    boost::python::call(*it,gpio,line,level);
  }
}
void cb_stm32f4xx_pulse_exti(int irq) {

  for (auto it = py_stm32f4xx_pulse_exti.begin(); it != py_stm32f4xx_pulse_exti.end();
       ++it) {
    boost::python::call(*it,irq);
  }
}
void cb_stm32f4xx_syscfg_read(uint64_t addr) {

  for (auto it = py_stm32f4xx_syscfg_read.begin();
       it != py_stm32f4xx_syscfg_read.end(); ++it) {
    boost::python::call(*it,addr);
  }
}
void cb_stm32f4xx_syscfg_write(uint64_t addr,uint64_t data) {

  for (auto it = py_stm32f4xx_syscfg_write.begin();
       it != py_stm32f4xx_syscfg_write.end(); ++it) {
    boost::python::call(*it,addr,data);
  }
}

//#stm32f4xx_exti.c
void cb_stm32f4xx_exti_set_irq(int irq,int leve) {

  for (auto it = py_stm32f4xx_exti_set_irq.begin();
       it != py_stm32f4xx_exti_set_irq.end(); ++it) {
    boost::python::call(*it,irq,leve);
  }
}
void cb_stm32f4xx_exti_read(uint64_t addr) {

  for (auto it = py_stm32f4xx_exti_read.begin(); it != py_stm32f4xx_exti_read.end();
       ++it) {
    boost::python::call(*it,addr);
  }
}
void cb_stm32f4xx_exti_write(uint64_t addr,uint64_t data) {

  for (auto it = py_stm32f4xx_exti_write.begin(); it != py_stm32f4xx_exti_write.end();
       ++it) {
    boost::python::call(*it,addr,data);
  }
}

//#tz - mpc.c
void cb_tz_mpc_reg_read(uint32_t offset,uint64_t data,unsigned size) {

  for (auto it = py_tz_mpc_reg_read.begin(); it != py_tz_mpc_reg_read.end(); ++it) {
    boost::python::call(*it,offset,data,size);
  }
}
void cb_tz_mpc_reg_write(uint32_t offset,uint64_t data,unsigned size) {

  for (auto it = py_tz_mpc_reg_write.begin(); it != py_tz_mpc_reg_write.end(); ++it) {
    boost::python::call(*it,offset,data,size);
  }
}
void cb_tz_mpc_mem_blocked_read(uint64_t addr,unsigned size,bool secure) {

  for (auto it = py_tz_mpc_mem_blocked_read.begin();
       it != py_tz_mpc_mem_blocked_read.end(); ++it) {
    boost::python::call(*it,addr,size,secure);
  }
}
void cb_tz_mpc_mem_blocked_write(uint64_t addr,uint64_t data,unsigned size,bool secure) {

  for (auto it = py_tz_mpc_mem_blocked_write.begin();
       it != py_tz_mpc_mem_blocked_write.end(); ++it) {
    boost::python::call(*it,addr,data,size,bool secure);
  }
}
void cb_tz_mpc_translate(uint64_t addr,int flags,const char *idx,const char *res) {

  for (auto it = py_tz_mpc_translate.begin(); it != py_tz_mpc_translate.end(); ++it) {
    boost::python::call(*it,addr,flags,*idx,const char *res);
  }
}
void cb_tz_mpc_iommu_notify(uint64_t addr) {

  for (auto it = py_tz_mpc_iommu_notify.begin(); it != py_tz_mpc_iommu_notify.end();
       ++it) {
    boost::python::call(*it,addr);
  }
}

//#tz - msc.c
void cb_tz_msc_reset(void) {

  for (auto it = py_tz_msc_reset.begin(); it != py_tz_msc_reset.end(); ++it) {
    boost::python::call(*it);
  }
}
void cb_tz_msc_cfg_nonsec(int level) {

  for (auto it = py_tz_msc_cfg_nonsec.begin(); it != py_tz_msc_cfg_nonsec.end();
       ++it) {
    boost::python::call(*it,level);
  }
}
void cb_tz_msc_cfg_sec_resp(int level) {

  for (auto it = py_tz_msc_cfg_sec_resp.begin(); it != py_tz_msc_cfg_sec_resp.end();
       ++it) {
    boost::python::call(*it,level);
  }
}
void cb_tz_msc_irq_clear(int level) {

  for (auto it = py_tz_msc_irq_clear.begin(); it != py_tz_msc_irq_clear.end(); ++it) {
    boost::python::call(*it,level);
  }
}
void cb_tz_msc_update_irq(int level) {

  for (auto it = py_tz_msc_update_irq.begin(); it != py_tz_msc_update_irq.end();
       ++it) {
    boost::python::call(*it,level);
  }
}
void cb_tz_msc_access_blocked(uint64_t offset) {

  for (auto it = py_tz_msc_access_blocked.begin();
       it != py_tz_msc_access_blocked.end(); ++it) {
    boost::python::call(*it,offset);
  }
}

//#tz - ppc.c
void cb_tz_ppc_reset(void) {

  for (auto it = py_tz_ppc_reset.begin(); it != py_tz_ppc_reset.end(); ++it) {
    boost::python::call(*it);
  }
}
void cb_tz_ppc_cfg_nonsec(int n,int level) {

  for (auto it = py_tz_ppc_cfg_nonsec.begin(); it != py_tz_ppc_cfg_nonsec.end();
       ++it) {
    boost::python::call(*it,n,level);
  }
}
void cb_tz_ppc_cfg_ap(int n,int level) {

  for (auto it = py_tz_ppc_cfg_ap.begin(); it != py_tz_ppc_cfg_ap.end(); ++it) {
    boost::python::call(*it,n,level);
  }
}
void cb_tz_ppc_cfg_sec_resp(int level) {

  for (auto it = py_tz_ppc_cfg_sec_resp.begin(); it != py_tz_ppc_cfg_sec_resp.end();
       ++it) {
    boost::python::call(*it,level);
  }
}
void cb_tz_ppc_irq_enable(int level) {

  for (auto it = py_tz_ppc_irq_enable.begin(); it != py_tz_ppc_irq_enable.end();
       ++it) {
    boost::python::call(*it,level);
  }
}
void cb_tz_ppc_irq_clear(int level) {

  for (auto it = py_tz_ppc_irq_clear.begin(); it != py_tz_ppc_irq_clear.end(); ++it) {
    boost::python::call(*it,level);
  }
}
void cb_tz_ppc_update_irq(int level) {

  for (auto it = py_tz_ppc_update_irq.begin(); it != py_tz_ppc_update_irq.end();
       ++it) {
    boost::python::call(*it,level);
  }
}
void cb_tz_ppc_read_blocked(int n,uint64_t offset,bool secure,bool user) {

  for (auto it = py_tz_ppc_read_blocked.begin(); it != py_tz_ppc_read_blocked.end();
       ++it) {
    boost::python::call(*it,n,offset,secure,user);
  }
}
void cb_tz_ppc_write_blocked(int n,uint64_t offset,bool secure,bool user) {

  for (auto it = py_tz_ppc_write_blocked.begin(); it != py_tz_ppc_write_blocked.end();
       ++it) {
    boost::python::call(*it,n,offset,secure,user);
  }
}

//#iotkit - secctl.c
void cb_iotkit_secctl_s_read(uint32_t offset,uint64_t data,unsigned size) {

  for (auto it = py_iotkit_secctl_s_read.begin(); it != py_iotkit_secctl_s_read.end();
       ++it) {
    boost::python::call(*it,offset,data,size);
  }
}
void cb_iotkit_secctl_s_write(uint32_t offset,uint64_t data,unsigned size) {

  for (auto it = py_iotkit_secctl_s_write.begin();
       it != py_iotkit_secctl_s_write.end(); ++it) {
    boost::python::call(*it,offset,data,size);
  }
}
void cb_iotkit_secctl_ns_read(uint32_t offset,uint64_t data,unsigned size) {

  for (auto it = py_iotkit_secctl_ns_read.begin();
       it != py_iotkit_secctl_ns_read.end(); ++it) {
    boost::python::call(*it,offset,data,size);
  }
}
void cb_iotkit_secctl_ns_write(uint32_t offset,uint64_t data,unsigned size) {

  for (auto it = py_iotkit_secctl_ns_write.begin();
       it != py_iotkit_secctl_ns_write.end(); ++it) {
    boost::python::call(*it,offset,data,size);
  }
}

//#imx6ul_ccm.c
void cb_ccm_entry(void) {

  for (auto it = py_ccm_entry.begin(); it != py_ccm_entry.end(); ++it) {
    boost::python::call(*it);
  }
}
void cb_ccm_freq(uint32_t freq) {

  for (auto it = py_ccm_freq.begin(); it != py_ccm_freq.end(); ++it) {
    boost::python::call(*it,freq);
  }
}
void cb_ccm_clock_freq(uint32_t clock,uint32_t freq) {

  for (auto it = py_ccm_clock_freq.begin(); it != py_ccm_clock_freq.end(); ++it) {
    boost::python::call(*it,clock,freq);
  }
}
void cb_ccm_read_reg(const char *reg_name,uint32_t value) {

  for (auto it = py_ccm_read_reg.begin(); it != py_ccm_read_reg.end(); ++it) {
    boost::python::call(*it,*reg_name,value);
  }
}
void cb_ccm_write_reg(const char *reg_name,uint32_t value) {

  for (auto it = py_ccm_write_reg.begin(); it != py_ccm_write_reg.end(); ++it) {
    boost::python::call(*it,*reg_name,value);
  }
}

//#iotkit - sysinfo.c
void cb_iotkit_sysinfo_read(uint64_t offset,uint64_t data,unsigned size) {

  for (auto it = py_iotkit_sysinfo_read.begin(); it != py_iotkit_sysinfo_read.end();
       ++it) {
    boost::python::call(*it,offset,data,size);
  }
}
void cb_iotkit_sysinfo_write(uint64_t offset,uint64_t data,unsigned size) {

  for (auto it = py_iotkit_sysinfo_write.begin(); it != py_iotkit_sysinfo_write.end();
       ++it) {
    boost::python::call(*it,offset,data,size);
  }
}

//#iotkit - sysctl.c
void cb_iotkit_sysctl_read(uint64_t offset,uint64_t data,unsigned size) {

  for (auto it = py_iotkit_sysctl_read.begin(); it != py_iotkit_sysctl_read.end();
       ++it) {
    boost::python::call(*it,offset,data,size);
  }
}
void cb_iotkit_sysctl_write(uint64_t offset,uint64_t data,unsigned size) {

  for (auto it = py_iotkit_sysctl_write.begin(); it != py_iotkit_sysctl_write.end();
       ++it) {
    boost::python::call(*it,offset,data,size);
  }
}
void cb_iotkit_sysctl_reset(void) {

  for (auto it = py_iotkit_sysctl_reset.begin(); it != py_iotkit_sysctl_reset.end();
       ++it) {
    boost::python::call(*it);
  }
}

//#armsse - cpuid.c
void cb_armsse_cpuid_read(uint64_t offset,uint64_t data,unsigned size) {

  for (auto it = py_armsse_cpuid_read.begin(); it != py_armsse_cpuid_read.end();
       ++it) {
    boost::python::call(*it,offset,data,size);
  }
}
void cb_armsse_cpuid_write(uint64_t offset,uint64_t data,unsigned size) {

  for (auto it = py_armsse_cpuid_write.begin(); it != py_armsse_cpuid_write.end();
       ++it) {
    boost::python::call(*it,offset,data,size);
  }
}

//#armsse - mhu.c
void cb_armsse_mhu_read(uint64_t offset,uint64_t data,unsigned size) {

  for (auto it = py_armsse_mhu_read.begin(); it != py_armsse_mhu_read.end(); ++it) {
    boost::python::call(*it,offset,data,size);
  }
}
void cb_armsse_mhu_write(uint64_t offset,uint64_t data,unsigned size) {

  for (auto it = py_armsse_mhu_write.begin(); it != py_armsse_mhu_write.end(); ++it) {
    boost::python::call(*it,offset,data,size);
  }
}

//#aspeed_xdma.c
void cb_aspeed_xdma_write(uint64_t offset,uint64_t data) {

  for (auto it = py_aspeed_xdma_write.begin(); it != py_aspeed_xdma_write.end();
       ++it) {
    boost::python::call(*it,offset,data);
  }
}

//#bcm2835_property.c
void cb_bcm2835_mbox_property(uint32_t tag,uint32_t bufsize,size_t resplen) {

  for (auto it = py_bcm2835_mbox_property.begin();
       it != py_bcm2835_mbox_property.end(); ++it) {
    boost::python::call(*it,tag,bufsize,resplen);
  }
}

//#bcm2835_mbox.c
void cb_bcm2835_mbox_write(unsigned int size,uint64_t addr,uint64_t value) {

  for (auto it = py_bcm2835_mbox_write.begin(); it != py_bcm2835_mbox_write.end();
       ++it) {
    boost::python::call(*it,size,addr,value);
  }
}
void cb_bcm2835_mbox_read(unsigned int size,uint64_t addr,uint64_t value) {

  for (auto it = py_bcm2835_mbox_read.begin(); it != py_bcm2835_mbox_read.end();
       ++it) {
    boost::python::call(*it,size,addr,value);
  }
}
void cb_bcm2835_mbox_irq(unsigned level) {

  for (auto it = py_bcm2835_mbox_irq.begin(); it != py_bcm2835_mbox_irq.end(); ++it) {
    boost::python::call(*it,level);
  }
}

//#mac_via.c
void cb_via1_rtc_update_data_out(int count,int value) {

  for (auto it = py_via1_rtc_update_data_out.begin();
       it != py_via1_rtc_update_data_out.end(); ++it) {
    boost::python::call(*it,count,value);
  }
}
void cb_via1_rtc_update_data_in(int count,int value) {

  for (auto it = py_via1_rtc_update_data_in.begin();
       it != py_via1_rtc_update_data_in.end(); ++it) {
    boost::python::call(*it,count,value);
  }
}
void cb_via1_rtc_internal_status(int cmd,int alt,int value) {

  for (auto it = py_via1_rtc_internal_status.begin();
       it != py_via1_rtc_internal_status.end(); ++it) {
    boost::python::call(*it,cmd,alt,value);
  }
}
void cb_via1_rtc_internal_cmd(int cmd) {

  for (auto it = py_via1_rtc_internal_cmd.begin();
       it != py_via1_rtc_internal_cmd.end(); ++it) {
    boost::python::call(*it,cmd);
  }
}
void cb_via1_rtc_cmd_invalid(int value) {

  for (auto it = py_via1_rtc_cmd_invalid.begin(); it != py_via1_rtc_cmd_invalid.end();
       ++it) {
    boost::python::call(*it,value);
  }
}
void cb_via1_rtc_internal_time(uint32_t time) {

  for (auto it = py_via1_rtc_internal_time.begin();
       it != py_via1_rtc_internal_time.end(); ++it) {
    boost::python::call(*it,time);
  }
}
void cb_via1_rtc_internal_set_cmd(int cmd) {

  for (auto it = py_via1_rtc_internal_set_cmd.begin();
       it != py_via1_rtc_internal_set_cmd.end(); ++it) {
    boost::python::call(*it,cmd);
  }
}
void cb_via1_rtc_internal_ignore_cmd(int cmd) {

  for (auto it = py_via1_rtc_internal_ignore_cmd.begin();
       it != py_via1_rtc_internal_ignore_cmd.end(); ++it) {
    boost::python::call(*it,cmd);
  }
}
void cb_via1_rtc_internal_set_alt(int alt,int sector,int offset) {

  for (auto it = py_via1_rtc_internal_set_alt.begin();
       it != py_via1_rtc_internal_set_alt.end(); ++it) {
    boost::python::call(*it,alt,sector,offset);
  }
}
void cb_via1_rtc_cmd_seconds_read(int reg,int value) {

  for (auto it = py_via1_rtc_cmd_seconds_read.begin();
       it != py_via1_rtc_cmd_seconds_read.end(); ++it) {
    boost::python::call(*it,reg,value);
  }
}
void cb_via1_rtc_cmd_seconds_write(int reg,int value) {

  for (auto it = py_via1_rtc_cmd_seconds_write.begin();
       it != py_via1_rtc_cmd_seconds_write.end(); ++it) {
    boost::python::call(*it,reg,value);
  }
}
void cb_via1_rtc_cmd_test_write(int value) {

  for (auto it = py_via1_rtc_cmd_test_write.begin();
       it != py_via1_rtc_cmd_test_write.end(); ++it) {
    boost::python::call(*it,value);
  }
}
void cb_via1_rtc_cmd_wprotect_write(int value) {

  for (auto it = py_via1_rtc_cmd_wprotect_write.begin();
       it != py_via1_rtc_cmd_wprotect_write.end(); ++it) {
    boost::python::call(*it,value);
  }
}
void cb_via1_rtc_cmd_pram_read(int addr,int value) {

  for (auto it = py_via1_rtc_cmd_pram_read.begin();
       it != py_via1_rtc_cmd_pram_read.end(); ++it) {
    boost::python::call(*it,addr,value);
  }
}
void cb_via1_rtc_cmd_pram_write(int addr,int value) {

  for (auto it = py_via1_rtc_cmd_pram_write.begin();
       it != py_via1_rtc_cmd_pram_write.end(); ++it) {
    boost::python::call(*it,addr,value);
  }
}
void cb_via1_rtc_cmd_pram_sect_read(int sector,int offset,int addr,int value) {

  for (auto it = py_via1_rtc_cmd_pram_sect_read.begin();
       it != py_via1_rtc_cmd_pram_sect_read.end(); ++it) {
    boost::python::call(*it,sector,offset,addr,value);
  }
}
void cb_via1_rtc_cmd_pram_sect_write(int sector,int offset,int addr,int value) {

  for (auto it = py_via1_rtc_cmd_pram_sect_write.begin();
       it != py_via1_rtc_cmd_pram_sect_write.end(); ++it) {
    boost::python::call(*it,sector,offset,addr,value);
  }
}
void cb_via1_adb_send(const char *state,uint8_t data,const char *vadbint) {

  for (auto it = py_via1_adb_send.begin(); it != py_via1_adb_send.end(); ++it) {
    boost::python::call(*it,*state,data,const char *vadbint);
  }
}
void cb_via1_adb_receive(const char *state,uint8_t data,const char *vadbint,int status,int index,int size) {

  for (auto it = py_via1_adb_receive.begin(); it != py_via1_adb_receive.end(); ++it) {
    boost::python::call(*it,*state,data,const char *vadbint,int status,int index,int size);
  }
}
void cb_via1_adb_poll(uint8_t data,const char *vadbint,int status,int index,int size) {

  for (auto it = py_via1_adb_poll.begin(); it != py_via1_adb_poll.end(); ++it) {
    boost::python::call(*it,data,*vadb,status,int index,int size);
  }
}

//#grlib_ahb_apb_pnp.c
void cb_grlib_ahb_pnp_read(uint64_t addr,uint32_t value) {

  for (auto it = py_grlib_ahb_pnp_read.begin(); it != py_grlib_ahb_pnp_read.end();
       ++it) {
    boost::python::call(*it,addr,value);
  }
}
void cb_grlib_apb_pnp_read(uint64_t addr,uint32_t value) {

  for (auto it = py_grlib_apb_pnp_read.begin(); it != py_grlib_apb_pnp_read.end();
       ++it) {
    boost::python::call(*it,addr,value);
  }
}

//#led.c
void cb_led_set_intensity(const char *color,const char *desc,uint8_t intensity_percent) {

  for (auto it = py_led_set_intensity.begin(); it != py_led_set_intensity.end();
       ++it) {
    boost::python::call(*it,*color,*desc,uint8_t intensity_percent);
  }
}
void cb_led_change_intensity(const char *color,const char *desc,uint8_t old_intensity_percent,uint8_t new_intensity_percent) {

  for (auto it = py_led_change_intensity.begin(); it != py_led_change_intensity.end();
       ++it) {
    boost::python::call(*it,*color,*desc,uint8_t old_intensity_percent,uint8_t new_intensity_percent);
  }
}

//#pca9552.c
void cb_pca955x_gpio_status(const char *description,const char *buf) {

  for (auto it = py_pca955x_gpio_status.begin(); it != py_pca955x_gpio_status.end();
       ++it) {
    boost::python::call(*it,*description,*buf);
  }
}
void cb_pca955x_gpio_change(const char *description,unsigned id,unsigned prev_state,unsigned current_state) {

  for (auto it = py_pca955x_gpio_change.begin(); it != py_pca955x_gpio_change.end();
       ++it) {
    boost::python::call(*it,*description,id,unsigned prev_state,unsigned current_state);
  }
}

//#bcm2835_cprman.c
void cb_bcm2835_cprman_read(uint64_t offset,uint64_t value) {

  for (auto it = py_bcm2835_cprman_read.begin(); it != py_bcm2835_cprman_read.end();
       ++it) {
    boost::python::call(*it,offset,value);
  }
}
void cb_bcm2835_cprman_write(uint64_t offset,uint64_t value) {

  for (auto it = py_bcm2835_cprman_write.begin(); it != py_bcm2835_cprman_write.end();
       ++it) {
    boost::python::call(*it,offset,value);
  }
}
void cb_bcm2835_cprman_write_invalid_magic(uint64_t offset,uint64_t value) {

  for (auto it = py_bcm2835_cprman_write_invalid_magic.begin();
       it != py_bcm2835_cprman_write_invalid_magic.end(); ++it) {
    boost::python::call(*it,offset,value);
  }
}
