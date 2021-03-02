//# See docs/devel/tracing.txt for syntax documentation.

//# slavio_timer.c
void cb_slavio_timer_get_out(uint64_t limit,uint32_t counthigh,uint32_t count) {

  for (auto it = py_lavio_timer_get_out.begin(); it != py_lavio_timer_get_out.end();
       ++it) {
    boost::python::call(*it, limit, counthigh, count);
  }
}
void cb_slavio_timer_irq(uint32_t counthigh,uint32_t count) {

  for (auto it = py_lavio_timer_irq.begin(); it != py_lavio_timer_irq.end(); ++it) {
    boost::python::call(*it, counthigh, count);
  }
}
void cb_slavio_timer_mem_readl_invalid(uint64_t addr) {

  for (auto it = py_lavio_timer_mem_readl_invalid.begin();
       it != py_lavio_timer_mem_readl_invalid.end(); ++it) {
    boost::python::call(*it, addr);
  }
}
void cb_slavio_timer_mem_readl(uint64_t addr,uint32_t ret) {

  for (auto it = py_lavio_timer_mem_readl.begin();
       it != py_lavio_timer_mem_readl.end(); ++it) {
    boost::python::call(*it, addr, ret);
  }
}
void cb_slavio_timer_mem_writel(uint64_t addr,uint32_t val) {

  for (auto it = py_lavio_timer_mem_writel.begin();
       it != py_lavio_timer_mem_writel.end(); ++it) {
    boost::python::call(*it, addr, val);
  }
}
void cb_slavio_timer_mem_writel_limit(unsigned int timer_index,uint64_t count) {

  for (auto it = py_lavio_timer_mem_writel_limit.begin();
       it != py_lavio_timer_mem_writel_limit.end(); ++it) {
    boost::python::call(*it,  timer_index, count);
  }
}
void cb_slavio_timer_mem_writel_counter_invalid(void) {

  for (auto it = py_lavio_timer_mem_writel_counter_invalid.begin();
       it != py_lavio_timer_mem_writel_counter_invalid.end(); ++it) {
    boost::python::call(*it);
  }
}
void cb_slavio_timer_mem_writel_status_start(unsigned int timer_index) {

  for (auto it = py_lavio_timer_mem_writel_status_start.begin();
       it != py_lavio_timer_mem_writel_status_start.end(); ++it) {
    boost::python::call(*it,  timer_index);
  }
}
void cb_slavio_timer_mem_writel_status_stop(unsigned int timer_index) {

  for (auto it = py_lavio_timer_mem_writel_status_stop.begin();
       it != py_lavio_timer_mem_writel_status_stop.end(); ++it) {
    boost::python::call(*it,  timer_index);
  }
}
void cb_slavio_timer_mem_writel_mode_user(unsigned int timer_index) {

  for (auto it = py_lavio_timer_mem_writel_mode_user.begin();
       it != py_lavio_timer_mem_writel_mode_user.end(); ++it) {
    boost::python::call(*it,  timer_index);
  }
}
void cb_slavio_timer_mem_writel_mode_counter(unsigned int timer_index) {

  for (auto it = py_lavio_timer_mem_writel_mode_counter.begin();
       it != py_lavio_timer_mem_writel_mode_counter.end(); ++it) {
    boost::python::call(*it,  timer_index);
  }
}
void cb_slavio_timer_mem_writel_mode_invalid(void) {

  for (auto it = py_lavio_timer_mem_writel_mode_invalid.begin();
       it != py_lavio_timer_mem_writel_mode_invalid.end(); ++it) {
    boost::python::call(*it);
  }
}
void cb_slavio_timer_mem_writel_invalid(uint64_t addr) {

  for (auto it = py_lavio_timer_mem_writel_invalid.begin();
       it != py_lavio_timer_mem_writel_invalid.end(); ++it) {
    boost::python::call(*it, addr);
  }
}

