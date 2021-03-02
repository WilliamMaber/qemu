//# See docs/devel/tracing.txt for syntax documentation.

//# grackle.c
void cb_grackle_set_irq(int irq_num,int level) {



		  for (auto it = py_grackle_set_irq.begin(); it != py_grackle_set_irq.end(); ++it) {
		    boost::python::call(*it,irq_num,level) ;		  }

}

//# sabre.c
void cb_sabre_set_request(int irq_num) {



		  for (auto it = py_sabre_set_request.begin(); it != py_sabre_set_request.end(); ++it) {
		    boost::python::call(*it,irq_num) ;		  }

}
void cb_sabre_clear_request(int irq_num) {



		  for (auto it = py_sabre_clear_request.begin(); it != py_sabre_clear_request.end(); ++it) {
		    boost::python::call(*it,irq_num) ;		  }

}
void cb_sabre_config_write(uint64_t addr,uint64_t val) {



		  for (auto it = py_sabre_config_write.begin(); it != py_sabre_config_write.end(); ++it) {
		    boost::python::call(*it,addr,val) ;		  }

}
void cb_sabre_config_read(uint64_t addr,uint64_t val) {



		  for (auto it = py_sabre_config_read.begin(); it != py_sabre_config_read.end(); ++it) {
		    boost::python::call(*it,addr,val) ;		  }

}
void cb_sabre_pci_config_write(uint64_t addr,uint64_t val) {



		  for (auto it = py_sabre_pci_config_write.begin(); it != py_sabre_pci_config_write.end(); ++it) {
		    boost::python::call(*it,addr,val) ;		  }

}
void cb_sabre_pci_config_read(uint64_t addr,uint64_t val) {



		  for (auto it = py_sabre_pci_config_read.begin(); it != py_sabre_pci_config_read.end(); ++it) {
		    boost::python::call(*it,addr,val) ;		  }

}
void cb_sabre_pci_set_irq(int irq_num,int level) {



		  for (auto it = py_sabre_pci_set_irq.begin(); it != py_sabre_pci_set_irq.end(); ++it) {
		    boost::python::call(*it,irq_num,level) ;		  }

}
void cb_sabre_pci_set_obio_irq(int irq_num,int level) {



		  for (auto it = py_sabre_pci_set_obio_irq.begin(); it != py_sabre_pci_set_obio_irq.end(); ++it) {
		    boost::python::call(*it,irq_num,level) ;		  }

}

//# uninorth.c
void cb_unin_set_irq(int irq_num,int level) {



		  for (auto it = py_unin_set_irq.begin(); it != py_unin_set_irq.end(); ++it) {
		    boost::python::call(*it,irq_num,level) ;		  }

}
void cb_unin_get_config_reg(uint32_t reg,uint32_t addr,uint32_t retval) {



		  for (auto it = py_unin_get_config_reg.begin(); it != py_unin_get_config_reg.end(); ++it) {
		    boost::python::call(*it,reg,addr,retval) ;		  }

}
void cb_unin_data_write(uint64_t addr,unsigned len,uint64_t val) {



		  for (auto it = py_unin_data_write.begin(); it != py_unin_data_write.end(); ++it) {
		    boost::python::call(*it,addr,len,val) ;		  }

}
void cb_unin_data_read(uint64_t addr,unsigned len,uint64_t val) {



		  for (auto it = py_unin_data_read.begin(); it != py_unin_data_read.end(); ++it) {
		    boost::python::call(*it,addr,len,val) ;		  }

}
void cb_unin_write(uint64_t addr,uint64_t value) {



		  for (auto it = py_unin_write.begin(); it != py_unin_write.end(); ++it) {
		    boost::python::call(*it,addr,value) ;		  }

}
void cb_unin_read(uint64_t addr,uint64_t value) {



		  for (auto it = py_unin_read.begin(); it != py_unin_read.end(); ++it) {
		    boost::python::call(*it,addr,value) ;		  }

}

//# pnv_phb4.c
void cb_pnv_phb4_xive_notify(uint64_t notif_port,uint64_t data) {



		  for (auto it = py_pnv_phb4_xive_notify.begin(); it != py_pnv_phb4_xive_notify.end(); ++it) {
		    boost::python::call(*it,notif_port,data) ;		  }

}
