//# See docs/devel/tracing.txt for syntax documentation.

//# ../../include/hw/xen/xen_common.h
void cb_xen_default_ioreq_server(void) {
  for (auto it = py_xen_default_ioreq_server.begin();
       it != py_xen_default_ioreq_server.end(); ++it) {
    boost::python::call(*it);
  }
}
void cb_xen_ioreq_server_create(uint32_t id) {
  for (auto it = py_xen_ioreq_server_create.begin();
       it != py_xen_ioreq_server_create.end(); ++it) {
    boost::python::call(*it, id);
  }
}
void cb_xen_ioreq_server_destroy(uint32_t id) {
  for (auto it = py_xen_ioreq_server_destroy.begin();
       it != py_xen_ioreq_server_destroy.end(); ++it) {
    boost::python::call(*it, id);
  }
}
void cb_xen_ioreq_server_state(uint32_t id, bool enable) {
  for (auto it = py_xen_ioreq_server_state.begin();
       it != py_xen_ioreq_server_state.end(); ++it) {
    boost::python::call(*it, id, enable);
  }
}
void cb_xen_map_mmio_range(uint32_t id, uint64_t start_addr, uint64_t end_addr) {
  for (auto it = py_xen_map_mmio_range.begin(); it != py_xen_map_mmio_range.end();
       ++it) {
    boost::python::call(*it, id, start_addr, end_addr);
  }
}
void cb_xen_unmap_mmio_range(uint32_t id, uint64_t start_addr, uint64_t end_addr) {
  for (auto it = py_xen_unmap_mmio_range.begin(); it != py_xen_unmap_mmio_range.end();
       ++it) {
    boost::python::call(*it, id, start_addr, end_addr);
  }
}
void cb_xen_map_portio_range(uint32_t id, uint64_t start_addr, uint64_t end_addr) {
  for (auto it = py_xen_map_portio_range.begin(); it != py_xen_map_portio_range.end();
       ++it) {
    boost::python::call(*it, id, start_addr, end_addr);
  }
}
void cb_xen_unmap_portio_range(uint32_t id, uint64_t start_addr,
                            uint64_t end_addr) {
  for (auto it = py_xen_unmap_portio_range.begin();
       it != py_xen_unmap_portio_range.end(); ++it) {
    boost::python::call(*it, id, start_addr, end_addr);
  }
}
void cb_xen_map_pcidev(uint32_t id, uint8_t bus, uint8_t dev, uint8_t func) {
  for (auto it = py_xen_map_pcidev.begin(); it != py_xen_map_pcidev.end(); ++it) {
    boost::python::call(*it, id, bus, dev, func);
  }
}
void cb_xen_unmap_pcidev(uint32_t id, uint8_t bus, uint8_t dev, uint8_t func) {
  for (auto it = py_xen_unmap_pcidev.begin(); it != py_xen_unmap_pcidev.end(); ++it) {
    boost::python::call(*it, id, bus, dev, func);
  }
}
void cb_xen_domid_restrict(int err) {
  for (auto it = py_xen_domid_restrict.begin(); it != py_xen_domid_restrict.end();
       ++it) {
    boost::python::call(*it,  err);
  }
}

