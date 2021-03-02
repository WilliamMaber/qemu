//#See docs / devel / tracing.txt for syntax documentation.

//#aio - posix.c
void run_poll_handlers_begin(void *ctx, int64_t max_ns, int64_t timeout) {
  for (auto it = run_poll_handlers_begin.begin();
       it != run_poll_handlers_begin.end(); ++it) {
    boost::python::call(*it, ctx,  max_ns,  timeout);
  }
}
void run_poll_handlers_end(void *ctx, bool progress, int64_t timeout) {
  for (auto it = run_poll_handlers_end.begin();
       it != run_poll_handlers_end.end(); ++it) {
    boost::python::call(*it, ctx,  progress,  timeout);
  }
}
void poll_shrink(void *ctx, int64_t old, int64_t new) {
  for (auto it = poll_shrink.begin(); it != poll_shrink.end(); ++it) {
    boost::python::call(*it, ctx,  old,  new);
  }
}
void poll_grow(void *ctx, int64_t old, int64_t new) {
  for (auto it = poll_grow.begin(); it != poll_grow.end(); ++it) {
    boost::python::call(*it, ctx,  old,  new);
  }
}
void poll_add(void *ctx, void *node, int fd, unsigned revents) {
  for (auto it = poll_add.begin(); it != poll_add.end(); ++it) {
    boost::python::call(*it, ctx, node,  fd,  revents);
  }
}
void poll_remove(void *ctx, void *node, int fd) {
  for (auto it = poll_remove.begin(); it != poll_remove.end(); ++it) {
    boost::python::call(*it, ctx, node,  fd);
  }
}

//#async.c
void aio_co_schedule(void *ctx, void *co) {
  for (auto it = aio_co_schedule.begin(); it != aio_co_schedule.end(); ++it) {
    boost::python::call(*it, ctx, co);
  }
}
void aio_co_schedule_bh_cb(void *ctx, void *co) {
  for (auto it = aio_co_schedule_bh_cb.begin();
       it != aio_co_schedule_bh_cb.end(); ++it) {
    boost::python::call(*it, ctx, co);
  }
}

//#thread - pool.c
void thread_pool_submit(void *pool, void *req, void *opaque) {
  for (auto it = thread_pool_submit.begin(); it != thread_pool_submit.end();
       ++it) {
    boost::python::call(*it, pool, req, opaque);
  }
}
void thread_pool_complete(void *pool, void *req, void *opaque, int ret) {
  for (auto it = thread_pool_complete.begin(); it != thread_pool_complete.end();
       ++it) {
    boost::python::call(*it, pool, req, opaque,  ret);
  }
}
void thread_pool_cancel(void *req, void *opaque) {
  for (auto it = thread_pool_cancel.begin(); it != thread_pool_cancel.end();
       ++it) {
    boost::python::call(*it, req, opaque);
  }
}

//#buffer.c
void buffer_resize(const char *buf, size_t olen, size_t len) {
  for (auto it = buffer_resize.begin(); it != buffer_resize.end(); ++it) {
    boost::python::call(*it,   *buf,  olen,  len);
  }
}
void buffer_move_empty(const char *buf, size_t len, const char *from) {
  for (auto it = buffer_move_empty.begin(); it != buffer_move_empty.end();
       ++it) {
    boost::python::call(*it,   *buf,  len,   *from);
  }
}
void buffer_move(const char *buf, size_t len, const char *from) {
  for (auto it = buffer_move.begin(); it != buffer_move.end(); ++it) {
    boost::python::call(*it,   *buf,  len,   *from);
  }
}
void buffer_free(const char *buf, size_t len) {
  for (auto it = buffer_free.begin(); it != buffer_free.end(); ++it) {
    boost::python::call(*it,   *buf,  len);
  }
}

