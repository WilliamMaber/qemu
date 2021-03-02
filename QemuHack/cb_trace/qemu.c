//#See docs / devel / tracing.txt for syntax documentation.

//#dma - helpers.c
void cb_dma_blk_io(void *dbs, void *bs, int64_t offset, bool to_dev) {

  for (auto it = dma_blk_io.begin(); it != dma_blk_io.end(); ++it) {
    boost::python::call(*it, dbs, bs, offset, to_dev);
  }
}
void cb_dma_aio_cancel(void *dbs) {

  for (auto it = dma_aio_cancel.begin(); it != dma_aio_cancel.end(); ++it) {
    boost::python::call(*it, dbs);
  }
}
void cb_dma_complete(void *dbs, int ret, void *cb) {

  for (auto it = dma_complete.begin(); it != dma_complete.end(); ++it) {
    boost::python::call(*it, dbs, ret, cb);
  }
}
void cb_dma_blk_cb(void *dbs, int ret) {

  for (auto it = dma_blk_cb.begin(); it != dma_blk_cb.end(); ++it) {
    boost::python::call(*it, dbs, ret);
  }
}
void cb_dma_map_wait(void *dbs) {

  for (auto it = dma_map_wait.begin(); it != dma_map_wait.end(); ++it) {
    boost::python::call(*it, dbs);
  }
}

//#exec.c
void cb_find_ram_offset(uint64_t size, uint64_t offset) {

  for (auto it = find_ram_offset.begin(); it != find_ram_offset.end(); ++it) {
    boost::python::call(*it, size, offset);
  }
}
void cb_find_ram_offset_loop(uint64_t size, uint64_t candidate, uint64_t offset,
                          uint64_t next, uint64_t mingap) {

  for (auto it = find_ram_offset_loop.begin(); it != find_ram_offset_loop.end();
       ++it) {
    boost::python::call(*it, size, candidate, offset, next, mingap);
  }
}
void cb_ram_block_discard_range(const char *rbname, void *hva, size_t length,
                             bool need_madvise, bool need_fallocate, int ret) {

  for (auto it = ram_block_discard_range.begin();
       it != ram_block_discard_range.end(); ++it) {
    boost::python::call(*it, rbname, hva, length, need_madvise, need_fallocate,
                        ret);
  }
}

//#accel / tcg / cputlb.c
void cb_memory_notdirty_write_access(uint64_t vaddr, uint64_t ram_addr,
                                  unsigned size) {

  for (auto it = memory_notdirty_write_access.begin();
       it != memory_notdirty_write_access.end(); ++it) {
    boost::python::call(*it, vaddr, ram_addr, size);
  }
}
void cb_memory_notdirty_set_dirty(uint64_t vaddr) {

  for (auto it = memory_notdirty_set_dirty.begin();
       it != memory_notdirty_set_dirty.end(); ++it) {
    boost::python::call(*it, vaddr);
  }
}

