//# See docs/devel/tracing.txt for syntax documentation.

//# core.c
void cb_usb_packet_state_change(int bus,const char *port,int ep,void *p,const char *o,const char *n) {


	  for (auto it = py_usb_packet_state_change.begin();
	       it != py_usb_packet_state_change.end(); ++it) {
	    boost::python::call(*it, bus, *port, ep, *p, *o, *n) ;
	  }

}
void cb_usb_packet_state_fault(int bus,const char *port,int ep,void *p,const char *o,const char *n) {

  for (auto it = py_usb_packet_state_fault.begin();
       it != py_usb_packet_state_fault.end(); ++it) {
    boost::python::call(*it, bus, *port, ep, *p, *o, *n);
  }
}

//# bus.c
void cb_usb_port_claim(int bus,const char *port) {


	  for (auto it = py_usb_port_claim.begin();
	       it != py_usb_port_claim.end(); ++it) {
	    boost::python::call(*it, bus, *port) ;
	  }

}
void cb_usb_port_attach(int bus,const char *port,const char *devspeed,const char *portspeed) {


	  for (auto it = py_usb_port_attach.begin();
	       it != py_usb_port_attach.end(); ++it) {
	    boost::python::call(*it, bus, *port, *devspeed, *portspeed) ;
	  }

}
void cb_usb_port_detach(int bus,const char *port) {


	  for (auto it = py_usb_port_detach.begin();
	       it != py_usb_port_detach.end(); ++it) {
	    boost::python::call(*it, bus, *port) ;
	  }

}
void cb_usb_port_release(int bus,const char *port) {


	  for (auto it = py_usb_port_release.begin();
	       it != py_usb_port_release.end(); ++it) {
	    boost::python::call(*it, bus, *port) ;
	  }

}

//# hcd-ohci-pci.c
void cb_usb_ohci_exit(const char *s) {


	  for (auto it = py_usb_ohci_exit.begin();
	       it != py_usb_ohci_exit.end(); ++it) {
	    boost::pythonconst char *s) nt8_t type);
	  }

}

//# hcd-ohci.c
void cb_usb_ohci_iso_td_read_failed(uint32_t addr) {


	  for (auto it = py_usb_ohci_iso_td_read_failed.begin();
	       it != py_usb_ohci_iso_td_read_failed.end(); ++it) {
	    boost::python::call(*it, addr) ;
	  }

}
void cb_usb_ohci_iso_td_head(uint32_t head,uint32_t tail,uint32_t flags,uint32_t bp,uint32_t next,uint32_t be,uint32_t framenum,uint32_t startframe,uint32_t framecount,int rel_frame_num) {


	  for (auto it = py_usb_ohci_iso_td_head.begin();
	       it != py_usb_ohci_iso_td_head.end(); ++it) {
	    boost::python::call(*it, head, tail, flags, bp, next, be, framenum, startframe, framecount, rel_frame_num) ;
	  }

}
void cb_usb_ohci_iso_td_head_offset(uint32_t o0,uint32_t o1,uint32_t o2,uint32_t o3,uint32_t o4,uint32_t o5,uint32_t o6,uint32_t o7) {


	  for (auto it = py_usb_ohci_iso_td_head_offset.begin();
	       it != py_usb_ohci_iso_td_head_offset.end(); ++it) {
	    boost::python::call(*it, o0, o1, o2, o3, o4, o5, o6, o7) ;
	  }

}
void cb_usb_ohci_iso_td_relative_frame_number_neg(int rel) {


	  for (auto it = py_usb_ohci_iso_td_relative_frame_number_neg.begin();
	       it != py_tpm_spapr_do_crq_unknown_msg_type.end(); ++it) {
	    boost:usb_ohci_iso_td_relative_framint rel) int8_t type);
	  }

}
void cb_usb_ohci_iso_td_relative_frame_number_big(int rel,int count) {


	  for (auto it = py_usb_ohci_iso_td_relative_frame_number_big.begin();
	       it != py_tpm_spapr_do_crq_unknown_msg_type.end(); ++it) {
	    boost:usb_ohci_iso_td_relative_frame_number_biint rel,int count) );
	  }

}
void cb_usb_ohci_iso_td_bad_direction(int dir) {


	  for (auto it = py_usb_ohci_iso_td_bad_direction.begin();
	       it != py_usb_ohci_iso_td_bad_direction.end(); ++it) {
	    boost::python::call(*it dir) );
	  }

}
void cb_usb_ohci_iso_td_bad_bp_be(uint32_t bp,uint32_t be) {


	  for (auto it = py_usb_ohci_iso_td_bad_bp_be.begin();
	       it != py_usb_ohci_iso_td_bad_bp_be.end(); ++it) {
	    boost::python::call(*it, bp, be) ;
	  }

}
void cb_usb_ohci_iso_td_bad_cc_not_accessed(uint32_t start,uint32_t next) {


	  for (auto it = py_usb_ohci_iso_td_bad_cc_not_accessed.begin();
	       it != py_usb_ohci_iso_td_bad_cc_not_accessed.end(); ++it) {
	    boost::python::call(*it, start, next) ;
	  }

}
void cb_usb_ohci_iso_td_bad_cc_overrun(uint32_t start,uint32_t next) {


	  for (auto it = py_usb_ohci_iso_td_bad_cc_overrun.begin();
	       it != py_usb_ohci_iso_td_bad_cc_overrun.end(); ++it) {
	    boost::python::call(*it, start, next) ;
	  }

}
void cb_usb_ohci_iso_td_so(uint32_t so,uint32_t eo,uint32_t s,uint32_t e,const char *str,ssize_t len,int ret) {


	  for (auto it = py_usb_ohci_iso_td_so.begin();
	       it != py_usb_ohci_iso_td_so.end(); ++it) {
	    boost::python::call(*it, so, eo, s, e, *str, len, ret) ;
	  }

}
void cb_usb_ohci_iso_td_data_overrun(int ret,ssize_t len) {


	  for (auto it = py_usb_ohci_iso_td_data_overrun.begin();
	       it != py_usb_ohci_iso_td_data_overrun.end(); ++it) {
	    boost::python::call(*it, ret, len) ;
	  }

}
void cb_usb_ohci_iso_td_data_underrun(int ret) {


	  for (auto it = py_usb_ohci_iso_td_data_underrun.begin();
	       it != py_usb_ohci_iso_td_data_underrun.end(); ++it) {
	    boost::python::call(*it, ret) ;
	  }
}
void cb_usb_ohci_iso_td_nak(int ret) {


	  for (auto it = py_usb_ohci_iso_td_nak.begin();
	       it != py_usb_ohci_iso_td_nak.end(); ++it) {
	    boost::python::call(*it, ret) ;
	  }

}
void cb_usb_ohci_iso_td_bad_response(int ret) {


	  for (auto it = py_usb_ohci_iso_td_bad_response.begin();
	       it != py_usb_ohci_iso_td_bad_response.end(); ++it) {
	    boost::python::call(*it, ret) ;
	  }

}
void cb_usb_ohci_port_attach(int index) {


	  for (auto it = py_usb_ohci_port_attach.begin();
	       it != py_usb_ohci_port_attach.end(); ++it) {
	    boost::python::call(*it, index) ;
	  }

}
void cb_usb_ohci_port_detach(int index) {


	  for (auto it = py_usb_ohci_port_detach.begin();
	       it != py_usb_ohci_port_detach.end(); ++it) {
	    boost::python::call(*it, index) ;
	  }

}
void cb_usb_ohci_port_wakeup(int index) {


	  for (auto it = py_usb_ohci_port_wakeup.begin();
	       it != py_usb_ohci_port_wakeup.end(); ++it) {
	    boost::python::call(*it, index) ;
	  }

}
void cb_usb_ohci_port_suspend(int index) {


	  for (auto it = py_usb_ohci_port_suspend.begin();
	       it != py_usb_ohci_port_suspend.end(); ++it) {
	    boost::python::call(*it, index) ;
	  }

}
void cb_usb_ohci_port_reset(int index) {


	  for (auto it = py_usb_ohci_port_reset.begin();
	       it != py_usb_ohci_port_reset.end(); ++it) {
	    boost::python::call(*it, index) ;
	  }

}
void cb_usb_ohci_remote_wakeup(const char *s) {


	  for (auto it = py_usb_ohci_remote_wakeup.begin();
	       it != py_usb_ohci_remote_wakeup.end(); ++it) {
	    boost::python::call(*it, s) ;
	  }

}
void cb_usb_ohci_reset(const char *s) {


	  for (auto it = py_usb_ohci_reset.begin();
	       it != py_usb_ohci_reset.end(); ++it) {
	    boost::python::call(*it, s) ;
	  }

}
void cb_usb_ohci_start(const char *s) {


	  for (auto it = py_usb_ohci_start.begin();
	       it != py_usb_ohci_start.end(); ++it) {
	    boost::python::call(*it, s) ;
	  }

}
void cb_usb_ohci_resume(const char *s) {


	  for (auto it = py_usb_ohci_resume.begin();
	       it != py_usb_ohci_resume.end(); ++it) {
	    boost::python::call(*it, s) ;
	  }

}
void cb_usb_ohci_stop(const char *s) {


	  for (auto it = py_usb_ohci_stop.begin();
	       it != py_usb_ohci_stop.end(); ++it) {
	    boost::pythonconst char *s) nt8_t type);
	  }

}
void cb_usb_ohci_set_ctl(const char *s,uint32_t new_state) {


	  for (auto it = py_usb_ohci_set_ctl.begin();
	       it != py_usb_ohci_set_ctl.end(); ++it) {
	    boost::python::call(*it, s,new_state) ;
	  }

}
void cb_usb_ohci_td_underrun(void) {


	  for (auto it = py_usb_ohci_td_underrun.begin();
	       it != py_usb_ohci_td_underrun.end(); ++it) {
	    boost::python::call(*it) ;
	  }

}
void cb_usb_ohci_td_dev_error(void) {


	  for (auto it = py_usb_ohci_td_dev_error.begin();
	       it != py_usb_ohci_td_dev_error.end(); ++it) {
	    boost::python::call(*it) ;
	  }

}
void cb_usb_ohci_td_nak(void) {


	  for (auto it = py_usb_ohci_td_nak.begin();
	       it != py_usb_ohci_td_nak.end(); ++it) {
	    boost::python::call(*it) ;
	  }

}
void cb_usb_ohci_td_stall(void) {


	  for (auto it = py_usb_ohci_td_stall.begin();
	       it != py_usb_ohci_td_stall.end(); ++it) {
	    boost::python::call(*it) ;
	  }

}
void cb_usb_ohci_td_babble(void) {


	  for (auto it = py_usb_ohci_td_babble.begin();
	       it != py_usb_ohci_td_babble.end(); ++it) {
	    boost::python::call(*it) ;
	  }

}
void cb_usb_ohci_td_bad_device_response(int rc) {


	  for (auto it = py_usb_ohci_td_bad_device_response.begin();
	       it != py_usb_ohci_td_bad_device_response.end(); ++it) {
	    boost::python::call(*it, rc) ;
	  }

}
void cb_usb_ohci_td_read_error(uint32_t addr) {


	  for (auto it = py_usb_ohci_td_read_error.begin();
	       it != py_usb_ohci_td_read_error.end(); ++it) {
	    boost::python::call(*it, addr) ;
	  }

}
void cb_usb_ohci_td_bad_direction(int dir) {


	  for (auto it = py_usb_ohci_td_bad_direction.begin();
	       it != py_usb_ohci_td_bad_direction.end(); ++it) {
	    boost::python::call(*it, dir) ;
	  }

}
void cb_usb_ohci_td_skip_async(void) {


	  for (auto it = py_usb_ohci_td_skip_async.begin();
	       it != py_usb_ohci_td_skip_async.end(); ++it) {
	    boost::python::call(*it, it) ;
	  }

}
void cb_usb_ohci_td_pkt_hdr(uint32_t addr,int64_t pktlen,int64_t len,const char *s,int flag_r,uint32_t cbp,uint32_t be) {


	  for (auto it = py_usb_ohci_td_pkt_hdr.begin();
	       it != py_usb_ohci_td_pkt_hdr.end(); ++it) {
	    boost::python::call(*it, addr, pktlen, len, *s, flag_r, cbp, be) ;
	  }

}
void cb_usb_ohci_td_pkt_short(const char *dir,const char *buf) {


	  for (auto it = py_usb_ohci_td_pkt_short.begin();
	       it != py_usb_ohci_td_pkt_short.end(); ++it) {
	    boost::python::call(*it, *dir, *buf) ;
	  }

}
void cb_usb_ohci_td_pkt_full(const char *dir,const char *buf) {


	  for (auto it = py_usb_ohci_td_pkt_full.begin();
	       it != py_usb_ohci_td_pkt_full.end(); ++it) {
	    boost::python::call(*it, *dir, *buf) ;
	  }

}
void cb_usb_ohci_td_too_many_pending(void) {


	  for (auto it = py_usb_ohci_td_too_many_pending.begin();
	       it != py_usb_ohci_td_too_many_pending.end(); ++it) {
	    boost::python::call(*it) ;
	  }

}
void cb_usb_ohci_td_packet_status(int status) {


	  for (auto it = py_usb_ohci_td_packet_status.begin();
	       it != py_usb_ohci_td_packet_status.end(); ++it) {
	    boost::python::call(*it,status) ;
	  }

}
void cb_usb_ohci_ed_read_error(uint32_t addr) {


	  for (auto it = py_usb_ohci_ed_read_error.begin();
	       it != py_usb_ohci_ed_read_error.end(); ++it) {
	    boost::python::call(*it,addr) ;
	  }

}
void cb_usb_ohci_ed_pkt(uint32_t cur,int h,int c,uint32_t head,uint32_t tail,uint32_t next) {


	  for (auto it = py_usb_ohci_ed_pkt.begin();
	       it != py_usb_ohci_ed_pkt.end(); ++it) {
	    boost::python::call(*it, cur, h, c, head, tail, next) ;
	  }

}
void cb_usb_ohci_ed_pkt_flags(uint32_t fa,uint32_t en,uint32_t d,int s,int k,int f,uint32_t mps) {


	  for (auto it = py_usb_ohci_ed_pkt_flags.begin();
	       it != py_usb_ohci_ed_pkt_flags.end(); ++it) {
	    boost::python::call(*it, fa, en, d, s, k, f, mps) ;
	  }

}
void cb_usb_ohci_hcca_read_error(uint32_t addr) {


	  for (auto it = py_usb_ohci_hcca_read_error.begin();
	       it != py_usb_ohci_hcca_read_error.end(); ++it) {
	    boost::python::call(*it, addr) ;
	  }

}
void cb_usb_ohci_mem_read_unaligned(uint32_t addr) {


	  for (auto it = py_usb_ohci_mem_read_unaligned.begin();
	       it != py_usb_ohci_mem_read_unaligned.end(); ++it) {
	    boost::python::call(*it, addr) ;
	  }

}
void cb_usb_ohci_mem_read_bad_offset(uint32_t addr) {


	  for (auto it = py_usb_ohci_mem_read_bad_offset.begin();
	       it != py_usb_ohci_mem_read_bad_offset.end(); ++it) {
	    boost::python::call(*it, addr) ;
	  }

}
void cb_usb_ohci_mem_write_unaligned(uint32_t addr) {


	  for (auto it = py_usb_ohci_mem_write_unaligned.begin();
	       it != py_usb_ohci_mem_write_unaligned.end(); ++it) {
	    boost::python::call(*it, addr) ;
	  }

}
void cb_usb_ohci_mem_write_bad_offset(uint32_t addr) {


	  for (auto it = py_usb_ohci_mem_write_bad_offset.begin();
	       it != py_usb_ohci_mem_write_bad_offset.end(); ++it) {
	    boost::python::call(*it, addr) ;
	  }

}
void cb_usb_ohci_process_lists(uint32_t head,uint32_t cur) {


	  for (auto it = py_usb_ohci_process_lists.begin();
	       it != py_usb_ohci_process_lists.end(); ++it) {
	    boost::python::call(*it, head, cur) ;
	  }

}
void cb_usb_ohci_set_frame_interval(const char *name,uint16_t fi_x,uint16_t fi_u) {


	  for (auto it = py_usb_ohci_set_frame_interval.begin();
	       it != py_usb_ohci_set_frame_interval.end(); ++it) {
	    boost::python::call(*it, *name, fi_x, fi_u) ;
	  }

}
void cb_usb_ohci_hub_power_up(void) {


	  for (auto it = py_usb_ohci_hub_power_up.begin();
	       it != py_usb_ohci_hub_power_up.end(); ++it) {
	    boost::pythovoid) int8_t type);
	  }

}
void cb_usb_ohci_hub_power_down(void) {


	  for (auto it = py_usb_ohci_hub_power_down.begin();
	       it != py_usb_ohci_hub_power_down.end(); ++it) {
	    boost::python:void) t8_t type);
	  }

}
void cb_usb_ohci_init_time(int64_t frametime,int64_t bittime) {


	  for (auto it = py_usb_ohci_init_time.begin();
	       it != py_usb_ohci_init_time.end(); ++it) {
	    boost::python::call(*it, frametime, bittime) ;
	  }

}
void cb_usb_ohci_die(void) {


	  for (auto it = py_usb_ohci_die.begin();
	       it != py_usb_ohci_die.end(); ++it) {
	    boost::python::call(*it) ;
	  }

}
void cb_usb_ohci_async_complete(void) {


	  for (auto it = py_usb_ohci_async_complete.begin();
	       it != py_usb_ohci_async_complete.end(); ++it) {
	    boost::python::call(*it) ;
	  }

}

