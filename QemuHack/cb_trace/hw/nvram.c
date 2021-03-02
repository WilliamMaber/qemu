//# See docs/devel/tracing.txt for syntax documentation.

//# ds1225y.c
void cb_nvram_read(uint32_t addr, uint32_t ret) {


	  for (auto it = py_nvram_read.begin(); it != py_nvram_read.end(); ++it) {
	    boost::python::call(*it, addr,  ret);
	  }
}
void cb_nvram_write(uint32_t addr, uint32_t old, uint32_t val) {


	  for (auto it = py_nvram_write.begin(); it != py_nvram_write.end(); ++it) {
	    boost::python::call(*it, addr,  old,  val);
	  }
}

//# fw_cfg.c
void cb_fw_cfg_select(void *s, uint16_t key_value, const char *key_name, int ret) {


	  for (auto it = py_fw_cfg_select.begin(); it != py_fw_cfg_select.end(); ++it) {
	    boost::python::call(*it,s,  key_value,   *key_name,  ret);
	  }
}
void cb_fw_cfg_read(void *s, uint64_t ret) {


	  for (auto it = py_fw_cfg_read.begin(); it != py_fw_cfg_read.end(); ++it) {
	    boost::python::call(*its,  ret));
	  }
}
void cb_fw_cfg_add_bytes(uint16_t key_value, const char *key_name, size_t len) {


	  for (auto it = py_fw_cfg_add_bytes.begin(); it != py_fw_cfg_add_bytes.end(); ++it) {
	    boost::python::call(*it, key_value,   *key_name,  len);
	  }
}
void cb_fw_cfg_add_file(void *s, int index, char *name, size_t len) {


	  for (auto it = py_fw_cfg_add_file.begin(); it != py_fw_cfg_add_file.end(); ++it) {
	    boost::python::call(*it,s,  index,  *name,  len);
	  }
}
void cb_fw_cfg_add_string(uint16_t key_value, const char *key_name, const char *value) {


	  for (auto it = py_fw_cfg_add_string.begin(); it != py_fw_cfg_add_string.end(); ++it) {
	    boost::python::call(*it, key_value,   *key_name,   *value);
	  }
}
void cb_fw_cfg_add_i16(uint16_t key_value, const char *key_name, uint16_t value) {


	  for (auto it = py_fw_cfg_add_i16.begin(); it != py_fw_cfg_add_i16.end(); ++it) {
	    boost::python::call(*it, key_value,   *key_name,  value);
	  }
}
void cb_fw_cfg_add_i32(uint16_t key_value, const char *key_name, uint32_t value) {


	  for (auto it = py_fw_cfg_add_i32.begin(); it != py_fw_cfg_add_i32.end(); ++it) {
	    boost::python::call(*it, key_value,   *key_name,  value);
	  }
}
void cb_fw_cfg_add_i64(uint16_t key_value, const char *key_name, uint64_t value) {


	  for (auto it = py_fw_cfg_add_i64.begin(); it != py_fw_cfg_add_i64.end(); ++it) {
	    boost::python::call(*it, key_value,   *key_name,  value);
	  }
}

//# mac_nvram.c
void cb_macio_nvram_read(uint32_t addr, uint8_t val) {


	  for (auto it = py_macio_nvram_read.begin(); it != py_macio_nvram_read.end(); ++it) {
	    boost::python::call(*it, addr,  val);
	  }
}
void cb_macio_nvram_write(uint32_t addr, uint8_t val) {


	  for (auto it = py_macio_nvram_write.begin(); it != py_macio_nvram_write.end(); ++it) {
	    boost::python::call(*it, addr,  val);
	  }
}
