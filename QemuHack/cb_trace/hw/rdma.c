//# See docs/devel/tracing.txt for syntax documentation.

//# rdma_backend.c
void cb_rdma_check_dev_attr(const char *name, int max_bk, int max_fe) {

  for (auto it = py_rdma_check_dev_attr.begin(); it != py_rdma_check_dev_attr.end();
       ++it) {
    boost::python::call(*it,   *name,  max_bk,  max_fe);
  }

}
void cb_rdma_create_ah_cache_hit(uint64_t subnet, uint64_t if_id) {

  for (auto it = py_rdma_create_ah_cache_hit.begin(); it != py_rdma_create_ah_cache_hit.end();
       ++it) {
    boost::python::call(*it,  subnet,  if_id);
  }

}
void cb_rdma_create_ah_cache_miss(uint64_t subnet, uint64_t if_id) {

  for (auto it = py_rdma_create_ah_cache_miss.begin(); it != py_rdma_create_ah_cache_miss.end();
       ++it) {
    boost::python::call(*it,  subnet,  if_id);
  }

}
void cb_rdma_poll_cq(int ne, void *ibcq) {

  for (auto it = py_rdma_poll_cq.begin(); it != py_rdma_poll_cq.end();
       ++it) {
    boost::python::call(*it,  ne, ibcq);
  }

}
void cb_rdmacm_mux(const char *title, int msg_type, int op_code) {

  for (auto it = py_rdmacm_mux.begin(); it != py_rdmacm_mux.end();
       ++it) {
    boost::python::call(*it,   *title,  msg_type,  op_code);
  }

}
void cb_rdmacm_mux_check_op_status(int msg_type, int op_code, int err_code) {

  for (auto it = py_rdmacm_mux_check_op_status.begin(); it != py_rdmacm_mux_check_op_status.end();
       ++it) {
    boost::python::call(*it,  msg_type,  op_code,  err_code);
  }

}
void cb_rdma_mad_message(const char *title, int len, char *data) {

  for (auto it = py_rdma_mad_message.begin(); it != py_rdma_mad_message.end();
       ++it) {
    boost::python::call(*it,   *title,  len,  *data);
  }

}
void cb_rdma_backend_rc_qp_state_init(uint32_t qpn) {

  for (auto it = py_rdma_backend_rc_qp_state_init.begin(); it != py_rdma_backend_rc_qp_state_init.end();
       ++it) {
    boost::python::call(*it,  qpn);
  }

}
void cb_rdma_backend_ud_qp_state_init(uint32_t qpn, uint32_t qkey) {

  for (auto it = py_rdma_backend_ud_qp_state_init.begin(); it != py_rdma_backend_ud_qp_state_init.end();
       ++it) {
    boost::python::call(*it,  qpn,  qkey);
  }

}
void cb_rdma_backend_rc_qp_state_rtr(uint32_t qpn, uint64_t subnet, uint64_t ifid, uint8_t sgid_idx, uint32_t dqpn, uint32_t rq_psn) {

  for (auto it = py_rdma_backend_rc_qp_state_rtr.begin(); it != py_rdma_backend_rc_qp_state_rtr.end();
       ++it) {
    boost::python::call(*it,  qpn,  subnet,  ifid,  sgid_idx,  dqpn,  rq_psn);
  }

}
void cb_rdma_backend_ud_qp_state_rtr(uint32_t qpn, uint32_t qkey) {

  for (auto it = py_rdma_backend_ud_qp_state_rtr.begin(); it != py_rdma_backend_ud_qp_state_rtr.end();
       ++it) {
    boost::python::call(*it,  qpn,  qkey);
  }

}
void cb_rdma_backend_rc_qp_state_rts(uint32_t qpn, uint32_t sq_psn) {

  for (auto it = py_rdma_backend_rc_qp_state_rts.begin(); it != py_rdma_backend_rc_qp_state_rts.end();
       ++it) {
    boost::python::call(*it,  qpn,  sq_psn);
  }

}
void cb_rdma_backend_ud_qp_state_rts(uint32_t qpn, uint32_t sq_psn, uint32_t qkey) {

  for (auto it = py_rdma_backend_ud_qp_state_rts.begin(); it != py_rdma_backend_ud_qp_state_rts.end();
       ++it) {
    boost::python::call(*it,  qpn,  sq_psn,  qkey);
  }

}
void cb_rdma_backend_get_gid_index(uint64_t subnet, uint64_t ifid, int gid_idx) {

  for (auto it = py_rdma_backend_get_gid_index.begin(); it != py_rdma_backend_get_gid_index.end();
       ++it) {
    boost::python::call(*it,  subnet,  ifid,  gid_idx);
  }

}
void cb_rdma_backend_gid_change(const char *op, uint64_t subnet, uint64_t ifid) {

  for (auto it = py_rdma_backend_gid_change.begin(); it != py_rdma_backend_gid_change.end();
       ++it) {
    boost::python::call(*it,   *op,  subnet,  ifid);
  }

}