//# hcd-ehci.c
void cb_usb_ehci_reset(void) {


	  for (auto it = py_usb_ehci_reset.begin();
	       it != py_usb_ehci_reset.end(); ++it) {
	    boost::python::call(*it) ;
	  }

}
void cb_usb_ehci_unrealize(void) {


	  for (auto it = py_usb_ehci_unrealize.begin();
	       it != py_usb_ehci_unrealize.end(); ++it) {
	    boost::python::call(*it) ;
	  }

}
void cb_usb_ehci_opreg_read(uint32_t addr,const char *str,uint32_t val) {


	  for (auto it = py_usb_ehci_opreg_read.begin();
	       it != py_usb_ehci_opreg_read.end(); ++it) {
	    boost::python::call(*it, addr, *str, val) ;
	  }

}
void cb_usb_ehci_opreg_write(uint32_t addr,const char *str,uint32_t val) {


	  for (auto it = py_usb_ehci_opreg_write.begin();
	       it != py_usb_ehci_opreg_write.end(); ++it) {
	    boost::python::call(*it, addr, *str, val) ;
	  }

}
void cb_usb_ehci_opreg_change(uint32_t addr,const char *str,uint32_t new,uint32_t old) {


	  for (auto it = py_usb_ehci_opreg_change.begin();
	       it != py_usb_ehci_opreg_change.end(); ++it) {
	    boost::python::call(*it, addr, *str, new, old) ;
	  }

}
void cb_usb_ehci_portsc_read(uint32_t addr,uint32_t port,uint32_t val) {


	  for (auto it = py_usb_ehci_portsc_read.begin();
	       it != py_usb_ehci_portsc_read.end(); ++it) {
	    boost::python::call(*it, addr, port, val) ;
	  }

}
void cb_usb_ehci_portsc_write(uint32_t addr,uint32_t port,uint32_t val) {


	  for (auto it = py_usb_ehci_portsc_write.begin();
	       it != py_usb_ehci_portsc_write.end(); ++it) {
	    boost::python::call(*it, addr, port, val) ;
	  }

}
void cb_usb_ehci_portsc_change(uint32_t addr,uint32_t port,uint32_t new,uint32_t old) {


	  for (auto it = py_usb_ehci_portsc_change.begin();
	       it != py_usb_ehci_portsc_change.end(); ++it) {
	    boost::python::call(*it, addr, port, new, old) ;
	  }

}
void cb_usb_ehci_usbsts(const char *sts,int state) {


	  for (auto it = py_usb_ehci_usbsts.begin();
	       it != py_usb_ehci_usbsts.end(); ++it) {
	    boost::python::call(*it, *sts, state) ;
	  }

}
void cb_usb_ehci_state(const char *schedule,const char *state) {


	  for (auto it = py_usb_ehci_state.begin();
	       it != py_usb_ehci_state.end(); ++it) {
	    boost::python::call(*it, *schedule, *state) ;
	  }

}
void cb_usb_ehci_qh_ptrs(void *q,uint32_t addr,uint32_t nxt,uint32_t c_qtd,uint32_t n_qtd,uint32_t a_qtd) {


	  for (auto it = py_usb_ehci_qh_ptrs.begin();
	       it != py_usb_ehci_qh_ptrs.end(); ++it) {
	    boost::python::call(*it, *q, addr, nxt, c_qtd, n_qtd, a_qtd) ;
	  }

}
void cb_usb_ehci_qh_fields(uint32_t addr,int rl,int mplen,int eps,int ep,int devaddr) {


	  for (auto it = py_usb_ehci_qh_fields.begin();
	       it != py_usb_ehci_qh_fields.end(); ++it) {
	    boost::python::call(*it, addr, rl, mplen, eps, ep, devaddr) ;
	  }

}
void cb_usb_ehci_qh_bits(uint32_t addr,int c,int h,int dtc,int i) {


	  for (auto it = py_usb_ehci_qh_bits.begin();
	       it != py_usb_ehci_qh_bits.end(); ++it) {
	    boost::python::call(*it, addr, c, h, dtc, i) ;
	  }

}
void cb_usb_ehci_qtd_ptrs(void *q,uint32_t addr,uint32_t nxt,uint32_t altnext) {


	  for (auto it = py_usb_ehci_qtd_ptrs.begin();
	       it != py_usb_ehci_qtd_ptrs.end(); ++it) {
	    boost::python::call(*it, *q, addr, nxt, altnext) ;
	  }

}
void cb_usb_ehci_qtd_fields(uint32_t addr,int tbytes,int cpage,int cerr,int pid) {


	  for (auto it = py_usb_ehci_qtd_fields.begin();
	       it != py_usb_ehci_qtd_fields.end(); ++it) {
	    boost::python::call(*it, addr, tbytes, cpage, cerr, pid) ;
	  }

}
void cb_usb_ehci_qtd_bits(uint32_t addr,int ioc,int active,int halt,int babble,int xacterr) {


	  for (auto it = py_usb_ehci_qtd_bits.begin();
	       it != py_usb_ehci_qtd_bits.end(); ++it) {
	    boost::python::call(*it, addr, ioc, active, halt, babble, xacterr) ;
	  }

}
void cb_usb_ehci_itd(uint32_t addr,uint32_t nxt,uint32_t mplen,uint32_t mult,uint32_t ep,uint32_t devaddr) {


	  for (auto it = py_usb_ehci_itd.begin();
	       it != py_usb_ehci_itd.end(); ++it) {
	    boost::python::call(*it, addr, nxt, mplen, mult, ep, devaddr) ;
	  }

}
void cb_usb_ehci_sitd(uint32_t addr,uint32_t nxt,uint32_t active) {


	  for (auto it = py_usb_ehci_sitd.begin();
	       it != py_usb_ehci_sitd.end(); ++it) {
	    boost::python::call(*it, addr, nxt, active) ;
	  }

}
void cb_usb_ehci_port_attach(uint32_t port,const char *owner,const char *device) {


	  for (auto it = py_usb_ehci_port_attach.begin();
	       it != py_usb_ehci_port_attach.end(); ++it) {
	    boost::python::call(*it, port, *owner, *device) ;
	  }

}
void cb_usb_ehci_port_detach(uint32_t port,const char *owner) {


	  for (auto it = py_usb_ehci_port_detach.begin();
	       it != py_usb_ehci_port_detach.end(); ++it) {
	    boost::python::call(*it, port, *owner) ;
	  }

}
void cb_usb_ehci_port_reset(uint32_t port,int enable) {


	  for (auto it = py_usb_ehci_port_reset.begin();
	       it != py_usb_ehci_port_reset.end(); ++it) {
	    boost::python::call(*it, port, enable) ;
	  }

}
void cb_usb_ehci_port_suspend(uint32_t port) {


	  for (auto it = py_usb_ehci_port_suspend.begin();
	       it != py_usb_ehci_port_suspend.end(); ++it) {
	    boost::python::call(* port) pe);
	  }

}
void cb_usb_ehci_port_wakeup(uint32_t port) {


	  for (auto it = py_usb_ehci_port_wakeup.begin();
	       it != py_usb_ehci_port_wakeup.end(); ++it) {
	    boost::python::call( port) ype);
	  }

}
void cb_usb_ehci_port_resume(uint32_t port) {


	  for (auto it = py_usb_ehci_port_resume.begin();
	       it != py_usb_ehci_port_resume.end(); ++it) {
	    boost::python::call( port) ype);
	  }

}
void cb_usb_ehci_queue_action(void *q,const char *action) {


	  for (auto it = py_usb_ehci_queue_action.begin();
	       it != py_usb_ehci_queue_action.end(); ++it) {
	    boost::python::call(*it, *q, *action) ;
	  }

}
void cb_usb_ehci_packet_action(void *q,void *p,const char *action) {


	  for (auto it = py_usb_ehci_packet_action.begin();
	       it != py_usb_ehci_packet_action.end(); ++it) {
	    boost::python::call(*it, *q, *p, *action) ;
	  }

}
void cb_usb_ehci_irq(uint32_t level,uint32_t frindex,uint32_t sts,uint32_t mask) {


	  for (auto it = py_usb_ehci_irq.begin();
	       it != py_usb_ehci_irq.end(); ++it) {
	    boost::python::call(*it, level, frindex, sts, mask) ;
	  }

}
void cb_usb_ehci_guest_bug(const char *reason) {


	  for (auto it = py_usb_ehci_guest_bug.begin();
	       it != py_usb_ehci_guest_bug.end(); ++it) {
	    boost::python::call(*it *reason) );
	  }

}
void cb_usb_ehci_doorbell_ring(void) {


	  for (auto it = py_usb_ehci_doorbell_ring.begin();
	       it != py_usb_ehci_doorbell_ring.end(); ++it) {
	    boost::pythonvoid) nt8_t type);
	  }

}
void cb_usb_ehci_doorbell_ack(void) {


	  for (auto it = py_usb_ehci_doorbell_ack.begin();
	       it != py_usb_ehci_doorbell_ack.end(); ++it) {
	    boost::pythovoid) int8_t type);
	  }

}
void cb_usb_ehci_dma_error(void) {


	  for (auto it = py_usb_ehci_dma_error.begin();
	       it != py_usb_ehci_dma_error.end(); ++it) {
	    boost::pyvoid) ,uint8_t type);
	  }

}