//# grlib_gptimer.c
void cb_grlib_gptimer_enable(int id,uint32_t count) {

  for (auto it = py_rlib_gptimer_enable.begin(); it != py_rlib_gptimer_enable.end();
       ++it) {
    boost::python::call(*it, id, count);
  }
}
void cb_grlib_gptimer_disabled(int id,uint32_t config) {

  for (auto it = py_rlib_gptimer_disabled.begin();
       it != py_rlib_gptimer_disabled.end(); ++it) {
    boost::python::call(*it, id, config);
  }
}
void cb_grlib_gptimer_restart(int id,uint32_t reload) {

  for (auto it = py_rlib_gptimer_restart.begin(); it != py_rlib_gptimer_restart.end();
       ++it) {
    boost::python::call(*it, id, reload);
  }
}
void cb_grlib_gptimer_set_scaler(uint32_t scaler,uint32_t freq) {

  for (auto it = py_rlib_gptimer_set_scaler.begin();
       it != py_rlib_gptimer_set_scaler.end(); ++it) {
    boost::python::call(*it, scaler, freq);
  }
}
void cb_grlib_gptimer_hit(int id) {

  for (auto it = py_rlib_gptimer_hit.begin(); it != py_rlib_gptimer_hit.end(); ++it) {
    boost::python::call(*it, id);
  }
}
void cb_grlib_gptimer_readl(int id,uint64_t addr,uint32_t val) {

  for (auto it = py_rlib_gptimer_readl.begin(); it != py_rlib_gptimer_readl.end();
       ++it) {
    boost::python::call(*it, id, addr, val);
  }
}
void cb_grlib_gptimer_writel(int id,uint64_t addr,uint32_t val) {

  for (auto it = py_rlib_gptimer_writel.begin(); it != py_rlib_gptimer_writel.end();
       ++it) {
    boost::python::call(*it, id, addr, val);
  }
}

//# lm32_timer.c
void cb_lm32_timer_memory_write(uint32_t addr,uint32_t value) {

  for (auto it = py_m32_timer_memory_write.begin();
       it != py_m32_timer_memory_write.end(); ++it) {
    boost::python::call(*it, addr, value);
  }
}
void cb_lm32_timer_memory_read(uint32_t addr,uint32_t value) {

  for (auto it = py_m32_timer_memory_read.begin();
       it != py_m32_timer_memory_read.end(); ++it) {
    boost::python::call(*it, addr, value);
  }
}
void cb_lm32_timer_hit(void) {

  for (auto it = py_m32_timer_hit.begin(); it != py_m32_timer_hit.end(); ++it) {
    boost::python::call(*it);
  }
}
void cb_lm32_timer_irq_state(int level) {

  for (auto it = py_m32_timer_irq_state.begin(); it != py_m32_timer_irq_state.end();
       ++it) {
    boost::python::call(*it, level);
  }
}

