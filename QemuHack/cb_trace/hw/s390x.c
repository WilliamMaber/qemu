//# See docs/devel/tracing.txt for syntax documentation.

//# css.c
void cb_css_enable_facility(const char *facility) {

	  for (auto it = py_css_enable_facility.begin(); it != py_css_enable_facility.end();
	       ++it) {
	    boost::python::call(*it,*facility);	  }
}
void cb_css_crw(uint8_t rsc, uint8_t erc, uint16_t rsid, const char *chained) {

	  for (auto it = py_css_crw.begin(); it != py_css_crw.end();
	       ++it) {
	    boost::python::call(*it,rsc, erc, rsid, *chained);	  }
}
void cb_css_chpid_add(uint8_t cssid, uint8_t chpid, uint8_t type) {

	  for (auto it = py_css_chpid_add.begin(); it != py_css_chpid_add.end();
	       ++it) {
	    boost::python::call(*it,cssid, chpid, type);	  }
}
void cb_css_new_image(uint8_t cssid, const char *default_cssid) {

	  for (auto it = py_css_new_image.begin(); it != py_css_new_image.end();
	       ++it) {
	    boost::python::call(*it,cssid, *default_cssid);	  }
}
void cb_css_assign_subch(const char *do_assign, uint8_t cssid, uint8_t ssid, uint16_t schid, uint16_t devno) {

	  for (auto it = py_css_assign_subch.begin(); it != py_css_assign_subch.end();
	       ++it) {
	    boost::python::call(*it,*do_assign, cssid, ssid, schid, devno);	  }
}
void cb_css_io_interrupt(int cssid, int ssid, int schid, uint32_t intparm, uint8_t isc, const char *conditional) {

	  for (auto it = py_css_io_interrupt.begin(); it != py_css_io_interrupt.end();
	       ++it) {
	    boost::python::call(*it,cssid, ssid, schid, intparm, isc, *conditional);	  }
}
void cb_css_adapter_interrupt(uint8_t isc) {

	  for (auto it = py_css_adapter_interrupt.begin(); it != py_css_adapter_interrupt.end();
	       ++it) {
	    boost::python::call(*it,isc);	  }
}
void cb_css_do_sic(uint16_t mode, uint8_t isc) {

	  for (auto it = py_css_do_sic.begin(); it != py_css_do_sic.end();
	       ++it) {
	    boost::python::call(*it,mode, isc);	  }
}

//# virtio-ccw.c
void cb_virtio_ccw_interpret_ccw(int cssid, int ssid, int schid, int cmd_code) {

	  for (auto it = py_virtio_ccw_interpret_ccw.begin(); it != py_virtio_ccw_interpret_ccw.end();
	       ++it) {
	    boost::python::call(*it,cssid, ssid, schid, cmd_code);	  }
}
void cb_virtio_ccw_new_device(int cssid, int ssid, int schid, int devno, const char *devno_mode) {

	  for (auto it = py_virtio_ccw_new_device.begin(); it != py_virtio_ccw_new_device.end();
	       ++it) {
	    boost::python::call(*it,cssid, ssid, schid, devno, *devno_mode);	  }
}
void cb_virtio_ccw_set_ind(uint64_t ind_loc, uint8_t ind_old, uint8_t ind_new) {

	  for (auto it = py_virtio_ccw_set_ind.begin(); it != py_virtio_ccw_set_ind.end();
	       ++it) {
	    boost::python::call(*it,ind_loc, ind_old, ind_new);	  }
}

//# s390-pci-vfio.c
void cb_s390_pci_clp_cap(const char *id, uint32_t cap) {

	  for (auto it = py_s390_pci_clp_cap.begin(); it != py_s390_pci_clp_cap.end();
	       ++it) {
	    boost::python::call(*it,*id, cap);	  }
}
void cb_s390_pci_clp_cap_size(const char *id, uint32_t size, uint32_t cap) {

	  for (auto it = py_s390_pci_clp_cap_size.begin(); it != py_s390_pci_clp_cap_size.end();
	       ++it) {
	    boost::python::call(*it,*id, size, cap);	  }
}
void cb_s390_pci_clp_dev_info(const char *id) {

	  for (auto it = py_s390_pci_clp_dev_info.begin(); it != py_s390_pci_clp_dev_info.end();
	       ++it) {
	    boost::python::call(*it,*id);	  }
}