//# hcd-uhci.c
void cb_usb_uhci_reset(void) {


	  for (auto it = py_usb_uhci_reset.begin();
	       it != py_usb_uhci_reset.end(); ++it) {
	    boostvoid) (*it,uint8_t type);
	  }

}
void cb_usb_uhci_exit(void) {


	  for (auto it = py_usb_uhci_exit.begin();
	       it != py_usb_uhci_exit.end(); ++it) {
	    boosvoid) l(*it,uint8_t type);
	  }

}
void cb_usb_uhci_schedule_start(void) {


	  for (auto it = py_usb_uhci_schedule_start.begin();
	       it != py_usb_uhci_schedule_start.end(); ++it) {
	    boost::python:void) t8_t type);
	  }

}
void cb_usb_uhci_schedule_stop(void) {


	  for (auto it = py_usb_uhci_schedule_stop.begin();
	       it != py_usb_uhci_schedule_stop.end(); ++it) {
	    boost::pythonvoid) nt8_t type);
	  }

}
void cb_usb_uhci_frame_start(uint32_t num) {


	  for (auto it = py_usb_uhci_frame_start.begin();
	       it != py_usb_uhci_frame_start.end(); ++it) {
	    boost::python::call num) type);
	  }

}
void cb_usb_uhci_frame_stop_bandwidth(void) {


	  for (auto it = py_usb_uhci_frame_stop_bandwidth.begin();
	       it != py_usb_uhci_frame_stop_bandwidth.end(); ++it) {
	    boost::python::call() ype);
	  }

}
void cb_usb_uhci_frame_loop_stop_idle(void) {


	  for (auto it = py_usb_uhci_frame_loop_stop_idle.begin();
	       it != py_usb_uhci_frame_loop_stop_idle.end(); ++it) {
	    boost::python::call() ype);
	  }

}
void cb_usb_uhci_frame_loop_continue(void) {


	  for (auto it = py_usb_uhci_frame_loop_continue.begin();
	       it != py_usb_uhci_frame_loop_continue.end(); ++it) {
	    boost::python::call) type);
	  }

}
void cb_usb_uhci_mmio_readw(uint32_t addr,uint32_t val) {


	  for (auto it = py_usb_uhci_mmio_readw.begin();
	       it != py_usb_uhci_mmio_readw.end(); ++it) {
	    boost::python::call(*it, addr, val) ;
	  }

}
void cb_usb_uhci_mmio_writew(uint32_t addr,uint32_t val) {


	  for (auto it = py_usb_uhci_mmio_writew.begin();
	       it != py_usb_uhci_mmio_writew.end(); ++it) {
	    boost::python::call(*it, addr, val) ;
	  }

}
void cb_usb_uhci_queue_add(uint32_t token) {


	  for (auto it = py_usb_uhci_queue_add.begin();
	       it != py_usb_uhci_queue_add.end(); ++it) {
	    boost::python::call token) type);
	  }

}
void cb_usb_uhci_queue_del(uint32_t token,const char *reason) {


	  for (auto it = py_usb_uhci_queue_del.begin();
	       it != py_usb_uhci_queue_del.end(); ++it) {
	    boost::python::call(*it, token, *reason) ;
	  }

}
void cb_usb_uhci_packet_add(uint32_t token,uint32_t addr) {


	  for (auto it = py_usb_uhci_packet_add.begin();
	       it != py_usb_uhci_packet_add.end(); ++it) {
	    boost::python::call(*it, token, addr) ;
	  }

}
void cb_usb_uhci_packet_link_async(uint32_t token,uint32_t addr) {


	  for (auto it = py_usb_uhci_packet_link_async.begin();
	       it != py_usb_uhci_packet_link_async.end(); ++it) {
	    boost::python::call(*it, token, addr) ;
	  }

}
void cb_usb_uhci_packet_unlink_async(uint32_t token,uint32_t addr) {


	  for (auto it = py_usb_uhci_packet_unlink_async.begin();
	       it != py_usb_uhci_packet_unlink_async.end(); ++it) {
	    boost::python::call(*it, token, addr) ;
	  }

}
void cb_usb_uhci_packet_cancel(uint32_t token,uint32_t addr,int done) {


	  for (auto it = py_usb_uhci_packet_cancel.begin();
	       it != py_usb_uhci_packet_cancel.end(); ++it) {
	    boost::python::call(*it, token, addr, done) ;
	  }

}
void cb_usb_uhci_packet_complete_success(uint32_t token,uint32_t addr) {


	  for (auto it = py_usb_uhci_packet_complete_success.begin();
	       it != py_usb_uhci_packet_complete_success.end(); ++it) {
	    boost::python::call(*it, token, addr) ;
	  }

}
void cb_usb_uhci_packet_complete_shortxfer(uint32_t token,uint32_t addr) {


	  for (auto it = py_usb_uhci_packet_complete_shortxfer.begin();
	       it != py_usb_uhci_packet_complete_shortxfer.end(); ++it) {
	    boost::python::call(*it, token, addr) ;
	  }

}
void cb_usb_uhci_packet_complete_stall(uint32_t token,uint32_t addr) {


	  for (auto it = py_usb_uhci_packet_complete_stall.begin();
	       it != py_usb_uhci_packet_complete_stall.end(); ++it) {
	    boost::python::call(*it, token, addr) ;
	  }

}
void cb_usb_uhci_packet_complete_babble(uint32_t token,uint32_t addr) {


	  for (auto it = py_usb_uhci_packet_complete_babble.begin();
	       it != py_usb_uhci_packet_complete_babble.end(); ++it) {
	    boost::python::call(*it, token, addr) ;
	  }

}
void cb_usb_uhci_packet_complete_error(uint32_t token,uint32_t addr) {


	  for (auto it = py_usb_uhci_packet_complete_error.begin();
	       it != py_usb_uhci_packet_complete_error.end(); ++it) {
	    boost::python::call(*it, token, addr) ;
	  }

}
void cb_usb_uhci_packet_del(uint32_t token,uint32_t addr) {


	  for (auto it = py_usb_uhci_packet_del.begin();
	       it != py_usb_uhci_packet_del.end(); ++it) {
	    boost::python::call(*it, token, addr) ;
	  }

}
void cb_usb_uhci_qh_load(uint32_t qh) {


	  for (auto it = py_usb_uhci_qh_load.begin();
	       it != py_usb_uhci_qh_load.end(); ++it) {
	    boost::python:uint32_t qh) t8_t type);
	  }

}
void cb_usb_uhci_td_load(uint32_t qh,uint32_t td,uint32_t ctrl,uint32_t token) {


	  for (auto it = py_usb_uhci_td_load.begin();
	       it != py_usb_uhci_td_load.end(); ++it) {
	    boost::python::call(*it, qh, td, ctrl, token) ;
	  }

}
void cb_usb_uhci_td_queue(uint32_t td,uint32_t ctrl,uint32_t token) {


	  for (auto it = py_usb_uhci_td_queue.begin();
	       it != py_usb_uhci_td_queue.end(); ++it) {
	    boost::python::call(*it, td, ctrl, token) ;
	  }

}
void cb_usb_uhci_td_nextqh(uint32_t qh,uint32_t td) {


	  for (auto it = py_usb_uhci_td_nextqh.begin();
	       it != py_usb_uhci_td_nextqh.end(); ++it) {
	    boost::python::call(*it, qh, td) ;
	  }

}
void cb_usb_uhci_td_async(uint32_t qh,uint32_t td) {


	  for (auto it = py_usb_uhci_td_async.begin();
	       it != py_usb_uhci_td_async.end(); ++it) {
	    boost::python::call(*it, qh, td) ;
	  }

}
void cb_usb_uhci_td_complete(uint32_t qh,uint32_t td) {


	  for (auto it = py_usb_uhci_td_complete.begin();
	       it != py_usb_uhci_td_complete.end(); ++it) {
	    boost::python::call(*it, qh, td) ;
	  }

}

