//# See docs/devel/tracing.txt for syntax documentation.

//# pci.c
void cb_pci_update_mappings_del(void *d,uint32_t bus,uint32_t slot,uint32_t func,int bar,uint64_t addr,uint64_t size) {

  for (auto it = py_pci_update_mappings_del.begin();
       it != py_pci_update_mappings_del.end(); ++it) {
    boost::python::call(*it,d,bus,slot,func,bar,addr,size);  }
}
void cb_pci_update_mappings_add(void *d,uint32_t bus,uint32_t slot,uint32_t func,int bar,uint64_t addr,uint64_t size) {

  for (auto it = py_pci_update_mappings_add.begin();
       it != py_pci_update_mappings_add.end(); ++it) {
    boost::python::call(*it,d,bus,slot,func,bar,addr,size);  }
}

//# pci_host.c
void cb_pci_cfg_read(const char *dev,unsigned devid,unsigned fnid,unsigned offs,unsigned val) {

  for (auto it = py_pci_cfg_read.begin(); it != py_py_pci_cfg_read.end(); ++it) {
    boost::python::call(*it,*dev,devid,fnid,offs,val);  }
}
void cb_pci_cfg_write(const char *dev,unsigned devid,unsigned fnid,unsigned offs,unsigned val) {

  for (auto it = py_pci_cfg_write.begin(); it != py_py_pci_cfg_write.end(); ++it) {
    boost::python::call(*it,*dev,devid,fnid,offs,val);  }
}

//# msix.c
void cb_msix_write_config(char *name,bool enabled,bool masked) {

  for (auto it = py_msix_write_config.begin(); it != py_py_msix_write_config.end();
       ++it) {
    boost::python::call(*it,*name,enabled,masked);  }
}
