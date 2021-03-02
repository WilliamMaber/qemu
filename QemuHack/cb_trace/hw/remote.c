//# multi-process trace events

void cb_mpqemu_send_io_error(int cmd, int size, int nfds){

  for (auto it = py_mpqemu_send_io_error.begin(); it != py_mpqemu_send_io_error.end();
       ++it) {
    boost::python::call(*it,  cmd,  size,  nfds);  }
}
void cb_mpqemu_recv_io_error(int cmd, int size, int nfds){

  for (auto it = py_mpqemu_recv_io_error.begin(); it != py_mpqemu_recv_io_error.end();
       ++it) {
    boost::python::call(*it,  cmd,  size,  nfds);  }
}
