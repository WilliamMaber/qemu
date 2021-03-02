//# See docs/devel/tracing.txt for syntax documentation.

//# npcm7xx_gpio.c
void cb_npcm7xx_gpio_read(const char *id,uint64_t offset,uint64_t value) {

			for(auto it = py_npcm7xx_gpio_read.begin(); it != py_npcm7xx_gpio_read.end(); ++it){
				boost::python::call(*it,*id,offset,value);
			}
}
void cb_npcm7xx_gpio_write(const char *id,uint64_t offset,uint64_t value) {

			for(auto it = py_npcm7xx_gpio_write.begin(); it != py_npcm7xx_gpio_write.end(); ++it){
				boost::python::call(*it,*id,offset,value);
			}
}
void cb_npcm7xx_gpio_set_input(const char *id,int32_t line,int32_t level) {

			for(auto it = py_npcm7xx_gpio_set_input.begin(); it != py_npcm7xx_gpio_set_input.end(); ++it){
				boost::python::call(*it,*id,line,level);
			}
}
void cb_npcm7xx_gpio_set_output(const char *id,int32_t line,int32_t level) {

			for(auto it = py_npcm7xx_gpio_set_output.begin(); it != py_npcm7xx_gpio_set_output.end(); ++it){
				boost::python::call(*it,*id,line,level);
			}
}
void cb_npcm7xx_gpio_update_events(const char *id,uint32_t evst,uint32_t even) {

			for(auto it = py_npcm7xx_gpio_update_events.begin(); it != py_npcm7xx_gpio_update_events.end(); ++it){
				boost::python::call(*it,*id,evst,even);
			}
}

//# nrf51_gpio.c
void cb_nrf51_gpio_read(uint64_t offset,uint64_t r) {

			for(auto it = py_nrf51_gpio_read.begin(); it != py_nrf51_gpio_read.end(); ++it){
				boost::python::call(*it,offset,r);
			}
}
void cb_nrf51_gpio_write(uint64_t offset,uint64_t value) {

			for(auto it = py_nrf51_gpio_write.begin(); it != py_nrf51_gpio_write.end(); ++it){
				boost::python::call(*it,offset,value);
			}
}
void cb_nrf51_gpio_set(int64_t line,int64_t value) {

			for(auto it = py_nrf51_gpio_set.begin(); it != py_nrf51_gpio_set.end(); ++it){
				boost::python::call(*it,line,value);
			}
}
void cb_nrf51_gpio_update_output_irq(int64_t line,int64_t value) {

			for(auto it = py_nrf51_gpio_update_output_irq.begin(); it != py_nrf51_gpio_update_output_irq.end(); ++it){
				boost::python::call(*it,line,value);
			}
}

//# sifive_gpio.c
void cb_sifive_gpio_read(uint64_t offset,uint64_t r) {

			for(auto it = py_sifive_gpio_read.begin(); it != py_sifive_gpio_read.end(); ++it){
				boost::python::call(*it,offset,r);
			}
}
void cb_sifive_gpio_write(uint64_t offset,uint64_t value) {

			for(auto it = py_sifive_gpio_write.begin(); it != py_sifive_gpio_write.end(); ++it){
				boost::python::call(*it,offset,value);
			}
}
void cb_sifive_gpio_set(int64_t line,int64_t value) {

			for(auto it = py_sifive_gpio_set.begin(); it != py_sifive_gpio_set.end(); ++it){
				boost::python::call(*it,line,value);
			}
}
void cb_sifive_gpio_update_output_irq(int64_t line,int64_t value) {

			for(auto it = py_sifive_gpio_update_output_irq.begin(); it != py_sifive_gpio_update_output_irq.end(); ++it){
				boost::python::call(*it,line,value);
			}
}
