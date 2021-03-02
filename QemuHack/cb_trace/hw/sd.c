//# See docs/devel/tracing.txt for syntax documentation.

//# allwinner-sdhost.c
void cb_allwinner_sdhost_set_inserted(bool inserted) {

  for (auto it = py_allwinner_sdhost_set_inserted.begin();
       it != py_allwinner_sdhost_set_inserted.end(); ++it) {
    boost::python::call(*it,inserted);  }
}
void cb_allwinner_sdhost_process_desc(uint64_t desc_addr,uint32_t desc_size,bool is_write,uint32_t max_bytes) {

  for (auto it = py_allwinner_sdhost_process_desc.begin();
       it != py_allwinner_sdhost_process_desc.end(); ++it) {
    boost::python::call(*it,desc_addr,desc_size,is_write,max_bytes);  }
}
void cb_allwinner_sdhost_read(uint64_t offset,uint64_t data,unsigned size) {

  for (auto it = py_allwinner_sdhost_read.begin();
       it != py_allwinner_sdhost_read.end(); ++it) {
    boost::python::call(*it,offset,data,size);  }
}
void cb_allwinner_sdhost_write(uint64_t offset,uint64_t data,unsigned size) {

  for (auto it = py_allwinner_sdhost_write.begin();
       it != py_allwinner_sdhost_write.end(); ++it) {
    boost::python::call(*it,offset,data,size);  }
}
void cb_allwinner_sdhost_update_irq(uint32_t irq) {

  for (auto it = py_allwinner_sdhost_update_irq.begin();
       it != py_allwinner_sdhost_update_irq.end(); ++it) {
    boost::python::call(*it,irq);  }
}

//# bcm2835_sdhost.c
void cb_bcm2835_sdhost_read(uint64_t offset,uint64_t data,unsigned size) {

  for (auto it = py_bcm2835_sdhost_read.begin(); it != py_bcm2835_sdhost_read.end();
       ++it) {
    boost::python::call(*it,offset,data,size);  }
}
void cb_bcm2835_sdhost_write(uint64_t offset,uint64_t data,unsigned size) {

  for (auto it = py_bcm2835_sdhost_write.begin(); it != py_bcm2835_sdhost_write.end();
       ++it) {
    boost::python::call(*it,offset,data,size);  }
}
void cb_bcm2835_sdhost_edm_change(const char *why,uint32_t edm) {

  for (auto it = py_bcm2835_sdhost_edm_change.begin();
       it != py_bcm2835_sdhost_edm_change.end(); ++it) {
    boost::python::call(*it,*why,edm);  }
}
void cb_bcm2835_sdhost_update_irq(uint32_t irq) {

  for (auto it = py_bcm2835_sdhost_update_irq.begin();
       it != py_bcm2835_sdhost_update_irq.end(); ++it) {
    boost::python::call(*it,irq);  }
}

//# core.c
void cb_sdbus_command(const char *bus_name,uint8_t cmd,uint32_t arg) {

  for (auto it = py_sdbus_command.begin(); it != py_sdbus_command.end(); ++it) {
    boost::python::call(*it,*bus_name,cmd,arg);  }
}
void cb_sdbus_read(const char *bus_name,uint8_t value) {

  for (auto it = py_sdbus_read.begin(); it != py_sdbus_read.end(); ++it) {
    boost::python::call(*it,*bus_name,value);  }
}
void cb_sdbus_write(const char *bus_name,uint8_t value) {

  for (auto it = py_sdbus_write.begin(); it != py_sdbus_write.end(); ++it) {
    boost::python::call(*it,*bus_name,value);  }
}
void cb_sdbus_set_voltage(const char *bus_name,uint16_t millivolts) {

  for (auto it = py_sdbus_set_voltage.begin(); it != py_sdbus_set_voltage.end();
       ++it) {
    boost::python::call(*it,*bus_name,millivolts);  }
}
void cb_sdbus_get_dat_lines(const char *bus_name,uint8_t dat_lines) {

  for (auto it = py_sdbus_get_dat_lines.begin(); it != py_sdbus_get_dat_lines.end();
       ++it) {
    boost::python::call(*it,*bus_name,dat_lines);  }
}
void cb_sdbus_get_cmd_line(const char *bus_name,bool cmd_line) {

  for (auto it = py_sdbus_get_cmd_line.begin(); it != py_sdbus_get_cmd_line.end();
       ++it) {
    boost::python::call(*it,*bus_name,cmd_line);  }
}