//#filemonitor - inotify.c
void qemu_file_monitor_add_watch(void *mon, const char *dirpath,
                                 const char *filename, void *cb, void *opaque,
                                 int64_t id) {
  for (auto it = qemu_file_monitor_add_watch.begin();
       it != qemu_file_monitor_add_watch.end(); ++it) {
    boost::python::call(*it, mon,   *dirpath,
                        const char *filename, void *cb, void *opaque,
                        int64_t id);
  }
}
void qemu_file_monitor_remove_watch(void *mon, const char *dirpath,
                                    int64_t id) {
  for (auto it = qemu_file_monitor_remove_watch.begin();
       it != qemu_file_monitor_remove_watch.end(); ++it) {
    boost::python::call(*it, mon,   *dirpath,  id);
  }
}
void qemu_file_monitor_new(void *mon, int fd) {
  for (auto it = qemu_file_monitor_new.begin();
       it != qemu_file_monitor_new.end(); ++it) {
    boost::python::call(*it, mon,  fd);
  }
}
void qemu_file_monitor_enable_watch(void *mon, const char *dirpath, int id) {
  for (auto it = qemu_file_monitor_enable_watch.begin();
       it != qemu_file_monitor_enable_watch.end(); ++it) {
    boost::python::call(*it, mon,   *dirpath,  id);
  }
}
void qemu_file_monitor_disable_watch(void *mon, const char *dirpath, int id) {
  for (auto it = qemu_file_monitor_disable_watch.begin();
       it != qemu_file_monitor_disable_watch.end(); ++it) {
    boost::python::call(*it, mon,   *dirpath,  id);
  }
}
void qemu_file_monitor_event(void *mon, const char *dirpath,
                             const char *filename, int mask, unsigned int id) {
  for (auto it = qemu_file_monitor_event.begin();
       it != qemu_file_monitor_event.end(); ++it) {
    boost::python::call(*it, mon,   *dirpath,
                        const char *filename, int mask, unsigned int id);
  }
}
void qemu_file_monitor_dispatch(void *mon, const char *dirpath,
                                const char *filename, int ev, void *cb,
                                void *opaque, int64_t id) {
  for (auto it = qemu_file_monitor_dispatch.begin();
       it != qemu_file_monitor_dispatch.end(); ++it) {
    boost::python::call(*it, mon,   *dirpath,
                        const char *filename, int ev, void *cb, void *opaque,
                        int64_t id);
  }
}

//#qemu - coroutine.c
void qemu_aio_coroutine_enter(void *ctx, void *from, void *to, void *opaque) {
  for (auto it = qemu_aio_coroutine_enter.begin();
       it != qemu_aio_coroutine_enter.end(); ++it) {
    boost::python::call(*it, ctx, from, to, opaque);
  }
}
void qemu_coroutine_yield(void *from, void *to) {
  for (auto it = qemu_coroutine_yield.begin(); it != qemu_coroutine_yield.end();
       ++it) {
    boost::python::call(*it, from, to);
  }
}
void qemu_coroutine_terminate(void *co) {
  for (auto it = qemu_coroutine_terminate.begin();
       it != qemu_coroutine_terminate.end(); ++it) {
    boost::python::call(*it, co);
  }
}

//#qemu - coroutine - lock.c
void qemu_co_mutex_lock_uncontended(void *mutex, void *self) {
  for (auto it = qemu_co_mutex_lock_uncontended.begin();
       it != qemu_co_mutex_lock_uncontended.end(); ++it) {
    boost::python::call(*it, mutex, self);
  }
}
void qemu_co_mutex_lock_entry(void *mutex, void *self) {
  for (auto it = qemu_co_mutex_lock_entry.begin();
       it != qemu_co_mutex_lock_entry.end(); ++it) {
    boost::python::call(*it, mutex, self);
  }
}
void qemu_co_mutex_lock_return(void *mutex, void *self) {
  for (auto it = qemu_co_mutex_lock_return.begin();
       it != qemu_co_mutex_lock_return.end(); ++it) {
    boost::python::call(*it, mutex, self);
  }
}
void qemu_co_mutex_unlock_entry(void *mutex, void *self) {
  for (auto it = qemu_co_mutex_unlock_entry.begin();
       it != qemu_co_mutex_unlock_entry.end(); ++it) {
    boost::python::call(*it, mutex, self);
  }
}
void qemu_co_mutex_unlock_return(void *mutex, void *self) {
  for (auto it = qemu_co_mutex_unlock_return.begin();
       it != qemu_co_mutex_unlock_return.end(); ++it) {
    boost::python::call(*it, mutex, self);
  }
}