//# hcd-xhci.c
void cb_usb_xhci_reset(void) {


	  for (auto it = py_usb_xhci_reset.begin();
	       it != py_usb_xhci_reset.end(); ++it) {
	    boostvoid) (*it,uint8_t type);
	  }

}
void cb_usb_xhci_exit(void) {


	  for (auto it = py_usb_xhci_exit.begin();
	       it != py_usb_xhci_exit.end(); ++it) {
	    boosvoid) l(*it,uint8_t type);
	  }

}
void cb_usb_xhci_run(void) {


	  for (auto it = py_usb_xhci_run.begin();
	       it != py_usb_xhci_run.end(); ++it) {
	    boovoid) ll(*it,uint8_t type);
	  }

}
void cb_usb_xhci_stop(void) {


	  for (auto it = py_usb_xhci_stop.begin();
	       it != py_usb_xhci_stop.end(); ++it) {
	    boosvoid) l(*it,uint8_t type);
	  }

}
void cb_usb_xhci_cap_read(uint32_t off,uint32_t val) {


	  for (auto it = py_usb_xhci_cap_read.begin();
	       it != py_usb_xhci_cap_read.end(); ++it) {
	    boost::python::call(*it, off, val) ;
	  }

}
void cb_usb_xhci_oper_read(uint32_t off,uint32_t val) {


	  for (auto it = py_usb_xhci_oper_read.begin();
	       it != py_usb_xhci_oper_read.end(); ++it) {
	    boost::python::call(*it, off, val) ;
	  }

}
void cb_usb_xhci_port_read(uint32_t port,uint32_t off,uint32_t val) {


	  for (auto it = py_usb_xhci_port_read.begin();
	       it != py_usb_xhci_port_read.end(); ++it) {
	    boost::python::call(*it, port, off, val) ;
	  }

}
void cb_usb_xhci_runtime_read(uint32_t off,uint32_t val) {


	  for (auto it = py_usb_xhci_runtime_read.begin();
	       it != py_usb_xhci_runtime_read.end(); ++it) {
	    boost::python::call(*it, off, val) ;
	  }

}
void cb_usb_xhci_doorbell_read(uint32_t off,uint32_t val) {


	  for (auto it = py_usb_xhci_doorbell_read.begin();
	       it != py_usb_xhci_doorbell_read.end(); ++it) {
	    boost::python::call(*it, off, val) ;
	  }

}
void cb_usb_xhci_oper_write(uint32_t off,uint32_t val) {


	  for (auto it = py_usb_xhci_oper_write.begin();
	       it != py_usb_xhci_oper_write.end(); ++it) {
	    boost::python::call(*it, off, val) ;
	  }

}
void cb_usb_xhci_port_write(uint32_t port,uint32_t off,uint32_t val) {


	  for (auto it = py_usb_xhci_port_write.begin();
	       it != py_usb_xhci_port_write.end(); ++it) {
	    boost::python::call(*it, port, off, val) ;
	  }

}
void cb_usb_xhci_runtime_write(uint32_t off,uint32_t val) {


	  for (auto it = py_usb_xhci_runtime_write.begin();
	       it != py_usb_xhci_runtime_write.end(); ++it) {
	    boost::python::call(*it, off, val) ;
	  }

}
void cb_usb_xhci_doorbell_write(uint32_t off,uint32_t val) {


	  for (auto it = py_usb_xhci_doorbell_write.begin();
	       it != py_usb_xhci_doorbell_write.end(); ++it) {
	    boost::python::call(*it, off, val) ;
	  }

}
void cb_usb_xhci_irq_intx(uint32_t level) {


	  for (auto it = py_usb_xhci_irq_intx.begin();
	       it != py_usb_xhci_irq_intx.end(); ++it) {
	    boost::python::caluint32_t level)  type);
	  }

}
void cb_usb_xhci_irq_msi(uint32_t nr) {


	  for (auto it = py_usb_xhci_irq_msi.begin();
	       it != py_usb_xhci_irq_msi.end(); ++it) {
	    boost::python:uint32_t nr) t8_t type);
	  }

}
void cb_usb_xhci_irq_msix(uint32_t nr) {


	  for (auto it = py_usb_xhci_irq_msix.begin();
	       it != py_usb_xhci_irq_msix.end(); ++it) {
	    boost::python::uint32_t nr) 8_t type);
	  }

}
void cb_usb_xhci_irq_msix_use(uint32_t nr) {


	  for (auto it = py_usb_xhci_irq_msix_use.begin();
	       it != py_usb_xhci_irq_msix_use.end(); ++it) {
	    boost::python::call nr) type);
	  }

}
void cb_usb_xhci_irq_msix_unuse(uint32_t nr) {


	  for (auto it = py_usb_xhci_irq_msix_unuse.begin();
	       it != py_usb_xhci_irq_msix_unuse.end(); ++it) {
	    boost::python::call(* nr) pe);
	  }

}
void cb_usb_xhci_queue_event(uint32_t vector,uint32_t idx,const char *trb,const char *evt,uint64_t param,uint32_t status,uint32_t control) {


	  for (auto it = py_usb_xhci_queue_event.begin();
	       it != py_usb_xhci_queue_event.end(); ++it) {
	    boost::python::call(*it, vector, idx, *trb, *evt, param, status, control) ;
	  }

}
void cb_usb_xhci_fetch_trb(uint64_t addr,const char *name,uint64_t param,uint32_t status,uint32_t control) {


	  for (auto it = py_usb_xhci_fetch_trb.begin();
	       it != py_usb_xhci_fetch_trb.end(); ++it) {
	    boost::python::call(*it, addr, *name, param, status, control) ;
	  }

}
void cb_usb_xhci_port_reset(uint32_t port,bool warm) {


	  for (auto it = py_usb_xhci_port_reset.begin();
	       it != py_usb_xhci_port_reset.end(); ++it) {
	    boost::python::call(*it, port, warm) ;
	  }

}
void cb_usb_xhci_port_link(uint32_t port,uint32_t pls) {


	  for (auto it = py_usb_xhci_port_link.begin();
	       it != py_usb_xhci_port_link.end(); ++it) {
	    boost::python::call(*it, port, pls) ;
	  }

}
void cb_usb_xhci_port_notify(uint32_t port,uint32_t pls) {


	  for (auto it = py_usb_xhci_port_notify.begin();
	       it != py_usb_xhci_port_notify.end(); ++it) {
	    boost::python::call(*it, port, pls) ;
	  }

}
void cb_usb_xhci_slot_enable(uint32_t slotid) {


	  for (auto it = py_usb_xhci_slot_enable.begin();
	       it != py_usb_xhci_slot_enable.end(); ++it) {
	    boost::python::call(*i slotid) e);
	  }

}
void cb_usb_xhci_slot_disable(uint32_t slotid) {


	  for (auto it = py_usb_xhci_slot_disable.begin();
	       it != py_usb_xhci_slot_disable.end(); ++it) {
	    boost::python::call(*it slotid) );
	  }

}
void cb_usb_xhci_slot_address(uint32_t slotid,const char *port) {


	  for (auto it = py_usb_xhci_slot_address.begin();
	       it != py_usb_xhci_slot_address.end(); ++it) {
	    boost::python::call(*it, slotid, *port) ;
	  }

}
void cb_usb_xhci_slot_configure(uint32_t slotid) {


	  for (auto it = py_usb_xhci_slot_configure.begin();
	       it != py_usb_xhci_slot_configure.end(); ++it) {
	    boost::python::call(*it, slotid) ;
	  }

}
void cb_usb_xhci_slot_evaluate(uint32_t slotid) {


	  for (auto it = py_usb_xhci_slot_evaluate.begin();
	       it != py_usb_xhci_slot_evaluate.end(); ++it) {
	    boost::python::call(*it, slotid) ;
	  }

}
void cb_usb_xhci_slot_reset(uint32_t slotid) {


	  for (auto it = py_usb_xhci_slot_reset.begin();
	       it != py_usb_xhci_slot_reset.end(); ++it) {
	    boost::python::call(* slotid) pe);
	  }

}
void cb_usb_xhci_ep_enable(uint32_t slotid,uint32_t epid) {


	  for (auto it = py_usb_xhci_ep_enable.begin();
	       it != py_usb_xhci_ep_enable.end(); ++it) {
	    boost::python::call(*it, slotid, epid) ;
	  }

}
void cb_usb_xhci_ep_disable(uint32_t slotid,uint32_t epid) {


	  for (auto it = py_usb_xhci_ep_disable.begin();
	       it != py_usb_xhci_ep_disable.end(); ++it) {
	    boost::python::call(*it, slotid, epid) ;
	  }

}
void cb_usb_xhci_ep_set_dequeue(uint32_t slotid,uint32_t epid,uint32_t streamid,uint64_t param) {


	  for (auto it = py_usb_xhci_ep_set_dequeue.begin();
	       it != py_usb_xhci_ep_set_dequeue.end(); ++it) {
	    boost::python::call(*it, slotid, epid, streamid, param) ;
	  }

}
void cb_usb_xhci_ep_kick(uint32_t slotid,uint32_t epid,uint32_t streamid) {


	  for (auto it = py_usb_xhci_ep_kick.begin();
	       it != py_usb_xhci_ep_kick.end(); ++it) {
	    boost::python::call(*it, slotid, epid, streamid) ;
	  }

}
void cb_usb_xhci_ep_stop(uint32_t slotid,uint32_t epid) {


	  for (auto it = py_usb_xhci_ep_stop.begin();
	       it != py_usb_xhci_ep_stop.end(); ++it) {
	    boost::python::call(*it, slotid, epid) ;
	  }

}
void cb_usb_xhci_ep_reset(uint32_t slotid,uint32_t epid) {


	  for (auto it = py_usb_xhci_ep_reset.begin();
	       it != py_usb_xhci_ep_reset.end(); ++it) {
	    boost::python::call(*it, slotid, epid) ;
	  }

}
void cb_usb_xhci_ep_state(uint32_t slotid,uint32_t epid,const char *os,const char *ns) {


	  for (auto it = py_usb_xhci_ep_state.begin();
	       it != py_usb_xhci_ep_state.end(); ++it) {
	    boost::python::call(*it, slotid, epid, *os, *ns) ;
	  }

}
void cb_usb_xhci_xfer_start(void *xfer,uint32_t slotid,uint32_t epid,uint32_t streamid) {


	  for (auto it = py_usb_xhci_xfer_start.begin();
	       it != py_usb_xhci_xfer_start.end(); ++it) {
	    boost::python::call(*it, *xfer, slotid, epid, streamid) ;
	  }

}
void cb_usb_xhci_xfer_async(void *xfer) {


	  for (auto it = py_usb_xhci_xfer_async.begin();
	       it != py_usb_xhci_xfer_async.end(); ++it) {
	    boost::python::cvoid *xfer) _t type);
	  }

}
void cb_usb_xhci_xfer_nak(void *xfer) {


	  for (auto it = py_usb_xhci_xfer_nak.begin();
	       it != py_usb_xhci_xfer_nak.end(); ++it) {
	    boost::python:void *xfer) t8_t type);
	  }

}
void cb_usb_xhci_xfer_retry(void *xfer) {


	  for (auto it = py_usb_xhci_xfer_retry.begin();
	       it != py_usb_xhci_xfer_retry.end(); ++it) {
	    boost::python::cvoid *xfer) _t type);
	  }

}
void cb_usb_xhci_xfer_success(void *xfer,uint32_t bytes) {


	  for (auto it = py_usb_xhci_xfer_success.begin();
	       it != py_usb_xhci_xfer_success.end(); ++it) {
	    boost::python::call(*it, *xfer, bytes) ;
	  }

}
void cb_usb_xhci_xfer_error(void *xfer,uint32_t ret) {


	  for (auto it = py_usb_xhci_xfer_error.begin();
	       it != py_usb_xhci_xfer_error.end(); ++it) {
	    boost::python::call(*it, *xfer, ret) ;
	  }

}
void cb_usb_xhci_unimplemented(const char *item,int nr) {


	  for (auto it = py_usb_xhci_unimplemented.begin();
	       it != py_usb_xhci_unimplemented.end(); ++it) {
	    boost::python::call(*it, *item, nr) ;
	  }

}
void cb_usb_xhci_enforced_limit(const char *item) {


	  for (auto it = py_usb_xhci_enforced_limit.begin();
	       it != py_usb_xhci_enforced_limit.end(); ++it) {
	    boost::python::call(*it, *item) ;
	  }

}

