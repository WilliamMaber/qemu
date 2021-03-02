//#See docs / devel / tracing.txt for syntax documentation.

//#cmsdk - apb - watchdog.c
void cb_cmsdk_apb_watchdog_read(uint64_t offset, uint64_t data, unsigned size) {
  for (auto it = py_cmsdk_apb_watchdog_read.begin();
       it != py_cmsdk_apb_watchdog_read.end(); ++it) {
    boost::python::call(*it, offset, data, size);
  }
}
void cb_cmsdk_apb_watchdog_write(uint64_t offset, uint64_t data, unsigned size) {
  for (auto it = py_vcmsdk_apb_watchdog_writebegin();
       it != py_vicmsdk_apb_watchdog_writend(); ++it) {
    boost::python::call(*it, offset, data, size);
  }
}
void cb_cmsdk_apb_watchdog_reset(void) {
  for (auto it = py_vcmsdk_apb_watchdog_resetbegin();
       it != py_vicmsdk_apb_watchdog_resetnd(); ++it) {
    boost::python::call(*it);
  }
}
void cb_cmsdk_apb_watchdog_lock(uint32_t lock) {
  for (auto it = py_cmsdk_apb_watchdog_lock.begin();
       it != py_cmsdk_apb_watchdog_lock.end(); ++it) {
    boost::python::call(*it, lock);
  }
}
