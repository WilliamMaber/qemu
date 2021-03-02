//# See docs/devel/tracing.txt for syntax documentation.

//# parallel.c
void cb_parallel_ioport_read(const char *desc,uint16_t addr,uint8_t value) {
	for(auto it = py_cb_parallel_ioport_read.begin(); it != py_parallel_ioport_read.end(); ++it){
		boost::python::call(*it,*desc,addr,value);
	}
}
void cb_parallel_ioport_write(const char *desc,uint16_t addr,uint8_t value) {
	for(auto it = py_cb_parallel_ioport_write.begin(); it != py_parallel_ioport_write.end(); ++it){
		boost::python::call(*it,u  *desc,addr,value);
	}
}

//# serial.c
void cb_serial_read(uint16_t addr,uint8_t value) {
	for(auto it = py_cb_serial_read.begin(); it != py_serial_read.end(); ++it){
		boost::python::uint16_t addr,uint8_t value);
	}
}
void cb_serial_write(uint16_t addr,uint8_t value) {
	for(auto it = py_cb_serial_write.begin(); it != py_serial_write.end(); ++it){
		boost::python::cuint16_t addr,uint8_t value);
	}
}
void cb_serial_update_parameters(uint64_t baudrate,char parity,int data_bits,int stop_bits) {
	for(auto it = py_cb_serial_update_parameters.begin(); it != py_serial_update_parameters.end(); ++it){
		boost::python::call(*it,baudrate,parity,data_bits,stop_bits);
	}
}

//# virtio-serial-bus.c
void cb_virtio_serial_send_control_event(unsigned int port,uint16_t event,uint16_t value) {
	for(auto it = py_cb_virtio_serial_send_control_event.begin(); it != py_virtio_serial_send_control_event.end(); ++it){
		boost::python::call(*it,off  port,event,value);
	}
}
void cb_virtio_serial_throttle_port(unsigned int port,bool throttle) {
	for(auto it = py_cb_virtio_serial_throttle_port.begin(); it != py_virtio_serial_throttle_port.end(); ++it){
		boost::python::call(*it,_  port,throttle);
	}
}
void cb_virtio_serial_handle_control_message(uint16_t event,uint16_t value) {
	for(auto it = py_cb_virtio_serial_handle_control_message.begin(); it != py_virtio_serial_handle_control_message.end(); ++it){
		boost::python::call(*it,offset event,value);
	}
}
void cb_virtio_serial_handle_control_message_port(unsigned int port) {
	for(auto it = py_cb_virtio_serial_handle_control_message_port.begin(); it != py_virtio_serial_handle_control_message_port.end(); ++it){
		boost::python::call(*it,offset  port);
	}
}

//# virtio-console.c
void cb_virtio_console_flush_buf(unsigned int port,size_t len,ssize_t ret) {
	for(auto it = py_cb_virtio_console_flush_buf.begin(); it != py_virtio_console_flush_buf.end(); ++it){
		boost::python::call(*it,port,len,ret);
	}
}
void cb_virtio_console_chr_read(unsigned int port,int size) {
	for(auto it = py_cb_virtio_console_chr_read.begin(); it != py_virtio_console_chr_read.end(); ++it){
		boost::python::call(*it,uin  port,size);
	}
}
void cb_virtio_console_chr_event(unsigned int port,int event) {
	for(auto it = py_cb_virtio_console_chr_event.begin(); it != py_virtio_console_chr_event.end(); ++it){
		boost::python::call(*it,port,event);
	}
}

//# grlib_apbuart.c
void cb_grlib_apbuart_event(int event) {
	for(auto it = py_cb_grlib_apbuart_event.begin(); it != py_grlib_apbuart_event.end(); ++it){
		boost::python::call(*it event);
	}
}
void cb_grlib_apbuart_writel_unknown(uint64_t addr,uint32_t value) {
	for(auto it = py_cb_grlib_apbuart_writel_unknown.begin(); it != py_grlib_apbuart_writel_unknown.end(); ++it){
		boost::python::call(*it,addr,value);
	}
}
void cb_grlib_apbuart_readl_unknown(uint64_t addr) {
	for(auto it = py_cb_grlib_apbuart_readl_unknown.begin(); it != py_grlib_apbuart_readl_unknown.end(); ++it){
		boost::python::call(*it,_ addr);
	}
}

