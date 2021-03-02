//# See docs/devel/tracing.txt for syntax documentation.

//# pci.c
void cb_hppa_pci_iack_write(void) {

				for(auto it = py_hppa_pci_iack_write.begin(); it != py_hppa_pci_iack_write.end(); ++it){
					boost::python::call(*it);
				}
}

//# dino.c
void cb_dino_chip_mem_valid(uint64_t addr,uint32_t val) {

				for(auto it = py_dino_chip_mem_valid.begin(); it != py_dino_chip_mem_valid.end(); ++it){
					boost::python::call(*it,addr,val);
				}
}
void cb_dino_chip_read(uint64_t addr,uint32_t val) {

				for(auto it = py_dino_chip_read.begin(); it != py_dino_chip_read.end(); ++it){
					boost::python::call(*it,addr,val);
				}
}
void cb_dino_chip_write(uint64_t addr,uint32_t val) {

				for(auto it = py_dino_chip_write.begin(); it != py_dino_chip_write.end(); ++it){
					boost::python::call(*it,addr,val);
				}
}

//# lasi.c
void cb_lasi_chip_mem_valid(uint64_t addr,uint32_t val) {

				for(auto it = py_lasi_chip_mem_valid.begin(); it != py_lasi_chip_mem_valid.end(); ++it){
					boost::python::call(*it,addr,val);
				}
}
void cb_lasi_chip_read(uint64_t addr,uint32_t val) {

				for(auto it = py_lasi_chip_read.begin(); it != py_lasi_chip_read.end(); ++it){
					boost::python::call(*it,addr,val);
				}
}
void cb_lasi_chip_write(uint64_t addr,uint32_t val) {

				for(auto it = py_lasi_chip_write.begin(); it != py_lasi_chip_write.end(); ++it){
					boost::python::call(*it,addr,val);
				}
}
