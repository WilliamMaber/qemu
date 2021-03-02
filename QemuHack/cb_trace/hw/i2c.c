//# See docs/devel/tracing.txt for syntax documentation.

//# core.c

void cb_i2c_event(const char *event,uint8_t address) {


					for(auto it = py_i2c_event.begin(); it != py_i2c_event.end(); ++it){
						boost::python::call(*it,*event,address);
					}
}
void cb_i2c_send(uint8_t address,uint8_t data) {


					for(auto it = py_i2c_send.begin(); it != py_i2c_send.end(); ++it){
						boost::python::call(*it,address,data);
					}
}
void cb_i2c_recv(uint8_t address,uint8_t data) {


					for(auto it = py_i2c_recv.begin(); it != py_i2c_recv.end(); ++it){
						boost::python::call(*it,address,data);
					}
}

//# aspeed_i2c.c

void cb_aspeed_i2c_bus_cmd(uint32_t cmd,const char *cmd_flags,uint32_t count,uint32_t intr_status) {


					for(auto it = py_aspeed_i2c_bus_cmd.begin(); it != py_aspeed_i2c_bus_cmd.end(); ++it){
						boost::python::call(*it,cmd,*cmd_flags,count,r_status);
					}
}
void cb_aspeed_i2c_bus_raise_interrupt(uint32_t intr_status,const char *str1,const char *str2,const char *str3,const char *str4,const char *str5) {


					for(auto it = py_aspeed_i2c_bus_raise_interrupt.begin(); it != py_aspeed_i2c_bus_raise_interrupt.end(); ++it){
						boost::python::call(*it,r_status,*str1,*str2,*str3,*str4,*str5);
					}
}
void cb_aspeed_i2c_bus_read(uint32_t busid,uint64_t offset,unsigned size,uint64_t value) {


					for(auto it = py_aspeed_i2c_bus_read.begin(); it != py_aspeed_i2c_bus_read.end(); ++it){
						boost::python::call(*it,busid,offset,size,value);
					}
}
void cb_aspeed_i2c_bus_write(uint32_t busid,uint64_t offset,unsigned size,uint64_t value) {


					for(auto it = py_aspeed_i2c_bus_write.begin(); it != py_aspeed_i2c_bus_write.end(); ++it){
						boost::python::call(*it,busid,offset,size,value);
					}
}
void cb_aspeed_i2c_bus_send(const char *mode,int i,int count,uint8_t byte) {


					for(auto it = py_aspeed_i2c_bus_send.begin(); it != py_aspeed_i2c_bus_send.end(); ++it){
						boost::python::call(*it,*mode,i,count,byte);
					}
}
void cb_aspeed_i2c_bus_recv(const char *mode,int i,int count,uint8_t byte) {


					for(auto it = py_aspeed_i2c_bus_recv.begin(); it != py_aspeed_i2c_bus_recv.end(); ++it){
						boost::python::call(*it,*mode,i,count,byte);
					}
}

//# npcm7xx_smbus.c

void cb_npcm7xx_smbus_read(const char *id,uint64_t offset,uint64_t value,unsigned size) {


					for(auto it = py_npcm7xx_smbus_read.begin(); it != py_npcm7xx_smbus_read.end(); ++it){
						boost::python::call(*it,*id,offset,value,size);
					}
}
void cb_npcm7xx_smbus_write(const char *id,uint64_t offset,uint64_t value,unsigned size) {


					for(auto it = py_npcm7xx_smbus_write.begin(); it != py_npcm7xx_smbus_write.end(); ++it){
						boost::python::call(*it,*id,offset,value,size);
					}
}
void cb_npcm7xx_smbus_start(const char *id,int success) {


					for(auto it = py_npcm7xx_smbus_start.begin(); it != py_npcm7xx_smbus_start.end(); ++it){
						boost::python::call(*it,*id,success);
					}
}
void cb_npcm7xx_smbus_send_address(const char *id,uint8_t addr,int recv,int success) {


					for(auto it = py_npcm7xx_smbus_send_address.begin(); it != py_npcm7xx_smbus_send_address.end(); ++it){
						boost::python::call(*it,*id,addr,recv,success);
					}
}
void cb_npcm7xx_smbus_send_byte(const char *id,uint8_t value,int success) {


					for(auto it = py_npcm7xx_smbus_send_byte.begin(); it != py_npcm7xx_smbus_send_byte.end(); ++it){
						boost::python::call(*it,*id,value,success);
					}
}
void cb_npcm7xx_smbus_recv_byte(const char *id,uint8_t value) {


					for(auto it = py_npcm7xx_smbus_recv_byte.begin(); it != py_npcm7xx_smbus_recv_byte.end(); ++it){
						boost::python::call(*it,*id,value);
					}
}
void cb_npcm7xx_smbus_stop(const char *id) {


					for(auto it = py_npcm7xx_smbus_stop.begin(); it != py_npcm7xx_smbus_stop.end(); ++it){
						boost::python::call(*it,*id);
					}
}
void cb_npcm7xx_smbus_nack(const char *id) {


					for(auto it = py_npcm7xx_smbus_nack.begin(); it != py_npcm7xx_smbus_nack.end(); ++it){
						boost::python::call(*it,*id);
					}
}
void cb_npcm7xx_smbus_recv_fifo(const char *id,uint8_t received,uint8_t expected) {


					for(auto it = py_npcm7xx_smbus_recv_fifo.begin(); it != py_npcm7xx_smbus_recv_fifo.end(); ++it){
						boost::python::call(*it,*id,received,expected);
					}
}
