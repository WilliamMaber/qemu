////# npcm7xx_adc.c
void cb_npcm7xx_adc_read(const char *id,uint64_t offset,uint32_t value) {

		for(auto it = py_npcm7xx_adc_read.begin(); it != py_npcm7xx_adc_read.end(); ++it){
			boost::python::call(*it,*id,offset,value)
		}
}
void cb_npcm7xx_adc_write(const char *id,uint64_t offset,uint32_t value){

		for(auto it = py_npcm7xx_adc_write.begin(); it != py_npcm7xx_adc_write.end(); ++it){
			boost::python::call(*it,*id,offset,value)
		}
}
