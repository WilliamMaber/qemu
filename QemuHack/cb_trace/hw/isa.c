//# See docs/devel/tracing.txt for syntax documentation.

//# isa-superio.c
void cb_superio_create_parallel(int id,uint16_t base,unsigned int irq) {
								for(auto it = py_xive_tctx_tm_read.begin(); it != py_xive_tctx_tm_read.end(); ++it){
									boost::python::call(*it,id,base,irq);
								}
}
void cb_superio_create_serial(int id,uint16_t base,unsigned int irq) {
								for(auto it = py_xive_tctx_tm_read.begin(); it != py_xive_tctx_tm_read.end(); ++it){
									boost::python::call(*it,id,base,irq);
								}
}
void cb_superio_create_floppy(int id,uint16_t base,unsigned int irq) {
								for(auto it = py_xive_tctx_tm_read.begin(); it != py_xive_tctx_tm_read.end(); ++it){
									boost::python::call(*it,id,base,irq);
								}
}
void cb_superio_create_ide(int id,uint16_t base,unsigned int irq) {
								for(auto it = py_xive_tctx_tm_read.begin(); it != py_xive_tctx_tm_read.end(); ++it){
									boost::python::call(*it,id,base,irq);
								}
}

//# pc87312.c
void cb_pc87312_io_read(uint32_t addr,uint32_t val) {
								for(auto it = py_xive_tctx_tm_read.begin(); it != py_xive_tctx_tm_read.end(); ++it){
									boost::python::call(*it,addr,val);
								}
}
void cb_pc87312_io_write(uint32_t addr,uint32_t val) {
								for(auto it = py_xive_tctx_tm_read.begin(); it != py_xive_tctx_tm_read.end(); ++it){
									boost::python::call(*it,addr,val);
								}
}

//# apm.c
void cb_apm_io_read(uint8_t addr,uint8_t val) {
								for(auto it = py_xive_tctx_tm_read.begin(); it != py_xive_tctx_tm_read.end(); ++it){
									boost::python::call(*it,addr,val);
								}
}
void cb_apm_io_write(uint8_t addr,uint8_t val) {
								for(auto it = py_xive_tctx_tm_read.begin(); it != py_xive_tctx_tm_read.end(); ++it){
									boost::python::call(*it,addr,val);
								}
}

//# vt82c686.c
void cb_via_isa_write(uint32_t addr,uint32_t val,int len) {
								for(auto it = py_xive_tctx_tm_read.begin(); it != py_xive_tctx_tm_read.end(); ++it){
									boost::python::call(*it,addr,val,len);
								}
}
void cb_via_pm_write(uint32_t addr,uint32_t val,int len) {
								for(auto it = py_xive_tctx_tm_read.begin(); it != py_xive_tctx_tm_read.end(); ++it){
									boost::python::call(*it,addr,val,len);
								}
}
void cb_via_pm_io_read(uint32_t addr,uint32_t val,int len) {
								for(auto it = py_xive_tctx_tm_read.begin(); it != py_xive_tctx_tm_read.end(); ++it){
									boost::python::call(*it,addr,val,len);
								}
}
void cb_via_pm_io_write(uint32_t addr,uint32_t val,int len) {
								for(auto it = py_xive_tctx_tm_read.begin(); it != py_xive_tctx_tm_read.end(); ++it){
									boost::python::call(*it,addr,val,len);
								}
}
void cb_via_superio_read(uint8_t addr,uint8_t val) {
								for(auto it = py_xive_tctx_tm_read.begin(); it != py_xive_tctx_tm_read.end(); ++it){
									boost::python::call(*it,addr,val);
								}
}
void cb_via_superio_write(uint8_t addr,uint32_t val) {
								for(auto it = py_xive_tctx_tm_read.begin(); it != py_xive_tctx_tm_read.end(); ++it){
									boost::python::call(*it,addr,val);
								}
}
