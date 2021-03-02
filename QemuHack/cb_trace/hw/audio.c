//# //See docs/devel/tracing.txt for syntax documentation.

////# cs4231.c
void cb_cs4231_mem_readl_dreg(uint32_t reg,uint32_t ret) {

			for(auto it = py_cs4231_mem_readl_dreg.begin(); it != py_cs4231_mem_readl_dreg.end(); ++it){
				boost::python::call(*it,reg,ret)
			}
}
void cb_cs4231_mem_readl_reg(uint32_t reg,uint32_t ret) {

			for(auto it = py_cs4231_mem_readl_reg.begin(); it != py_cs4231_mem_readl_reg.end(); ++it){
				boost::python::call(*it,reg,ret)
			}
}
void cb_cs4231_mem_writel_reg(uint32_t reg,uint32_t old,uint32_t val) {

			for(auto it = py_cs4231_mem_writel_reg.begin(); it != py_cs4231_mem_writel_reg.end(); ++it){
				boost::python::call(*it,reg,old,val)
			}
}
void cb_cs4231_mem_writel_dreg(uint32_t reg,uint32_t old,uint32_t val) {

			for(auto it = py_cs4231_mem_writel_dreg.begin(); it != py_cs4231_mem_writel_dreg.end(); ++it){
				boost::python::call(*it,reg,old,val)
			}
}

////# milkymist-ac97.c
void cb_milkymist_ac97_memory_read(uint32_t addr,uint32_t value) {

			for(auto it = py_milkymist_ac97_memory_read.begin(); it != py_milkymist_ac97_memory_read.end(); ++it){
				boost::python::call(*it,addr,value)
			}
}
void cb_milkymist_ac97_memory_write(uint32_t addr,uint32_t value) {

			for(auto it = py_milkymist_ac97_memory_write.begin(); it != py_milkymist_ac97_memory_write.end(); ++it){
				boost::python::call(*it,addr,value)
			}
}
void cb_milkymist_ac97_pulse_irq_crrequest(void) {

			for(auto it = py_milkymist_ac97_pulse_irq_crrequest.begin(); it != py_milkymist_ac97_pulse_irq_crrequest.end(); ++it){
				boost::python::call(*it,void)
			}
}
void cb_milkymist_ac97_pulse_irq_crreply(void) {

			for(auto it = py_milkymist_ac97_pulse_irq_crreply.begin(); it != py_milkymist_ac97_pulse_irq_crreply.end(); ++it){
				boost::python::call(*it,void)
			}
}
void cb_milkymist_ac97_pulse_irq_dmaw(void) {

			for(auto it = py_milkymist_ac97_pulse_irq_dmaw.begin(); it != py_milkymist_ac97_pulse_irq_dmaw.end(); ++it){
				boost::python::call(*it(oidt)
			}
}
void cb_milkymist_ac97_pulse_irq_dmar(void) {

			for(auto it = py_milkymist_ac97_pulse_irq_dmar.begin(); it != py_milkymist_ac97_pulse_irq_dmar.end(); ++it){
				boost::python::call(*it(oidt)
			}
}
void cb_milkymist_ac97_in_cb(int avail,uint32_t remaining) {

			for(auto it = py_milkymist_ac97_in_cb.begin(); it != py_milkymist_ac97_in_cb.end(); ++it){
				boost::python::call(*it,avail,remaining)
			}
}
void cb_milkymist_ac97_in_cb_transferred(int transferred) {

			for(auto it = py_milkymist_ac97_in_cb_transferred.begin(); it != py_milkymist_ac97_in_cb_transferred.end(); ++it){
				boost::python::call(*it,transferred)
			}
}
void cb_milkymist_ac97_out_cb(int free,uint32_t remaining) {

			for(auto it = py_milkymist_ac97_out_cb.begin(); it != py_milkymist_ac97_out_cb.end(); ++it){
				boost::python::call(*it,free,remaining)
			}
}
void cb_milkymist_ac97_out_cb_transferred(int transferred) {

			for(auto it = py_milkymist_ac97_out_cb_transferred.begin(); it != py_milkymist_ac97_out_cb_transferred.end(); ++it){
				boost::python::call(*it,transferred)
			}
}

////# hda-codec.c
void cb_hda_audio_running(const char *stream,int nr,bool running) {

			for(auto it = py_hda_audio_running.begin(); it != py_hda_audio_running.end(); ++it){
				boost::python::call(*it,*stream,nr,running)
			}
}
void cb_hda_audio_format(const char *stream,int chan,const char *fmt,int freq) {

			for(auto it = py_hda_audio_format.begin(); it != py_hda_audio_format.end(); ++it){
				boost::python::call(*it,*stream,chan,*fmt,freq)
			}
}
void cb_hda_audio_adjust(const char *stream,int pos) {

			for(auto it = py_hda_audio_adjust.begin(); it != py_hda_audio_adjust.end(); ++it){
				boost::python::call(*it,*stream,pos)
			}
}
void cb_hda_audio_overrun(const char *stream) {

			for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
				boost::python::call(*it,*stream)
			}
}