//#oslib - posix.c
//#oslib - win32.c
void qemu_memalign(size_t alignment, size_t size, void *ptr) {
  for (auto it = qemu_memalign.begin(); it != qemu_memalign.end(); ++it) {
    boost::python::call(*it,  alignment,  size, ptr);
  }
}
void qemu_anon_ram_alloc(size_t size, void *ptr) {
  for (auto it = qemu_anon_ram_alloc.begin(); it != qemu_anon_ram_alloc.end();
       ++it) {
    boost::python::call(*it,  size, ptr);
  }
}
void qemu_vfree(void *ptr) {
  for (auto it = qemu_vfree.begin(); it != qemu_vfree.end(); ++it) {
    boost::python::call(*it, ptr);
  }
}
void qemu_anon_ram_free(void *ptr, size_t size) {
  for (auto it = qemu_anon_ram_free.begin(); it != qemu_anon_ram_free.end();
       ++it) {
    boost::python::call(*it, ptr,  size);
  }
}

//#hbitmap.c
void hbitmap_iter_skip_words(const void *hb, void *hbi, uint64_t pos,
                             unsigned long cur) {
  for (auto it = hbitmap_iter_skip_words.begin();
       it != hbitmap_iter_skip_words.end(); ++it) {
    boost::python::call(*it,  hb, hbi,  pos,
                        unsigned long cur);
  }
}
void hbitmap_reset(void *hb, uint64_t start, uint64_t count, uint64_t sbit,
                   uint64_t ebit) {
  for (auto it = hbitmap_reset.begin(); it != hbitmap_reset.end(); ++it) {
    boost::python::call(*it, hb,  start,  count,
                        uint64_t sbit, uint64_t ebit);
  }
}
void hbitmap_set(void *hb, uint64_t start, uint64_t count, uint64_t sbit,
                 uint64_t ebit) {
  for (auto it = hbitmap_set.begin(); it != hbitmap_set.end(); ++it) {
    boost::python::call(*it, hb,  start,  count,
                        uint64_t sbit, uint64_t ebit);
  }
}

//#lockcnt.c
void lockcnt_fast_path_attempt(const void *lockcnt, int expected, int new) {
  for (auto it = lockcnt_fast_path_attempt.begin();
       it != lockcnt_fast_path_attempt.end(); ++it) {
    boost::python::call(*it,  lockcnt,  expected,  new);
  }
}
void lockcnt_fast_path_success(const void *lockcnt, int expected, int new) {
  for (auto it = lockcnt_fast_path_success.begin();
       it != lockcnt_fast_path_success.end(); ++it) {
    boost::python::call(*it,  lockcnt,  expected,  new);
  }
}
void lockcnt_unlock_attempt(const void *lockcnt, int expected, int new) {
  for (auto it = lockcnt_unlock_attempt.begin();
       it != lockcnt_unlock_attempt.end(); ++it) {
    boost::python::call(*it,  lockcnt,  expected,  new);
  }
}
void lockcnt_unlock_success(const void *lockcnt, int expected, int new) {
  for (auto it = lockcnt_unlock_success.begin();
       it != lockcnt_unlock_success.end(); ++it) {
    boost::python::call(*it,  lockcnt,  expected,  new);
  }
}
void lockcnt_futex_wait_prepare(const void *lockcnt, int expected, int new) {
  for (auto it = lockcnt_futex_wait_prepare.begin();
       it != lockcnt_futex_wait_prepare.end(); ++it) {
    boost::python::call(*it,  lockcnt,  expected,  new);
  }
}
void lockcnt_futex_wait(const void *lockcnt, int val) {
  for (auto it = lockcnt_futex_wait.begin(); it != lockcnt_futex_wait.end();
       ++it) {
    boost::python::call(*it,  lockcnt,  val);
  }
}
void lockcnt_futex_wait_resume(const void *lockcnt, int new) {
  for (auto it = lockcnt_futex_wait_resume.begin();
       it != lockcnt_futex_wait_resume.end(); ++it) {
    boost::python::call(*it,  lockcnt,  new);
  }
}
void lockcnt_futex_wake(const void *lockcnt) {
  for (auto it = lockcnt_futex_wake.begin(); it != lockcnt_futex_wake.end();
       ++it) {
    boost::python::call(*it,  lockcnt);
  }
}