//# lm32_juart.c
void cb_lm32_juart_get_jtx(uint32_t value) {
	for(auto it = py_cb_lm32_juart_get_jtx.begin(); it != py_lm32_juart_get_jtx.end(); ++it){
		boost::python::call(*i value);
	}
}
void cb_lm32_juart_set_jtx(uint32_t value) {
	for(auto it = py_cb_lm32_juart_set_jtx.begin(); it != py_lm32_juart_set_jtx.end(); ++it){
		boost::python::call(*i value);
	}
}
void cb_lm32_juart_get_jrx(uint32_t value) {
	for(auto it = py_cb_lm32_juart_get_jrx.begin(); it != py_lm32_juart_get_jrx.end(); ++it){
		boost::python::call(*i value);
	}
}
void cb_lm32_juart_set_jrx(uint32_t value) {
	for(auto it = py_cb_lm32_juart_set_jrx.begin(); it != py_lm32_juart_set_jrx.end(); ++it){
		boost::python::call(*i value);
	}
}

//# lm32_uart.c
void cb_lm32_uart_memory_write(uint32_t addr,uint32_t value) {
	for(auto it = py_cb_lm32_uart_memory_write.begin(); it != py_lm32_uart_memory_write.end(); ++it){
		boost::python::call(*it,ui addr,value);
	}
}
void cb_lm32_uart_memory_read(uint32_t addr,uint32_t value) {
	for(auto it = py_cb_lm32_uart_memory_read.begin(); it != py_lm32_uart_memory_read.end(); ++it){
		boost::python::call(*it,u addr,value);
	}
}
void cb_lm32_uart_irq_state(int level) {
	for(auto it = py_cb_lm32_uart_irq_state.begin(); it != py_lm32_uart_irq_state.end(); ++it){
		boost::python::call(*it level);
	}
}

//# milkymist-uart.c
void cb_milkymist_uart_memory_read(uint32_t addr,uint32_t value) {
	for(auto it = py_cb_milkymist_uart_memory_read.begin(); it != py_milkymist_uart_memory_read.end(); ++it){
		boost::python::call(*it,addr,value);
	}
}
void cb_milkymist_uart_memory_write(uint32_t addr,uint32_t value) {
	for(auto it = py_cb_milkymist_uart_memory_write.begin(); it != py_milkymist_uart_memory_write.end(); ++it){
		boost::python::call(*it,_ addr,value);
	}
}
void cb_milkymist_uart_raise_irq(void) {
	for(auto it = py_cb_milkymist_uart_raise_irq.begin(); it != py_milkymist_uart_raise_irq.end(); ++it){
		boost::python::call(*it);
	}
}
void cb_milkymist_uart_lower_irq(void) {
	for(auto it = py_cb_milkymist_uart_lower_irq.begin(); it != py_milkymist_uart_lower_irq.end(); ++it){
		boost::python::call(*it);
	}
}