//# sdhci.c
void cb_sdhci_set_inserted(const char *level) {

  for (auto it = py_sdhci_set_inserted.begin(); it != py_sdhci_set_inserted.end();
       ++it) {
    boost::python::call(*it,*level);  }
}
void cb_sdhci_send_command(uint8_t cmd,uint32_t arg) {

  for (auto it = py_sdhci_send_command.begin(); it != py_sdhci_send_command.end();
       ++it) {
    boost::python::call(*it,cmd,arg);  }
}
void cb_sdhci_error(const char *msg) {

  for (auto it = py_sdhci_error.begin(); it != py_sdhci_error.end(); ++it) {
    boost::python::call(*it,*msg);  }
}
void cb_sdhci_response4(uint32_t r0) {

  for (auto it = py_sdhci_response4.begin(); it != py_sdhci_response4.end(); ++it) {
    boost::python::call(*it,r0);  }
}
void cb_sdhci_response16(uint32_t r3,uint32_t r2,uint32_t r1,uint32_t r0) {

  for (auto it = py_sdhci_response16.begin(); it != py_sdhci_response16.end(); ++it) {
    boost::python::call(*it,r3,r2,r1,r0);  }
}
void cb_sdhci_end_transfer(uint8_t cmd,uint32_t arg) {

  for (auto it = py_sdhci_end_transfer.begin(); it != py_sdhci_end_transfer.end();
       ++it) {
    boost::python::call(*it,cmd,arg);  }
}
void cb_sdhci_adma(const char *desc,uint32_t sysad) {

  for (auto it = py_sdhci_adma.begin(); it != py_sdhci_adma.end(); ++it) {
    boost::python::call(*it,*desc,sysad);  }
}
void cb_sdhci_adma_loop(uint64_t addr,uint16_t length,uint8_t attr) {

  for (auto it = py_sdhci_adma_loop.begin(); it != py_sdhci_adma_loop.end(); ++it) {
    boost::python::call(*it,addr,length,attr);  }
}
void cb_sdhci_adma_transfer_completed(void) {

  for (auto it = py_sdhci_adma_transfer_completed.begin();
       it != py_sdhci_adma_transfer_completed.end(); ++it) {
    boost::python::call(*it);  }
}
void cb_sdhci_access(const char *access,unsigned int size,uint64_t offset,const char *dir,uint64_t val,uint64_t val2) {

  for (auto it = py_sdhci_access.begin(); it != py_sdhci_access.end(); ++it) {
    boost::python::call(*it,*access,size,offset,*dir,val,val2);  }
}
void cb_sdhci_read_dataport(uint16_t data_count) {

  for (auto it = py_sdhci_read_dataport.begin(); it != py_sdhci_read_dataport.end();
       ++it) {
    boost::python::call(*it,data_count);  }
}
void cb_sdhci_write_dataport(uint16_t data_count) {

  for (auto it = py_sdhci_write_dataport.begin(); it != py_sdhci_write_dataport.end();
       ++it) {
    boost::python::call(*it,data_count);  }
}
void cb_sdhci_capareg(const char *desc,uint16_t val) {

  for (auto it = py_sdhci_capareg.begin(); it != py_sdhci_capareg.end(); ++it) {
    boost::python::call(*it,*desc,val);  }
}

//# sd.c
void cb_sdcard_normal_command(const char *proto,const char *cmd_desc,uint8_t cmd,uint32_t arg,const char *state) {

  for (auto it = py_sdcard_normal_command.begin();
       it != py_sdcard_normal_command.end(); ++it) {
    boost::python::call(*it,*proto,*cmd_desc,cmd,arg,*state);  }
}
void cb_sdcard_app_command(const char *proto,const char *acmd_desc,uint8_t acmd,uint32_t arg,const char *state) {

  for (auto it = py_sdcard_app_command.begin(); it != py_sdcard_app_command.end();
       ++it) {
    boost::python::call(*it,*proto,*acmd_desc,acmd,arg,*state);  }
}
void cb_sdcard_response(const char *rspdesc,int rsplen) {

  for (auto it = py_sdcard_response.begin(); it != py_sdcard_response.end(); ++it) {
    boost::python::call(*it,*rspdesc,rsplen);  }
}
void cb_sdcard_powerup(void) {

  for (auto it = py_sdcard_powerup.begin(); it != py_sdcard_powerup.end(); ++it) {
    boost::python::call(*it);  }
}
void cb_sdcard_inquiry_cmd41(void) {

  for (auto it = py_sdcard_inquiry_cmd41.begin(); it != py_sdcard_inquiry_cmd41.end();
       ++it) {
    boost::python::call(*it);  }
}
void cb_sdcard_reset(void) {

  for (auto it = py_sdcard_reset.begin(); it != py_sdcard_reset.end(); ++it) {
    boost::python::call(*it);  }
}
void cb_sdcard_set_blocklen(uint16_t length) {

  for (auto it = py_sdcard_set_blocklen.begin(); it != py_sdcard_set_blocklen.end();
       ++it) {
    boost::python::call(*it,length);  }
}
void cb_sdcard_inserted(bool readonly) {

  for (auto it = py_sdcard_inserted.begin(); it != py_sdcard_inserted.end(); ++it) {
    boost::python::call(*it,readonly);  }
}
void cb_sdcard_ejected(void) {

  for (auto it = py_sdcard_ejected.begin(); it != py_sdcard_ejected.end(); ++it) {
    boost::python::call(*it);  }
}
void cb_sdcard_erase(uint32_t first,uint32_t last) {

  for (auto it = py_sdcard_erase.begin(); it != py_sdcard_erase.end(); ++it) {
    boost::python::call(*it,first,last);  }
}
void cb_sdcard_lock(void) {

  for (auto it = py_sdcard_lock.begin(); it != py_sdcard_lock.end(); ++it) {
    boost::python::call(*it);  }
}
void cb_sdcard_unlock(void) {

  for (auto it = py_sdcard_unlock.begin(); it != py_sdcard_unlock.end(); ++it) {
    boost::python::call(*it);  }
}
void cb_sdcard_read_block(uint64_t addr,uint32_t len) {

  for (auto it = py_sdcard_read_block.begin(); it != py_sdcard_read_block.end();
       ++it) {
    boost::python::call(*it,addr,len);  }
}
void cb_sdcard_write_block(uint64_t addr,uint32_t len) {

  for (auto it = py_sdcard_write_block.begin(); it != py_sdcard_write_block.end();
       ++it) {
    boost::python::call(*it,addr,len);  }
}
void cb_sdcard_write_data(const char *proto,const char *cmd_desc,uint8_t cmd,uint8_t value) {

  for (auto it = py_sdcard_write_data.begin(); it != py_sdcard_write_data.end();
       ++it) {
    boost::python::call(*it,*proto,*cmd_desc,cmd,value);  }
}
void cb_sdcard_read_data(const char *proto,const char *cmd_desc,uint8_t cmd,uint32_t length) {

  for (auto it = py_sdcard_read_data.begin(); it != py_sdcard_read_data.end(); ++it) {
    boost::python::call(*it,*proto,*cmd_desc,cmd,length);  }
}
void cb_sdcard_set_voltage(uint16_t millivolts) {

  for (auto it = py_sdcard_set_voltage.begin(); it != py_sdcard_set_voltage.end();
       ++it) {
    boost::python::call(*it,millivolts);  }
}

