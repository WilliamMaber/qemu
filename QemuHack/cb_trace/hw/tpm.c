//#See docs / devel / tracing.txt for syntax documentation.

//#tpm_crb.c
void cb_tpm_crb_mmio_read(uint64_t addr,unsigned size,uint32_t val) {

  for (auto it = py_tpm_crb_mmio_read.begin(); it != py_tpm_crb_mmio_read.end();
       ++it) {
    boost::python::call(*it,addr,size,val);
  }
}
void cb_tpm_crb_mmio_write(uint64_t addr,unsigned size,uint32_t val) {

  for (auto it = py_tpm_crb_mmio_write.begin(); it != py_tpm_crb_mmio_write.end();
       ++it) {
    boost::python::call(*it,addr,size,val);
  }
}

//#tpm_tis_common.c
void cb_tpm_tis_raise_irq(uint32_t irqmask) {

  for (auto it = py_tpm_tis_raise_irq.begin(); it != py_tpm_tis_raise_irq.end();
       ++it) {
    boost::python::call(*it,irqmask);
  }
}
void cb_tpm_tis_new_active_locality(uint8_t locty) {

  for (auto it = py_tpm_tis_new_active_locality.begin();
       it != py_tpm_tis_new_active_locality.end(); ++it) {
    boost::python::call(*it,locty);
  }
}
void cb_tpm_tis_abort(uint8_t locty) {

  for (auto it = py_tpm_tis_abort.begin(); it != py_tpm_tis_abort.end(); ++it) {
    boost::python::call(*it,locty);
  }
}
void cb_tpm_tis_data_read(uint32_t value,uint32_t off) {

  for (auto it = py_tpm_tis_data_read.begin(); it != py_tpm_tis_data_read.end();
       ++it) {
    boost::python::call(*it,value,off);
  }
}
void cb_tpm_tis_mmio_read(unsigned size,uint32_t addr,uint32_t val) {

  for (auto it = py_tpm_tis_mmio_read.begin(); it != py_tpm_tis_mmio_read.end();
       ++it) {
    boost::python::call(*it,size,addr,val);
  }
}
void cb_tpm_tis_mmio_write(unsigned size,uint32_t addr,uint32_t val) {

  for (auto it = py_tpm_tis_mmio_write.begin(); it != py_tpm_tis_mmio_write.end();
       ++it) {
    boost::python::call(*it,size,addr,val);
  }
}
void cb_tpm_tis_mmio_write_locty4(void) {

  for (auto it = py_tpm_tis_mmio_write_locty4.begin();
       it != py_tpm_tis_mmio_write_locty4.end(); ++it) {
    boost::python::call(*it,);
  }
}
void cb_tpm_tis_mmio_write_release_locty(uint8_t locty) {

  for (auto it = py_tpm_tis_mmio_write_release_locty.begin();
       it != py_tpm_tis_mmio_write_release_locty.end(); ++it) {
    boost::python::call(*it,locty);
  }
}
void cb_tpm_tis_mmio_write_locty_req_use(uint8_t locty) {

  for (auto it = py_tpm_tis_mmio_write_locty_req_use.begin();
       it != py_tpm_tis_mmio_write_locty_req_use.end(); ++it) {
    boost::python::call(*it,locty);
  }
}
void cb_tpm_tis_mmio_write_next_locty(uint8_t locty) {

  for (auto it = py_tpm_tis_mmio_write_next_locty.begin();
       it != py_tpm_tis_mmio_write_next_locty.end(); ++it) {
    boost::python::call(*it,locty);
  }
}
void cb_tpm_tis_mmio_write_locty_seized(uint8_t locty,uint8_t active) {

  for (auto it = py_tpm_tis_mmio_write_locty_seized.begin();
       it != py_tpm_tis_mmio_write_locty_seized.end(); ++it) {
    boost::python::call(*it,locty,active);
  }
}
void cb_tpm_tis_mmio_write_init_abort(void) {

  for (auto it = py_tpm_tis_mmio_write_init_abort.begin();
       it != py_tpm_tis_mmio_write_init_abort.end(); ++it) {
    boost::python::call(*it,);
  }
}
void cb_tpm_tis_mmio_write_lowering_irq(void) {

  for (auto it = py_tpm_tis_mmio_write_lowering_irq.begin();
       it != py_tpm_tis_mmio_write_lowering_irq.end(); ++it) {
    boost::python::call(*it,);
  }
}
void cb_tpm_tis_mmio_write_data2send(uint32_t value,unsigned size) {

  for (auto it = py_tpm_tis_mmio_write_data2send.begin();
       it != py_tpm_tis_mmio_write_data2send.end(); ++it) {
    boost::python::call(*it,value,size);
  }
}
void cb_tpm_tis_pre_save(uint8_t locty,uint32_t rw_offset) {

  for (auto it = py_tpm_tis_pre_save.begin(); it != py_tpm_tis_pre_save.end(); ++it) {
    boost::python::call(*it,locty,rw_offset);
  }
}