//# milkymist-sysctl.c
void cb_milkymist_sysctl_memory_read(uint32_t addr,uint32_t value) {

  for (auto it = py_ilkymist_sysctl_memory_read.begin();
       it != py_ilkymist_sysctl_memory_read.end(); ++it) {
    boost::python::call(*it, addr, value);
  }
}
void cb_milkymist_sysctl_memory_write(uint32_t addr,uint32_t value) {

  for (auto it = py_ilkymist_sysctl_memory_write.begin();
       it != py_ilkymist_sysctl_memory_write.end(); ++it) {
    boost::python::call(*it, addr, value);
  }
}
void cb_milkymist_sysctl_icap_write(uint32_t value) {

  for (auto it = py_ilkymist_sysctl_icap_write.begin();
       it != py_ilkymist_sysctl_icap_write.end(); ++it) {
    boost::python::call(*it, value);
  }
}
void cb_milkymist_sysctl_start_timer0(void) {

  for (auto it = py_ilkymist_sysctl_start_timer0.begin();
       it != py_ilkymist_sysctl_start_timer0.end(); ++it) {
    boost::python::call(*it);
  }
}
void cb_milkymist_sysctl_stop_timer0(void) {

  for (auto it = py_ilkymist_sysctl_stop_timer0.begin();
       it != py_ilkymist_sysctl_stop_timer0.end(); ++it) {
    boost::python::call(*it);
  }
}
void cb_milkymist_sysctl_start_timer1(void) {

  for (auto it = py_ilkymist_sysctl_start_timer1.begin();
       it != py_ilkymist_sysctl_start_timer1.end(); ++it) {
    boost::python::call(*it);
  }
}
void cb_milkymist_sysctl_stop_timer1(void) {

  for (auto it = py_ilkymist_sysctl_stop_timer1.begin();
       it != py_ilkymist_sysctl_stop_timer1.end(); ++it) {
    boost::python::call(*it);
  }
}
void cb_milkymist_sysctl_pulse_irq_timer0(void) {

  for (auto it = py_ilkymist_sysctl_pulse_irq_timer0.begin();
       it != py_ilkymist_sysctl_pulse_irq_timer0.end(); ++it) {
    boost::python::call(*it);
  }
}
void cb_milkymist_sysctl_pulse_irq_timer1(void) {

  for (auto it = py_ilkymist_sysctl_pulse_irq_timer1.begin();
       it != py_ilkymist_sysctl_pulse_irq_timer1.end(); ++it) {
    boost::python::call(*it);
  }
}

//# aspeed_timer.c
void cb_aspeed_timer_ctrl_enable(uint8_t i,bool enable) {

  for (auto it = py_speed_timer_ctrl_enable.begin();
       it != py_speed_timer_ctrl_enable.end(); ++it) {
    boost::python::call(*it, i, enable);
  }
}
void cb_aspeed_timer_ctrl_external_clock(uint8_t i,bool enable) {

  for (auto it = py_speed_timer_ctrl_external_clock.begin();
       it != py_speed_timer_ctrl_external_clock.end(); ++it) {
    boost::python::call(*it, i, enable);
  }
}
void cb_aspeed_timer_ctrl_overflow_interrupt(uint8_t i,bool enable) {

  for (auto it = py_speed_timer_ctrl_overflow_interrupt.begin();
       it != py_speed_timer_ctrl_overflow_interrupt.end(); ++it) {
    boost::python::call(*it, i, enable);
  }
}
void cb_aspeed_timer_ctrl_pulse_enable(uint8_t i,bool enable) {

  for (auto it = py_speed_timer_ctrl_pulse_enable.begin();
       it != py_speed_timer_ctrl_pulse_enable.end(); ++it) {
    boost::python::call(*it, i, enable);
  }
}
void cb_aspeed_timer_set_ctrl2(uint32_t value) {

  for (auto it = py_speed_timer_set_ctrl2.begin();
       it != py_speed_timer_set_ctrl2.end(); ++it) {
    boost::python::call(*it, value);
  }
}
void cb_aspeed_timer_set_value(int timer,int reg,uint32_t value) {

  for (auto it = py_speed_timer_set_value.begin();
       it != py_speed_timer_set_value.end(); ++it) {
    boost::python::call(*it, timer, reg, value);
  }
}
void cb_aspeed_timer_read(uint64_t offset,unsigned size,uint64_t value) {

  for (auto it = py_speed_timer_read.begin(); it != py_speed_timer_read.end(); ++it) {
    boost::python::call(*it, offset, size, value);
  }
}

//# armv7m_systick.c
void cb_systick_reload(void) {

  for (auto it = py_ystick_reload.begin(); it != py_ystick_reload.end(); ++it) {
    boost::python::call(*it);
  }
}
void cb_systick_timer_tick(void) {

  for (auto it = py_ystick_timer_tick.begin(); it != py_ystick_timer_tick.end();
       ++it) {
    boost::python::call(*it);
  }
}
void cb_systick_read(uint64_t addr,uint32_t value,unsigned size) {

  for (auto it = py_ystick_read.begin(); it != py_ystick_read.end(); ++it) {
    boost::python::call(*it, addr, value, size);
  }
}
void cb_systick_write(uint64_t addr,uint32_t value,unsigned size) {

  for (auto it = py_ystick_write.begin(); it != py_ystick_write.end(); ++it) {
    boost::python::call(*it, addr, value, size);
  }
}