//# milkymist-memcard.c
void cb_milkymist_memcard_memory_read(uint32_t addr,uint32_t value) {

  for (auto it = py_milkymist_memcard_memory_read.begin();
       it != py_milkymist_memcard_memory_read.end(); ++it) {
    boost::python::call(*it,addr,value);  }
}
void cb_milkymist_memcard_memory_write(uint32_t addr,uint32_t value) {

  for (auto it = py_milkymist_memcard_memory_write.begin();
       it != py_milkymist_memcard_memory_write.end(); ++it) {
    boost::python::call(*it,addr,value);  }
}

//# pxa2xx_mmci.c
void cb_pxa2xx_mmci_read(uint8_t size,uint32_t addr,uint32_t value) {

  for (auto it = py_pxa2xx_mmci_read.begin(); it != py_pxa2xx_mmci_read.end(); ++it) {
    boost::python::call(*it,size,addr,value);  }
}
void cb_pxa2xx_mmci_write(uint8_t size,uint32_t addr,uint32_t value) {

  for (auto it = py_pxa2xx_mmci_write.begin(); it != py_pxa2xx_mmci_write.end();
       ++it) {
    boost::python::call(*it,size,addr,value);  }
}

//# pl181.c
void cb_pl181_command_send(uint8_t cmd,uint32_t arg) {

  for (auto it = py_pl181_command_send.begin(); it != py_pl181_command_send.end();
       ++it) {
    boost::python::call(*it,cmd,arg);  }
}
void cb_pl181_command_sent(void) {

  for (auto it = py_pl181_command_sent.begin(); it != py_pl181_command_sent.end();
       ++it) {
    boost::python::call(*it);  }
}
void cb_pl181_command_response_pending(void) {

  for (auto it = py_pl181_command_response_pending.begin();
       it != py_pl181_command_response_pending.end(); ++it) {
    boost::python::call(*it);  }
}
void cb_pl181_command_timeout(void) {

  for (auto it = py_pl181_command_timeout.begin();
       it != py_pl181_command_timeout.end(); ++it) {
    boost::python::call(*it);  }
}
void cb_pl181_fifo_push(uint32_t data) {

  for (auto it = py_pl181_fifo_push.begin(); it != py_pl181_fifo_push.end(); ++it) {
    boost::python::call(*it,data);  }
}
void cb_pl181_fifo_pop(uint32_t data) {

  for (auto it = py_pl181_fifo_pop.begin(); it != py_pl181_fifo_pop.end(); ++it) {
    boost::python::call(*it,data);  }
}
void cb_pl181_fifo_transfer_complete(void) {

  for (auto it = py_pl181_fifo_transfer_complete.begin();
       it != py_pl181_fifo_transfer_complete.end(); ++it) {
    boost::python::call(*it);  }
}
void cb_pl181_data_engine_idle(void) {

  for (auto it = py_pl181_data_engine_idle.begin();
       it != py_pl181_data_engine_idle.end(); ++it) {
    boost::python::call(*it);  }
}