//# hcd-dwc2.c
void cb_usb_dwc2_update_irq(uint32_t level) {


	  for (auto it = py_usb_dwc2_update_irq.begin();
	       it != py_usb_dwc2_update_irq.end(); ++it) {
	    boost::python::call( level) ype);
	  }

}
void cb_usb_dwc2_raise_global_irq(uint32_t intr) {


	  for (auto it = py_usb_dwc2_raise_global_irq.begin();
	       it != py_usb_dwc2_raise_global_irq.end(); ++it) {
	    boost::python::call(*it,r) ;
	  }

}
void cb_usb_dwc2_lower_global_irq(uint32_t intr) {


	  for (auto it = py_usb_dwc2_lower_global_irq.begin();
	       it != py_usb_dwc2_lower_global_irq.end(); ++it) {
	    boost::python::call(*it,r) ;
	  }

}
void cb_usb_dwc2_raise_host_irq(uint32_t intr) {


	  for (auto it = py_usb_dwc2_raise_host_irq.begin();
	       it != py_usb_dwc2_raise_host_irq.end(); ++it) {
	    boost::python::call(*itr) );
	  }

}
void cb_usb_dwc2_lower_host_irq(uint32_t intr) {


	  for (auto it = py_usb_dwc2_lower_host_irq.begin();
	       it != py_usb_dwc2_lower_host_irq.end(); ++it) {
	    boost::python::call(*itr) );
	  }

}
void cb_usb_dwc2_sof(int64_t next) {


	  for (auto it = py_usb_dwc2_sof.begin();
	       it != py_usb_dwc2_sof.end(); ++it) {
	    boost::pythint64_t next) uint8_t type);
	  }

}
void cb_usb_dwc2_bus_start(void) {


	  for (auto it = py_usb_dwc2_bus_start.begin();
	       it != py_usb_dwc2_bus_start.end(); ++it) {
	    boost::pyvoid) ,uint8_t type);
	  }

}
void cb_usb_dwc2_bus_stop(void) {


	  for (auto it = py_usb_dwc2_bus_stop.begin();
	       it != py_usb_dwc2_bus_stop.end(); ++it) {
	    boost::pvoid) t,uint8_t type);
	  }

}
void cb_usb_dwc2_find_device(uint8_t addr) {


	  for (auto it = py_usb_dwc2_find_device.begin();
	       it != py_usb_dwc2_find_device.end(); ++it) {
	    boost::python::call addr) type);
	  }

}
void cb_usb_dwc2_port_disabled(uint32_t pnum) {


	  for (auto it = py_usb_dwc2_port_disabled.begin();
	       it != py_usb_dwc2_port_disabled.end(); ++it) {
	    boost::python::call(*i pnum) e);
	  }

}
void cb_usb_dwc2_device_found(uint32_t pnum) {


	  for (auto it = py_usb_dwc2_device_found.begin();
	       it != py_usb_dwc2_device_found.end(); ++it) {
	    boost::python::call(* pnum) pe);
	  }

}
void cb_usb_dwc2_device_not_found(void) {


	  for (auto it = py_usb_dwc2_device_not_found.begin();
	       it != py_usb_dwc2_device_not_found.end(); ++it) {
	    boost::python::cvoid) _t type);
	  }

}
void cb_usb_dwc2_handle_packet(uint32_t chan,void *dev,void *pkt,uint32_t ep,const char *type,const char *dir,uint32_t mps,uint32_t len,uint32_t pcnt) {


	  for (auto it = py_usb_dwc2_handle_packet.begin();
	       it != py_usb_dwc2_handle_packet.end(); ++it) {
	    boost::python::call(*it, chan, *dev, *pkt, ep, *type, *dir, mps, len, pcnt) ;
	  }

}
void cb_usb_dwc2_memory_read(uint32_t addr,uint32_t len) {


	  for (auto it = py_usb_dwc2_memory_read.begin();
	       it != py_usb_dwc2_memory_read.end(); ++it) {
	    boost::python::call(*it, addr, len) ;
	  }

}
void cb_usb_dwc2_packet_status(const char *status,uint32_t len) {


	  for (auto it = py_usb_dwc2_packet_status.begin();
	       it != py_usb_dwc2_packet_status.end(); ++it) {
	    boost::python::call(*it, *status, len) ;
	  }

}
void cb_usb_dwc2_packet_error(const char *status) {


	  for (auto it = py_usb_dwc2_packet_error.begin();
	       it != py_usb_dwc2_packet_error.end(); ++it) {
	    boost::python::call(*it, *status) ;
	  }

}
void cb_usb_dwc2_async_packet(void *pkt,uint32_t chan,void *dev,uint32_t ep,const char *dir,uint32_t len) {


	  for (auto it = py_usb_dwc2_async_packet.begin();
	       it != py_usb_dwc2_async_packet.end(); ++it) {
	    boost::python::call(*it, *pkt, chan, *dev, ep, *dir, len) ;
	  }

}
void cb_usb_dwc2_memory_write(uint32_t addr,uint32_t len) {


	  for (auto it = py_usb_dwc2_memory_write.begin();
	       it != py_usb_dwc2_memory_write.end(); ++it) {
	    boost::python::call(*it, addr, len) ;
	  }

}
void cb_usb_dwc2_packet_done(const char *status,uint32_t actual,uint32_t len,uint32_t pcnt) {


	  for (auto it = py_usb_dwc2_packet_done.begin();
	       it != py_usb_dwc2_packet_done.end(); ++it) {
	    boost::python::call(*it, *status, actual, len, pcnt) ;
	  }

}
void cb_usb_dwc2_packet_next(const char *status,uint32_t len,uint32_t pcnt) {


	  for (auto it = py_usb_dwc2_packet_next.begin();
	       it != py_usb_dwc2_packet_next.end(); ++it) {
	    boost::python::call(*it, *status, len, pcnt) ;
	  }

}
void cb_usb_dwc2_attach(void *port) {


	  for (auto it = py_usb_dwc2_attach.begin();
	       it != py_usb_dwc2_attach.end(); ++it) {
	    boost::pythovoid *port) int8_t type);
	  }

}
void cb_usb_dwc2_attach_speed(const char *speed) {


	  for (auto it = py_usb_dwc2_attach_speed.begin();
	       it != py_usb_dwc2_attach_speed.end(); ++it) {
	    boost::python::call(*it, *speed) ;
	  }

}
void cb_usb_dwc2_detach(void *port) {


	  for (auto it = py_usb_dwc2_detach.begin();
	       it != py_usb_dwc2_detach.end(); ++it) {
	    boost::pythovoid *port) int8_t type);
	  }

}
void cb_usb_dwc2_child_detach(void *port,void *child) {


	  for (auto it = py_usb_dwc2_child_detach.begin();
	       it != py_usb_dwc2_child_detach.end(); ++it) {
	    boost::python::call(*it, *port, *child) ;
	  }

}
void cb_usb_dwc2_wakeup(void *port) {


	  for (auto it = py_usb_dwc2_wakeup.begin();
	       it != py_usb_dwc2_wakeup.end(); ++it) {
	    boost::pythovoid *port) int8_t type);
	  }

}
void cb_usb_dwc2_async_packet_complete(void *port,void *pkt,uint32_t chan,void *dev,uint32_t ep,const char *dir,uint32_t len) {


	  for (auto it = py_usb_dwc2_async_packet_complete.begin();
	       it != py_usb_dwc2_async_packet_complete.end(); ++it) {
	    boost::python::call(*it, *port, *pkt, chan, *dev, ep, *dir, len) ;
	  }

}
void cb_usb_dwc2_work_bh(void) {


	  for (auto it = py_usb_dwc2_work_bh.begin();
	       it != py_usb_dwc2_work_bh.end(); ++it) {
	    boost::void) it,uint8_t type);
	  }

}
void cb_usb_dwc2_work_bh_service(uint32_t first,uint32_t current,void *dev,uint32_t ep) {


	  for (auto it = py_usb_dwc2_work_bh_service.begin();
	       it != py_usb_dwc2_work_bh_service.end(); ++it) {
	    boost::python::call(*it, first, current, *dev, ep) ;
	  }

}
void cb_usb_dwc2_work_bh_next(uint32_t chan) {


	  for (auto it = py_usb_dwc2_work_bh_next.begin();
	       it != py_usb_dwc2_work_bh_next.end(); ++it) {
	    boost::python::call(* chan) pe);
	  }

}
void cb_usb_dwc2_enable_chan(uint32_t chan,void *dev,void *pkt,uint32_t ep) {


	  for (auto it = py_usb_dwc2_enable_chan.begin();
	       it != py_usb_dwc2_enable_chan.end(); ++it) {
	    boost::python::call(*it, chan, *dev, *pkt, ep) ;
	  }

}
void cb_usb_dwc2_glbreg_read(uint64_t addr,const char *reg,uint32_t val) {


	  for (auto it = py_usb_dwc2_glbreg_read.begin();
	       it != py_usb_dwc2_glbreg_read.end(); ++it) {
	    boost::python::call(*it, addr, *reg, val) ;
	  }

}
void cb_usb_dwc2_glbreg_write(uint64_t addr,const char *reg,uint64_t val,uint32_t old,uint64_t result) {


	  for (auto it = py_usb_dwc2_glbreg_write.begin();
	       it != py_usb_dwc2_glbreg_write.end(); ++it) {
	    boost::python::call(*it, addr, *reg, val, old, result) ;
	  }

}
void cb_usb_dwc2_fszreg_read(uint64_t addr,uint32_t val) {


	  for (auto it = py_usb_dwc2_fszreg_read.begin();
	       it != py_usb_dwc2_fszreg_read.end(); ++it) {
	    boost::python::call(*it, addr, val) ;
	  }

}
void cb_usb_dwc2_fszreg_write(uint64_t addr,uint64_t val,uint32_t old,uint64_t result) {


	  for (auto it = py_usb_dwc2_fszreg_write.begin();
	       it != py_usb_dwc2_fszreg_write.end(); ++it) {
	    boost::python::call(*it, addr, val, old, result) ;
	  }

}
void cb_usb_dwc2_hreg0_read(uint64_t addr,const char *reg,uint32_t val) {


	  for (auto it = py_usb_dwc2_hreg0_read.begin();
	       it != py_usb_dwc2_hreg0_read.end(); ++it) {
	    boost::python::call(*it, addr, *reg, val) ;
	  }

}
void cb_usb_dwc2_hreg0_write(uint64_t addr,const char *reg,uint64_t val,uint32_t old,uint64_t result) {


	  for (auto it = py_usb_dwc2_hreg0_write.begin();
	       it != py_usb_dwc2_hreg0_write.end(); ++it) {
	    boost::python::call(*it, addr, *reg, val, old, result) ;
	  }

}
void cb_usb_dwc2_hreg1_read(uint64_t addr,const char *reg,uint64_t chan,uint32_t val) {


	  for (auto it = py_usb_dwc2_hreg1_read.begin();
	       it != py_usb_dwc2_hreg1_read.end(); ++it) {
	    boost::python::call(*it, addr, *reg, chan, val) ;
	  }

}
void cb_usb_dwc2_hreg1_write(uint64_t addr,const char *reg,uint64_t chan,uint64_t val,uint32_t old,uint64_t result) {


	  for (auto it = py_usb_dwc2_hreg1_write.begin();
	       it != py_usb_dwc2_hreg1_write.end(); ++it) {
	    boost::python::call(*it, addr, *reg, chan, val, old, result) ;
	  }

}
void cb_usb_dwc2_pcgreg_read(uint64_t addr,const char *reg,uint32_t val) {


	  for (auto it = py_usb_dwc2_pcgreg_read.begin();
	       it != py_usb_dwc2_pcgreg_read.end(); ++it) {
	    boost::python::call(*it, addr, *reg, val) ;
	  }

}
void cb_usb_dwc2_pcgreg_write(uint64_t addr,const char *reg,uint64_t val,uint32_t old,uint64_t result) {


	  for (auto it = py_usb_dwc2_pcgreg_write.begin();
	       it != py_usb_dwc2_pcgreg_write.end(); ++it) {
	    boost::python::call(*it, addr, *reg, val, old, result) ;
	  }

}
void cb_usb_dwc2_hreg2_read(uint64_t addr,uint64_t fifo,uint32_t val) {


	  for (auto it = py_usb_dwc2_hreg2_read.begin();
	       it != py_usb_dwc2_hreg2_read.end(); ++it) {
	    boost::python::call(*it, addr, fifo, val) ;
	  }

}
void cb_usb_dwc2_hreg2_write(uint64_t addr,uint64_t fifo,uint64_t val,uint32_t old,uint64_t result) {


	  for (auto it = py_usb_dwc2_hreg2_write.begin();
	       it != py_usb_dwc2_hreg2_write.end(); ++it) {
	    boost::python::call(*it, addr, fifo, val, old, result) ;
	  }

}
void cb_usb_dwc2_hreg0_action(const char *s) {


	  for (auto it = py_usb_dwc2_hreg0_action.begin();
	       it != py_usb_dwc2_hreg0_action.end(); ++it) {
	    boost::python::call(* *s) pe);
	  }

}
void cb_usb_dwc2_wakeup_endpoint(void *ep,uint32_t stream) {


	  for (auto it = py_usb_dwc2_wakeup_endpoint.begin();
	       it != py_usb_dwc2_wakeup_endpoint.end(); ++it) {
	    boost::python::call(*it, *ep, stream) ;
	  }

}
void cb_usb_dwc2_work_timer(void) {


	  for (auto it = py_usb_dwc2_work_timer.begin();
	       it != py_usb_dwc2_work_timer.end(); ++it) {
	    boost::pytvoid)  uint8_t type);
	  }

}
void cb_usb_dwc2_reset_enter(void) {


	  for (auto it = py_usb_dwc2_reset_enter.begin();
	       it != py_usb_dwc2_reset_enter.end(); ++it) {
	    boost::pythvoid) uint8_t type);
	  }

}
void cb_usb_dwc2_reset_hold(void) {


	  for (auto it = py_usb_dwc2_reset_hold.begin();
	       it != py_usb_dwc2_reset_hold.end(); ++it) {
	    boost::pytvoid)  uint8_t type);
	  }

}
void cb_usb_dwc2_reset_exit(void) {


	  for (auto it = py_usb_dwc2_reset_exit.begin();
	       it != py_usb_dwc2_reset_exit.end(); ++it) {
	    boost::pytvoid)  uint8_t type);
	  }

}