//# cmsdk-apb-timer.c
void cb_cmsdk_apb_timer_read(uint64_t offset,uint64_t data,unsigned size) {

  for (auto it = py_msdk_apb_timer_read.begin(); it != py_msdk_apb_timer_read.end();
       ++it) {
    boost::python::call(*it, offset, data, size);
  }
}
void cb_cmsdk_apb_timer_write(uint64_t offset,uint64_t data,unsigned size) {

  for (auto it = py_msdk_apb_timer_write.begin(); it != py_msdk_apb_timer_write.end();
       ++it) {
    boost::python::call(*it, offset, data, size);
  }
}
void cb_cmsdk_apb_timer_reset(void) {

  for (auto it = py_msdk_apb_timer_reset.begin(); it != py_msdk_apb_timer_reset.end();
       ++it) {
    boost::python::call(*it);
  }
}

//# cmsdk-apb-dualtimer.c
void cb_cmsdk_apb_dualtimer_read(uint64_t offset,uint64_t data,unsigned size) {

  for (auto it = py_msdk_apb_dualtimer_read.begin();
       it != py_msdk_apb_dualtimer_read.end(); ++it) {
    boost::python::call(*it, offset, data, size);
  }
}
void cb_cmsdk_apb_dualtimer_write(uint64_t offset,uint64_t data,unsigned size) {

  for (auto it = py_msdk_apb_dualtimer_write.begin();
       it != py_msdk_apb_dualtimer_write.end(); ++it) {
    boost::python::call(*it, offset, data, size);
  }
}
void cb_cmsdk_apb_dualtimer_reset(void) {

  for (auto it = py_msdk_apb_dualtimer_reset.begin();
       it != py_msdk_apb_dualtimer_reset.end(); ++it) {
    boost::python::call(*it);
  }
}

//# npcm7xx_timer.c
void cb_npcm7xx_timer_read(const char *id,uint64_t offset,uint64_t value) {

  for (auto it = py_pcm7xx_timer_read.begin(); it != py_pcm7xx_timer_read.end();
       ++it) {
    boost::python::call(*it, *id, offset, value);
  }
}
void cb_npcm7xx_timer_write(const char *id,uint64_t offset,uint64_t value) {

  for (auto it = py_pcm7xx_timer_write.begin(); it != py_pcm7xx_timer_write.end();
       ++it) {
    boost::python::call(*it, *id, offset, value);
  }
}
void cb_npcm7xx_timer_irq(const char *id,int timer,int state) {

  for (auto it = py_pcm7xx_timer_irq.begin(); it != py_pcm7xx_timer_irq.end(); ++it) {
    boost::python::call(*it, *id, timer, state);
  }
}

//# nrf51_timer.c
void cb_nrf51_timer_read(uint8_t timer_id,uint64_t addr,uint32_t value,unsigned size) {

  for (auto it = py_rf51_timer_read.begin(); it != py_rf51_timer_read.end(); ++it) {
    boost::python::call(*it, timer_id, addr, value, size);
  }
}
void cb_nrf51_timer_write(uint8_t timer_id,uint64_t addr,uint32_t value,unsigned size) {

  for (auto it = py_rf51_timer_write.begin(); it != py_rf51_timer_write.end(); ++it) {
    boost::python::call(*it, timer_id, addr, value, size);
  }
}
void cb_nrf51_timer_set_count(uint8_t timer_id,uint8_t counter_id,uint32_t value) {

  for (auto it = py_rf51_timer_set_count.begin(); it != py_rf51_timer_set_count.end();
       ++it) {
    boost::python::call(*it, timer_id, counter_id, value);
  }
}