//#tpm_ppi.c
void cb_tpm_ppi_memset(uint8_t *ptr,size_t size) {

  for (auto it = py_tpm_ppi_memset.begin(); it != py_tpm_ppi_memset.end(); ++it) {
    boost::python::call(*it,* ptr,size size);
  }
}

//#tpm_spapr.c
void cb_tpm_spapr_do_crq(uint8_t raw1,uint8_t raw2) {

  for (auto it = py_tpm_spapr_do_crq.begin(); it != py_tpm_spapr_do_crq.end(); ++it) {
    boost::python::call(*it,raw1,raw2);
  }
}
void cb_tpm_spapr_do_crq_crq_result(void) {

  for (auto it = py_tpm_spapr_do_crq_crq_result.begin();
       it != py_tpm_spapr_do_crq_crq_result.end(); ++it) {
    boost::python::call(*it,);
  }
}
void cb_tpm_spapr_do_crq_crq_complete_result(void) {

  for (auto it = py_tpm_spapr_do_crq_crq_complete_result.begin();
       it != py_tpm_spapr_do_crq_crq_complete_result.end(); ++it) {
    boost::python::call(*it,);
  }
}
void cb_tpm_spapr_do_crq_tpm_command(void) {

  for (auto it = py_tpm_spapr_do_crq_tpm_command.begin();
       it != py_tpm_spapr_do_crq_tpm_command.end(); ++it) {
    boost::python::call(*it,);
  }
}
void cb_tpm_spapr_do_crq_tpm_get_rtce_buffer_size(size_t buffersize) {

  for (auto it = py_tpm_spapr_do_crq_tpm_get_rtce_buffer_size.begin();
       it != py_tpm_spapr_do_crq_tpm_get_rtce_buffer_size.end(); ++it) {
    boost::python::call(*it,size buffersize);
  }
}
void cb_tpm_spapr_do_crq_get_version(uint32_t version) {

  for (auto it = py_tpm_spapr_do_crq_get_version.begin();
       it != py_tpm_spapr_do_crq_get_version.end(); ++it) {
    boost::python::call(*it,version);
  }
}
void cb_tpm_spapr_do_crq_prepare_to_suspend(void) {

  for (auto it = py_tpm_spapr_do_crq_prepare_to_suspend.begin();
       it != py_tpm_spapr_do_crq_prepare_to_suspend.end(); ++it) {
    boost::python::call(*it,);
  }
}
void cb_tpm_spapr_do_crq_unknown_msg_type(uint8_t type) {

  for (auto it = py_tpm_spapr_do_crq_unknown_msg_type.begin();
       it != py_tpm_spapr_do_crq_unknown_msg_type.end(); ++it) {
    boost::python::call(*it,type);
  }
}
void cb_tpm_spapr_do_crq_unknown_crq(uint8_t raw1,uint8_t raw2) {

  for (auto it = py_tpm_spapr_do_crq_unknown_crq.begin();
       it != py_tpm_spapr_do_crq_unknown_crq.end(); ++it) {
    boost::python::call(*it,raw1,raw2);
  }
}
void cb_tpm_spapr_post_load(void) {

  for (auto it = py_tpm_spapr_post_load.begin(); it != py_tpm_spapr_post_load.end();
       ++it) {
    boost::python::call(*it,);
  }
}
void cb_tpm_spapr_caught_response(uint32_t v) {

  for (auto it = py_tpm_spapr_caught_response.begin();
       it != py_tpm_spapr_caught_response.end(); ++it) {
    boost::python::call(*it,v);
  }
}