//#gdbstub.c
void cb_gdbstub_op_start(const char *device) {

  for (auto it = gdbstub_op_start.begin(); it != gdbstub_op_start.end(); ++it) {
    boost::python::call(*it, device);
  }
}
void cb_gdbstub_op_exiting(uint8_t code) {

  for (auto it = gdbstub_op_exiting.begin(); it != gdbstub_op_exiting.end();
       ++it) {
    boost::python::call(*it, code);
  }
}
void cb_gdbstub_op_continue(void) {

  for (auto it = gdbstub_op_continue.begin(); it != gdbstub_op_continue.end();
       ++it) {
    boost::python::call(*it);
  }
}
void cb_gdbstub_op_continue_cpu(int cpu_index) {

  for (auto it = gdbstub_op_continue_cpu.begin();
       it != gdbstub_op_continue_cpu.end(); ++it) {
    boost::python::call(*it, cpu_index);
  }
}
void cb_gdbstub_op_stepping(int cpu_index) {

  for (auto it = gdbstub_op_stepping.begin(); it != gdbstub_op_stepping.end();
       ++it) {
    boost::python::call(*it, cpu_index);
  }
}
void cb_gdbstub_op_extra_info(const char *info) {

  for (auto it = gdbstub_op_extra_info.begin();
       it != gdbstub_op_extra_info.end(); ++it) {
    boost::python::call(*it, info);
  }
}
void cb_gdbstub_hit_watchpoint(const char *type, int cpu_gdb_index,
                            uint64_t vaddr) {

  for (auto it = gdbstub_hit_watchpoint.begin();
       it != gdbstub_hit_watchpoint.end(); ++it) {
    boost::python::call(*it, type, cpu_gdb_index, vaddr);
  }
}
void cb_gdbstub_hit_internal_error(void) {

  for (auto it = gdbstub_hit_internal_error.begin();
       it != gdbstub_hit_internal_error.end(); ++it) {
    boost::python::call(*it);
  }
}
void cb_gdbstub_hit_break(void) {

  for (auto it = gdbstub_hit_break.begin(); it != gdbstub_hit_break.end();
       ++it) {
    boost::python::call(*it);
  }
}
void cb_gdbstub_hit_paused(void) {

  for (auto it = gdbstub_hit_paused.begin(); it != gdbstub_hit_paused.end();
       ++it) {
    boost::python::call(*it);
  }
}
void cb_gdbstub_hit_shutdown(void) {

  for (auto it = gdbstub_hit_shutdown.begin(); it != gdbstub_hit_shutdown.end();
       ++it) {
                    boost,void) ll(*ivoid *ioc)id);
  }
}
void cb_gdbstub_hit_io_error(void) {

  for (auto it = gdbstub_hit_io_error.begin(); it != gdbstub_hit_io_error.end();
       ++it) {
    boost::python::call(*it);
  }
}
void cb_gdbstub_hit_watchdog(void) {

  for (auto it = gdbstub_hit_watchdog.begin(); it != gdbstub_hit_watchdog.end();
       ++it) {
    boost::python::call(*it);
  }
}
void cb_gdbstub_hit_unknown(int state) {

  for (auto it = gdbstub_hit_unknown.begin(); it != gdbstub_hit_unknown.end();
       ++it) {
    boost::python::call(*it, state);
  }
}
void cb_gdbstub_io_reply(const char *message) {

  for (auto it = gdbstub_io_reply.begin(); it != gdbstub_io_reply.end(); ++it) {
    boost::python::call(*it, message);
  }
}
void cb_gdbstub_io_binaryreply(size_t ofs, const char *line) {

  for (auto it = gdbstub_io_binaryreply.begin();
       it != gdbstub_io_binaryreply.end(); ++it) {
    boost::python::call(*it, ofs, line);
  }
}
void cb_gdbstub_io_command(const char *command) {

  for (auto it = gdbstub_io_command.begin(); it != gdbstub_io_command.end();
       ++it) {
    boost::python::call(*it, command);
  }
}
void cb_gdbstub_io_got_ack(void) {

  for (auto it = gdbstub_io_got_ack.begin(); it != gdbstub_io_got_ack.end();
       ++it) {
    boost::python::call(*it);
  }
}
void cb_gdbstub_io_got_unexpected(uint8_t ch) {

  for (auto it = gdbstub_io_got_unexpected.begin();
       it != gdbstub_io_got_unexpected.end(); ++it) {

    boost::python::call(*it, ch);
  }
}
void cb_gdbstub_err_got_nack(void) {

  for (auto it = gdbstub_err_got_nack.begin(); it != gdbstub_err_got_nack.end();
       ++it) {

    boost::python::call(*it);
  }
}
void cb_gdbstub_err_garbage(uint8_t ch) {

  for (auto it = gdbstub_err_garbage.begin(); it != gdbstub_err_garbage.end();
       ++it) {

    boost::python::call(*it, ch);
  }
}
void cb_gdbstub_err_overrun(void) {

  for (auto it = gdbstub_err_overrun.begin(); it != gdbstub_err_overrun.end();
       ++it) {
    boost::python::call(*it);
  }
}
void cb_gdbstub_err_invalid_repeat(uint8_t ch) {

  for (auto it = gdbstub_err_invalid_repeat.begin();
       it != gdbstub_err_invalid_repeat.end(); ++it) {
    boost::python::call(*it, ch);
  }
}
void cb_gdbstub_err_invalid_rle(void) {

  for (auto it = gdbstub_err_invalid_rle.begin();
       it != gdbstub_err_invalid_rle.end(); ++it) {
    boost::python::call(*it);
  }
}
void cb_gdbstub_err_checksum_invalid(uint8_t ch) {

  for (auto it = gdbstub_err_checksum_invalid.begin();
       it != gdbstub_err_checksum_invalid.end(); ++it) {
    boost::python::call(*it, ch);
  }
}
void cb_gdbstub_err_checksum_incorrect(uint8_t expected, uint8_t got) {

  for (auto it = gdbstub_err_checksum_incorrect.begin();
       it != gdbstub_err_checksum_incorrect.end(); ++it) {
    boost::python::call(*it, uint8_t expected, uint8_t got);
  }
}

