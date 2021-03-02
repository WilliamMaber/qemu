//#See docs / devel / tracing.txt for syntax documentation.

//#vhost.c
void cb_vhost_commit(bool started, bool changed) {

  for (auto it = py_vhost_commit.begin(); it != py_vhost_commit.end(); ++it) {
    boost::python::call(*it,  started,  changed);
  }
}
void cb_vhost_region_add_section(const char *name, uint64_t gpa, uint64_t size,
                              uint64_t host) {

  for (auto it = py_vhost_region_add_section.begin();
       it != py_vhost_region_add_section.end(); ++it) {
    boost::python::call(*it, name,  gpa,  size,
                                   host);
  }
}
void cb_vhost_region_add_section_merge(const char *name, uint64_t new_size,
                                    uint64_t gpa, uint64_t owr) {

  for (auto it = py_vhost_region_add_section_merge.begin();
       it != py_vhost_region_add_section_merge.end(); ++it) {
    boost::python::call(*it, name,  new_size,
                                         gpa,  owr);
  }
}
void cb_vhost_region_add_section_aligned(const char *name, uint64_t gpa,
                                      uint64_t size, uint64_t host) {

  for (auto it = py_vhost_region_add_section_aligned.begin();
       it != py_vhost_region_add_section_aligned.end(); ++it) {
    boost::python::call(*it, name,  gpa,
                                           size,  host);
  }
}
void cb_vhost_section(const char *name) {

  for (auto it = py_vhost_section.begin(); it != py_vhost_section.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vhost_reject_section(const char *name, int d) {

  for (auto it = py_vhost_reject_section.begin(); it != py_vhost_reject_section.end();
       ++it) {
    boost::python::call(*it, name,d);
  }
}
void cb_vhost_iotlb_miss(void *dev, int step) {

  for (auto it = py_vhost_iotlb_miss.begin(); it != py_vhost_iotlb_miss.end(); ++it) {
    boost::python::call(*it, dev,  step);
  }
}

//#vhost - user.c
void cb_vhost_user_postcopy_end_entry(void) {

  for (auto it = py_vhost_user_postcopy_end_entry.begin();
       it != py_vhost_user_postcopy_end_entry.end(); ++it) {
    boost::python::call(*it);
  }
}
void cb_vhost_user_postcopy_end_exit(void) {

  for (auto it = py_vhost_user_postcopy_end_exit.begin();
       it != py_vhost_user_postcopy_end_exit.end(); ++it) {
    boost::python::call(*it);
  }
}
void cb_vhost_user_postcopy_fault_handler(const char *name, uint64_t fault_address,
                                       int nregions) {

  for (auto it = py_vhost_user_postcopy_fault_handler.begin();
       it != py_vhost_user_postcopy_fault_handler.end(); ++it) {
    boost::python::call(*it, name,  fault_address,
                                            nregions);
  }
}
void cb_vhost_user_postcopy_fault_handler_loop(int i, uint64_t client_base,
                                            uint64_t size) {

  for (auto it = py_vhost_user_postcopy_fault_handler_loop.begin();
       it != py_vhost_user_postcopy_fault_handler_loop.end(); ++it) {
    boost::python::call(*it, i,  client_base,
                                                 size);
  }
}
void cb_vhost_user_postcopy_fault_handler_found(int i, uint64_t region_offset,
                                             uint64_t rb_offset) {

  for (auto it = py_vhost_user_postcopy_fault_handler_found.begin();
       it != py_vhost_user_postcopy_fault_handler_found.end(); ++it) {
    boost::python::call(*it,  i,  region_offset,
                                                  rb_offs);
  }
}
void cb_vhost_user_postcopy_listen(void) {

  for (auto it = py_vhost_user_postcopy_listen.begin();
       it != py_vhost_user_postcopy_listen.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vhost_user_set_mem_table_postcopy(uint64_t client_addr, uint64_t qhva,
                                       int reply_i, int region_i) {

  for (auto it = py_vhost_user_set_mem_table_postcopy.begin();
       it != py_vhost_user_set_mem_table_postcopy.end(); ++it) {
    boost::python::call(*it, client_addr,  qhva,
                                            reply_i,  region_i);
  }
}
void cb_vhost_user_set_mem_table_withfd(int index, const char *name,
                                     uint64_t memory_size,
                                     uint64_t guest_phys_addr,
                                     uint64_t userspace_addr, uint64_t offset) {

  for (auto it = py_vhost_user_set_mem_table_withfd.begin();
       it != py_vhost_user_set_mem_table_withfd.end(); ++it) {
    boost::python::call(*it, index, name,
                                          memory_size,
                                          guest_phys_addr,
                                          userspace_addr,  offset);
  }
}
void cb_vhost_user_postcopy_waker(const char *rb, uint64_t rb_offset) {

  for (auto it = py_vhost_user_postcopy_waker.begin();
       it != py_vhost_user_postcopy_waker.end(); ++it) {
    boost::python::call(*it, rb,  rb_offset);
  }
}
void cb_vhost_user_postcopy_waker_found(uint64_t client_addr) {

  for (auto it = py_vhost_user_postcopy_waker_found.begin();
       it != py_vhost_user_postcopy_waker_found.end(); ++it) {
    boost::python::call(*it, client_addr);
  }
}
void cb_vhost_user_postcopy_waker_nomatch(const char *rb, uint64_t rb_offset) {

  for (auto it = py_vhost_user_postcopy_waker_nomatch.begin();
       it != py_vhost_user_postcopy_waker_nomatch.end(); ++it) {
    boost::python::call(*it, rb,  rb_offset);
  }
}

//#vhost - vdpa.c
void cb_vhost_vdpa_dma_map(void *vdpa, int fd, uint32_t msg_type, uint64_t iova,
                        uint64_t size, uint64_t uaddr, uint8_t perm,
                        uint8_t type) {

  for (auto it = py_vhost_vdpa_dma_map.begin(); vhost_vdpa_dma_mapo_intx_eoi.end();
       ++it) {
    boost::python::call(*it, vdpa,  fd,  msg_type,  iova,
                             size,  uaddr,  perm,
                             type);
  }
}
void cb_vhost_vdpa_dma_unmap(void *vdpa, int fd, uint32_t msg_type, uint64_t iova,
                          uint64_t size, uint8_t type) {

  for (auto it = py_vhost_vdpa_dma_unmap.begin(); it != py_vhost_vdpa_dma_unmap.end();
       ++it) {
    boost::python::call(*it, vdpa,  fd,  msg_type,  iova,
                               size,  type);
  }
}
void cb_vhost_vdpa_listener_region_add(void *vdpa, uint64_t iova, uint64_t llend,
                                    void *vaddr, bool readonly) {

  for (auto it = py_vhost_vdpa_listener_region_add.begin();
       it != py_vhost_vdpa_listener_region_add.end(); ++it) {
    boost::python::call(*it, vdpa,  iova,  llend,
                                         vaddr,  readonly);
  }
}
void cb_vhost_vdpa_listener_region_del(void *vdpa, uint64_t iova, uint64_t llend) {

  for (auto it = py_vhost_vdpa_listener_region_del.begin();
       it != py_vhost_vdpa_listener_region_del.end(); ++it) {
    boost::python::call(*it, vdpa,  iova,  llend);
  }
}
void cb_vhost_vdpa_add_status(void *dev, uint8_t status) {

  for (auto it = py_vhost_vdpa_add_status.begin();
       it != py_vhost_vdpa_add_status.end(); ++it) {
    boost::python::call(*it, dev,  status);
  }
}
void cb_vhost_vdpa_init(void *dev, void *vdpa) {

  for (auto it = py_vhost_vdpa_init.begin(); it != py_vhost_vdpa_init.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vhost_vdpa_cleanup(void *dev, void *vdpa) {

  for (auto it = py_vhost_vdpa_cleanup.begin(); vhost_vdpa_cleanupo_intx_eoi.end();
       ++it) {
    boost::python::call(*it, dev, vdpa);
  }
}
void cb_vhost_vdpa_memslots_limit(void *dev, int ret) {

  for (auto it = py_vhost_vdpa_memslots_limit.begin();
       it != py_vhost_vdpa_memslots_limit.end(); ++it) {
    boost::python::call(*it, dev,  ret);
  }
}
void cb_vhost_vdpa_set_mem_table(void *dev, uint32_t nregions, uint32_t padding) {

  for (auto it = py_vhost_vdpa_set_mem_table.begin();
       it != py_vhost_vdpa_set_mem_table.end(); ++it) {
    boost::python::call(*it, dev,  nregions,  padding);
  }
}
void cb_vhost_vdpa_dump_regions(void *dev, int i, uint64_t guest_phys_addr,
                             uint64_t memory_size, uint64_t userspace_addr,
                             uint64_t flags_padding) {

  for (auto it = py_vhost_vdpa_dump_regions.begin();
       it != py_vhost_vdpa_dump_regions.end(); ++it) {
    boost::python::call(*it, *dev,  i,  guest_phys_addr,
                                  memory_size,  userspace_addr,
                                  flags_padding);
  }
}
void cb_vhost_vdpa_set_features(void *dev, uint64_t features) {

  for (auto it = py_vhost_vdpa_set_features.begin();
       it != py_vhost_vdpa_set_features.end(); ++it) {
    boost::python::call(*it, dev,  features);
  }
}
void cb_vhost_vdpa_get_device_id(void *dev, uint32_t device_id) {

  for (auto it = py_vhost_vdpa_get_device_id.begin();
       it != py_vhost_vdpa_get_device_id.end(); ++it) {
    boost::python::call(*it, dev,  device_id);
  }
}
void cb_vhost_vdpa_reset_device(void *dev, uint8_t status) {

  for (auto it = py_vhost_vdpa_reset_device.begin();
       it != py_vhost_vdpa_reset_device.end(); ++it) {
    boost::python::call(*it, dev,status);
  }
}
void cb_vhost_vdpa_get_vq_index(void *dev, int idx, int vq_idx) {

  for (auto it = py_vhost_vdpa_get_vq_index.begin();
       it != py_vhost_vdpa_get_vq_index.end(); ++it) {
    boost::python::call(*it, dev,idx,vq_idx);
  }
}
void cb_vhost_vdpa_set_vring_ready(void *dev) {

  for (auto it = py_vhost_vdpa_set_vring_ready.begin();
       it != py_vhost_vdpa_set_vring_ready.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_vhost_vdpa_dump_config(void *dev, const char *line) {

  for (auto it = py_vhost_vdpa_dump_config.begin();
       it != py_vhost_vdpa_dump_config.end(); ++it) {
    boost::python::call(*it, dev, line);
  }
}
void cb_vhost_vdpa_set_config(void *dev, uint32_t offset, uint32_t size,
                           uint32_t flags) {

  for (auto it = py_vhost_vdpa_set_config.begin();
       it != py_vhost_vdpa_set_config.end(); ++it) {
    boost::python::call(*it, dev, offset, size, flags);
  }
}
void cb_vhost_vdpa_get_config(void *dev, void *config, uint32_t config_len) {

  for (auto it = py_vhost_vdpa_get_config.begin();
       it != py_vhost_vdpa_get_config.end(); ++it) {
    boost::python::call(*it, dev, config, config_len);
  }
}
void cb_vhost_vdpa_dev_start(void *dev, bool started) {

  for (auto it = py_vhost_vdpa_dev_start.begin(); it != py_vhost_vdpa_dev_start.end();
       ++it) {
    boost::python::call(*it, dev, started);
  }
}
void cb_vhost_vdpa_set_log_base(void *dev, uint64_t base, unsigned long long size,
                             int refcnt, int fd, void *log) {

  for (auto it = py_vhost_vdpa_set_log_base.begin();
       it != py_vhost_vdpa_set_log_base.end(); ++it) {
    boost::python::call(*it, *dev, base, size, refcnt, fd, *log);
  }
}
void cb_vhost_vdpa_set_vring_addr(void *dev, unsigned int index,
                               unsigned int flags, uint64_t desc_user_addr,
                               uint64_t used_user_addr,
                               uint64_t avail_user_addr,
                               uint64_t log_guest_addr) {

  for (auto it = py_vhost_vdpa_set_vring_addr.begin();
       it != py_vhost_vdpa_set_vring_addr.end(); ++it) {
    boost::python::call(*it, *dev, index, flags, desc_user_addr, used_user_addr,
                        avail_user_addr, log_guest_addr);
  }
}
void cb_vhost_vdpa_set_vring_num(void *dev, unsigned int index, unsigned int num) {

  for (auto it = py_vhost_vdpa_set_vring_num.begin();
       it != py_vhost_vdpa_set_vring_num.end(); ++it) {
    boost::python::call(*it, dev, index, num);
  }
}
void cb_vhost_vdpa_set_vring_base(void *dev, unsigned int index,
                               unsigned int num) {

  for (auto it = py_vhost_vdpa_set_vring_base.begin();
       it != py_vhost_vdpa_set_vring_base.end(); ++it) {
    boost::python::call(*it, dev, index, num);
  }
}
void cb_vhost_vdpa_get_vring_base(void *dev, unsigned int index,
                               unsigned int num) {

  for (auto it = py_vhost_vdpa_get_vring_base.begin();
       it != py_vhost_vdpa_get_vring_base.end(); ++it) {
    boost::python::call(*it, dev, index, num);
  }
}
void cb_vhost_vdpa_set_vring_kick(void *dev, unsigned int index, int fd) {

  for (auto it = py_vhost_vdpa_set_vring_kick.begin();
       it != py_vhost_vdpa_set_vring_kick.end(); ++it) {
    boost::python::call(*it, dev, index, fd);
  }
}
void cb_vhost_vdpa_set_vring_call(void *dev, unsigned int index, int fd) {

  for (auto it = py_vhost_vdpa_set_vring_call.begin();
       it != py_vhost_vdpa_set_vring_call.end(); ++it) {
    boost::python::call(*it, dev, index, fd);
  }
}
void cb_vhost_vdpa_get_features(void *dev, uint64_t features) {

  for (auto it = py_vhost_vdpa_get_features.begin();
       it != py_vhost_vdpa_get_features.end(); ++it) {
    boost::python::call(*it, dev, features);
  }
}
void cb_vhost_vdpa_set_owner(void *dev) {

  for (auto it = py_vhost_vdpa_set_owner.begin(); it != py_vhost_vdpa_set_owner.end();
       ++it) {
    boost::python::call(*it, dev);
  }
}
void cb_vhost_vdpa_vq_get_addr(void *dev, void *vq, uint64_t desc_user_addr,
                            uint64_t avail_user_addr, uint64_t used_user_addr) {

  for (auto it = py_vhost_vdpa_vq_get_addr.begin();
       it != py_vhost_vdpa_vq_get_addr.end(); ++it) {
    boost::python::call(*it, dev, vq, desc_user_addr, avail_user_addr,
                        used_user_addr);
  }
}

//#virtio.c
void cb_virtqueue_alloc_element(void *elem, size_t sz, unsigned in_num,
                             unsigned out_num) {

  for (auto it = py_virtqueue_alloc_element.begin();
       it != py_virtqueue_alloc_element.end(); ++it) {
    boost::python::call(*it, elem, sz, in_num, out_num);
  }
}
void cb_virtqueue_fill(void *vq, const void *elem, unsigned int len,
                    unsigned int idx) {

  for (auto it = py_virtqueue_fill.begin(); it != py_virtqueue_fill.end(); ++it) {
    boost::python::call(*it, vq, elem, len, idx);
  }
}
void cb_virtqueue_flush(void *vq, unsigned int count) {

  for (auto it = py_virtqueue_flush.begin(); it != py_virtqueue_flush.end(); ++it) {
    boost::python::call(*it, vq, count);
  }
}
void cb_virtqueue_pop(void *vq, void *elem, unsigned int in_num,
                   unsigned int out_num) {

  for (auto it = py_virtqueue_pop.begin(); it != py_virtqueue_pop.end(); ++it) {
    boost::python::call(*it, vq, elem, in_num, out_num);
  }
}
void cb_virtio_queue_notify(void *vdev, int n, void *vq) {

  for (auto it = py_virtio_queue_notify.begin(); it != py_virtio_queue_notify.end();
       ++it) {
    boost::python::call(*it, vdev, n, vq);
  }
}
void cb_virtio_notify_irqfd(void *vdev, void *vq) {

  for (auto it = py_virtio_notify_irqfd.begin(); it != py_virtio_notify_irqfd.end();
       ++it) {
    boost::python::call(*it, vdev, vq);
  }
}
void cb_virtio_notify(void *vdev, void *vq) {

  for (auto it = py_virtio_notify.begin(); it != py_virtio_notify.end(); ++it) {
    boost::python::call(*it, vdev, vq);
  }
}
void cb_virtio_set_status(void *vdev, uint8_t val) {

  for (auto it = py_virtio_set_status.begin(); it != py_virtio_set_status.end();
       ++it) {
    boost::python::call(*it, vdev, val);
  }
}

//#virtio - rng.c
void cb_virtio_rng_guest_not_ready(void *rng) {

  for (auto it = py_virtio_rng_guest_not_ready.begin();
       it != py_virtio_rng_guest_not_ready.end(); ++it) {
    boost::python::call(*it, rng);
  }
}
void cb_virtio_rng_cpu_is_stopped(void *rng, int size) {

  for (auto it = py_virtio_rng_cpu_is_stopped.begin();
       it != py_virtio_rng_cpu_is_stopped.end(); ++it) {
    boost::python::call(*it, rng, size);
  }
}
void cb_virtio_rng_popped(void *rng) {

  for (auto it = py_virtio_rng_popped.begin(); it != py_virtio_rng_popped.end();
       ++it) {
    boost::python::call(*it, rng);
  }
}
void cb_virtio_rng_pushed(void *rng, size_t len) {

  for (auto it = py_virtio_rng_pushed.begin(); it != py_virtio_rng_pushed.end();
       ++it) {
    boost::python::call(*it, rng, len);
  }
}
void cb_virtio_rng_request(void *rng, size_t size, unsigned quota) {

  for (auto it = py_virtio_rng_request.begin(); virtio_rng_requesto_intx_eoi.end();
       ++it) {
    boost::python::call(*it, rng, size, quota);
  }
}
void cb_virtio_rng_vm_state_change(void *rng, int running, int state) {

  for (auto it = py_virtio_rng_vm_state_change.begin();
       it != py_virtio_rng_vm_state_change.end(); ++it) {
    boost::python::call(*it, rng,  running,  state);
  }
}

//#virtio - balloon.c
//#
void cb_virtio_balloon_bad_addr(uint64_t gpa) {

  for (auto it = py_virtio_balloon_bad_addr.begin();
       it != py_virtio_balloon_bad_addr.end(); ++it) {
    boost::python::call(*it, gpa);
  }
}
void cb_virtio_balloon_handle_output(const char *name, uint64_t gpa) {

  for (auto it = py_virtio_balloon_handle_output.begin();
       it != py_virtio_balloon_handle_output.end(); ++it) {
    boost::python::call(*it, name,  gpa);
  }
}
void cb_virtio_balloon_get_config(uint32_t num_pages, uint32_t actual) {

  for (auto it = py_virtio_balloon_get_config.begin();
       it != py_virtio_balloon_get_config.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_virtio_balloon_set_config(uint32_t actual, uint32_t oldactual) {

  for (auto it = py_virtio_balloon_set_config.begin();
       it != py_virtio_balloon_set_config.end(); ++it) {
    boost::python::call(*it, actual,  oldactual);
  }
}
void cb_virtio_balloon_to_target(uint64_t target, uint32_t num_pages) {

  for (auto it = py_virtio_balloon_to_target.begin();
       it != py_virtio_balloon_to_target.end(); ++it) {
    boost::python::call(*it, target,  num_pages);
  }
}

//#virtio - mmio.c
void cb_virtio_mmio_read(uint64_t offset) {

  for (auto it = py_virtio_mmio_read.begin(); it != py_virtio_mmio_read.end(); ++it) {
    boost::python::call(*it, offset);
  }
}
void cb_virtio_mmio_write_offset(uint64_t offset, uint64_t value) {

  for (auto it = py_virtio_mmio_write_offset.begin();
       it != py_virtio_mmio_write_offset.end(); ++it) {
    boost::python::call(*it, offset,  value);
  }
}
void cb_virtio_mmio_guest_page(uint64_t size, int shift) {

  for (auto it = py_virtio_mmio_guest_page.begin();
       it != py_virtio_mmio_guest_page.end(); ++it) {
    boost::python::call(*it, size,  shift);
  }
}
void cb_virtio_mmio_queue_write(uint64_t value, int max_size) {

  for (auto it = py_virtio_mmio_queue_write.begin();
       it != py_virtio_mmio_queue_write.end(); ++it) {
    boost::python::call(*it, value,  max_size);
  }
}
void cb_virtio_mmio_setting_irq(int level) {

  for (auto it = py_virtio_mmio_setting_irq.begin();
       it != py_virtio_mmio_setting_irq.end(); ++it) {
    boost::python::call(*it, level);
  }
}

//#virtio - iommu.c
void cb_virtio_iommu_device_reset(void) {

  for (auto it = py_virtio_iommu_device_reset.begin();
       it != py_virtio_iommu_device_reset.end(); ++it) {
    boost::python::call(*it);
  }
}
void cb_virtio_iommu_get_features(uint64_t features) {

  for (auto it = py_virtio_iommu_get_features.begin();
       it != py_virtio_iommu_get_features.end(); ++it) {
    boost::python::call(*it, features);
  }
}
void cb_virtio_iommu_device_status(uint8_t status) {

  for (auto it = py_virtio_iommu_device_status.begin();
       it != py_virtio_iommu_device_status.end(); ++it) {
    boost::python::call(*it, status);
  }
}
void cb_virtio_iommu_get_config(uint64_t page_size_mask, uint64_t start,
                             uint64_t end, uint32_t domain_range,
                             uint32_t probe_size) {

  for (auto it = py_virtio_iommu_get_config.begin();
       it != py_virtio_iommu_get_config.end(); ++it) {
    boost::python::call(*it, page_size_mask, start, end, domain_range,
                        probe_size);
  }
}
void cb_virtio_iommu_set_config(uint64_t page_size_mask, uint64_t start,
                             uint64_t end, uint32_t domain_range,
                             uint32_t probe_size) {

  for (auto it = py_virtio_iommu_set_config.begin();
       it != py_virtio_iommu_set_config.end(); ++it) {
    boost::python::call(*it, page_size_mask, start, end, domain_range,
                        probe_size);
  }
}
void cb_virtio_iommu_attach(uint32_t domain_id, uint32_t ep_id) {

  for (auto it = py_virtio_iommu_attach.begin(); it != py_virtio_iommu_attach.end();
       ++it) {
    boost::python::call(*it, domain_id, ep_id);
  }
}
void cb_virtio_iommu_detach(uint32_t domain_id, uint32_t ep_id) {

  for (auto it = py_virtio_iommu_detach.begin(); it != py_virtio_iommu_detach.end();
       ++it) {
    boost::python::call(*it, domain_id, ep_id);
  }
}
void cb_virtio_iommu_map(uint32_t domain_id, uint64_t virt_start,
                      uint64_t virt_end, uint64_t phys_start, uint32_t flags) {

  for (auto it = py_virtio_iommu_map.begin(); it != py_virtio_iommu_map.end(); ++it) {
    boost::python::call(*it, domain_id, virt_start, virt_end, phys_start,
                        flags);
  }
}
void cb_virtio_iommu_unmap(uint32_t domain_id, uint64_t virt_start,
                        uint64_t virt_end) {

  for (auto it = py_virtio_iommu_unmap.begin(); virtio_iommu_unmapo_intx_eoi.end();
       ++it) {
    boost::python::call(*it, domain_id, virt_start, virt_end);
  }
}
void cb_virtio_iommu_unmap_done(uint32_t domain_id, uint64_t virt_start,
                             uint64_t virt_end) {

  for (auto it = py_virtio_iommu_unmap_done.begin();
       it != py_virtio_iommu_unmap_done.end(); ++it) {
    boost::python::call(*it, domain_id, virt_start, virt_end);
  }
}
void cb_virtio_iommu_translate(const char *name, uint32_t rid, uint64_t iova,
                            int flag) {

  for (auto it = py_virtio_iommu_translate.begin();
       it != py_virtio_iommu_translate.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_virtio_iommu_init_iommu_mr(char *iommu_mr) {

  for (auto it = py_virtio_iommu_init_iommu_mr.begin();
       it != py_virtio_iommu_init_iommu_mr.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_virtio_iommu_get_endpoint(uint32_t ep_id) {

  for (auto it = py_virtio_iommu_get_endpoint.begin();
       it != py_virtio_iommu_get_endpoint.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_virtio_iommu_put_endpoint(uint32_t ep_id) {

  for (auto it = py_virtio_iommu_put_endpoint.begin();
       it != py_virtio_iommu_put_endpoint.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_virtio_iommu_get_domain(uint32_t domain_id) {

  for (auto it = py_virtio_iommu_get_domain.begin();
       it != py_virtio_iommu_get_domain.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_virtio_iommu_put_domain(uint32_t domain_id) {

  for (auto it = py_virtio_iommu_put_domain.begin();
       it != py_virtio_iommu_put_domain.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_virtio_iommu_translate_out(uint64_t virt_addr, uint64_t phys_addr,
                                uint32_t sid) {

  for (auto it = py_virtio_iommu_translate_out.begin();
       it != py_virtio_iommu_translate_out.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_virtio_iommu_report_fault(uint8_t reason, uint32_t flags,
                               uint32_t endpoint, uint64_t addr) {

  for (auto it = py_virtio_iommu_report_fault.begin();
       it != py_virtio_iommu_report_fault.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_virtio_iommu_fill_resv_property(uint32_t devid, uint8_t subtype,
                                     uint64_t start, uint64_t end) {

  for (auto it = py_virtio_iommu_fill_resv_property.begin();
       it != py_virtio_iommu_fill_resv_property.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_virtio_iommu_notify_map(const char *name, uint64_t virt_start,
                             uint64_t virt_end, uint64_t phys_start,
                             uint32_t flags) {

  for (auto it = py_virtio_iommu_notify_map.begin();
       it != py_virtio_iommu_notify_map.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_virtio_iommu_notify_unmap(const char *name, uint64_t virt_start,
                               uint64_t virt_end) {

  for (auto it = py_virtio_iommu_notify_unmap.begin();
       it != py_virtio_iommu_notify_unmap.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_virtio_iommu_remap(const char *name, uint64_t virt_start,
                        uint64_t virt_end, uint64_t phys_start) {

  for (auto it = py_virtio_iommu_remap.begin(); virtio_iommu_remapo_intx_eoi.end();
       ++it) {
    boost::python::call(*it, name);
  }
}
void cb_virtio_iommu_set_page_size_mask(const char *name, uint64_t old,
                                     uint64_t new) {

  for (auto it = py_virtio_iommu_set_page_size_mask.begin();
       it != py_virtio_iommu_set_page_size_mask.end(); ++it) {
    boost::python::call(*it,  *name);
  }
}
void cb_virtio_iommu_notify_flag_add(const char *name) {

  for (auto it = py_virtio_iommu_notify_flag_add.begin();
       it != py_virtio_iommu_notify_flag_add.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_virtio_iommu_notify_flag_del(const char *name) {

  for (auto it = py_virtio_iommu_notify_flag_del.begin();
       it != py_virtio_iommu_notify_flag_del.end(); ++it) {
    boost::python::call(*it, name);
  }
}

//#virtio - mem.c
void cb_virtio_mem_send_response(uint16_t type) {

  for (auto it = py_virtio_mem_send_response.begin();
       it != py_virtio_mem_send_response.end(); ++it) {
    boost::python::call(*it, type);
  }
}
void cb_virtio_mem_plug_request(uint64_t addr, uint16_t nb_blocks) {

  for (auto it = py_virtio_mem_plug_request.begin();
       it != py_virtio_mem_plug_request.end(); ++it) {
    boost::python::call(*it, addr, nb_blocks);
  }
}
void cb_virtio_mem_unplug_request(uint64_t addr, uint16_t nb_blocks) {

  for (auto it = py_virtio_mem_unplug_request.begin();
       it != py_virtio_mem_unplug_request.end(); ++it) {
    boost::python::call(*it, addr, nb_blocks);
  }
}
void cb_virtio_mem_unplugged_all(void) {

  for (auto it = py_virtio_mem_unplugged_all.begin();
       it != py_virtio_mem_unplugged_all.end(); ++it) {
    boost::python::call(*it);
  }
}
void cb_virtio_mem_unplug_all_request(void) {

  for (auto it = py_virtio_mem_unplug_all_request.begin();
       it != py_virtio_mem_unplug_all_request.end(); ++it) {
    boost::python::call(*it);
  }
}
void cb_virtio_mem_resized_usable_region(uint64_t old_size, uint64_t new_size) {

  for (auto it = py_virtio_mem_resized_usable_region.begin();
       it != py_virtio_mem_resized_usable_region.end(); ++it) {
    boost::python::call(*it, old_size, new_size);
  }
}
void cb_virtio_mem_state_request(uint64_t addr, uint16_t nb_blocks) {

  for (auto it = py_virtio_mem_state_request.begin();
       it != py_virtio_mem_state_request.end(); ++it) {
    boost::python::call(*it, addr, nb_blocks);
  }
}
void cb_virtio_mem_state_response(uint16_t state) {

  for (auto it = py_virtio_mem_state_response.begin();
       it != py_virtio_mem_state_response.end(); ++it) {
    boost::python::call(*it, state);
  }
}

//#virtio - pmem.c
void cb_virtio_pmem_flush_request(void) {

  for (auto it = py_virtio_pmem_flush_request.begin();
       it != py_virtio_pmem_flush_request.end(); ++it) {
    boost::python::call(*it, name);
  }
}
void cb_virtio_pmem_response(void) {

  for (auto it = py_virtio_pmem_response.begin(); it != py_virtio_pmem_response.end();
       ++it) {
    boost::python::call(*it);
  }
}
void cb_virtio_pmem_flush_done(int type) {

  for (auto it = py_virtio_pmem_flush_done.begin();
       it != py_virtio_pmem_flush_done.end(); ++it) {
    boost::python::call(*it, type);
  }
}
