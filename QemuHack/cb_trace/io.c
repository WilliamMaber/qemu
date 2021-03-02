//#See docs / devel / tracing.txt for syntax documentation.

//#task.c
void cb_qio_task_new(void *task, void *source, void *func, void *opaque) {

  for (auto it = qio_task_new.begin(); it != qio_task_new.end(); ++it) {
    boost::python::call(*it, task, source, func, opaque);
  }
}
void cb_qio_task_complete(void *task) {

  for (auto it = qio_task_complete.begin(); it != qio_task_complete.end();
       ++it) {
    boost::python::call(*it, task);
  }
}
void cb_qio_task_thread_start(void *task, void *worker, void *opaque) {

  for (auto it = qio_task_thread_start.begin();
       it != qio_task_thread_start.end(); ++it) {
    boost::python::call(*it, task, worker, opaque);
  }
}
void cb_qio_task_thread_run(void *task) {

  for (auto it = qio_task_thread_run.begin(); it != qio_task_thread_run.end();
       ++it) {
    boost::python::call(*it, task);
  }
}
void cb_qio_task_thread_exit(void *task) {

  for (auto it = qio_task_thread_exit.begin(); it != qio_task_thread_exit.end();
       ++it) {
    boost::python::call(*it, task);
  }
}
void cb_qio_task_thread_result(void *task) {

  for (auto it = qio_task_thread_result.begin();
       it != qio_task_thread_result.end(); ++it) {
    boost::python::call(*it, task);
  }
}
void cb_qio_task_thread_source_attach(void *task, void *source) {

  for (auto it = qio_task_thread_source_attach.begin();
       it != qio_task_thread_source_attach.end(); ++it) {
    boost::python::call(*it, task, source);
  }
}
void cb_qio_task_thread_source_cancel(void *task, void *source) {

  for (auto it = qio_task_thread_source_cancel.begin();
       it != qio_task_thread_source_cancel.end(); ++it) {
    boost::python::call(*it, task, source);
  }
}

//#channel - socket.c
void cb_qio_channel_socket_new(void *ioc) {

  for (auto it = qio_channel_socket_new.begin();
       it != qio_channel_socket_new.end(); ++it) {
    boost::python::call(*it, ioc);
  }
}
void cb_qio_channel_socket_new_fd(void *ioc, int fd) {

  for (auto it = qio_channel_socket_new_fd.begin();
       it != qio_channel_socket_new_fd.end(); ++it) {
    boost::python::call(*it, ioc, fd);
  }
}
void cb_qio_channel_socket_connect_sync(void *ioc, void *addr) {

  for (auto it = qio_channel_socket_connect_sync.begin();
       it != qio_channel_socket_connect_sync.end(); ++it) {
    boost::python::call(*it, ioc, addr);
  }
}
void cb_qio_channel_socket_connect_async(void *ioc, void *addr) {

  for (auto it = qio_channel_socket_connect_async.begin();
       it != qio_channel_socket_connect_async.end(); ++it) {
    boost::python::call(*it, ioc, addr);
  }
}
void cb_qio_channel_socket_connect_fail(void *ioc) {

  for (auto it = qio_channel_socket_connect_fail.begin();
       it != qio_channel_socket_connect_fail.end(); ++it) {
    boost::python::call(*it, ioc);
  }
}
void cb_qio_channel_socket_connect_complete(void *ioc, int fd) {

  for (auto it = qio_channel_socket_connect_complete.begin();
       it != qio_channel_socket_connect_complete.end(); ++it) {
    boost::python::call(*it, ioc, fd);
  }
}
void cb_qio_channel_socket_listen_sync(void *ioc, void *addr, int num) {

  for (auto it = qio_channel_socket_listen_sync.begin();
       it != qio_channel_socket_listen_sync.end(); ++it) {
    boost::python::call(*it, ioc, addr, num);
  }
}
void cb_qio_channel_socket_listen_async(void *ioc, void *addr, int num) {

  for (auto it = qio_channel_socket_listen_async.begin();
       it != qio_channel_socket_listen_async.end(); ++it) {
    boost::python::call(*it, ioc, addr, num);
  }
}
void cb_qio_channel_socket_listen_fail(void *ioc) {

  for (auto it = qio_channel_socket_listen_fail.begin();
       it != qio_channel_socket_listen_fail.end(); ++it) {
    boost::python::call(*it, ioc);
  }
}
void cb_qio_channel_socket_listen_complete(void *ioc, int fd) {

  for (auto it = qio_channel_socket_listen_complete.begin();
       it != qio_channel_socket_listen_complete.end(); ++it) {
    boost::python::call(*it, void *ioc, int fd);
  }
}
void cb_qio_channel_socket_dgram_sync(void *ioc, void *localAddr,
                                   void *remoteAddr) {

  for (auto it = qio_channel_socket_dgram_sync.begin();
       it != qio_channel_socket_dgram_sync.end(); ++it) {
    boost::python::call(*it, ioc, localAddr, remoteAddr);
  }
}
void cb_qio_channel_socket_dgram_async(void *ioc, void *localAddr,
                                    void *remoteAddr) {

  for (auto it = qio_channel_socket_dgram_async.begin();
       it != qio_channel_socket_dgram_async.end(); ++it) {
    boost::python::call(*it, ioc, localAddr, remoteAddr);
  }
}
void cb_qio_channel_socket_dgram_fail(void *ioc) {

  for (auto it = qio_channel_socket_dgram_fail.begin();
       it != qio_channel_socket_dgram_fail.end(); ++it) {
    boost::python::call(*it, ioc);
  }
}
void cb_qio_channel_socket_dgram_complete(void *ioc, int fd) {

  for (auto it = qio_channel_socket_dgram_complete.begin();
       it != qio_channel_socket_dgram_complete.end(); ++it) {
    boost::python::call(*it, ioc, fd);
  }
}
void cb_qio_channel_socket_accept(void *ioc) {

  for (auto it = qio_channel_socket_accept.begin();
       it != qio_channel_socket_accept.end(); ++it) {
    boost::python::call(*it, ioc);
  }
}
void cb_qio_channel_socket_accept_fail(void *ioc) {

  for (auto it = qio_channel_socket_accept_fail.begin();
       it != qio_channel_socket_accept_fail.end(); ++it) {
    boost::python::call(*it, ioc);
  }
}
void cb_qio_channel_socket_accept_complete(void *ioc, void *cioc, int fd) {

  for (auto it = qio_channel_socket_accept_complete.begin();
       it != qio_channel_socket_accept_complete.end(); ++it) {
    boost::python::call(*it, ioc, cioc, fd);
  }
}