//#job.c
void cb_job_state_transition(void *job, int ret, const char *legal, const char *s0,
                          const char *s1) {

  for (auto it = job_state_transition.begin(); it != job_state_transition.end();
       ++it) {
    boost::python::call(*it, job, int ret, legal, s0, s1);
  }
}
void cb_job_apply_verb(void *job, const char *state, const char *verb,
                    const char *legal) {

  for (auto it = job_apply_verb.begin(); it != job_apply_verb.end(); ++it) {
    boost::python::call(*it, void *job, const char *state, const char *verb,
                        const char *legal);
  }
}
void cb_job_completed(void *job, int ret) {

  for (auto it = job_completed.begin(); it != job_completed.end(); ++it) {
    boost::python::call(*it, job);
  }
}

//#job - qmp.c
void cb_qmp_job_cancel(void *job) {

  for (auto it = qmp_job_cancel.begin(); it != qmp_job_cancel.end(); ++it) {
    boost::python::call(*it, job);
  }
}
void cb_qmp_job_pause(void *job) {

  for (auto it = qmp_job_pause.begin(); it != qmp_job_pause.end(); ++it) {
    boost::python::call(*it, job);
  }
}
void cb_qmp_job_resume(void *job) {

  for (auto it = qmp_job_resume.begin(); it != qmp_job_resume.end(); ++it) {
    boost::python::call(*it, job);
  }
}
void cb_qmp_job_complete(void *job) {

  for (auto it = qmp_job_complete.begin(); it != qmp_job_complete.end(); ++it) {
    boost::python::call(*it, job);
  }
}
void cb_qmp_job_finalize(void *job) {

  for (auto it = qmp_job_finalize.begin(); it != qmp_job_finalize.end(); ++it) {
    boost::python::call(*it, job);
  }
}
void cb_qmp_job_dismiss(void *job) {

  for (auto it = qmp_job_dismiss.begin(); it != qmp_job_dismiss.end(); ++it) {
    boost::python::call(*it, job);
  }
}

//#//#vCPU

void cb_guest_cpu_enter(void) {

  for (auto it = guest_cpu_enter.begin(); it != guest_cpu_enter.end(); ++it) {
    boost::python::call(*it);
  }
}

//#trace / control.c

void cb_guest_cpu_exit(void) {

  for (auto it = guest_cpu_exit.begin(); it != guest_cpu_exit.end(); ++it) {
    boost::python::call(*it);
  }
}

//#hw / core / cpu.c

void cb_guest_cpu_reset(void) {

  for (auto it = guest_cpu_reset.begin(); it != guest_cpu_reset.end(); ++it) {
    boost::python::call(*it);
  }
}

//#tcg / tcg - op.c

void cb_tcg guest_mem_before(TCGv vaddr, uint16_t info) {

  for (auto it = guest_mem_before.begin(); it != tcg guest_mem_before.end();
       ++it) {
    boost::python::call(*it, vaddr, info);
  }
}

//#include / user / syscall - trace.h

void cb_guest_user_syscall(uint64_t num, uint64_t arg1, uint64_t arg2,
                        uint64_t arg3, uint64_t arg4, uint64_t arg5,
                        uint64_t arg6, uint64_t arg7, uint64_t arg8) {

  for (auto it = guest_user_syscall.begin(); it != guest_user_syscall.end();
       ++it) {
    boost::python::call(*it, num, arg1, arg2, arg3, arg4, arg5, arg6, arg7,
                        arg8);
  }
}

void cb_guest_user_syscall_ret(uint64_t num, uint64_t ret) {

  for (auto it = guest_user_syscall_ret.begin();
       it != guest_user_syscall_ret.end(); ++it) {
    boost::python::call(*it, num, ret);
  }
}