//# escc.c
void cb_escc_put_queue(char channel,int b) {
	for(auto it = py_cb_escc_put_queue.begin(); it != py_escc_put_queue.end(); ++it){
		boost::python::calchar channel,int b);
	}
}
void cb_escc_get_queue(char channel,int val) {
	for(auto it = py_cb_escc_get_queue.begin(); it != py_escc_get_queue.end(); ++it){
		boost::python::calchar channel,int val);
	}
}
void cb_escc_update_irq(int irq) {
	for(auto it = py_cb_escc_update_irq.begin(); it != py_escc_update_irq.end(); ++it){
		boost::python::call irq);
	}
}
void cb_escc_update_parameters(char channel,int speed,int parity,int data_bits,int stop_bits) {
	for(auto it = py_cb_escc_update_parameters.begin(); it != py_escc_update_parameters.end(); ++it){
		boost::python::call(*it,ui channel,speed,parity,data_bits,stop_bits);
	}
}
void cb_escc_mem_writeb_ctrl(char channel,uint32_t reg,uint32_t val) {
	for(auto it = py_cb_escc_mem_writeb_ctrl.begin(); it != py_escc_mem_writeb_ctrl.end(); ++it){
		boost::python::call(*it,channel,reg,val);
	}
}
void cb_escc_mem_writeb_data(char channel,uint32_t val) {
	for(auto it = py_cb_escc_mem_writeb_data.begin(); it != py_escc_mem_writeb_data.end(); ++it){
		boost::python::call(*it,channel,val);
	}
}
void cb_escc_mem_readb_ctrl(char channel,uint32_t reg,uint8_t val) {
	for(auto it = py_cb_escc_mem_readb_ctrl.begin(); it != py_escc_mem_readb_ctrl.end(); ++it){
		boost::python::call(*it channel,reg,val);
	}
}
void cb_escc_mem_readb_data(char channel,uint32_t ret) {
	for(auto it = py_cb_escc_mem_readb_data.begin(); it != py_escc_mem_readb_data.end(); ++it){
		boost::python::call(*it channel,ret);
	}
}
void cb_escc_serial_receive_byte(char channel,int ch) {
	for(auto it = py_cb_escc_serial_receive_byte.begin(); it != py_escc_serial_receive_byte.end(); ++it){
		boost::python::call(*it,channel,ch);
	}
}
void cb_escc_sunkbd_event_in(int ch,const char *name,int down) {
	for(auto it = py_cb_escc_sunkbd_event_in.begin(); it != py_escc_sunkbd_event_in.end(); ++it){
		boost::python::call(*it,ch,*name,down);
	}
}
void cb_escc_sunkbd_event_out(int ch) {
	for(auto it = py_cb_escc_sunkbd_event_out.begin(); it != py_escc_sunkbd_event_out.end(); ++it){
		boost::python::call(*it,ch);
	}
}
void cb_escc_kbd_command(int val) {
	for(auto it = py_cb_escc_kbd_command.begin(); it != py_escc_kbd_command.end(); ++it){
		boost::python::call( val);
	}
}
void cb_escc_sunmouse_event(int dx,int dy,int buttons_state) {
	for(auto it = py_cb_escc_sunmouse_event.begin(); it != py_escc_sunmouse_event.end(); ++it){
		boost::python::call(*it dx,dy,buttons_state);
	}
}

//# pl011.c
void cb_pl011_irq_state(int level) {
	for(auto it = py_cb_pl011_irq_state.begin(); it != py_pl011_irq_state.end(); ++it){
		boost::python::call level);
	}
}
void cb_pl011_read(uint32_t addr,uint32_t value) {
	for(auto it = py_cb_pl011_read.begin(); it != py_pl011_read.end(); ++it){
		boost::python:uint32_t addr,uint32_t value);
	}
}
void cb_pl011_read_fifo(int read_count) {
	for(auto it = py_cb_pl011_read_fifo.begin(); it != py_pl011_read_fifo.end(); ++it){
		boost::python::call read_count);
	}
}
void cb_pl011_write(uint32_t addr,uint32_t value) {
	for(auto it = py_cb_pl011_write.begin(); it != py_pl011_write.end(); ++it){
		boost::python::uint32_t addr,uint32_t value);
	}
}
void cb_pl011_can_receive(uint32_t lcr,int read_count,int r) {
	for(auto it = py_cb_pl011_can_receive.begin(); it != py_pl011_can_receive.end(); ++it){
		boost::python::call(* lcr,read_count,r);
	}
}
void cb_pl011_put_fifo(uint32_t c,int read_count) {
	for(auto it = py_cb_pl011_put_fifo.begin(); it != py_pl011_put_fifo.end(); ++it){
		boost::python::caluint32_t c,int read_count);
	}
}
void cb_pl011_put_fifo_full(void) {
	for(auto it = py_cb_pl011_put_fifo_full.begin(); it != py_pl011_put_fifo_full.end(); ++it){
		boost::python::call(*itvoid);
	}
}
void cb_pl011_baudrate_change(unsigned int baudrate,uint64_t clock,uint32_t ibrd,uint32_t fbrd) {
	for(auto it = py_cb_pl011_baudrate_change.begin(); it != py_pl011_baudrate_change.end(); ++it){
		boost::python::call(*it,u  baudrate,clock,ibrd,fbrd);
	}
}

