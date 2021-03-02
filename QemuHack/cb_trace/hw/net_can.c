//# xlnx-zynqmp-can.c
void cb_xlnx_can_update_irq(uint32_t isr, uint32_t ier, uint32_t irq) {
	  for (auto it = py_xlnx_can_update_irq.begin(); it != py_xlnx_can_update_irq.end();
	       ++it) {
	    boost::python::call(*it,  isr,  ier,  irq);
	  }
}
void cb_xlnx_can_reset(uint32_t val) {
	  for (auto it = py_xlnx_can_reset.begin(); it != py_xlnx_can_reset.end();
	       ++it) {
	    boost::python::call(*it,  val);
	  }
}
void cb_xlnx_can_rx_fifo_filter_reject(uint32_t id, uint8_t dlc) {
	  for (auto it = py_xlnx_can_rx_fifo_filter_reject.begin(); it != py_xlnx_can_rx_fifo_filter_reject.end();
	       ++it) {
	    boost::python::call(*it,  id,  dlc);
	  }
}
void cb_xlnx_can_filter_id_pre_write(uint8_t filter_num, uint32_t value) {
	  for (auto it = py_xlnx_can_filter_id_pre_write.begin(); it != py_xlnx_can_filter_id_pre_write.end();
	       ++it) {
	    boost::python::call(*it,  filter_num,  value);
	  }
}
void cb_xlnx_can_filter_mask_pre_write(uint8_t filter_num, uint32_t value) {
	  for (auto it = py_xlnx_can_filter_mask_pre_write.begin(); it != py_xlnx_can_filter_mask_pre_write.end();
	       ++it) {
	    boost::python::call(*it,  filter_num,  value);
	  }
}
void cb_xlnx_can_tx_data(uint32_t id, uint8_t dlc, uint8_t db0, uint8_t db1, uint8_t db2, uint8_t db3, uint8_t db4, uint8_t db5, uint8_t db6, uint8_t db7) {
	  for (auto it = py_xlnx_can_tx_data.begin(); it != py_xlnx_can_tx_data.end();
	       ++it) {
	    boost::python::call(*it,  id,  dlc,  db0,  db1,  db2,  db3,  db4,  db5,  db6,  db7);
	  }
}
void cb_xlnx_can_rx_data(uint32_t id, uint32_t dlc, uint8_t db0, uint8_t db1, uint8_t db2, uint8_t db3, uint8_t db4, uint8_t db5, uint8_t db6, uint8_t db7) {
	  for (auto it = py_xlnx_can_rx_data.begin(); it != py_xlnx_can_rx_data.end();
	       ++it) {
	    boost::python::call(*it,  id,  dlc,  db0,  db1,  db2,  db3,  db4,  db5,  db6,  db7);
	  }
}
void cb_xlnx_can_rx_discard(uint32_t status) {
	  for (auto it = py_xlnx_can_rx_discard.begin(); it != py_xlnx_can_rx_discard.end();
	       ++it) {
	    boost::python::call(*it,  status);
	  }
}
