//# pc-dimm.c
void cb_mhp_pc_dimm_assigned_slot(int slot) {}
//# memory-device.c
void cb_memory_device_pre_plug(const char *id,uint64_t addr) {
								for(auto it = py_memory_device_pre_plug.begin(); it != py_memory_device_pre_plug.end(); ++it){
									boost::python::call(*it,*id,addr);
								}
}
void cb_memory_device_plug(const char *id,uint64_t addr) {
								for(auto it = py_memory_device_plug.begin(); it != py_memory_device_plug.end(); ++it){
									boost::python::call(*it,*id,addr);
								}
}
void cb_memory_device_unplug(const char *id,uint64_t addr) {
								for(auto it = py_memory_device_unplug.begin(); it != py_memory_device_unplug.end(); ++it){
									boost::python::call(*it,*id,addr);
								}
}