//# cmsdk-apb-uart.c
void cb_cmsdk_apb_uart_read(uint64_t offset,uint64_t data,unsigned size) {
	for(auto it = py_cb_cmsdk_apb_uart_read.begin(); it != py_cmsdk_apb_uart_read.end(); ++it){
		boost::python::call(*it offset,data,size);
	}
}
void cb_cmsdk_apb_uart_write(uint64_t offset,uint64_t data,unsigned size) {
	for(auto it = py_cb_cmsdk_apb_uart_write.begin(); it != py_cmsdk_apb_uart_write.end(); ++it){
		boost::python::call(*it,offset,data,size);
	}
}
void cb_cmsdk_apb_uart_reset(void) {
	for(auto it = py_cb_cmsdk_apb_uart_reset.begin(); it != py_cmsdk_apb_uart_reset.end(); ++it){
		boost::python::call(*it);
	}
}
void cb_cmsdk_apb_uart_receive(uint8_t c) {
	for(auto it = py_cb_cmsdk_apb_uart_receive.begin(); it != py_cmsdk_apb_uart_receive.end(); ++it){
		boost::python::call(*it,ui c);
	}
}
void cb_cmsdk_apb_uart_tx_pending(void) {
	for(auto it = py_cb_cmsdk_apb_uart_tx_pending.begin(); it != py_cmsdk_apb_uart_tx_pending.end(); ++it){
		boost::python::call(*it);
	}
}
void cb_cmsdk_apb_uart_tx(uint8_t c) {
	for(auto it = py_cb_cmsdk_apb_uart_tx.begin(); it != py_cmsdk_apb_uart_tx.end(); ++it){
		boost::python::call(* c);
	}
}
void cb_cmsdk_apb_uart_set_params(int speed) {
	for(auto it = py_cb_cmsdk_apb_uart_set_params.begin(); it != py_cmsdk_apb_uart_set_params.end(); ++it){
		boost::python::call(*it,speed);
	}
}

//# nrf51_uart.c
void cb_nrf51_uart_read(uint64_t addr,uint64_t r,unsigned int size) {
	for(auto it = py_cb_nrf51_uart_read.begin(); it != py_nrf51_uart_read.end(); ++it){
		boost::python::call addr,r,size);
	}
}
void cb_nrf51_uart_write(uint64_t addr,uint64_t value,unsigned int size) {
	for(auto it = py_cb_nrf51_uart_write.begin(); it != py_nrf51_uart_write.end(); ++it){
		boost::python::call( addr,value,size);
	}
}

