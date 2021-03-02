////# See docs/devel/tracing.txt for syntax documentation.

////# adb-kbd.c
void cb_adb_device_kbd_no_key(void) {



						for(auto it = py_adb_device_kbd_no_key.begin(); it != py_adb_device_kbd_no_key.end(); ++it){
							boost::python::call(*it);
						}

}
void cb_adb_device_kbd_writereg(int reg,uint8_t val) {



						for(auto it = py_adb_device_kbd_writereg.begin(); it != py_adb_device_kbd_writereg.end(); ++it){
							boost::python::call(*it,reg,val);
						}

}
void cb_adb_device_kbd_readreg(int reg,uint8_t val0,uint8_t val1) {



						for(auto it = py_adb_device_kbd_readreg.begin(); it != py_adb_device_kbd_readreg.end(); ++it){
							boost::python::call(*it,reg,val0,val1);
						}

}
void cb_adb_device_kbd_request_change_addr(int devaddr) {



						for(auto it = py_adb_device_kbd_request_change_addr.begin(); it != py_adb_device_kbd_request_change_addr.end(); ++it){
							boost::python::call(*it,devaddr);
						}

}
void cb_adb_device_kbd_request_change_addr_and_handler(int devaddr,int handler) {



						for(auto it = py_adb_device_kbd_request_change_addr_and_handler.begin(); it != py_adb_device_kbd_request_change_addr_and_handler.end(); ++it){
							boost::python::call(*it,devaddr,handler);
						}

}

////# adb-mouse.c
void cb_adb_device_mouse_flush(void) {



						for(auto it = py_adb_device_mouse_flush.begin(); it != py_adb_device_mouse_flush.end(); ++it){
							boost::python::call(*it);
						}

}
void cb_adb_device_mouse_writereg(int reg,uint8_t val) {



						for(auto it = py_adb_device_mouse_writereg.begin(); it != py_adb_device_mouse_writereg.end(); ++it){
							boost::python::call(*it,reg,val);
						}

}
void cb_adb_device_mouse_readreg(int reg,uint8_t val0,uint8_t val1) {



						for(auto it = py_adb_device_mouse_readreg.begin(); it != py_adb_device_mouse_readreg.end(); ++it){
							boost::python::call(*it,reg,val0,val1);
						}

}
void cb_adb_device_mouse_request_change_addr(int devaddr) {



						for(auto it = py_adb_device_mouse_request_change_addr.begin(); it != py_adb_device_mouse_request_change_addr.end(); ++it){
							boost::python::call(*it,devaddr);
						}

}
void cb_adb_device_mouse_request_change_addr_and_handler(int devaddr,int handler) {



						for(auto it = py_adb_device_mouse_request_change_addr_and_handler.begin(); it != py_adb_device_mouse_request_change_addr_and_handler.end(); ++it){
							boost::python::call(*it,devaddr,handler);
						}

}

////# adb.c
void cb_adb_bus_request(uint8_t addr,const char *cmd,int size) {



						for(auto it = py_adb_bus_request.begin(); it != py_adb_bus_request.end(); ++it){
							boost::python::call(*it,addr,*cmd,size);
						}

}
void cb_adb_bus_request_done(uint8_t addr,const char *cmd,int size) {



						for(auto it = py_adb_bus_request_done.begin(); it != py_adb_bus_request_done.end(); ++it){
							boost::python::call(*it,addr,*cmd,size);
						}

}
void cb_adb_bus_autopoll_block(bool blocked) {



						for(auto it = py_adb_bus_autopoll_block.begin(); it != py_adb_bus_autopoll_block.end(); ++it){
							boost::python::call(*it,blocked);
						}

}
void cb_adb_bus_autopoll_cb(uint16_t mask) {



						for(auto it = py_adb_bus_autopoll_cb.begin(); it != py_adb_bus_autopoll_cb.end(); ++it){
							boost::python::call(*it,mask);
						}

}
void cb_adb_bus_autopoll_cb_done(uint16_t mask) {



						for(auto it = py_adb_bus_autopoll_cb_done.begin(); it != py_adb_bus_autopoll_cb_done.end(); ++it){
							boost::python::call(*it,mask);
						}

}