//# desc.c
void cb_usb_desc_device(int addr,int len,int ret) {


	  for (auto it = py_usb_desc_device.begin();
	       it != py_usb_desc_device.end(); ++it) {
	    boost::python::call(*it, addr, len, ret) ;
	  }

}
void cb_usb_desc_device_qualifier(int addr,int len,int ret) {


	  for (auto it = py_usb_desc_device_qualifier.begin();
	       it != py_usb_desc_device_qualifier.end(); ++it) {
	    boost::python::call(*it, addr, len, ret) ;
	  }

}
void cb_usb_desc_config(int addr,int index,int len,int ret) {


	  for (auto it = py_usb_desc_config.begin();
	       it != py_usb_desc_config.end(); ++it) {
	    boost::python::call(*it, addr, index, len, ret) ;
	  }

}
void cb_usb_desc_other_speed_config(int addr,int index,int len,int ret) {


	  for (auto it = py_usb_desc_other_speed_config.begin();
	       it != py_usb_desc_other_speed_config.end(); ++it) {
	    boost::python::call(*it, addr, index, len, ret) ;
	  }

}
void cb_usb_desc_string(int addr,int index,int len,int ret) {


	  for (auto it = py_usb_desc_string.begin();
	       it != py_usb_desc_string.end(); ++it) {
	    boost::python::call(*it, addr, index, len, ret) ;
	  }

}
void cb_usb_desc_bos(int addr,int len,int ret) {


	  for (auto it = py_usb_desc_bos.begin();
	       it != py_usb_desc_bos.end(); ++it) {
	    boost::python::call(*it, addr, len, ret) ;
	  }

}
void cb_usb_desc_msos(int addr,int index,int len,int ret) {


	  for (auto it = py_usb_desc_msos.begin();
	       it != py_usb_desc_msos.end(); ++it) {
	    boost::python::call(*it, addr, index, len, ret) ;
	  }

}
void cb_usb_set_addr(int addr) {


	  for (auto it = py_usb_set_addr.begin();
	       it != py_usb_set_addr.end(); ++it) {
	    boost::int addr) it,uint8_t type);
	  }

}
void cb_usb_set_config(int addr,int config,int ret) {


	  for (auto it = py_usb_set_config.begin();
	       it != py_usb_set_config.end(); ++it) {
	    boost::python::call(*it, addr, config, ret) ;
	  }

}
void cb_usb_set_interface(int addr,int iface,int alt,int ret) {


	  for (auto it = py_usb_set_interface.begin();
	       it != py_usb_set_interface.end(); ++it) {
	    boost::python::call(*it, addr, iface, alt, ret) ;
	  }

}
void cb_usb_clear_device_feature(int addr,int feature,int ret) {


	  for (auto it = py_usb_clear_device_feature.begin();
	       it != py_usb_clear_device_feature.end(); ++it) {
	    boost::python::call(*it, addr, feature, ret) ;
	  }

}
void cb_usb_set_device_feature(int addr,int feature,int ret) {


	  for (auto it = py_usb_set_device_feature.begin();
	       it != py_usb_set_device_feature.end(); ++it) {
	    boost::python::call(*it, addr, feature, ret) ;
	  }

}

//# dev-hub.c
void cb_usb_hub_reset(int addr) {


	  for (auto it = py_usb_hub_reset.begin();
	       it != py_usb_hub_reset.end(); ++it) {
	    boost::pint addr) t,uint8_t type);
	  }

}
void cb_usb_hub_control(int addr,int request,int value,int index,int length) {


	  for (auto it = py_usb_hub_control.begin();
	       it != py_usb_hub_control.end(); ++it) {
	    boost::python::call(*it, addr, request, value, index, length) ;
	  }

}
void cb_usb_hub_get_port_status(int addr,int nr,int status,int changed) {


	  for (auto it = py_usb_hub_get_port_status.begin();
	       it != py_usb_hub_get_port_status.end(); ++it) {
	    boost::python::call(*it, addr, nr, status, changed) ;
	  }

}
void cb_usb_hub_set_port_feature(int addr,int nr,const char *f) {


	  for (auto it = py_usb_hub_set_port_feature.begin();
	       it != py_usb_hub_set_port_feature.end(); ++it) {
	    boost::python::call(*it, addr, nr, *f) ;
	  }

}
void cb_usb_hub_clear_port_feature(int addr,int nr,const char *f) {


	  for (auto it = py_usb_hub_clear_port_feature.begin();
	       it != py_usb_hub_clear_port_feature.end(); ++it) {
	    boost::python::call(*it, addr, nr, *f) ;
	  }

}
void cb_usb_hub_attach(int addr,int nr) {


	  for (auto it = py_usb_hub_attach.begin();
	       it != py_usb_hub_attach.end(); ++it) {
	    boost::python::caint addr,int nr) t type);
	  }

}
void cb_usb_hub_detach(int addr,int nr) {


	  for (auto it = py_usb_hub_detach.begin();
	       it != py_usb_hub_detach.end(); ++it) {
	    boost::python::caint addr,int nr) t type);
	  }

}
void cb_usb_hub_status_report(int addr,int status) {


	  for (auto it = py_usb_hub_status_report.begin();
	       it != py_usb_hub_status_report.end(); ++it) {
	    boost::python::call(*it, addr, status) ;
	  }

}