//#channel - file.c
void cb_qio_channel_file_new_fd(void *ioc, int fd) {

  for (auto it = qio_channel_file_new_fd.begin();
       it != qio_channel_file_new_fd.end(); ++it) {
    boost::python::call(*it, ioc, fd);
  }
}
void cb_qio_channel_file_new_path(void *ioc, const char *path, int flags, int mode,
                               int fd) {

  for (auto it = qio_channel_file_new_path.begin();
       it != qio_channel_file_new_path.end(); ++it) {
    boost::python::call(*it, ioc, path, flags, mode, fd);
  }
}

//#channel - tls.c
void cb_qio_channel_tls_new_client(void *ioc, void *master, void *creds,
                                const char *hostname) {

  for (auto it = qio_channel_tls_new_client.begin();
       it != qio_channel_tls_new_client.end(); ++it) {
    boost::python::call(*it, ioc, master, creds, hostname);
  }
}
void cb_qio_channel_tls_new_server(void *ioc, void *master, void *creds,
                                const char *aclname) {

  for (auto it = qio_channel_tls_new_server.begin();
       it != qio_channel_tls_new_server.end(); ++it) {
    boost::python::call(*it, ioc, master, creds, aclname);
  }
}
void cb_qio_channel_tls_handshake_start(void *ioc) {

  for (auto it = qio_channel_tls_handshake_start.begin();
       it != qio_channel_tls_handshake_start.end(); ++it) {
    boost::python::call(*it, ioc);
  }
}
void cb_qio_channel_tls_handshake_pending(void *ioc, int status) {

  for (auto it = qio_channel_tls_handshake_pending.begin();
       it != qio_channel_tls_handshake_pending.end(); ++it) {
    boost::python::call(*it, ioc, status);
  }
}
void cb_qio_channel_tls_handshake_fail(void *ioc) {

  for (auto it = qio_channel_tls_handshake_fail.begin();
       it != qio_channel_tls_handshake_fail.end(); ++it) {
    boost::python::call(*it, ioc);
  }
}
void cb_qio_channel_tls_handshake_complete(void *ioc) {

  for (auto it = qio_channel_tls_handshake_complete.begin();
       it != qio_channel_tls_handshake_complete.end(); ++it) {
    boost::python::call(*it, ioc);
  }
}
void cb_qio_channel_tls_credentials_allow(void *ioc) {

  for (auto it = qio_channel_tls_credentials_allow.begin();
       it != qio_channel_tls_credentials_allow.end(); ++it) {
    boost::python::call(*it, ioc);
  }
}
void cb_qio_channel_tls_credentials_deny(void *ioc) {

  for (auto it = qio_channel_tls_credentials_deny.begin();
       it != qio_channel_tls_credentials_deny.end(); ++it) {
    boost::python::call(*it, ioc);
  }
}

