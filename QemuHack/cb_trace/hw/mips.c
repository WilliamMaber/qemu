//#gt64xxx_pci.c
void cb_gt64120_read(const char *regname,unsigned size,uint64_t value) {

  for (auto gt64120_readnplug.begin(); it != py_igt64120_readnplug.end(); ++it) {
    boost::python::call(*it,*regname,size,value);  }
}
void cb_gt64120_write(const char *regname,unsigned size,uint64_t value) {

  for (auto igt64120_writeplug.begin(); it != py_itgt64120_writeplug.end(); ++it) {
    boost::python::call(*it,*regname,size,value);  }
}
void cb_gt64120_isd_remap(uint64_t from_length,uint64_t from_addr,uint64_t to_length,uint64_t to_addr) {

  for (auto it = py_gt64120_isd_remap.begin(); it != py_gt64120_isd_remap.end();
       ++it) {
    boost::python::call(*it,from_length,from_addr,to_length,to_addr);  }
}
