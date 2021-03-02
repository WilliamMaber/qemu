//# aspeed_smc.c

void cb_aspeed_smc_flash_set_segment(int cs, uint64_t reg, uint64_t start, uint64_t end) {



		  for (auto it = py_aspeed_smc_flash_set_segment.begin();
		       it != py_aspeed_smc_flash_set_segment.end(); ++it) {
		    boost::python::call(*it, cs,  reg,  start,  end);
		  }
}
void cb_aspeed_smc_flash_read(int cs, uint64_t addr,  uint32_t size, uint64_t data, int mode) {



		  for (auto it = py_aspeed_smc_flash_read.begin();
		       it != py_aspeed_smc_flash_read.end(); ++it) {
		    boost::python::call(*it, cs,  addr,   size,  data,  mode);
		  }
}
void cb_aspeed_smc_do_snoop(int cs, int index, int dummies, int data) {



		  for (auto it = py_aspeed_smc_do_snoop.begin();
		       it != py_aspeed_smc_do_snoop.end(); ++it) {
		    boost::python::call(*it, cs,  index,  dummies,  data);
		  }
}
void cb_aspeed_smc_flash_write(int cs, uint64_t addr,  uint32_t size, uint64_t data, int mode) {



		  for (auto it = py_aspeed_smc_flash_write.begin();
		       it != py_aspeed_smc_flash_write.end(); ++it) {
		    boost::python::call(*it, cs,  addr,   size,  data,  mode);
		  }
}
void cb_aspeed_smc_read(uint64_t addr,  uint32_t size, uint64_t data) {



		  for (auto it = py_aspeed_smc_read.begin();
		       it != py_aspeed_smc_read.end(); ++it) {
		    boost::python::call(*it, addr,   size,  data);
		  }
}
void cb_aspeed_smc_dma_checksum(uint32_t addr, uint32_t data) {



		  for (auto it = py_aspeed_smc_dma_checksum.begin();
		       it != py_aspeed_smc_dma_checksum.end(); ++it) {
		    boost::python::call(*it, addr,  data);
		  }
}
void cb_aspeed_smc_dma_rw(const char *dir, uint32_t flash_addr, uint32_t dram_addr, uint32_t size) {



		  for (auto it = py_aspeed_smc_dma_rw.begin();
		       it != py_aspeed_smc_dma_rw.end(); ++it) {
		    boost::python::call(*it, *dir,  flash_addr,  dram_addr,  size);
		  }
}
void cb_aspeed_smc_write(uint64_t addr,  uint32_t size, uint64_t data) {



		  for (auto it = py_aspeed_smc_write.begin();
		    aspeed_smc_writeset_count.end(); ++it) {
		    boost::python::call(*it, addr,   size,  data);
		  }
}
void cb_aspeed_smc_flash_select(int cs, const char *prefix) {



		  for (auto it = py_aspeed_smc_flash_select.begin();
		       it != py_aspeed_smc_flash_select.end(); ++it) {
		    boost::python::call(*it, cs,  *prefix);
		  }
}

//# npcm7xx_fiu.c

void cb_npcm7xx_fiu_enter_reset(const char *id, int reset_type) {



		  for (auto it = py_npcm7xx_fiu_enter_reset.begin();
		       it != py_npcm7xx_fiu_enter_reset.end(); ++it) {
		    boost::python::call(*it, *id,  resetype);
		  }
}
void cb_npcm7xx_fiu_hold_reset(const char *id) {



		  for (auto it = py_npcm7xx_fiu_hold_reset.begin();
		       it != py_npcm7xx_fiu_hold_reset.end(); ++it) {
		    boost::python::call(*it, *id);
		  }
}
void cb_npcm7xx_fiu_select(const char *id, int cs) {



		  for (auto it = py_npcm7xx_fiu_select.begin();
		       it != py_npcm7xx_fiu_select.end(); ++it) {
		    boost::python::call(*it, *id,  cs);
		  }
}
void cb_npcm7xx_fiu_deselect(const char *id, int cs) {



		  for (auto it = py_npcm7xx_fiu_deselect.begin();
		       it != py_npcm7xx_fiu_deselect.end(); ++it) {
		    boost::python::call(*it, *id,  cs);
		  }
}
void cb_npcm7xx_fiu_ctrl_read(const char *id, uint64_t addr, uint32_t data) {

  for (auto it = py_npcm7xx_fiu_ctrl_read.begin();
       it != py_npcm7xx_fiu_ctrl_read.end(); ++it) {
    boost::python::call(*it,  *id,  addr,  data);
  }
}
void cb_npcm7xx_fiu_ctrl_write(const char *id, uint64_t addr, uint32_t data) {



		  for (auto it = py_npcm7xx_fiu_ctrl_write.begin();
		       it != py_npcm7xx_fiu_ctrl_write.end(); ++it) {
		    boost::python::call(*it, *id,  addr,  data);
		  }
}
void cb_npcm7xx_fiu_flash_read(const char *id, int cs, uint64_t addr, unsigned int size, uint64_t value) {



		  for (auto it = py_npcm7xx_fiu_flash_read.begin();
		       it != py_npcm7xx_fiu_flash_read.end(); ++it) {
		    boost::python::call(*it, *id,  cs,  addr,   size,  value);
		  }
}
void cb_npcm7xx_fiu_flash_write(const char *id, unsigned cs, uint64_t addr, unsigned int size, uint64_t value) {



		  for (auto it = py_npcm7xx_fiu_flash_write.begin();
		       it != py_npcm7xx_fiu_flash_write.end(); ++it) {
		    boost::python::call(*it, *id,  cs,  addr,   size,  value);
		  }
}