//# rdma_rm.c
void cb_rdma_res_tbl_get(char *name, uint32_t handle) {

  for (auto it = py_rdma_res_tbl_get.begin(); it != py_rdma_res_tbl_get.end();
       ++it) {
    boost::python::call(*it,  *name,  handle);
  }

}
void cb_rdma_res_tbl_alloc(char *name, uint32_t handle) {

  for (auto it = py_rdma_res_tbl_alloc.begin(); it != py_rdma_res_tbl_alloc.end();
       ++it) {
    boost::python::call(*it,  *name,  handle);
  }

}
void cb_rdma_res_tbl_dealloc(char *name, uint32_t handle) {

  for (auto it = py_rdma_res_tbl_dealloc.begin(); it != py_rdma_res_tbl_dealloc.end();
       ++it) {
    boost::python::call(*it,  *name,  handle);
  }

}
void cb_rdma_rm_alloc_mr(uint32_t mr_handle, void *host_virt, uint64_t guest_start, uint64_t guest_length, int access_flags) {

  for (auto it = py_rdma_rm_alloc_mr.begin(); it != py_rdma_rm_alloc_mr.end();
       ++it) {
    boost::python::call(*it,  mr_handle, host_virt,  guest_start,  guest_length,  access_flags);
  }

}
void cb_rdma_rm_dealloc_mr(uint32_t mr_handle, uint64_t guest_start) {

  for (auto it = py_rdma_rm_dealloc_mr.begin(); it != py_rdma_rm_dealloc_mr.end();
       ++it) {
    boost::python::call(*it,  mr_handle,  guest_start);
  }

}
void cb_rdma_rm_alloc_qp(uint32_t rm_qpn, uint32_t backend_qpn, uint8_t qp_type) {

  for (auto it = py_rdma_rm_alloc_qp.begin(); it != py_rdma_rm_alloc_qp.end();
       ++it) {
    boost::python::call(*it,  rm_qpn,  backend_qpn,  qp_type);
  }

}
void cb_rdma_rm_modify_qp(uint32_t qpn, uint32_t attr_mask, int qp_state, uint8_t sgid_idx) {

  for (auto it = py_rdma_rm_modify_qp.begin(); it != py_rdma_rm_modify_qp.end();
       ++it) {
    boost::python::call(*it,  qpn,  attr_mask,  qp_state,  sgid_idx);
  }

}

//# rdma_utils.c
void cb_rdma_pci_dma_map(uint64_t addr, void *vaddr, uint64_t len) {

  for (auto it = py_rdma_pci_dma_map.begin(); it != py_rdma_pci_dma_map.end();
       ++it) {
    boost::python::call(*it,  addr, vaddr,  len);
  }

}
void cb_rdma_pci_dma_unmap(void *vaddr) {

  for (auto it = py_rdma_pci_dma_unmap.begin(); it != py_rdma_pci_dma_unmap.end();
       ++it) {
    boost::python::call(*it, vaddr);
  }

}