//# exynos4210_uart.c
void cb_exynos_uart_dmabusy(uint32_t channel) {
	for(auto it = py_cb_exynos_uart_dmabusy.begin(); it != py_exynos_uart_dmabusy.end(); ++it){
		boost::python::call(*it channel);
	}
}
void cb_exynos_uart_dmaready(uint32_t channel) {
	for(auto it = py_cb_exynos_uart_dmaready.begin(); it != py_exynos_uart_dmaready.end(); ++it){
		boost::python::call(*it,channel);
	}
}
void cb_exynos_uart_irq_raised(uint32_t channel,uint32_t reg) {
	for(auto it = py_cb_exynos_uart_irq_raised.begin(); it != py_exynos_uart_irq_raised.end(); ++it){
		boost::python::call(*it,ui channel,reg);
	}
}
void cb_exynos_uart_irq_lowered(uint32_t channel) {
	for(auto it = py_cb_exynos_uart_irq_lowered.begin(); it != py_exynos_uart_irq_lowered.end(); ++it){
		boost::python::call(*it,uin channel);
	}
}
void cb_exynos_uart_update_params(uint32_t channel,int speed,uint8_t parity,int data,int stop,uint64_t wordtime) {
	for(auto it = py_cb_exynos_uart_update_params.begin(); it != py_exynos_uart_update_params.end(); ++it){
		boost::python::call(*it,channel,speed,parity,data,stop,wordtime);
	}
}
void cb_exynos_uart_write(uint32_t channel,uint32_t offset,const char *name,uint64_t val) {
	for(auto it = py_cb_exynos_uart_write.begin(); it != py_exynos_uart_write.end(); ++it){
		boost::python::call(* channel,offset,*name,val);
	}
}
void cb_exynos_uart_read(uint32_t channel,uint32_t offset,const char *name,uint64_t val) {
	for(auto it = py_cb_exynos_uart_read.begin(); it != py_exynos_uart_read.end(); ++it){
		boost::python::call( channel,offset,*name,val);
	}
}
void cb_exynos_uart_rx_fifo_reset(uint32_t channel) {
	for(auto it = py_cb_exynos_uart_rx_fifo_reset.begin(); it != py_exynos_uart_rx_fifo_reset.end(); ++it){
		boost::python::call(*it,channel);
	}
}
void cb_exynos_uart_tx_fifo_reset(uint32_t channel) {
	for(auto it = py_cb_exynos_uart_tx_fifo_reset.begin(); it != py_exynos_uart_tx_fifo_reset.end(); ++it){
		boost::python::call(*it,channel);
	}
}
void cb_exynos_uart_tx(uint32_t channel,uint8_t ch) {
	for(auto it = py_cb_exynos_uart_tx.begin(); it != py_exynos_uart_tx.end(); ++it){
		boost::python::caluint32_t channel,uint8_t ch);
	}
}
void cb_exynos_uart_intclr(uint32_t channel,uint32_t reg) {
	for(auto it = py_cb_exynos_uart_intclr.begin(); it != py_exynos_uart_intclr.end(); ++it){
		boost::python::call(*i channel,reg);
	}
}
void cb_exynos_uart_ro_write(uint32_t channel,const char *name,uint32_t reg) {
	for(auto it = py_cb_exynos_uart_ro_write.begin(); it != py_exynos_uart_ro_write.end(); ++it){
		boost::python::call(*it,channel,*name,reg);
	}
}
void cb_exynos_uart_rx(uint32_t channel,uint8_t ch) {
	for(auto it = py_cb_exynos_uart_rx.begin(); it != py_exynos_uart_rx.end(); ++it){
		boost::python::caluint32_t channel,uint8_t ch);
	}
}
void cb_exynos_uart_rx_error(uint32_t channel) {
	for(auto it = py_cb_exynos_uart_rx_error.begin(); it != py_exynos_uart_rx_error.end(); ++it){
		boost::python::call(*it,channel);
	}
}
void cb_exynos_uart_wo_read(uint32_t channel,const char *name,uint32_t reg) {
	for(auto it = py_cb_exynos_uart_wo_read.begin(); it != py_exynos_uart_wo_read.end(); ++it){
		boost::python::call(*it channel,*name,reg);
	}
}
void cb_exynos_uart_rxsize(uint32_t channel,uint32_t size) {
	for(auto it = py_cb_exynos_uart_rxsize.begin(); it != py_exynos_uart_rxsize.end(); ++it){
		boost::python::call(*i channel,size);
	}
}
void cb_exynos_uart_channel_error(uint32_t channel) {
	for(auto it = py_cb_exynos_uart_channel_error.begin(); it != py_exynos_uart_channel_error.end(); ++it){
		boost::python::call(*it,channel);
	}
}
void cb_exynos_uart_rx_timeout(uint32_t channel,uint32_t stat,uint32_t intsp) {
	for(auto it = py_cb_exynos_uart_rx_timeout.begin(); it != py_exynos_uart_rx_timeout.end(); ++it){
		boost::python::call(*it,ui channel,stat,sp);
	}
}

//# cadence_uart.c
void cb_cadence_uart_baudrate(unsigned baudrate) {
	for(auto it = py_cb_cadence_uart_baudrate.begin(); it != py_cadence_uart_baudrate.end(); ++it){
		boost::python::call(*it,u baudrate);
	}
}
