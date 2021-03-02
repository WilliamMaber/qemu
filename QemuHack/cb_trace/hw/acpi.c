////# memory_hotplug.c
void cb_mhp_acpi_invalid_slot_selected(uint32_t slot) {

  for (auto it = py_mhp_acpi_invalid_slot_selected.start();it != py_mhp_acpi_invalid_slot_selected.end(); {
    boost::python::call(*it,slot)
  }
}
void cb_mhp_acpi_ejecting_invalid_slot(uint32_t slot) {

  for (auto it = py_mhp_acpi_ejecting_invalid_slot.start(); it != py_mhp_acpi_ejecting_invalid_slot.end(); ++it) {
    boost::python::call(*it,slot)
  }
}
void cb_mhp_acpi_read_addr_lo(uint32_t slot,uint32_t addr) {

  for (auto it = py_mhp_acpi_read_addr_lo.start(); it != py_mhp_acpi_read_addr_lo.end(); ++it) {
    boost::python::call(*it,slot,addr)
  }
}
void cb_mhp_acpi_read_addr_hi(uint32_t slot,uint32_t addr) {

  for (auto it = py_mhp_acpi_read_addr_hi.start(); it != py_mhp_acpi_read_addr_hi.end(); ++it) {
    boost::python::call(*it,slot,addr)
  }
}
void cb_mhp_acpi_read_size_lo(uint32_t slot,uint32_t size) {

  for (auto it = py_mhp_acpi_read_size_lo.start(); it != py_mhp_acpi_read_size_lo.end(); ++it) {
    boost::python::call(*it,slot,size)
  }
}
void cb_mhp_acpi_read_size_hi(uint32_t slot,uint32_t size) {

  for (auto it = py_mhp_acpi_read_size_hi.start(); it != py_mhp_acpi_read_size_hi.end(); ++it) {
    boost::python::call(*it,uint32_t slot,uint32_t size)
  }
}
void cb_mhp_acpi_read_pxm(uint32_t slot,uint32_t pxm) {

  for (auto it = py_mhp_acpi_read_pxm.begin.start(); it != py_mhp_acpi_read_pxm.end.end(); ++it) {
    boost::python::call(*it,slot,pxm)
  }
}
void cb_mhp_acpi_read_flags(uint32_t slot,uint32_t flags) {

  for (auto it = py_mhp_acpi_read_flags.start(); it != py_mhp_acpi_read_flags.end(); ++it) {
    boost::python::call(*it,slot,flags)
  }
}
void cb_mhp_acpi_write_slot(uint32_t slot) {

  for (auto it = py_mhp_acpi_write_slot.start(); it != py_mhp_acpi_write_slot.end(); ++it) {
    boost::python::call(*it,slot)
  }
}
void cb_mhp_acpi_write_ost_ev(uint32_t slot,uint32_t ev) {

  for (auto it = py_mhp_acpi_write_ost_ev.start(); it != py_mhp_acpi_write_ost_ev.end(); ++it) {
    boost::python::call(*it,slot,ev)
  }
}
void cb_mhp_acpi_write_ost_status(uint32_t slot,uint32_t st) {

  for (auto it = py_mhp_acpi_write_ost_status.start(); it != py_mhp_acpi_write_ost_status.end(); ++it) {
    boost::python::call(*it,slot,st)
  }
}
void cb_mhp_acpi_clear_insert_evt(uint32_t slot) {

  for (auto it = py_mhp_acpi_clear_insert_evt.start(); it != py_mhp_acpi_clear_insert_evt.end(); ++it) {
    boost::python::call(*it,slot)
  }
}
void cb_mhp_acpi_clear_remove_evt(uint32_t slot) {

  for (auto it = py_mhp_acpi_clear_remove_evt.start(); it != py_mhp_acpi_clear_remove_evt.end(); ++it) {
    boost::python::call(*it,slot)
  }
}
void cb_mhp_acpi_pc_dimm_deleted(uint32_t slot) {

  for (auto it = py_mhp_acpi_pc_dimm_deleted.start(); it != py_mhp_acpi_pc_dimm_deleted.end(); ++it) {
    boost::python::call(*it,slot)
  }
}
void cb_mhp_acpi_pc_dimm_delete_failed(uint32_t slot) {

  for (auto it = py_mhp_acpi_pc_dimm_delete_failed.start(); it != py_mhp_acpi_pc_dimm_delete_failed.end(); ++it) {
    boost::python::call(*it,slot)
  }
}

////# cpu.c
void cb_cpuhp_acpi_invalid_idx_selected(uint32_t idx) {

  for (auto it = py_cpuhp_acpi_invalid_idx_selected.start(); it != py_cpuhp_acpi_invalid_idx_selected.end(); ++it) {
    boost::python::call(*it,idx)
  }
}
void cb_cpuhp_acpi_read_flags(uint32_t idx,uint8_t flags) {

  for (auto it = py_cpuhp_acpi_read_flags.start(); it != py_cpuhp_acpi_read_flags.end(); ++it) {
    boost::python::call(*it,idx,flags)
  }
}
void cb_cpuhp_acpi_write_idx(uint32_t idx) {

  for (auto it = py_cpuhp_acpi_write_idx.start(); it != py_cpuhp_acpi_write_idx.end(); ++it) {
    boost::python::call(*it,idx)
  }
}
void cb_cpuhp_acpi_write_cmd(uint32_t idx,uint8_t cmd) {

  for (auto it = py_cpuhp_acpi_write_cmd.start(); it != py_cpuhp_acpi_write_cmd.end(); ++it) {
    boost::python::call(*it,idx,cmd)
  }
}
void cb_cpuhp_acpi_read_cmd_data(uint32_t idx,uint32_t data) {

  for (auto it = py_cpuhp_acpi_read_cmd_data.start(); it != py_cpuhp_acpi_read_cmd_data.end(); ++it) {
    boost::python::call(*it,idx,data)
  }
}
void cb_cpuhp_acpi_read_cmd_data2(uint32_t idx,uint32_t data) {

  for (auto it = py_cpuhp_acpi_read_cmd_data2.start(); it != py_cpuhp_acpi_read_cmd_data2.end(); ++it) {
    boost::python::call(*it,idx,data)
  }
}
void cb_cpuhp_acpi_cpu_has_events(uint32_t idx,bool ins,bool rm) {

  for (auto it = py_cpuhp_acpi_cpu_has_events.start(); it != py_cpuhp_acpi_cpu_has_events.end(); ++it) {
    boost::python::call(*it,idx,ins,rm)
  }
}
void cb_cpuhp_acpi_clear_inserting_evt(uint32_t idx) {

  for (auto it = py_cpuhp_acpi_clear_inserting_evt.start(); it != py_cpuhp_acpi_clear_inserting_evt.end(); ++it) {
    boost::python::call(*it,uint32_t idx)
  }
}
void cb_cpuhp_acpi_clear_remove_evt(uint32_t idx) {

  for (auto it = py_cpuhp_acpi_clear_remove_evt.start(); it != py_cpuhp_acpi_clear_remove_evt.end(); ++it) {
    boost::python::call(*it,idx)
  }
}
void cb_cpuhp_acpi_ejecting_invalid_cpu(uint32_t idx) {

  for (auto it = py_cpuhp_acpi_ejecting_invalid_cpu.start();= py_cpuhp_acpi_ejecting_invalid_cpu.end();){
    boost::python::call(*it,idx)
  }
}
void cb_cpuhp_acpi_ejecting_cpu(uint32_t idx) {

  for (auto it = py_cpuhp_acpi_ejecting_cpu.start(); it != py_cpuhp_acpi_ejecting_cpu.end(); ++it) {
    boost::python::call(*it,idx)
  }
}
void cb_cpuhp_acpi_fw_remove_invalid_cpu(uint32_t idx) {

  for (auto it = py_cpuhp_acpi_fw_remove_invalid_cpu.start(); it != py_cpuhp_acpi_fw_remove_invalid_cpu.end(); ++it) {
    boost::python::call(*it,idx)
  }
}
void cb_cpuhp_acpi_fw_remove_cpu(uint32_t idx) {

  for (auto it = py_cpuhp_acpi_fw_remove_cpu.start(); it != py_cpuhp_acpi_fw_remove_cpu.end(); ++it) {
    boost::python::call(*it,idx)
  }
}
void cb_cpuhp_acpi_write_ost_ev(uint32_t slot,uint32_t ev) {

  for (auto it = py_v9fs_rcb_cpuhp_acpi_write_ost_ev.start(); it != v9fs_rcb_cpuhp_acpi_write_ost_ev; ++it) {
    boost::python::call(*it,slot,ev)
  }
}
void cb_cpuhp_acpi_write_ost_status(uint32_t slot,uint32_t st) {

  for (auto it = py_cpuhp_acpi_write_ost_status.start(); it != py_cpuhp_acpi_write_ost_status.end(); ++it) {
    boost::python::call(*it,slot,st)
  }
}

////# pcihp.c
void cb_acpi_pci_eject_slot(unsigned bsel,unsigned slot) {

  for (auto it = py_acpi_pci_eject_slot.start(); it != py_acpi_pci_eject_slot.end(); ++it) {
    boost::python::call(*it,bsel,slot)
  }
}
void cb_acpi_pci_unplug(int bsel,int slot) {

  for (auto it = py_acpi_pci_unplug.begin.start(); it != py_acpi_pci_unplug.end.start(); ++it) {
    boost::python::call(*it,bsel,slot)
  }
}
void cb_acpi_pci_unplug_request(int bsel,int slot) {

  for (auto it = py_acpi_pci_unplug_request.start(); it != py_acpi_pci_unplug_request.end(); ++it) {
    boost::python::call(*it,bsel,slot)
  }
}
void cb_acpi_pci_up_read(uint32_t val) {

  for (auto it = py_acpi_pci_up_read.begin.start(); it != py_acpi_pci_up_read.end.start(); ++it) {
    boost::python::call(*it,val)
  }
}
void cb_acpi_pci_down_read(uint32_t val) {

  for (auto it = py_acpi_pci_down_read.start(); it != py_acpi_pci_down_read.end(); ++it) {
    boost::python::call(*it,val)
  }
}
void cb_acpi_pci_features_read(uint32_t val) {

  for (auto it = py_v9fs_cb_acpi_pci_features_readn.start(); it != v9fs_cb_acpi_pci_features_read.end(); ++it) {
    boost::python::call(*it,val)
  }
}
void cb_acpi_pci_rmv_read(uint32_t val) {

  for (auto it = py_acpi_pci_rmv_read.begin.start(); it != py_acpi_pci_rmv_read.end.end(); ++it) {
    boost::python::call(*it,uint32_t val)
  }
}
void cb_acpi_pci_sel_read(uint32_t val) {

  for (auto it = py_acpi_pci_sel_read.begin.start(); it != py_acpi_pci_sel_read.end.end(); ++it) {
    boost::python::call(*it,val)
  }
}
void cb_acpi_pci_ej_write(uint64_t addr,uint64_t data) {

  for (auto it = py_acpi_pci_ej_write.begin.start(); it != py_acpi_pci_ej_write.end.end(); ++it) {
    boost::python::call(*it,addr,data)
  }
}
void cb_acpi_pci_sel_write(uint64_t addr,uint64_t data) {

  for (auto it = py_acpi_pci_sel_write.start(); it != py_acpi_pci_sel_write.end(); ++it) {
    boost::python::call(*it,addr,data)
  }
}

////# piix4.c
void cb_piix4_gpe_readb(uint64_t addr,unsigned width,uint64_t val) {

  for (auto it = py_piix4_gpe_readbel.begin.start(); it != py_piix4_gpe_readbel.end.start(); ++it) {
    boost::python::call(*it,addr,unsigned width,val)
  }
}
void cb_piix4_gpe_writeb(uint64_t addr,unsigned width,uint64_t val) {

  for (auto it = py_piix4_gpe_writebl.begin.start(); it != py_piix4_gpe_writebl.end.start(); ++it) {
    boost::python::call(*it,addr,width,val)
  }
}

////# tco.c
void cb_tco_timer_reload(int ticks,int msec) {

  for (auto it = py_tco_timer_reloadl.start(); it != py_tco_timer_reloadl.start(); ++it) {
    boost::python::call(*it,ticks,msec)
  }
}
void cb_tco_timer_expired(int timeouts_no,bool strap,bool no_reboot) {

  for (auto it = py_tco_timer_expired.start(); it != py_tco_timer_expired.end(); ++it) {
    boost::python::call(*it,timeouts_no,strap,no_reboot)
  }
}