//#qemu - sockets.c
void socket_listen(int num) {
  for (auto it = socket_listen.begin(); it != socket_listen.end(); ++it) {
    boost::python::call(*it,  num);
  }
}

//#qemu - thread - common.h
//#qemu - thread - posix.c
//#qemu - thread - win32.c
void qemu_mutex_lock(void *mutex, const char *file, const int line) {
  for (auto it = qemu_mutex_lock.begin(); it != qemu_mutex_lock.end(); ++it) {
    boost::python::call(*it, mutex,   *file,   line);
  }
}
void qemu_mutex_locked(void *mutex, const char *file, const int line) {
  for (auto it = qemu_mutex_locked.begin(); it != qemu_mutex_locked.end();
       ++it) {
    boost::python::call(*it, mutex,   *file,   line);
  }
}
void qemu_mutex_unlock(void *mutex, const char *file, const int line) {
  for (auto it = qemu_mutex_unlock.begin(); it != qemu_mutex_unlock.end();
       ++it) {
    boost::python::call(*it, mutex,   *file,   line);
  }
}

//#vfio - helpers.c
void qemu_vfio_dma_reset_temporary(void *s) {
  for (auto it = qemu_vfio_dma_reset_temporary.begin();
       it != qemu_vfio_dma_reset_temporary.end(); ++it) {
    boost::python::call(*it, s);
  }
}
void qemu_vfio_ram_block_added(void *s, void *p, size_t size) {
  for (auto it = qemu_vfio_ram_block_added.begin();
       it != qemu_vfio_ram_block_added.end(); ++it) {
    boost::python::call(*it, s, p,  size);
  }
}
void qemu_vfio_ram_block_removed(void *s, void *p, size_t size) {
  for (auto it = qemu_vfio_ram_block_removed.begin();
       it != qemu_vfio_ram_block_removed.end(); ++it) {
    boost::python::call(*it, s, p,  size);
  }
}
void qemu_vfio_dump_mapping(void *host, uint64_t iova, size_t size) {
  for (auto it = qemu_vfio_dump_mapping.begin();
       it != qemu_vfio_dump_mapping.end(); ++it) {
    boost::python::call(*it, host,  iova,  size);
  }
}
void qemu_vfio_find_mapping(void *s, void *p) {
  for (auto it = qemu_vfio_find_mapping.begin();
       it != qemu_vfio_find_mapping.end(); ++it) {
    boost::python::call(*it, s, p);
  }
}
void qemu_vfio_new_mapping(void *s, void *host, size_t size, int index,
                           uint64_t iova) {
  for (auto it = qemu_vfio_new_mapping.begin();
       it != qemu_vfio_new_mapping.end(); ++it) {
    boost::python::call(*it, s, host,  size,  index,
                        uint64_t iova);
  }
}
void qemu_vfio_do_mapping(void *s, void *host, uint64_t iova, size_t size) {
  for (auto it = qemu_vfio_do_mapping.begin(); it != qemu_vfio_do_mapping.end();
       ++it) {
    boost::python::call(*it, s, host,  iova,  size);
  }
}
void qemu_vfio_dma_map(void *s, void *host, size_t size, bool temporary,
                       uint64_t *iova) {
  for (auto it = qemu_vfio_dma_map.begin(); it != qemu_vfio_dma_map.end();
       ++it) {
    boost::python::call(*it, s, host,  size,  temporary,
                        uint64_t *iova);
  }
}
void qemu_vfio_dma_mapped(void *s, void *host, uint64_t iova, size_t size) {
  for (auto it = qemu_vfio_dma_mapped.begin(); it != qemu_vfio_dma_mapped.end();
       ++it) {
    boost::python::call(*it, s, host,  iova,  size);
  }
}
void qemu_vfio_dma_unmap(void *s, void *host) {
  for (auto it = qemu_vfio_dma_unmap.begin(); it != qemu_vfio_dma_unmap.end();
       ++it) {
    boost::python::call(*it, s, host);
  }
}
void qemu_vfio_pci_read_config(void *buf, int ofs, int size,
                               uint64_t region_ofs, uint64_t region_size) {
  for (auto it = qemu_vfio_pci_read_config.begin();
       it != qemu_vfio_pci_read_config.end(); ++it) {
    boost::python::call(*it, buf,  ofs,  size,  region_ofs,
                        uint64_t region_size);
  }
}
void qemu_vfio_pci_write_config(void *buf, int ofs, int size,
                                uint64_t region_ofs, uint64_t region_size) {
  for (auto it = qemu_vfio_pci_write_config.begin();
       it != qemu_vfio_pci_write_config.end(); ++it) {
    boost::python::call(*it, buf,  ofs,  size,  region_ofs,
                        uint64_t region_size);
  }
}
void qemu_vfio_region_info(const char *desc, uint64_t region_ofs,
                           uint64_t region_size, uint32_t cap_offset) {
  for (auto it = qemu_vfio_region_info.begin();
       it != qemu_vfio_region_info.end(); ++it) {
    boost::python::call(*it,   *desc,  region_ofs,
                        uint64_t region_size, uint32_t cap_offset);
  }
}
void qemu_vfio_pci_map_bar(int index, uint64_t region_ofs, uint64_t region_size,
                           int ofs, void *host) {
  for (auto it = qemu_vfio_pci_map_bar.begin();
       it != qemu_vfio_pci_map_bar.end(); ++it) {
    boost::python::call(*it,  index,  region_ofs,
                        uint64_t region_size, int ofs, void *host);
  }
}

