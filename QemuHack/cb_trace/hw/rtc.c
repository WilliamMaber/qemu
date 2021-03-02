////# See docs/devel/tracing.txt for syntax documentation.

////# allwinner-rtc.c
void cb_allwinner_rtc_read(uint64_t addr, uint64_t value) {

  for (auto it = py_allwinner_rtc_read.begin(); it != py_allwinner_rtc_read.end();
       ++it) {
    boost::python::call(*it, addr,  value);
  }
}
void cb_allwinner_rtc_write(uint64_t addr, uint64_t value) {

  for (auto it = py_allwinner_rtc_write.begin(); it != py_allwinner_rtc_write.end();
       ++it) {
    boost::python::call(*it addr,  value);
  }
}

////# sun4v-rtc.c
void cb_sun4v_rtc_read(uint64_t addr, uint64_t value) {

  for (auto it = py_sun4v_rtc_read.begin(); it != py_sun4v_rtc_read.end();
       ++it) {
    boost::python::call(it, addr,value);
  }
}
void cb_sun4v_rtc_write(uint64_t addr, uint64_t value) {

  for (auto it = py_sun4v_rtc_write.begin(); it != py_sun4v_rtc_write.end();
       ++it) {
    boost::python::call( *it,addr,  value);
  }
}

////# xlnx-zynqmp-rtc.c
void cb_xlnx_zynqmp_rtc_gettime(int year, int month, int day, int hour, int min, int sec) {

  for (auto it = py_xlnx_zynqmp_rtc_gettime.begin(); it != py_xlnx_zynqmp_rtc_gettime.end();
       ++it) {
    boost::python::call(*it, i year,  month,  day,  hour,  min,  sec)
  }
}

////# pl031.c
void cb_pl031_irq_state(int level) {

  for (auto it = py_pl031_irq_state.begin(); it != py_pl031_irq_state.end();
       ++it) {
    boost::python::call(it, level);
  }
}
void cb_pl031_read(uint32_t addr, uint32_t value) {

  for (auto it = py_pl031_read.begin(); it != py_pl031_read.end();
       ++it) {
    boost::python::call(it, addr,value);
  }
}
void cb_pl031_write(uint32_t addr, uint32_t value) {

  for (auto it = py_pl031_write.begin(); it != py_pl031_write.end();
       ++it) {
    boost::python::call(it, addr,value);
  }
}
void cb_pl031_alarm_raised(void) {

  for (auto it = py_pl031_alarm_raised.begin(); it != py_pl031_alarm_raised.end();
       ++it) {void)int cmd, int size, int nfds);
  }
}
void cb_pl031_set_alarm(uint32_t ticks) {

  for (auto it = py_pl031_set_alarm.begin(); it != py_pl031_set_alarm.end();
       ++it) {
    boost::python::call(it, ticks);
  }
}

////# aspeed_rtc.c
void cb_aspeed_rtc_read(uint64_t addr, uint64_t value) {

  for (auto it = py_aspeed_rtc_read.begin(); it != py_aspeed_rtc_read.end();
       ++it) {
    boost::python::call( addr,  value);
  }
}
void cb_aspeed_rtc_write(uint64_t addr, uint64_t value) {

  for (auto it = py_aspeed_rtc_write.begin(); it != py_aspeed_rtc_write.end();
       ++it) {
    boost::python::call( addr,  value);
  }
}

////# m48t59.c
void cb_m48txx_nvram_io_read(uint64_t addr, uint64_t value) {

  for (auto it = py_m48txx_nvram_io_read.begin(); it != py_m48txx_nvram_io_read.end();
       ++it) {
    boost::python::call(*it, addr,  value));
  }
}
void cb_m48txx_nvram_io_write(uint64_t addr, uint64_t value) {

  for (auto it = py_m48txx_nvram_io_write.begin(); it != py_m48txx_nvram_io_write.end();
       ++it) {
    boost::python::call(*it,  addr,  value);
  }
}
void cb_m48txx_nvram_mem_read(uint32_t addr, uint32_t value) {

  for (auto it = py_m48txx_nvram_mem_read.begin(); it != py_m48txx_nvram_mem_read.end();
       ++it) {
    boost::python::call(*it,  addr,  value);
  }
}
void cb_m48txx_nvram_mem_write(uint32_t addr, uint32_t value) {

  for (auto it = py_m48txx_nvram_mem_write.begin(); it != py_m48txx_nvram_mem_write.end();
       ++it) {
    boost::python::call(*it,  addr,  value)
  }
}

////# goldfish_rtc.c
void cb_goldfish_rtc_read(uint64_t addr, uint64_t value) {

  for (auto it = py_goldfish_rtc_read.begin(); it != py_goldfish_rtc_read.end();
       ++it) {
    boost::python::call(*it, addr,  value);
  }
}
void cb_goldfish_rtc_write(uint64_t addr, uint64_t value) {

  for (auto it = py_goldfish_rtc_write.begin(); it != py_goldfish_rtc_write.end();
       ++it) {
    boost::python::call(*it, addr,  value);
  }
}