////# pckbd.c
void cb_pckbd_kbd_read_data(uint32_t val) {



						for(auto it = py_pckbd_kbd_read_data.begin(); it != py_pckbd_kbd_read_data.end(); ++it){
							boost::python::call(*it,val);
						}

}
void cb_pckbd_kbd_read_status(int status) {



						for(auto it = py_pckbd_kbd_read_status.begin(); it != py_pckbd_kbd_read_status.end(); ++it){
							boost::python::call(*it,status);
						}

}
void cb_pckbd_outport_write(uint32_t val) {



						for(auto it = py_pckbd_outport_write.begin(); it != py_pckbd_outport_write.end(); ++it){
							boost::python::call(*it,val);
						}

}
void cb_pckbd_kbd_write_command(uint64_t val) {



						for(auto it = py_pckbd_kbd_write_command.begin(); it != py_pckbd_kbd_write_command.end(); ++it){
							boost::python::call(*it,val);
						}

}
void cb_pckbd_kbd_write_data(uint64_t val) {



						for(auto it = py_pckbd_kbd_write_data.begin(); it != py_pckbd_kbd_write_data.end(); ++it){
							boost::python::call(*it,val);
						}

}

////# ps2.c
void cb_ps2_put_keycode(void *opaque,int keycode) {



						for(auto it = py_ps2_put_keycode.begin(); it != py_ps2_put_keycode.end(); ++it){
							boost::python::call(*it,opaque,keycode);
						}

}
void cb_ps2_keyboard_event(void *opaque,int qcode,int down,unsigned int modifier,unsigned int modifiers) {



						for(auto it = py_ps2_keyboard_event.begin(); it != py_ps2_keyboard_event.end(); ++it){
							boost::python::call(*it,opaque,qcode,down,modifier,modifiers);
						}

}
void cb_ps2_read_data(void *opaque) {



						for(auto it = py_ps2_read_data.begin(); it != py_ps2_read_data.end(); ++it){
							boost::python::call(*it,opaque);
						}

}
void cb_ps2_set_ledstate(void *s,int ledstate) {



						for(auto it = py_ps2_set_ledstate.begin(); it != py_ps2_set_ledstate.end(); ++it){
							boost::python::call(*it,s,ledstate);
						}

}
void cb_ps2_reset_keyboard(void *s) {



						for(auto it = py_ps2_reset_keyboard.begin(); it != py_ps2_reset_keyboard.end(); ++it){
							boost::python::call(*it,s);
						}

}
void cb_ps2_write_keyboard(void *opaque,int val) {



						for(auto it = py_ps2_write_keyboard.begin(); it != py_ps2_write_keyboard.end(); ++it){
							boost::python::call(*it,opaque,val);
						}

}
void cb_ps2_keyboard_set_translation(void *opaque,int mode) {



						for(auto it = py_ps2_keyboard_set_translation.begin(); it != py_ps2_keyboard_set_translation.end(); ++it){
							boost::python::call(*it,opaque,mode);
						}

}
void cb_ps2_mouse_send_packet(void *s,int dx1,int dy1,int dz1,int b) {



						for(auto it = py_ps2_mouse_send_packet.begin(); it != py_ps2_mouse_send_packet.end(); ++it){
							boost::python::call(*it,s,dx1,dy1,dz1,b);
						}

}
void cb_ps2_mouse_fake_event(void *opaque) {



						for(auto it = py_ps2_mouse_fake_event.begin(); it != py_ps2_mouse_fake_event.end(); ++it){
							boost::python::call(*it,opaque);
						}

}
void cb_ps2_write_mouse(void *opaque,int val) {



						for(auto it = py_ps2_write_mouse.begin(); it != py_ps2_write_mouse.end(); ++it){
							boost::python::call(*it,opaque,val);
						}

}
void cb_ps2_kbd_reset(void *opaque) {



						for(auto it = py_ps2_kbd_reset.begin(); it != py_ps2_kbd_reset.end(); ++it){
							boost::python::call(*it,opaque);
						}

}
void cb_ps2_mouse_reset(void *opaque) {



						for(auto it = py_ps2_mouse_reset.begin(); it != py_ps2_mouse_reset.end(); ++it){
							boost::python::call(*it,opaque);
						}

}
void cb_ps2_kbd_init(void *s) {



						for(auto it = py_ps2_kbd_init.begin(); it != py_ps2_kbd_init.end(); ++it){
							boost::python::call(*it,s);
						}

}
void cb_ps2_mouse_init(void *s) {



						for(auto it = py_ps2_mouse_init.begin(); it != py_ps2_mouse_init.end(); ++it){
							boost::python::call(*it,s);
						}

}