//#userfaultfd.c
void uffd_query_features_nosys(int err) {
  for (auto it = uffd_query_features_nosys.begin();
       it != uffd_query_features_nosys.end(); ++it) {
    boost::python::call(*it,  err);
  }
}
void uffd_query_features_api_failed(int err) {
  for (auto it = uffd_query_features_api_failed.begin();
       it != uffd_query_features_api_failed.end(); ++it) {
    boost::python::call(*it,  err);
  }
}
void uffd_create_fd_nosys(int err) {
  for (auto it = uffd_create_fd_nosys.begin(); it != uffd_create_fd_nosys.end();
       ++it) {
    boost::python::call(*it,  err);
  }
}
void uffd_create_fd_api_failed(int err) {
  for (auto it = uffd_create_fd_api_failed.begin();
       it != uffd_create_fd_api_failed.end(); ++it) {
    boost::python::call(*it,  err);
  }
}
void uffd_create_fd_api_noioctl(uint64_t ioctl_req, uint64_t ioctl_supp) {
  for (auto it = uffd_create_fd_api_noioctl.begin();
       it != uffd_create_fd_api_noioctl.end(); ++it) {
    boost::python::call(*it,  ioctl_req,  ioctl_supp);
  }
}
void uffd_register_memory_failed(void *addr, uint64_t length, uint64_t mode,
                                 int err) {
  for (auto it = uffd_register_memory_failed.begin();
       it != uffd_register_memory_failed.end(); ++it) {
    boost::python::call(*it, addr,  length,  mode,
                        int err);
  }
}
void uffd_unregister_memory_failed(void *addr, uint64_t length, int err) {
  for (auto it = uffd_unregister_memory_failed.begin();
       it != uffd_unregister_memory_failed.end(); ++it) {
    boost::python::call(*it, addr,  length,  err);
  }
}
