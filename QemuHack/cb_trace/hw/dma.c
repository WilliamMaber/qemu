//# See docs/devel/tracing.txt for syntax documentation.

//# rc4030.c
void cb_jazzio_read(uint64_t addr,uint32_t ret) {

		for(auto it = py_jazzio_read.begin(); it != py_jazzio_read.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_jazzio_write(uint64_t addr,uint32_t val) {

		for(auto it = py_jazzio_write.begin(); it != py_jazzio_write.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_rc4030_read(uint64_t addr,uint32_t ret) {

		for(auto it = py_rc4030_read.begin(); it != py_rc4030_read.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_rc4030_write(uint64_t addr,uint32_t val) {

		for(auto it = py_rc4030_write.begin(); it != py_rc4030_write.end(); ++it){
			boost::python::call(*it,addr);
		}
}

//# sparc32_dma.c
void cb_ledma_memory_read(uint64_t addr,int len) {

		for(auto it = py_ledma_memory_read.begin(); it != py_ledma_memory_read.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_ledma_memory_write(uint64_t addr,int len) {

		for(auto it = py_ledma_memory_write.begin(); it != py_ledma_memory_write.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_sparc32_dma_set_irq_raise(void) {

		for(auto it = py_sparc32_dma_set_irq_raise.begin(); it != py_sparc32_dma_set_irq_raise.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_sparc32_dma_set_irq_lower(void) {

		for(auto it = py_sparc32_dma_set_irq_lower.begin(); it != py_sparc32_dma_set_irq_lower.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_espdma_memory_read(uint32_t addr,int len) {

		for(auto it = py_espdma_memory_read.begin(); it != py_espdma_memory_read.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_espdma_memory_write(uint32_t addr,int len) {

		for(auto it = py_espdma_memory_write.begin(); it != py_espdma_memory_write.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_sparc32_dma_mem_readl(uint64_t addr,uint32_t ret) {

		for(auto it = py_sparc32_dma_mem_readl.begin(); it != py_sparc32_dma_mem_readl.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_sparc32_dma_mem_writel(uint64_t addr,uint32_t old,uint32_t val) {

		for(auto it = py_sparc32_dma_mem_writel.begin(); it != py_sparc32_dma_mem_writel.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_sparc32_dma_enable_raise(void) {

		for(auto it = py_sparc32_dma_enable_raise.begin(); it != py_sparc32_dma_enable_raise.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_sparc32_dma_enable_lower(void) {

		for(auto it = py_sparc32_dma_enable_lower.begin(); it != py_sparc32_dma_enable_lower.end(); ++it){
			boost::python::call(*it,addr);
		}
}

//# i8257.c
void cb_i8257_unregistered_dma(int nchan,int dma_pos,int dma_len) {

		for(auto it = py_i8257_unregistered_dma.begin(); it != py_i8257_unregistered_dma.end(); ++it){
			boost::python::call(*it,addr);
		}
}

//# pl330.c
void cb_pl330_fault(void *ptr,uint32_t flags) {

		for(auto it = py_pl330_fault.begin(); it != py_pl330_fault.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_pl330_fault_abort(void) {

		for(auto it = py_pl330_fault_abort.begin(); it != py_pl330_fault_abort.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_pl330_dmaend(void) {

		for(auto it = py_pl330_dmaend.begin(); it != py_pl330_dmaend.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_pl330_dmago(void) {

		for(auto it = py_pl330_dmago.begin(); it != py_pl330_dmago.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_pl330_dmald(uint8_t chan,uint32_t addr,uint32_t size,uint32_t num,char ch) {

		for(auto it = py_pl330_dmald.begin(); it != py_pl330_dmald.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_pl330_dmakill(void) {

		for(auto it = py_pl330_dmakill.begin(); it != py_pl330_dmakill.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_pl330_dmalpend(uint8_t nf,uint8_t bs,uint8_t lc,uint8_t ch,uint8_t flag) {

		for(auto it = py_pl330_dmalpend.begin(); it != py_pl330_dmalpend.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_pl330_dmalpiter(void) {

		for(auto it = py_pl330_dmalpiter.begin(); it != py_pl330_dmalpiter.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_pl330_dmalpfallthrough(void) {

		for(auto it = py_pl330_dmalpfallthrough.begin(); it != py_pl330_dmalpfallthrough.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_pl330_dmasev_evirq(uint8_t ev_id) {

		for(auto it = py_pl330_dmasev_evirq.begin(); it != py_pl330_dmasev_evirq.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_pl330_dmasev_event(uint8_t ev_id) {

		for(auto it = py_pl330_dmasev_event.begin(); it != py_pl330_dmasev_event.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_pl330_dmast(uint8_t chan,uint32_t addr,uint32_t sz,uint32_t num,char ch) {

		for(auto it = py_pl330_dmast.begin(); it != py_pl330_dmast.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_pl330_dmawfe(uint8_t ev_id) {

		for(auto it = py_pl330_dmawfe.begin(); it != py_pl330_dmawfe.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_pl330_chan_exec_undef(void) {

		for(auto it = py_pl330_chan_exec_undef.begin(); it != py_pl330_chan_exec_undef.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_pl330_exec_cycle(uint32_t addr,uint32_t size) {

		for(auto it = py_pl330_exec_cycle.begin(); it != py_pl330_exec_cycle.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_pl330_hexdump(uint32_t offset,char *str) {

		for(auto it = py_pl330_hexdump.begin(); it != py_pl330_hexdump.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_pl330_exec(void) {

		for(auto it = py_pl330_exec.begin(); it != py_pl330_exec.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_pl330_debug_exec(uint8_t ch) {

		for(auto it = py_pl330_debug_exec.begin(); it != py_pl330_debug_exec.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_pl330_debug_exec_stall(void) {

		for(auto it = py_pl330_debug_exec_stall.begin(); it != py_pl330_debug_exec_stall.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_pl330_iomem_write(uint32_t offset,uint32_t value) {

		for(auto it = py_pl330_iomem_write.begin(); it != py_pl330_iomem_write.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_pl330_iomem_write_clr(int i) {

		for(auto it = py_pl330_iomem_write_clr.begin(); it != py_pl330_iomem_write_clr.end(); ++it){
			boost::python::call(*it,addr);
		}
}
void cb_pl330_iomem_read(uint32_t addr,uint32_t data) {

		for(auto it = py_pl330_iomem_read.begin(); it != py_pl330_iomem_read.end(); ++it){
			boost::python::call(*it,addr);
		}
}