//#channel - websock.c
void cb_qio_channel_websock_new_server(void *ioc, void *master) {

  for (auto it = qio_channel_websock_new_server.begin();
       it != qio_channel_websock_new_server.end(); ++it) {
    boost::python::call(*it, ioc, master);
  }
}
void cb_qio_channel_websock_handshake_start(void *ioc) {

  for (auto it = qio_channel_websock_handshake_start.begin();
       it != qio_channel_websock_handshake_start.end(); ++it) {
    boost::python::call(*it, ioc);
  }
}
void cb_qio_channel_websock_handshake_pending(void *ioc, int status) {

  for (auto it = qio_channel_websock_handshake_pending.begin();
       it != qio_channel_websock_handshake_pending.end(); ++it) {
    boost::python::call(*it, ioc, status);
  }
}
void cb_qio_channel_websock_handshake_reply(void *ioc) {

  for (auto it = qio_channel_websock_handshake_reply.begin();
       it != qio_channel_websock_handshake_reply.end(); ++it) {
    boost::python::call(*it, ioc);
  }
}
void cb_qio_channel_websock_handshake_fail(void *ioc, const char *msg) {

  for (auto it = qio_channel_websock_handshake_fail.begin();
       it != qio_channel_websock_handshake_fail.end(); ++it) {
    boost::python::call(*it, ioc, msg);
  }
}
void cb_qio_channel_websock_handshake_complete(void *ioc) {

  for (auto it = qio_channel_websock_handshake_complete.begin();
       it != qio_channel_websock_handshake_complete.end(); ++it) {
    boost::python::call(*it, ioc);
  }
}
void cb_qio_channel_websock_http_greeting(void *ioc, const char *greeting) {

  for (auto it = qio_channel_websock_http_greeting.begin();
       it != qio_channel_websock_http_greeting.end(); ++it) {
    boost::python::call(*it, ioc, greeting);
  }
}
void cb_qio_channel_websock_http_request(void *ioc, const char *protocols,
                                      const char *version, const char *host,
                                      const char *connection,
                                      const char *upgrade, const char *key) {

  for (auto it = qio_channel_websock_http_request.begin();
       it != qio_channel_websock_http_request.end(); ++it) {
    boost::python::call(*it, ioc, protocols, version, host, connection, upgrade,
                        key);
  }
}
void cb_qio_channel_websock_header_partial_decode(void *ioc, size_t payloadlen,
                                               unsigned char fin,
                                               unsigned char opcode,
                                               unsigned char has_mask) {

  for (auto it = qio_channel_websock_header_partial_decode.begin();
       it != qio_channel_websock_header_partial_decode.end(); ++it) {
    boost::python::call(*it, ioc, payloadlen, fin, opcode, has_mask);
  }
}
void cb_qio_channel_websock_header_full_decode(void *ioc, size_t headerlen,
                                            size_t payloadlen, uint32_t mask) {

  for (auto it = qio_channel_websock_header_full_decode.begin();
       it != qio_channel_websock_header_full_decode.end(); ++it) {
    boost::python::call(*it, ioc, headerlen, payloadlen, mask);
  }
}
void cb_qio_channel_websock_payload_decode(void *ioc, uint8_t opcode,
                                        size_t payload_remain) {

  for (auto it = qio_channel_websock_payload_decode.begin();
       it != qio_channel_websock_payload_decode.end(); ++it) {
    boost::python::call(*it, ioc, opcode, payload_remain);
  }
}
void cb_qio_channel_websock_encode(void *ioc, uint8_t opcode, size_t payloadlen,
                                size_t headerlen) {

  for (auto it = qio_channel_websock_encode.begin();
       it != qio_channel_websock_encode.end(); ++it) {
    boost::python::call(*it, ioc, opcode, payloadlen, headerlen);
  }
}
void cb_qio_channel_websock_close(void *ioc) {

  for (auto it = qio_channel_websock_close.begin();
       it != qio_channel_websock_close.end(); ++it) {
    boost::python::call(*it, ioc);
  }
}

//#channel - command.c
void cb_qio_channel_command_new_pid(void *ioc, int writefd, int readfd, int pid) {

  for (auto it = qio_channel_command_new_pid.begin();
       it != qio_channel_command_new_pid.end(); ++it) {
    boost::python::call(*it, ioc, writefd, readfd, pid);
  }
}
void cb_qio_channel_command_new_spawn(void *ioc, const char *binary, int flags) {

  for (auto it = qio_channel_command_new_spawn.begin();
       it != qio_channel_command_new_spawn.end(); ++it) {
    boost::python::call(*it, ioc, binary, flags);
  }
}
void cb_qio_channel_command_abort(void *ioc, int pid) {

  for (auto it = qio_channel_command_abort.begin();
       it != qio_channel_command_abort.end(); ++it) {
    boost::python::call(*it, ioc, pid);
  }
}
void cb_qio_channel_command_wait(void *ioc, int pid, int ret, int status) {

  for (auto it = qio_channel_command_wait.begin();
       it != qio_channel_command_wait.end(); ++it) {
    boost::python::call(*it, ioc, pid, ret, status);
  }
}