//# dev-storage.c
void cb_usb_msd_reset(void) {


	  for (auto it = py_usb_msd_reset.begin();
	       it != py_usb_msd_reset.end(); ++it) {
	    boosvoid) l(*it,uint8_t type);
	  }

}
void cb_usb_msd_maxlun(unsigned maxlun) {


	  for (auto it = py_usb_msd_maxlun.begin();
	       it != py_usb_msd_maxlun.end(); ++it) {
	    boost::python::cunsigned maxlun) _t type);
	  }

}
void cb_usb_msd_send_status(unsigned status,unsigned tag,size_t size) {


	  for (auto it = py_usb_msd_send_status.begin();
	       it != py_usb_msd_send_status.end(); ++it) {
	    boost::python::call(*it, status, tag,size size) ;
	  }

}
void cb_usb_msd_data_in(unsigned packet,unsigned remaining,unsigned total) {


	  for (auto it = py_usb_msd_data_in.begin();
	       it != py_usb_msd_data_in.end(); ++it) {
	    boost::python::call(*it, packet, remaining, total) ;
	  }

}
void cb_usb_msd_data_out(unsigned packet,unsigned remaining) {


	  for (auto it = py_usb_msd_data_out.begin();
	       it != py_usb_msd_data_out.end(); ++it) {
	    boost::python::call(*it, packet, remaining) ;
	  }

}
void cb_usb_msd_packet_async(void) {


	  for (auto it = py_usb_msd_packet_async.begin();
	       it != py_usb_msd_packet_async.end(); ++it) {
	    boost::pythvoid) uint8_t type);
	  }

}
void cb_usb_msd_packet_complete(void) {


	  for (auto it = py_usb_msd_packet_complete.begin();
	       it != py_usb_msd_packet_complete.end(); ++it) {
	    boost::python:void) t8_t type);
	  }

}
void cb_usb_msd_cmd_submit(unsigned lun,unsigned tag,unsigned flags,unsigned len,unsigned data_len) {


	  for (auto it = py_usb_msd_cmd_submit.begin();
	       it != py_usb_msd_cmd_submit.end(); ++it) {
	    boost::python::call(*it, lun, tag, flags, len, data_len) ;
	  }

}
void cb_usb_msd_cmd_complete(unsigned status,unsigned tag) {


	  for (auto it = py_usb_msd_cmd_complete.begin();
	       it != py_usb_msd_cmd_complete.end(); ++it) {
	    boost::python::call(*it, status, tag) ;
	  }

}
void cb_usb_msd_cmd_cancel(unsigned tag) {


	  for (auto it = py_usb_msd_cmd_cancel.begin();
	       it != py_usb_msd_cmd_cancel.end(); ++it) {
	    boost::python::caunsigned tag) t type);
	  }

}

//# dev-uas.c
void cb_usb_uas_reset(int addr) {


	  for (auto it = py_usb_uas_reset.begin();
	       it != py_usb_uas_reset.end(); ++it) {
	    boost::pint addr) t,uint8_t type);
	  }

}
void cb_usb_uas_command(int addr,uint16_t tag,int lun,uint32_t lun64_1,uint32_t lun64_2) {


	  for (auto it = py_usb_uas_command.begin();
	       it != py_usb_uas_command.end(); ++it) {
	    boost::python::call(*it, addr, tag, lun, lun64_1, lun64_2) ;
	  }

}
void cb_usb_uas_response(int addr,uint16_t tag,uint8_t code) {


	  for (auto it = py_usb_uas_response.begin();
	       it != py_usb_uas_response.end(); ++it) {
	    boost::python::call(*it, addr, tag, code) ;
	  }

}
void cb_usb_uas_sense(int addr,uint16_t tag,uint8_t status) {


	  for (auto it = py_usb_uas_sense.begin();
	       it != py_usb_uas_sense.end(); ++it) {
	    boost::python::call(*it, addr, tag, status) ;
	  }

}
void cb_usb_uas_read_ready(int addr,uint16_t tag) {


	  for (auto it = py_usb_uas_read_ready.begin();
	       it != py_usb_uas_read_ready.end(); ++it) {
	    boost::python::call(*it, addr, tag) ;
	  }

}
void cb_usb_uas_write_ready(int addr,uint16_t tag) {


	  for (auto it = py_usb_uas_write_ready.begin();
	       it != py_usb_uas_write_ready.end(); ++it) {
	    boost::python::call(*it, addr, tag) ;
	  }

}
void cb_usb_uas_xfer_data(int addr,uint16_t tag,uint32_t copy,uint32_t uoff,uint32_t usize,uint32_t soff,uint32_t ssize) {


	  for (auto it = py_usb_uas_xfer_data.begin();
	       it != py_usb_uas_xfer_data.end(); ++it) {
	    boost::python::call(*it, addr, tag, copy, uoff, usize, soff, ssize) ;
	  }

}
void cb_usb_uas_scsi_data(int addr,uint16_t tag,uint32_t bytes) {


	  for (auto it = py_usb_uas_scsi_data.begin();
	       it != py_usb_uas_scsi_data.end(); ++it) {
	    boost::python::call(*it, addr, tag, bytes) ;
	  }

}
void cb_usb_uas_scsi_complete(int addr,uint16_t tag,uint32_t status,uint32_t resid) {


	  for (auto it = py_usb_uas_scsi_complete.begin();
	       it != py_usb_uas_scsi_complete.end(); ++it) {
	    boost::python::call(*it, addr, tag, status, resid) ;
	  }

}
void cb_usb_uas_tmf_abort_task(int addr,uint16_t tag,uint16_t task_tag) {


	  for (auto it = py_usb_uas_tmf_abort_task.begin();
	       it != py_usb_uas_tmf_abort_task.end(); ++it) {
	    boost::python::call(*it, addr, tag, taskag) ;
	  }

}
void cb_usb_uas_tmf_logical_unit_reset(int addr,uint16_t tag,int lun) {


	  for (auto it = py_usb_uas_tmf_logical_unit_reset.begin();
	       it != py_usb_uas_tmf_logical_unit_reset.end(); ++it) {
	    boost::python::call(*it, addr, tag, lun) ;
	  }

}
void cb_usb_uas_tmf_unsupported(int addr,uint16_t tag,uint32_t function) {


	  for (auto it = py_usb_uas_tmf_unsupported.begin();
	       it != py_usb_uas_tmf_unsupported.end(); ++it) {
	    boost::python::call(*it, addr, tag, function) ;
	  }

}

//# dev-mtp.c
void cb_usb_mtp_reset(int addr) {


	  for (auto it = py_usb_mtp_reset.begin();
	       it != py_usb_mtp_reset.end(); ++it) {
	    boost::pint addr) t,uint8_t type);
	  }

}
void cb_usb_mtp_command(int dev,uint16_t code,uint32_t trans,uint32_t arg0,uint32_t arg1,uint32_t arg2,uint32_t arg3,uint32_t arg4) {


	  for (auto it = py_usb_mtp_command.begin();
	       it != py_usb_mtp_command.end(); ++it) {
	    boost::python::call(*it, dev, code, trans, arg0, arg1, arg2, arg3, arg4) ;
	  }

}
void cb_usb_mtp_success(int dev,uint32_t trans,uint32_t arg0,uint32_t arg1) {


	  for (auto it = py_usb_mtp_success.begin();
	       it != py_usb_mtp_success.end(); ++it) {
	    boost::python::call(*it, dev, trans, arg0, arg1) ;
	  }

}
void cb_usb_mtp_error(int dev,uint16_t code,uint32_t trans,uint32_t arg0,uint32_t arg1) {


	  for (auto it = py_usb_mtp_error.begin();
	       it != py_usb_mtp_error.end(); ++it) {
	    boost::python::call(*it, dev, code, trans, arg0, arg1) ;
	  }

}
void cb_usb_mtp_data_in(int dev,uint32_t trans,uint32_t len) {


	  for (auto it = py_usb_mtp_data_in.begin();
	       it != py_usb_mtp_data_in.end(); ++it) {
	    boost::python::call(*it, dev, trans, len) ;
	  }

}
void cb_usb_mtp_xfer(int dev,uint32_t ep,uint32_t dlen,uint32_t plen) {


	  for (auto it = py_usb_mtp_xfer.begin();
	       it != py_usb_mtp_xfer.end(); ++it) {
	    boost::python::call(*it, dev, ep, dlen, plen) ;
	  }

}
void cb_usb_mtp_nak(int dev,uint32_t ep) {


	  for (auto it = py_usb_mtp_nak.begin();
	       it != py_usb_mtp_nak.end(); ++it) {
	    boost::python::calint dev,uint32_t ep)  type);
	  }

}
void cb_usb_mtp_stall(int dev,const char *reason) {


	  for (auto it = py_usb_mtp_stall.begin();
	       it != py_usb_mtp_stall.end(); ++it) {
	    boost::python::call(*it, dev, *reason) ;
	  }

}
void cb_usb_mtp_op_get_device_info(int dev) {


	  for (auto it = py_usb_mtp_op_get_device_info.begin();
	       it != py_usb_mtp_op_get_device_info.end(); ++it) {
	    boost::python::call( dev) ype);
	  }

}
void cb_usb_mtp_op_open_session(int dev) {


	  for (auto it = py_usb_mtp_op_open_session.begin();
	       it != py_usb_mtp_op_open_session.end(); ++it) {
	    boost::python::caint dev) t type);
	  }

}
void cb_usb_mtp_op_close_session(int dev) {


	  for (auto it = py_usb_mtp_op_close_session.begin();
	       it != py_usb_mtp_op_close_session.end(); ++it) {
	    boost::python::calint dev)  type);
	  }

}
void cb_usb_mtp_op_get_storage_ids(int dev) {


	  for (auto it = py_usb_mtp_op_get_storage_ids.begin();
	       it != py_usb_mtp_op_get_storage_ids.end(); ++it) {
	    boost::python::call( dev) ype);
	  }

}
void cb_usb_mtp_op_get_storage_info(int dev) {


	  for (auto it = py_usb_mtp_op_get_storage_info.begin();
	       it != py_usb_mtp_op_get_storage_info.end(); ++it) {
	    boost::python::call(* dev) pe);
	  }

}
void cb_usb_mtp_op_get_num_objects(int dev,uint32_t handle,const char *path) {


	  for (auto it = py_usb_mtp_op_get_num_objects.begin();
	       it != py_usb_mtp_op_get_num_objects.end(); ++it) {
	    boost::python::call(*it, dev, handle, *path) ;
	  }

}
void cb_usb_mtp_op_get_object_handles(int dev,uint32_t handle,const char *path) {


	  for (auto it = py_usb_mtp_op_get_object_handles.begin();
	       it != py_usb_mtp_op_get_object_handles.end(); ++it) {
	    boost::python::call(*it, dev, handle, *path) ;
	  }

}
void cb_usb_mtp_op_get_object_info(int dev,uint32_t handle,const char *path) {


	  for (auto it = py_usb_mtp_op_get_object_info.begin();
	       it != py_usb_mtp_op_get_object_info.end(); ++it) {
	    boost::python::call(*it, dev, handle, *path) ;
	  }

}
void cb_usb_mtp_op_get_object(int dev,uint32_t handle,const char *path) {


	  for (auto it = py_usb_mtp_op_get_object.begin();
	       it != py_usb_mtp_op_get_object.end(); ++it) {
	    boost::python::call(*it, dev, handle, *path) ;
	  }

}
void cb_usb_mtp_op_get_partial_object(int dev,uint32_t handle,const char *path,uint32_t offset,uint32_t length) {


	  for (auto it = py_usb_mtp_op_get_partial_object.begin();
	       it != py_usb_mtp_op_get_partial_object.end(); ++it) {
	    boost::python::call(*it, dev, handle, *path, offset, length) ;
	  }

}
void cb_usb_mtp_op_unknown(int dev,uint32_t code) {


	  for (auto it = py_usb_mtp_op_unknown.begin();
	       it != py_usb_mtp_op_unknown.end(); ++it) {
	    boost::python::call(*it, dev, code) ;
	  }

}
void cb_usb_mtp_object_alloc(int dev,uint32_t handle,const char *path) {


	  for (auto it = py_usb_mtp_object_alloc.begin();
	       it != py_usb_mtp_object_alloc.end(); ++it) {
	    boost::python::call(*it, dev, handle, *path) ;
	  }

}
void cb_usb_mtp_object_free(int dev,uint32_t handle,const char *path) {


	  for (auto it = py_usb_mtp_object_free.begin();
	       it != py_usb_mtp_object_free.end(); ++it) {
	    boost::python::call(*it, dev, handle, *path) ;
	  }

}
void cb_usb_mtp_add_child(int dev,uint32_t handle,const char *path) {


	  for (auto it = py_usb_mtp_add_child.begin();
	       it != py_usb_mtp_add_child.end(); ++it) {
	    boost::python::call(*it, dev, handle, *path) ;
	  }

}
void cb_usb_mtp_file_monitor_event(int dev,const char *path,const char *s) {


	  for (auto it = py_usb_mtp_file_monitor_event.begin();
	       it != py_usb_mtp_file_monitor_event.end(); ++it) {
	    boost::python::call(*it, dev, *path, *s) ;
	  }

}