//# bcm2835_systmr.c
void cb_bcm2835_systmr_timer_expired(unsigned id) {

  for (auto it = py_cm2835_systmr_timer_expired.begin();
       it != py_cm2835_systmr_timer_expired.end(); ++it) {
    boost::python::call(*it, id);
  }
}
void cb_bcm2835_systmr_irq_ack(unsigned id) {

  for (auto it = py_cm2835_systmr_irq_ack.begin();
       it != py_cm2835_systmr_irq_ack.end(); ++it) {
    boost::python::call(*it, id);
  }
}
void cb_bcm2835_systmr_read(uint64_t offset,uint64_t data) {

  for (auto it = py_cm2835_systmr_read.begin(); it != py_cm2835_systmr_read.end();
       ++it) {
    boost::python::call(*it, offset, data);
  }
}
void cb_bcm2835_systmr_write(uint64_t offset,uint32_t data) {

  for (auto it = py_cm2835_systmr_write.begin(); it != py_cm2835_systmr_write.end();
       ++it) {
    boost::python::call(*it, offset, data);
  }
}
void cb_bcm2835_systmr_run(unsigned id,uint64_t delay_us) {

  for (auto it = py_cm2835_systmr_run.begin(); it != py_cm2835_systmr_run.end();
       ++it) {
    boost::python::call(*it, id, delay_us);
  }
}

//# avr_timer16.c
void cb_avr_timer16_read(uint8_t addr,uint8_t value) {

  for (auto it = py_vr_timer16_read.begin(); it != py_vr_timer16_read.end(); ++it) {
    boost::python::call(*it, addr, value);
  }
}
void cb_avr_timer16_read_ifr(uint8_t value) {

  for (auto it = py_vr_timer16_read_ifr.begin(); it != py_vr_timer16_read_ifr.end();
       ++it) {
    boost::python::call(*it, value);
  }
}
void cb_avr_timer16_read_imsk(uint8_t value) {

  for (auto it = py_vr_timer16_read_imsk.begin(); it != py_vr_timer16_read_imsk.end();
       ++it) {
    boost::python::call(*it, value);
  }
}
void cb_avr_timer16_write(uint8_t addr,uint8_t value) {

  for (auto it = py_vr_timer16_write.begin(); it != py_vr_timer16_write.end(); ++it) {
    boost::python::call(*it, addr, value);
  }
}
void cb_avr_timer16_write_imsk(uint8_t value) {

  for (auto it = py_vr_timer16_write_imsk.begin();
       it != py_vr_timer16_write_imsk.end(); ++it) {
    boost::python::call(*it, value);
  }
}
void cb_avr_timer16_interrupt_count(uint8_t cnt) {

  for (auto it = py_vr_timer16_interrupt_count.begin();
       it != py_vr_timer16_interrupt_count.end(); ++it) {
    boost::python::call(*it, cnt);
  }
}
void cb_avr_timer16_interrupt_overflow(const char *reason) {

  for (auto it = py_vr_timer16_interrupt_overflow.begin();
       it != py_vr_timer16_interrupt_overflow.end(); ++it) {
    boost::python::call(*it, *reason);
  }
}
void cb_avr_timer16_next_alarm(uint64_t delay_ns) {

  for (auto it = py_vr_timer16_next_alarm.begin();
       it != py_vr_timer16_next_alarm.end(); ++it) {
    boost::python::call(*it, delay_ns);
  }
}
void cb_avr_timer16_clksrc_update(uint64_t freq_hz,uint64_t period_ns,uint64_t delay_s) {

  for (auto it = py_vr_timer16_clksrc_update.begin();
       it != py_vr_timer16_clksrc_update.end(); ++it) {
    boost::python::call(*it, freq_hz, period_ns, delay_s);
  }
}
