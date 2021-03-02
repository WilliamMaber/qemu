//# See docs/devel/tracing.txt for syntax documentation.

//# pci.c
void cb_vfio_intx_interrupt(const char *name, char line) {

  for (auto it = py_vfio_intx_interrupt.begin(); it != py_vfio_intx_interrupt.end();
       ++it) {
    boost::python::call(*it, const char *name, char line);
  }
}
void cb_vfio_intx_eoi(const char *name) {

  for (auto it = py_vfio_intx_eoi.begin(); it != py_vfio_intx_eoi.end(); ++it) {
    boost::python::call(*it, const char *name);
  }
}
void cb_vfio_intx_enable_kvm(const char *name) {

  for (auto it = py_vfio_intx_enable_kvm.begin(); it != py_vfio_intx_enable_kvm.end();
       ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vfio_intx_disable_kvm(const char *name) {

  for (auto it = py_vfio_intx_disable_kvm.begin();
       it != py_vfio_intx_disable_kvm.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vfio_intx_update(const char *name, int new_irq, int target_irq) {

  for (auto it = py_vfio_intx_update.begin(); it != py_vfio_intx_update.end(); ++it) {
    boost::python::call(*it, name, new_irq, target_irq);
  }
}
void cb_vfio_intx_enable(const char *name) {

  for (auto it = py_vfio_intx_enable.begin(); it != py_vfio_intx_enable.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vfio_intx_disable(const char *name) {

  for (auto it = py_vfio_intx_disable.begin(); it != py_vfio_intx_disable.end();
       ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vfio_msi_interrupt(const char *name, int index, uint64_t addr, int data) {

  for (auto it = py_vfio_msi_interrupt.begin(); it != py_vfio_msi_interrupt.end();
       ++it) {
    boost::python::call(*it, name, index, addr, data);
  }
}
void cb_vfio_msix_vector_do_use(const char *name, int index) {

  for (auto it = py_vfio_msix_vector_do_use.begin();
       it != py_vfio_msix_vector_do_use.end(); ++it) {
    boost::python::call(*it, name, index);
  }
}
void cb_vfio_msix_vector_release(const char *name, int index) {

  for (auto it = py_vfio_msix_vector_release.begin();
       it != py_vfio_msix_vector_release.end(); ++it) {
    boost::python::call(*it, name, index);
  }
}
void cb_vfio_msix_enable(const char *name) {

  for (auto it = py_vfio_msix_enable.begin(); it != py_vfio_msix_enable.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vfio_msix_pba_disable(name) {

  for (auto it = py_vfio_msix_pba_disable.begin();
       it != py_vfio_msix_pba_disable.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vfio_msix_pba_enable(const char *name) {

  for (auto it = py_vfio_msix_pba_enable.begin(); it != py_vfio_msix_pba_enable.end();
       ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vfio_msix_disable(const char *name) {

  for (auto it = py_vfio_msix_disable.begin(); it != py_vfio_msix_disable.end();
       ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vfio_msix_fixup(const char *name, int bar, uint64_t start, uint64_t end) {

  for (auto it = py_vfio_msix_fixup.begin(); it != py_vfio_msix_fixup.end(); ++it) {
    boost::python::call(*it, name, bar, start, end);
  }
}
void cb_vfio_msix_relo(const char *name, int bar, uint64_t offset) {

  for (auto it = py_vfio_msix_relo.begin(); it != py_vfio_msix_relo.end(); ++it) {
    boost::python::call(*it, name, bar, offset);
  }
}
void cb_vfio_msi_enable(const char *name, int nr_vectors) {

  for (auto it = py_vfio_msi_enable.begin(); it != py_vfio_msi_enable.end(); ++it) {
    boost::python::call(*it, name, nr_vectors);
  }
}
void cb_vfio_msi_disable(const char *name) {

  for (auto it = py_vfio_msi_disable.begin(); it != py_vfio_msi_disable.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vfio_pci_load_rom(const char *name, unsigned long size,
                       unsigned long offset, unsigned long flags) {

  for (auto it = py_vfio_pci_load_rom.begin(); it != py_vfio_pci_load_rom.end();
       ++it) {
    boost::python::call(*it, name, size, offset, flags);
  }
}
void cb_vfio_rom_read(const char *name, uint64_t addr, int size, uint64_t data) {

  for (auto it = py_vfio_rom_read.begin(); it != py_vfio_rom_read.end(); ++it) {
    boost::python::call(*it, name, addr, size, data);
  }
}
void cb_vfio_pci_size_rom(const char *name, int size) {

  for (auto it = py_vfio_pci_size_rom.begin(); it != py_vfio_pci_size_rom.end();
       ++it) {
    boost::python::call(*it, *name, size);
  }
}
void cb_vfio_vga_write(uint64_t addr, uint64_t data, int size) {

  for (auto it = py_vfio_vga_write.begin(); it != py_vfio_vga_write.end(); ++it) {
    boost::python::call(*it, addr, data, size);
  }
}
void cb_vfio_vga_read(uint64_t addr, int size, uint64_t data) {

  for (auto it = py_vfio_vga_read.begin(); it != py_vfio_vga_read.end(); ++it) {
    boost::python::call(*it, addr, size, data);
  }
}
void cb_vfio_pci_read_config(const char *name, int addr, int len, int val) {

  for (auto it = py_vfio_pci_read_config.begin(); it != py_vfio_pci_read_config.end();
       ++it) {
    boost::python::call(*it, name, addr, len, val);
  }
}
void cb_vfio_pci_write_config(const char *name, int addr, int val, int len) {

  for (auto it = py_vfio_pci_write_config.begin();
       it != py_vfio_pci_write_config.end(); ++it) {
    boost::python::call(*it, name, addr, val, len);
  }
}
void cb_vfio_msi_setup(const char *name, int pos) {

  for (auto it = py_vfio_msi_setup.begin(); it != py_vfio_msi_setup.end(); ++it) {
    boost::python::call(*it, name, pos);
  }
}
void cb_vfio_msix_early_setup(const char *name, int pos, int table_bar, int offset,
                           int entries) {

  for (auto it = py_vfio_msix_early_setup.begin();
       it != py_vfio_msix_early_setup.end(); ++it) {
    boost::python::call(*it, name, pos, table_bar, offset, entries);
  }
}
void cb_vfio_check_pcie_flr(const char *name) {

  for (auto it = py_vfio_check_pcie_flr.begin(); it != py_vfio_check_pcie_flr.end();
       ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vfio_check_pm_reset(const char *name) {

  for (auto it = py_vfio_check_pm_reset.begin(); it != py_vfio_check_pm_reset.end();
       ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vfio_check_af_flr(const char *name) {

  for (auto it = py_vfio_check_af_flr.begin(); it != py_vfio_check_af_flr.end();
       ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vfio_pci_hot_reset(const char *name, const char *type) {

  for (auto it = py_vfio_pci_hot_reset.begin(); it != py_vfio_pci_hot_reset.end();
       ++it) {
    boost::python::call(*it, name, type);
  }
}
void cb_vfio_pci_hot_reset_has_dep_devices(const char *name) {

  for (auto it = py_vfio_pci_hot_reset_has_dep_devices.begin();
       it != py_vfio_pci_hot_reset_has_dep_devices.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vfio_pci_hot_reset_dep_devices(int domain, int bus, int slot, int function,
                                    int group_id) {

  for (auto it = py_vfio_pci_hot_reset_dep_devices.begin();
       it != py_vfio_pci_hot_reset_dep_devices.end(); ++it) {
    boost::python::call(*it, domain, bus, slot, function, group_id);
  }
}
void cb_vfio_pci_hot_reset_result(const char *name, const char *result) {

  for (auto it = py_vfio_pci_hot_reset_result.begin();
       it != py_vfio_pci_hot_reset_result.end(); ++it) {
    boost::python::call(*it, name, result);
  }
}
void cb_vfio_populate_device_config(const char *name, unsigned long size,
                                 unsigned long offset, unsigned long flags) {

  for (auto it = py_vfio_populate_device_config.begin();
       it != py_vfio_populate_device_config.end(); ++it) {
    boost::python::call(*it, name, size, offset, flags);
  }
}
void cb_vfio_populate_device_get_irq_info_failure(const char *errstr) {

  for (auto it = py_vfio_populate_device_get_irq_info_failure.begin();
       it != py_usb_packet_state_fault.end(); ++it) {
    boost::python::call(*it, errstr);
  }
}
void cb_vfio_realize(const char *name, int group_id) {

  for (auto it = py_vfio_realize.begin(); it != py_vfio_realize.end(); ++it) {
    boost::python::call(*it, name, group_id);
  }
}
void cb_vfio_mdev(const char *name, bool is_mdev) {

  for (auto it = py_vfio_mdev.begin(); it != py_vfio_mdev.end(); ++it) {
    boost::python::call(*it, name, is_mdev);
  }
}
void cb_vfio_add_ext_cap_dropped(const char *name, uint16_t cap, uint16_t offset) {

  for (auto it = py_vfio_add_ext_cap_dropped.begin();
       it != py_vfio_add_ext_cap_dropped.end(); ++it) {
    boost::python::call(*it, name, cap, offset);
  }
}
void cb_vfio_pci_reset(const char *name) {

  for (auto it = py_vfio_pci_reset.begin(); it != py_vfio_pci_reset.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vfio_pci_reset_flr(const char *name) {

  for (auto it = py_vfio_pci_reset_flr.begin(); it != py_vfio_pci_reset_flr.end();
       ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vfio_pci_reset_pm(const char *name) {

  for (auto it = py_vfio_pci_reset_pm.begin(); it != py_vfio_pci_reset_pm.end();
       ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vfio_pci_emulated_vendor_id(const char *name, uint16_t val) {

  for (auto it = py_vfio_pci_emulated_vendor_id.begin();
       it != py_vfio_pci_emulated_vendor_id.end(); ++it) {
    boost::python::call(*it, name, val);
  }
}
void cb_vfio_pci_emulated_device_id(const char *name, uint16_t val) {

  for (auto it = py_vfio_pci_emulated_device_id.begin();
       it != py_vfio_pci_emulated_device_id.end(); ++it) {
    boost::python::call(*it, name, val);
  }
}
void cb_vfio_pci_emulated_sub_vendor_id(const char *name, uint16_t val) {

  for (auto it = py_vfio_pci_emulated_sub_vendor_id.begin();
       it != py_vfio_pci_emulated_sub_vendor_id name.end(); ++it) {
    boost::python::call(*it, name, val);
  }
}
void cb_vfio_pci_emulated_sub_device_id(const char *name, uint16_t val) {

  for (auto it = py_vfio_pci_emulated_sub_device_id.begin();
       it != py_vfio_pci_emulated_sub_device_id.end(); ++it) {
    boost::python::call(*it, name, val);
  }
}

//# pci-quirks.c
void cb_vfio_quirk_rom_blacklisted(const char *name, uint16_t vid, uint16_t did) {

  for (auto it = py_vfio_quirk_rom_blacklisted.begin();
       it != py_vfio_quirk_rom_blacklisted.end(); ++it) {
    boost::python::call(*it, name, vid, did);
  }
}
void cb_vfio_quirk_generic_window_address_write(const char *name,
                                             const char *region_name,
                                             uint64_t data) {

  for (auto it = py_vfio_quirk_generic_window_address_write.begin();
       it != py_usb_packet_state_fault.end(); ++it) {
    boost::python::call(*it, name, region_name, data);
  }
}
void cb_vfio_quirk_generic_window_data_read(const char *name,
                                         const char *region_name,
                                         uint64_t data) {

  for (auto it = py_vfio_quirk_generic_window_data_read.begin();
       it != py_vfio_quirk_generic_window_data_read.end(); ++it) {
    boost::python::call(*it, name, region_name, data);
  }
}
void cb_vfio_quirk_generic_window_data_write(const char *name,
                                          const char *region_name,
                                          uint64_t data) {

  for (auto it = py_vfio_quirk_generic_window_data_write.begin();
       it != py_vfio_quirk_generic_window_data_write.end(); ++it) {

    boost::python::call(*it, name, region_name, data);
  }
}
void cb_vfio_quirk_generic_mirror_read(const char *name, const char *region_name,
                                    uint64_t addr, uint64_t data) {

  for (auto it = py_vfio_quirk_generic_mirror_read.begin();
       it != py_vfio_quirk_generic_mirror_read.end(); ++it) {
    boost::python::call(*it, *name, region_name, addr, data);
  }
}
void cb_vfio_quirk_generic_mirror_write(const char *name, const char *region_name,
                                     uint64_t addr, uint64_t data) {

  for (auto it = py_vfio_quirk_generic_mirror_write.begin();

       it != py_vfio_quirk_generic_mirror_write.end(); ++it) {
    boost::python::call(*it, *name, region_name, addr, data);
  }
}
void cb_vfio_quirk_ati_3c3_read(const char *name, uint64_t data) {

  for (auto it = py_vfio_quirk_ati_3c3_read.begin();
       it != py_vfio_quirk_ati_3c3_read.end(); ++it) {
    boost::python::call(*it, name, data);
  }
}
void cb_vfio_quirk_ati_3c3_probe(const char *name) {

  for (auto it = py_vfio_quirk_ati_3c3_probe.begin();
       it != py_vfio_quirk_ati_3c3_probe.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vfio_quirk_ati_bar4_probe(const char *name) {

  for (auto it = py_vfio_quirk_ati_bar4_probe.begin();
       it != py_vfio_quirk_ati_bar4_probe.end(); ++it) {
    boost::python::call(*it, const char *name);
  }
}
void cb_vfio_quirk_ati_bar2_probe(const char *name) {

  for (auto it = py_vfio_quirk_ati_bar2_probe.begin();
       it != py_vfio_quirk_ati_bar2_probe.end(); ++it) {
    boost::python::call(*it, const char *name);
  }
}
void cb_vfio_quirk_nvidia_3d0_state(const char *name, const char *state) {

  for (auto it = py_vfio_quirk_nvidia_3d0_state.begin();
       it != py_vfio_quirk_nvidia_3d0_state.end(); ++it) {
    boost::python::call(*it, const char *name, const char *state);
  }
}
void cb_vfio_quirk_nvidia_3d0_read(const char *name, uint8_t offset, unsigned size,
                                uint64_t val) {

  for (auto it = py_vfio_quirk_nvidia_3d0_read.begin();
       it != py_vfio_quirk_nvidia_3d0_read.end(); ++it) {
    boost::python::call(*it, name, offset, size, val);
  }
}
void cb_vfio_quirk_nvidia_3d0_write(const char *name, uint8_t offset,
                                 uint64_t data, unsigned size) {

  for (auto it = py_vfio_quirk_nvidia_3d0_write.begin();
       it != py_vfio_quirk_nvidia_3d0_write.end(); ++it) {
    boost::python::call(*it, name, offset, data, size);
  }
}
void cb_vfio_quirk_nvidia_3d0_probe(const char *name) {

  for (auto it = py_vfio_quirk_nvidia_3d0_probe.begin();
       it != py_vfio_quirk_nvidia_3d0_probe.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vfio_quirk_nvidia_bar5_state(const char *name, const char *state) {

  for (auto it = py_vfio_quirk_nvidia_bar5_state.begin();
       it != py_vfio_quirk_nvidia_bar5_state.end(); ++it) {
    boost::python::call(*it, name, const state);
  }
}
void cb_vfio_quirk_nvidia_bar5_probe(const char *name) {

  for (auto it = py_vfio_quirk_nvidia_bar5_probe.begin();
       it != py_vfio_quirk_nvidia_bar5_probe.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vfio_quirk_nvidia_bar0_msi_ack(const char *name) {

  for (auto it = py_vfio_quirk_nvidia_bar0_msi_ack.begin();
       it != py_vfio_quirk_nvidia_bar0_msi_ack.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vfio_quirk_nvidia_bar0_probe(const char *name) {

  for (auto it = py_vfio_quirk_nvidia_bar0_probe.begin();
       it != py_vfio_quirk_nvidia_bar0_probe.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vfio_quirk_rtl8168_fake_latch(const char *name, uint64_t val) {

  for (auto it = py_vfio_quirk_rtl8168_fake_latch.begin();
       it != py_vfio_quirk_rtl8168_fake_latch.end(); ++it) {
    boost::python::call(*it, name, val);
  }
}
void cb_vfio_quirk_rtl8168_msix_write(const char *name, uint16_t offset,
                                   uint64_t val) {

  for (auto it = py_vfio_quirk_rtl8168_msix_write.begin();
       it != py_vfio_quirk_rtl8168_msix_write.end(); ++it) {
    boost::python::call(*it, name, offset, val);
  }
}
void cb_vfio_quirk_rtl8168_msix_read(const char *name, uint16_t offset,
                                  uint64_t val) {

  for (auto it = py_vfio_quirk_rtl8168_msix_read.begin();
       it != py_vfio_quirk_rtl8168_msix_read.end(); ++it) {
    boost::python::call(*it, name, offset, val);
  }
}
void cb_vfio_quirk_rtl8168_probe(const char *name) {

  for (auto it = py_vfio_quirk_rtl8168_probe.begin();
       it != py_vfio_quirk_rtl8168_probe.end(); ++it) {
    boost::python::call(*it, name);
  }
}

void cb_vfio_quirk_ati_bonaire_reset_skipped(const char *name) {

  for (auto it = py_vfio_quirk_ati_bonaire_reset_skipped.begin();
       it != py_vfio_quirk_ati_bonaire_reset_skipped.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vfio_quirk_ati_bonaire_reset_no_smc(const char *name) {

  for (auto it = py_vfio_quirk_ati_bonaire_reset_no_smc.begin();
       it != py_vfio_quirk_ati_bonaire_reset_no_smc.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vfio_quirk_ati_bonaire_reset_timeout(const char *name) {

  for (auto it = py_vfio_quirk_ati_bonaire_reset_timeout.begin();
       it != py_vfio_quirk_ati_bonaire_reset_timeout.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vfio_quirk_ati_bonaire_reset_done(const char *name) {

  for (auto it = py_vfio_quirk_ati_bonaire_reset_done.begin();
       it != py_vfio_quirk_ati_bonaire_reset_done.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vfio_quirk_ati_bonaire_reset(const char *name) {

  for (auto it = py_vfio_quirk_ati_bonaire_reset.begin();
       it != py_vfio_quirk_ati_bonaire_reset.end(); ++it) {
    boost::python::call(*it, const char *name);
  }
}
void cb_vfio_ioeventfd_exit(const char *name, uint64_t addr, unsigned size,
                         uint64_t data) {

  for (auto it = py_vfio_ioeventfd_exit.begin(); it != py_vfio_ioeventfd_exit.end();
       ++it) {
    boost::python::call(*it, const char *name, uint64_t addr, unsigned size,
                        uint64_t data);
  }
}
void cb_vfio_ioeventfd_handler(const char *name, uint64_t addr, unsigned size,
                            uint64_t data) {

  for (auto it = py_vfio_ioeventfd_handler.begin();
       it != py_vfio_ioeventfd_handler.end(); ++it) {
    boost::python::call(*it, const char *name, uint64_t addr, unsigned size,
                        uint64_t data);
  }
}
void cb_vfio_ioeventfd_init(const char *name, uint64_t addr, unsigned size,
                         uint64_t data, bool vfio) {

  for (auto it = py_vfio_ioeventfd_init.begin(); it != py_vfio_ioeventfd_init.end();
       ++it) {
    boost::python::call(*it, const char *name, uint64_t addr, unsigned size,
                        uint64_t data, bool vfio);
  }
}
void cb_vfio_pci_igd_opregion_enabled(const char *name) {

  for (auto it = py_vfio_pci_igd_opregion_enabled.begin();
       it != py_vfio_pci_igd_opregion_enabled.end(); ++it) {
    boost::python::call(*it, const char *name);
  }
}

void cb_vfio_pci_nvidia_gpu_setup_quirk(const char *name, uint64_t tgt,
                                     uint64_t size) {

  for (auto it = py_vfio_pci_nvidia_gpu_setup_quirk.begin();
       it != py_vfio_pci_nvidia_gpu_setup_quirk.end(); ++it) {
  }
}
void cb_vfio_pci_nvlink2_setup_quirk_ssatgt(const char *name, uint64_t tgt,
                                         uint64_t size) {

  for (auto it = py_vfio_pci_nvlink2_setup_quirk_ssatgt.begin();
       it != py_vfio_pci_nvlink2_setup_quirk_ssatgt.end(); ++it) {
  }
}
void cb_vfio_pci_nvlink2_setup_quirk_lnkspd(const char *name,
                                         uint32_t link_speed) {

  for (auto it = py_vfio_pci_nvlink2_setup_quirk_lnkspd.begin();
       it != py_vfio_pci_nvlink2_setup_quirk_lnkspd.end(); ++it) {
  }
}

//# igd.c
void cb_vfio_pci_igd_bar4_write(const char *name, uint32_t index, uint32_t data,
                             uint32_t base) {

  for (auto it = py_vfio_pci_igd_bar4_write.begin();
       it != py_vfio_pci_igd_bar4_write.end(); ++it) {
    boost::python::call(*it, const char *name, uint32_t index, uint32_t data,
                        uint32_t base);
  }
}
void cb_vfio_pci_igd_bdsm_enabled(const char *name, int size) {

  for (auto it = py_vfio_pci_igd_bdsm_enabled.begin();
       it != py_vfio_pci_igd_bdsm_enabled.end(); ++it) {
    boost::python::call(*it, const char *name, int size);
  }
}
void cb_vfio_pci_igd_host_bridge_enabled(const char *name) {

  for (auto it = py_vfio_pci_igd_host_bridge_enabled.begin();
       it != py_usb_packet_state_faultconst char *name)
    ;
}
}
void cb_vfio_pci_igd_lpc_bridge_enabled(const char *name) {

  for (auto it = py_vfio_pci_igd_lpc_bridge_enabled.begin();
       it != py_usb_packet_state_faulconst char *name)
    ;
}
}

//# common.c
void cb_vfio_region_write(const char *name, int index, uint64_t addr,
                       uint64_t data, unsigned size) {

  for (auto it = py_vfio_region_write.begin(); it != py_vfio_region_write.end();
       ++it) {
    boost::python::call(*it, const char *name, int index, uint64_t addr,
                        uint64_t data, unsigned size);
  }
}
void cb_vfio_region_read(char *name, int index, uint64_t addr, unsigned size,
                      uint64_t data) {

  for (auto it = py_vfio_region_read.begin(); it != py_vfio_region_read.end(); ++it) {
    boost::python::call(*it, char *name, int index, uint64_t addr,
                        unsigned size, uint64_t data);
  }
}
void cb_vfio_iommu_map_notify(const char *op, uint64_t iova_start,
                           uint64_t iova_end) {

  for (auto it = py_vfio_iommu_map_notify.begin();
       it != py_vfio_iommu_map_notify.end(); ++it) {
    boost::python::call(*it, const char *op, uint64_t iova_start,
                        uint64_t iova_end);
  }
}
void cb_vfio_listener_region_add_skip(uint64_t start, uint64_t end) {

  for (auto it = py_vfio_listener_region_add_skip.begin();
       it != py_vfio_listener_region_add_skip.end(); ++it) {
    boost::python::call(*it, uint64_t start, uint64_t end);
  }
}
void cb_vfio_spapr_group_attach(int groupfd, int tablefd) {

  for (auto it = py_vfio_spapr_group_attach.begin();
       it != py_vfio_spapr_group_attach.end(); ++it) {
    boost::python::call(*it, int groupfd, int tablefd);
  }
}
void cb_vfio_listener_region_add_iommu(uint64_t start, uint64_t end) {

  for (auto it = py_vfio_listener_region_add_iommu.begin();
       it != py_vfio_listener_region_add_iommu.end(); ++it) {
    boost::python::call(*it,  start,  end);
  }
}
void cb_vfio_listener_region_add_ram(uint64_t iova_start, uint64_t iova_end,
                                  void *vaddr) {

  for (auto it = py_vfio_listener_region_add_ram.begin();
       it != py_vfio_listener_region_add_ram.end(); ++it) {
    boost::python::call(*it,  iova_start,  iova_end,
                         *vaddr);
  }
}
void cb_vfio_listener_region_add_no_dma_map(const char *name, uint64_t iova,
                                         uint64_t size, uint64_t page_size) {

  for (auto it = py_vfio_listener_region_add_no_dma_map.begin();
       it != py_vfio_listener_region_add_no_dma_map.end(); ++it) {
    boost::python::call(*it, name, iova, size, page_size);
  }
}
void cb_vfio_listener_region_del_skip(uint64_t start, uint64_t end) {

  for (auto it = py_vfio_listener_region_del_skip.begin();
       it != py_vfio_listener_region_del_skip.end(); ++it) {
    boost::python::call(*it,  start,  end);
  }
}
void cb_vfio_listener_region_del(uint64_t start, uint64_t end) {

  for (auto it = py_vfio_listener_region_del.begin();
       it != py_vfio_listener_region_del.end(); ++it) {
    boost::python::call(*it,  start,  end);
  }
}
void cb_vfio_disconnect_container(int fd) {

  for (auto it = py_vfio_disconnect_container.begin();
       it != py_vfio_disconnect_container.end(); ++it) {
    boost::python::call(*it,  fd);
  }
}
void cb_vfio_put_group(int fd) {

  for (auto it = py_vfio_put_group.begin(); it != py_vfio_put_group.end(); ++it) {
    boost::python::call(*it,  fd);
  }
}
void cb_vfio_get_device(const char *name, unsigned int flags,
                     unsigned int num_regions, unsigned int num_irqs) {

  for (auto it = py_vfio_get_device.begin(); it != py_vfio_get_device.end(); ++it) {
    boost::python::call(*it,  *name,  flags,
                         num_regions,  num_irqs);
  }
}
void cb_vfio_put_base_device(int fd) {

  for (auto it = py_vfio_put_base_device.begin(); it != py_vfio_put_base_device.end();
       ++it) {
    boost::python::call(*it, int fd);
  }
}
void cb_vfio_region_setup(const char *dev, int index, const char *name,
                       unsigned long flags, unsigned long offset,
                       unsigned long size) {

  for (auto it = py_vfio_region_setup.begin(); it != py_vfio_region_setup.end();
       ++it) {
    boost::python::call(*it,  *dev,  index,  *name,
                         flags,  offset,
                         size);
  }
}
void cb_vfio_region_mmap_fault(const char *name, int index, unsigned long offset,
                            unsigned long size, int fault) {

  for (auto it = py_vfio_region_mmap_fault.begin();
       it != py_vfio_region_mmap_fault.end(); ++it) {
    boost::python::call(*it,   *name,  index,  offset,
                         size,  fault);
  }
}
void cb_vfio_region_mmap(const char *name, unsigned long offset,
                      unsigned long end) {

  for (auto it = py_vfio_region_mmap.begin(); it != py_vfio_region_mmap.end(); ++it) {
    boost::python::call(*it,  *name,  offset,
                         end);
  }
}
void cb_vfio_region_exit( *name,  index) {

  for (auto it = py_vfio_region_exit.begin(); it != py_vfio_region_exit.end(); ++it) {
    boost::python::call(*it, const char *name, int index);
  }
}
void cb_vfio_region_finalize( *name,  index) {

  for (auto it = py_vfio_region_finalize.begin(); it != py_vfio_region_finalize.end();
       ++it) {
    boost::python::call(*it,  *name,  index);
  }
}
void cb_vfio_region_mmaps_set_enabled(const char *name, bool enabled) {

  for (auto it = py_vfio_region_mmaps_set_enabled.begin();
       it != py_vfio_region_mmaps_set_enabled.end(); ++it) {
    boost::python::call(*it,  *name,  enabled);
  }
}
void cb_vfio_region_unmap(const char *name, unsigned long offset,
                       unsigned long end) {

  for (auto it = py_vfio_region_unmap.begin(); it != py_vfio_region_unmap.end();
       ++it) {
    boost::python::call(*it,  *name,   offset,
                         end);
  }
}
void cb_vfio_region_sparse_mmap_header(const char *name, int index, int nr_areas) {

  for (auto it = py_vfio_region_sparse_mmap_header.begin();
       it != py_vfio_region_sparse_mmap_header.end(); ++it) {
    boost::python::call(*it,  *name,  index,  nr_areas);
  }
}
void cb_vfio_region_sparse_mmap_entry(int i, unsigned long start,
                                   unsigned long end) {

  for (auto it = py_vfio_region_sparse_mmap_entry.begin();
       it != py_vfio_region_sparse_mmap_entry.end(); ++it) {
    boost::python::call(*it,  i,   start,   end);
  }
}
void cb_vfio_get_dev_region(const char *name, int index, uint32_t type,
                         uint32_t subtype) {

  for (auto it = py_vfio_get_dev_region.begin(); it != py_vfio_get_dev_region.end();
       ++it) {
    boost::python::call(*it,  *name,  index, unt32_t type,
                         subtype);
  }
}
void cb_vfio_dma_unmap_overflow_workaround(void) {

  for (auto it = py_vfio_dma_unmap_overflow_workaround.begin();
       it != py_vfio_dma_unmap_overflow_workaround.end(); ++it) {
    boost::python::call(*it);
  }
}

//# platform.c
void cb_vfio_platform_base_device_init(char *name, int groupid) {

  for (auto it = py_vfio_platform_base_device_init.begin();
       it != py_vfio_platform_base_device_init.end(); ++it) {
    boost::python::call(*it, char *name, int groupid);
  }
}
void cb_vfio_platform_realize(char *name, char *compat) {

  for (auto it = py_vfio_platform_realize.begin();
       it != py_vfio_platform_realize.end(); ++it) {
    boost::python::call(*it, char *name, char *compat);
  }
}
void cb_vfio_platform_eoi(int pin, int fd) {

  for (auto it = py_vfio_platform_eoi.begin(); it != py_vfio_platform_eoi.end();
       ++it) {
    boost::python::call(*it, int pin, int fd);
  }
}
void cb_vfio_platform_intp_mmap_enable(int pin) {

  for (auto it = py_vfio_platform_intp_mmap_enable.begin();
       it != py_vfio_platform_intp_mmap_enable.end(); ++it) {
    boost::python::call(*it, int pin);
  }
}
void cb_vfio_platform_intp_interrupt(int pin, int fd) {

  for (auto it = py_vfio_platform_intp_interrupt.begin();
       it != py_vfio_platform_intp_interrupt.end(); ++it) {
    boost::python::call(*it, int pin, int fd);
  }
}
void cb_vfio_platform_intp_inject_pending_lockheld(int pin, int fd) {

  for (auto it = py_vfio_platform_intp_inject_pending_lockheld.begin();
       it != py_vfio_platform_intp_inject_pending_lockheld.end(); ++it) {
    ;
  }
}
void cb_vfio_platform_populate_interrupts(int pin, int count, int flags) {

  for (auto it = py_vfio_platform_populate_interrupts.begin();
       it != py_vfio_platform_populate_interrupts.end(); ++it) {
    ;
  }
}
void cb_vfio_intp_interrupt_set_pending(int index) {

  for (auto it = py_vfio_intp_interrupt_set_pending.begin();
       it != py_vfio_intp_interrupt_set_pending index.end(); ++it) {
  }
}
void cb_vfio_platform_start_level_irqfd_injection(int index, int fd,
                                               int resamplefd) {

  for (auto it = py_vfio_platform_start_level_irqfd_injection.begin();
       it != py_vfio_platform_start_level_irqfd_injection.end(); ++it) {

    boost::python::call(*it, index, fd);
  }
}
void cb_vfio_platform_start_edge_irqfd_injection(int index, int fd) {

  for (auto it = py_vfio_platform_start_edge_irqfd_injection.begin();
       it != py_vfio_platform_start_edge_irqfd_injection.end(); ++it) {

    boost::python::call(*it, index, fd);
  }
}

//# spapr.c
void cb_vfio_prereg_listener_region_add_skip(uint64_t start, uint64_t end) {

  for (auto it = py_vfio_prereg_listener_region_add_skip.begin(); ++it;) {
    boost::python::call(*it, start, end);
  }
}
void cb_vfio_prereg_listener_region_del_skip(uint64_t start, uint64_t end) {

  for (auto it = py_vfio_prereg_listener_region_del_skip.begin(){
    boost::python::call(*it, start, end);
}
}
void cb_vfio_prereg_register(uint64_t va, uint64_t size, int ret) {

  for (auto it = py_vfio_prereg_register.begin(); it != py_vfio_prereg_register.end();
       ++it) {
    boost::python::call(*it, va, size, ret);
  }
}
void cb_vfio_prereg_unregister(uint64_t va, uint64_t size, int ret) {

  for (auto it = py_vfio_prereg_unregister.begin();
       it != py_vfio_prereg_unregister.end(); ++it) {
    boost::python::call(*it, va, size, ret);
  }
}
void cb_vfio_spapr_create_window(int ps, unsigned int levels, uint64_t ws,
                              uint64_t off) {

  for (auto it = py_vfio_spapr_create_window.begin();
       it != py_vfio_spapr_create_window.end(); ++it) {
    boost::python::call(*it, ps, levels, ws, off);
  }
}
void cb_vfio_spapr_remove_window(uint64_t off) {

  for (auto it = py_vfio_spapr_remove_window.begin();
       it != py_vfio_spapr_remove_window.end(); ++it) {
    boost::python::call(*it, off);
  }
}

//# display.c
void cb_vfio_display_edid_available(void) {

  for (auto it = py_vfio_display_edid_available.begin();
       it != py_vfio_display_edid_available.end(); ++it) {
    boost::python::call(*it);
  }
}
void cb_vfio_display_edid_link_up(void) {

  for (auto it = py_vfio_display_edid_link_up.begin();
       it != py_vfio_display_edid_link_up.end(); ++it) {
    boost::python::call(*it);
  }
}
void cb_vfio_display_edid_link_down(void) {

  for (auto it = py_vfio_display_edid_link_down.begin();
       it != py_vfio_display_edid_link_down.end(); ++it) {
    boost::python::call(*it);
  }
}
void cb_vfio_display_edid_update(uint32_t prefx, uint32_t prefy) {

  for (auto it = py_vfio_display_edid_update.begin();
       it != py_vfio_display_edid_update.end(); ++it) {
    boost::python::call(*it, prefx, prefy);
  }
}
void cb_vfio_display_edid_write_error(void) {

  for (auto it = py_vfio_display_edid_write_error.begin();
       it != py_vfio_display_edid_write_error.end(); ++it) {
    boost::python::call(*it);
  }
}

//# migration.c
void cb_vfio_migration_probe(const char *name, uint32_t index) {

  for (auto it = py_vfio_migration_probe.begin(); it != py_vfio_migration_probe.end();
       ++it) {
    boost::python::call(*it, name, index);
  }
}
void cb_vfio_migration_set_state(const char *name, uint32_t state) {

  for (auto it = py_vfio_migration_set_state.begin();
       it != py_vfio_migration_set_state.end(); ++it) {
    boost::python::call(*it, name, state);
  }
}
void cb_vfio_vmstate_change(const char *name, int running, const char *reason,
                         uint32_t dev_state) {

  for (auto it = py_vfio_vmstate_change.begin(); it != py_vfio_vmstate_change.end();
       ++it) {
    boost::python::call(*it, name, running, reason, dev_state);
  }
}
void cb_vfio_migration_state_notifier(const char *name, const char *state) {

  for (auto it = py_vfio_migration_state_notifier.begin();
       it != py_vfio_migration_state_notifier.end(); ++it) {
    boost::python::call(*it, name, state);
  }
}
void cb_vfio_save_setup(const char *name) {

  for (auto it = py_vfio_save_setup.begin(); it != py_vfio_save_setup.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vfio_save_cleanup(const char *name) {

  for (auto it = py_vfio_save_cleanup.begin(); it != py_vfio_save_cleanup.end();
       ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vfio_save_buffer(const char *name, uint64_t data_offset,
                      uint64_t data_size, uint64_t pending) {

  for (auto it = py_vfio_save_buffer.begin(); it != py_vfio_save_buffer.end(); ++it) {
    boost::python::call(*it, name, data_offset, data_size, pending);
  }
}
void cb_vfio_update_pending(const char *name, uint64_t pending) {

  for (auto it = py_vfio_update_pending.begin(); it != py_vfio_update_pending.end();
       ++it) {
    boost::python::call(*it, name, pending);
  }
}
void cb_vfio_save_device_config_state(const char *name) {

  for (auto it = py_vfio_save_device_config_state.begin();
       it != py_vfio_save_device_config_state.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vfio_save_pending(const char *name, uint64_t precopy, uint64_t postcopy,
                       uint64_t compatible) {

  for (auto it = py_vfio_save_pending.begin(); it != py_vfio_save_pending.end();
       ++it) {
    boost::python::call(*it, name, precopy, postcopy, compatible);
  }
}
void cb_vfio_save_iterate(const char *name, int data_size) {

  for (auto it = py_vfio_save_iterate.begin(); it != py_vfio_save_iterate.end();
       ++it) {
    boost::python::call(*it, name, data_size);
  }
}
void cb_vfio_save_complete_precopy(const char *name) {

  for (auto it = py_vfio_save_complete_precopy.begin();
       it != py_vfio_save_complete_precopy.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vfio_load_device_config_state(const char *name) {

  for (auto it = py_vfio_load_device_config_state.begin();
       it != py_vfio_load_device_config_state.end(); ++it) {
    boost::python::call(*it, *name);
  }
}
void cb_vfio_load_state(name, data) {

  for (auto it = py_vfio_load_state.begin(); it != py_vfio_load_state.end(); ++it) {
    boost::python::call(*it, const name, data);
  }
}
void cb_vfio_load_state_device_data(const char *name, uint64_t data_offset,
                                 uint64_t data_size) {

  for (auto it = py_vfio_load_state_device_data.begin();
       it != py_vfio_load_state_device_data.end(); ++it) {
    boost::python::call(*it, name, data_offset, data_size);
  }
}
void cb_vfio_load_cleanup(const char *name) {

  for (auto it = py_vfio_load_cleanup.begin(); it != py_vfio_load_cleanup.end();
       ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vfio_get_dirty_bitmap(int fd, uint64_t iova, uint64_t size,
                           uint64_t bitmap_size, uint64_t start) {

  for (auto it = py_vfio_get_dirty_bitmap.begin();
       it != py_vfio_get_dirty_bitmap.end(); ++it) {
    boost::python::call(*it, fd, iova, size, bitmap_size, start);
  }
}
void cb_vfio_iommu_map_dirty_notify(uint64_t iova_start, uint64_t iova_end) {

  for (auto it = py_vfio_iommu_map_dirty_notify.begin();
       it != py_vfio_iommu_map_dirty_notify.end(); ++it) {
    boost::python::call(*it, iova_start, iova_end);
  }
}