//# xen-bus.c
void cb_xen_bus_realize(void) {
  for (auto it = py_xen_bus_realize.begin(); it != py_xen_bus_realize.end(); ++it) {
    boost::python::call(*it);
  }
}
void cb_xen_bus_unrealize(void) {
  for (auto it = py_xen_bus_unrealize.begin(); it != py_xen_bus_unrealize.end();
       ++it) {
    boost::python::call(*it);
  }
}
void cb_xen_bus_enumerate(void) {
  for (auto it = py_xen_bus_enumerate.begin(); it != py_xen_bus_enumerate.end();
       ++it) {
    boost::python::call(*it);
  }
}
void cb_xen_bus_cleanup(void) {
  for (auto it = py_xen_bus_cleanup.begin(); it != py_xen_bus_cleanup.end(); ++it) {
    boost::python::call(*it);
  }
}
void cb_xen_bus_type_enumerate(const char *type) {
  for (auto it = py_xen_bus_type_enumerate.begin();
       it != py_xen_bus_type_enumerate.end(); ++it) {
    boost::python::call(*it, type);
  }
}
void cb_xen_bus_backend_create(const char *type, const char *path) {
  for (auto it = py_xen_bus_backend_create.begin();
       it != py_xen_bus_backend_create.end(); ++it) {
    boost::python::call(*it, type, path);
  }
}
void cb_xen_bus_device_cleanup(const char *type, char *name) {
  for (auto it = py_xen_bus_device_cleanup.begin();
       it != py_xen_bus_device_cleanup.end(); ++it) {
    boost::python::call(*it,  type,name);
  }
}
void cb_xen_bus_add_watch(const char *node, const char *key) {
  for (auto it = py_xen_bus_add_watch.begin(); it != py_xen_bus_add_watch.end();
       ++it) {
    boost::python::call(*it, node, key);
  }
}
void cb_xen_bus_remove_watch(const char *node, const char *key) {
  for (auto it = py_xen_bus_remove_watch.begin(); it != py_xen_bus_remove_watch.end();
       ++it) {
    boost::python::call(*it, node, key);
  }
}
void cb_xen_device_realize(const char *type, char *name) {
  for (auto it = py_xen_device_realize.begin(); it != py_xen_device_realize.end();
       ++it) {
    boost::python::call(*it, type, name);
  }
}
void cb_xen_device_unrealize(const char *type, char *name) {
  for (auto it = py_xen_device_unrealize.begin(); it != py_xen_device_unrealize.end();
       ++it) {
    boost::python::call(*it,  *type,  *name);
  }
}
void cb_xen_device_backend_state(const char *type, char *name, const char *state) {
  for (auto it = py_xen_device_backend_state.begin();
       it != py_xen_device_backend_state.end(); ++it) {
    boost::python::call(*it, type, name, state);
  }
}
void cb_xen_device_backend_online(const char *type, char *name, bool online) {
  for (auto it = py_xen_device_backend_online.begin();
       it != py_xen_device_backend_online.end(); ++it) {
    boost::python::call(*it, type, name,  online);
  }
}
void cb_xen_device_backend_changed(const char *type, char *name) {
  for (auto it = py_xen_device_backend_changed.begin();
       it != py_xen_device_backend_changed.end(); ++it) {
    boost::python::call(*it, type,name);
  }
}
void cb_xen_device_frontend_state(const char *type, char *name,
                               const char *state) {
  for (auto it = py_xen_device_frontend_state.begin();
       it != py_xen_device_frontend_state.end(); ++it) {
    boost::python::call(*it, type,name,  state);
  }
}
void cb_xen_device_frontend_changed(const char *type, char *name) {
  for (auto it = py_xen_device_frontend_changed.begin();
       it != py_xen_device_frontend_changed.end(); ++it) {
    boost::python::call(*it,  *type,  *name);
  }
}
void cb_xen_device_unplug(const char *type, char *name) {
  for (auto it = py_xen_device_unplug.begin(); it != py_xen_device_unplug.end();
       ++it) {
    boost::python::call(*it,  *type,  *name);
  }
}
void cb_xen_device_add_watch(const char *type, char *name, const char *node,
                          const char *key) {
  for (auto it = py_xen_device_add_watch.begin(); it != py_xen_device_add_watch.end();
       ++it) {
    boost::python::call(*it, type, name,node,key);
  }
}
void cb_xen_device_remove_watch(const char *type, char *name, const char *node,
                             const char *key) {
  for (auto it = py_xen_device_remove_watch.begin();
       it != py_xen_device_remove_watch.end(); ++it) {
    boost::python::call(*it, type,name, node,key);
  }
}

//# xen-bus-helper.c
void cb_xs_node_create(const char *node) {
  for (auto it = py_xs_node_create.begin(); it != py_xs_node_create.end(); ++it) {
    boost::python::call(*it, node);
  }
}
void cb_xs_node_destroy(const char *node) {
  for (auto it = py_xs_node_destroy.begin(); it != py_xs_node_destroy.end(); ++it) {
    boost::python::call(*it,  node);
  }
}
void cb_xs_node_vprintf(char *path, char *value) {
  for (auto it = py_xs_node_vprintf.begin(); it != py_xs_node_vprintf.end(); ++it) {
    boost::python::call(*it, path, value);
  }
}
void cb_xs_node_vscanf(char *path, char *value) {
  for (auto it = py_xs_node_vscanf.begin(); it != py_xs_node_vscanf.end(); ++it) {
    boost::python::call(*it, path, value);
  }
}
void cb_xs_node_watch(char *path) {
  for (auto it = py_xs_node_watch.begin(); it != py_xs_node_watch.end(); ++it) {
    boost::python::call(*it, path);
  }
}
void cb_xs_node_unwatch(char *path) {
  for (auto it = py_xs_node_unwatch.begin(); it != py_xs_node_unwatch.end(); ++it) {
    boost::python::call(*it, path);
  }
}