//# host-libusb.c
void cb_usb_host_open_started(int bus,int addr) {


	  for (auto it = py_usb_host_open_started.begin();
	       it != py_usb_host_open_started.end(); ++it) {
	    boost::python::call(*it, bus, addr) ;
	  }

}
void cb_usb_host_open_hostfd(int hostfd) {


	  for (auto it = py_usb_host_open_hostfd.begin();
	       it != py_usb_host_open_hostfd.end(); ++it) {
	    boost::python::caint hostfd) t type);
	  }

}
void cb_usb_host_open_success(int bus,int addr) {


	  for (auto it = py_usb_host_open_success.begin();
	       it != py_usb_host_open_success.end(); ++it) {
	    boost::python::call(*it, bus, addr) ;
	  }

}
void cb_usb_host_open_failure(int bus,int addr) {


	  for (auto it = py_usb_host_open_failure.begin();
	       it != py_usb_host_open_failure.end(); ++it) {
	    boost::python::call(*it, bus, addr) ;
	  }

}
void cb_usb_host_close(int bus,int addr) {


	  for (auto it = py_usb_host_close.begin();
	       it != py_usb_host_close.end(); ++it) {
	    boost::python::calint bus,int addr)  type);
	  }

}
void cb_usb_host_attach_kernel(int bus,int addr,int interface) {


	  for (auto it = py_usb_host_attach_kernel.begin();
	       it != py_usb_host_attach_kernel.end(); ++it) {
	    boost::python::call(*it, bus, addr,erface) ;
	  }

}
void cb_usb_host_detach_kernel(int bus,int addr,int interface) {


	  for (auto it = py_usb_host_detach_kernel.begin();
	       it != py_usb_host_detach_kernel.end(); ++it) {
	    boost::python::call(*it, bus, addr,erface) ;
	  }

}
void cb_usb_host_set_address(int bus,int addr,int config) {


	  for (auto it = py_usb_host_set_address.begin();
	       it != py_usb_host_set_address.end(); ++it) {
	    boost::python::call(*it, bus, addr, config) ;
	  }

}
void cb_usb_host_set_config(int bus,int addr,int config) {


	  for (auto it = py_usb_host_set_config.begin();
	       it != py_usb_host_set_config.end(); ++it) {
	    boost::python::call(*it, bus, addr, config) ;
	  }

}
void cb_usb_host_set_interface(int bus,int addr,int interface,int alt) {


	  for (auto it = py_usb_host_set_interface.begin();
	       it != py_usb_host_set_interface.end(); ++it) {
	    boost::python::call(*it, bus, addr,erface, alt) ;
	  }

}
void cb_usb_host_claim_interface(int bus,int addr,int config,int interface) {


	  for (auto it = py_usb_host_claim_interface.begin();
	       it != py_usb_host_claim_interface.end(); ++it) {
	    boost::python::call(*it, bus, addr, config,erface) ;
	  }

}
void cb_usb_host_release_interface(int bus,int addr,int interface) {


	  for (auto it = py_usb_host_release_interface.begin();
	       it != py_usb_host_release_interface.end(); ++it) {
	    boost::python::call(*it, bus, addr,erface) ;
	  }

}
void cb_usb_host_req_control(int bus,int addr,void *p,int req,int value,int index) {


	  for (auto it = py_usb_host_req_control.begin();
	       it != py_usb_host_req_control.end(); ++it) {
	    boost::python::call(*it, bus, addr, *p, req, value, index) ;
	  }

}
void cb_usb_host_req_data(int bus,int addr,void *p,int in,int ep,int size) {


	  for (auto it = py_usb_host_req_data.begin();
	       it != py_usb_host_req_data.end(); ++it) {
	    boost::python::call(*it, bus, addr, *p, in, ep, size) ;
	  }

}
void cb_usb_host_req_complete(int bus,int addr,void *p,int status,int length) {


	  for (auto it = py_usb_host_req_complete.begin();
	       it != py_usb_host_req_complete.end(); ++it) {
	    boost::python::call(*it, bus, addr, *p, status, length) ;
	  }

}
void cb_usb_host_req_emulated(int bus,int addr,void *p,int status) {


	  for (auto it = py_usb_host_req_emulated.begin();
	       it != py_usb_host_req_emulated.end(); ++it) {
	    boost::python::call(*it, bus, addr, *p, status) ;
	  }

}
void cb_usb_host_req_canceled(int bus,int addr,void *p) {


	  for (auto it = py_usb_host_req_canceled.begin();
	       it != py_usb_host_req_canceled.end(); ++it) {
	    boost::python::call(*it, bus, addr, *p) ;
	  }

}
void cb_usb_host_iso_start(int bus,int addr,int ep) {


	  for (auto it = py_usb_host_iso_start.begin();
	       it != py_usb_host_iso_start.end(); ++it) {
	    boost::python::call(*it, bus, addr, ep) ;
	  }

}
void cb_usb_host_iso_stop(int bus,int addr,int ep) {


	  for (auto it = py_usb_host_iso_stop.begin();
	       it != py_usb_host_iso_stop.end(); ++it) {
	    boost::python::call(*it, bus, addr, ep) ;
	  }

}
void cb_usb_host_iso_out_of_bufs(int bus,int addr,int ep) {


	  for (auto it = py_usb_host_iso_out_of_bufs.begin();
	       it != py_usb_host_iso_out_of_bufs.end(); ++it) {
	    boost::python::call(*it, bus, addr, ep) ;
	  }

}
void cb_usb_host_reset(int bus,int addr) {


	  for (auto it = py_usb_host_reset.begin();
	       it != py_usb_host_reset.end(); ++it) {
	    boost::python::calint bus,int addr)  type);
	  }

}
usb_host_auto_scan_enabled(void){


	  for (auto it = py_tpm_spapr_do_crq_unknown_msg_type.begin();
	       it != py_tpm_spapr_do_crq_unknown_msg_type.end(); ++it) {
	    boost::python::call(*it, type);
	  }

}
usb_host_auto_scan_disabled(void){


	  for (auto it = py_tpm_spapr_do_crq_unknown_msg_type.begin();
	       it != py_tpm_spapr_do_crq_unknown_msg_type.end(); ++it) {
	    boost::python::call(*it, type);
	  }

}
void cb_usb_host_parse_config(int bus,int addr,int value,int active) {


	  for (auto it = py_usb_host_parse_config.begin();
	       it != py_usb_host_parse_config.end(); ++it) {
	    boost::python::call(*it, bus, addr, value, active) ;
	  }

}
void cb_usb_host_parse_interface(int bus,int addr,int num,int alt,int active) {


	  for (auto it = py_usb_host_parse_interface.begin();
	       it != py_usb_host_parse_interface.end(); ++it) {
	    boost::python::call(*it, bus, addr, num, alt, active) ;
	  }

}
void cb_usb_host_parse_endpoint(int bus,int addr,int ep,const char *dir,const char *type,int active) {


	  for (auto it = py_usb_host_parse_endpoint.begin();
	       it != py_usb_host_parse_endpoint.end(); ++it) {
	    boost::python::call(*it, bus, addr, ep, *dir, *type, active) ;
	  }

}
void cb_usb_host_parse_error(int bus,int addr,const char *errmsg) {


	  for (auto it = py_usb_host_parse_error.begin();
	       it != py_usb_host_parse_error.end(); ++it) {
	    boost::python::call(*it, bus, addr, *errmsg) ;
	  }

}
void cb_usb_host_remote_wakeup_removed(int bus,int addr) {


	  for (auto it = py_usb_host_remote_wakeup_removed.begin();
	       it != py_usb_host_remote_wakeup_removed.end(); ++it) {
	    boost::python::call(*it, bus, addr) ;
	  }

}

//# dev-serial.c
void cb_usb_serial_reset(int bus,int addr) {


	  for (auto it = py_usb_serial_reset.begin();
	       it != py_usb_serial_reset.end(); ++it) {
	    boost::python::call( bus, addr) ype);
	  }

}
void cb_usb_serial_handle_control(int bus,int addr,int request,int value) {


	  for (auto it = py_usb_serial_handle_control.begin();
	       it != py_usb_serial_handle_control.end(); ++it) {
	    boost::python::call(*it, bus, addr, request, value) ;
	  }

}
void cb_usb_serial_unsupported_parity(int bus,int addr,int value) {


	  for (auto it = py_usb_serial_unsupported_parity.begin();
	       it != py_usb_serial_unsupported_parity.end(); ++it) {
	    boost::python::call(*it, bus, addr, value) ;
	  }

}
void cb_usb_serial_unsupported_stopbits(int bus,int addr,int value) {


	  for (auto it = py_usb_serial_unsupported_stopbits.begin();
	       it != py_usb_serial_unsupported_stopbits.end(); ++it) {
	    boost::python::call(*it, bus, addr, value) ;
	  }

}
void cb_usb_serial_unsupported_control(int bus,int addr,int request,int value) {


	  for (auto it = py_usb_serial_unsupported_control.begin();
	       it != py_usb_serial_unsupported_control.end(); ++it) {
	    boost::python::call(*it, bus, addr, request, value) ;
	  }

}
void cb_usb_serial_unsupported_data_bits(int bus,int addr,int value) {


	  for (auto it = py_usb_serial_unsupported_data_bits.begin();
	       it != py_usb_serial_unsupported_data_bits.end(); ++it) {
	    boost::python::call(*it, bus, addr, value) ;
	  }

}
void cb_usb_serial_bad_token(int bus,int addr) {


	  for (auto it = py_usb_serial_bad_token.begin();
	       it != py_usb_serial_bad_token.end(); ++it) {
	    boost::python::call(*it, bus, addr) ;
	  }

}
void cb_usb_serial_set_baud(int bus,int addr,int baud) {


	  for (auto it = py_usb_serial_set_baud.begin();
	       it != py_usb_serial_set_baud.end(); ++it) {
	    boost::python::call(*it, bus, addr, baud) ;
	  }

}
void cb_usb_serial_set_data(int bus,int addr,int parity,int data,int stop) {


	  for (auto it = py_usb_serial_set_data.begin();
	       it != py_usb_serial_set_data.end(); ++it) {
	    boost::python::call(*it, bus, addr, parity, data, stop) ;
	  }

}
void cb_usb_serial_set_flow_control(int bus,int addr,int index) {


	  for (auto it = py_usb_serial_set_flow_control.begin();
	       it != py_usb_serial_set_flow_control.end(); ++it) {
	    boost::python::call(*it, bus, addr, index) ;
	  }

}
void cb_usb_serial_set_xonxoff(int bus,int addr,uint8_t xon,uint8_t xoff) {


	  for (auto it = py_usb_serial_set_xonxoff.begin();
	       it != py_usb_serial_set_xonxoff.end(); ++it) {
	    boost::python::call(*it, bus, addr, xon, xoff) ;
	  }

}