////# milkymist-softusb.c
void cb_milkymist_softusb_memory_read(uint32_t addr,uint32_t value) {



						for(auto it = py_milkymist_softusb_memory_read.begin(); it != py_milkymist_softusb_memory_read.end(); ++it){
							boost::python::call(*it,addr,value);
						}

}
void cb_milkymist_softusb_memory_write(uint32_t addr,uint32_t value) {



						for(auto it = py_milkymist_softusb_memory_write.begin(); it != py_milkymist_softusb_memory_write.end(); ++it){
							boost::python::call(*it,addr,value);
						}

}
void cb_milkymist_softusb_mevt(uint8_t m) {



						for(auto it = py_milkymist_softusb_mevt.begin(); it != py_milkymist_softusb_mevt.end(); ++it){
							boost::python::call(*it,m);
						}

}
void cb_milkymist_softusb_kevt(uint8_t m) {



						for(auto it = py_milkymist_softusb_kevt.begin(); it != py_milkymist_softusb_kevt.end(); ++it){
							boost::python::call(*it,m);
						}

}
void cb_milkymist_softusb_pulse_irq(void) {



						for(auto it = py_milkymist_softusb_pulse_irq.begin(); it != py_milkymist_softusb_pulse_irq.end(); ++it){
							boost::python::call(*it);
						}

}

////# hid.c
void cb_hid_kbd_queue_full(void) {



						for(auto it = py_hid_kbd_queue_full.begin(); it != py_hid_kbd_queue_full.end(); ++it){
							boost::python::call(*it);
						}

}
void cb_hid_kbd_queue_empty(void) {



						for(auto it = py_hid_kbd_queue_empty.begin(); it != py_hid_kbd_queue_empty.end(); ++it){
							boost::python::call(*it);
						}

}

////# tsc2005.c
void cb_tsc2005_sense(const char *state) {



						for(auto it = py_tsc2005_sense.begin(); it != py_tsc2005_sense.end(); ++it){
							boost::python::call(*it,*state);
						}

}

////# virtio-input.c
void cb_virtio_input_queue_full(void) {



						for(auto it = py_virtio_input_queue_full.begin(); it != py_virtio_input_queue_full.end(); ++it){
							boost::python::call(*it);
						}

}

////# lasips2.c
void cb_lasips2_reg_read(unsigned int size,int id,uint64_t addr,const char *name,uint64_t val) {



						for(auto it = py_lasips2_reg_read.begin(); it != py_lasips2_reg_read.end(); ++it){
							boost::python::call(*it,size,id,addr,*name,val);
						}

}
void cb_lasips2_reg_write(unsigned int size,int id,uint64_t addr,const char *name,uint64_t val) {



						for(auto it = py_lasips2_reg_write.begin(); it != py_lasips2_reg_write.end(); ++it){
							boost::python::call(*it,size,id,addr,*name,val);
						}

}
void cb_lasips2_intr(unsigned int val) {



						for(auto it = py_lasips2_intr.begin(); it != py_lasips2_intr.end(); ++it){
							boost::python::call(*it,val);
						}

}
