//#See docs / devel / tracing.txt for syntax documentation.

//#console.c
void cb_console_gfx_new(void) {

  for (auto it = console_gfx_new.begin(); it != console_gfx_new.end(); ++it) {
    boost::python::call(*it, void);
  }
}
void cb_console_gfx_reuse(int index) {

  for (auto it = console_gfx_reuse.begin(); it != console_gfx_reuse.end();
       ++it) {
    boost::python::call(*it,  index);
  }
}
void cb_console_gfx_close(int index) {

  for (auto it = console_gfx_close.begin(); it != console_gfx_close.end();
       ++it) {
    boost::python::call(*it,  index);
  }
}
void cb_console_putchar_csi(int esc_param0, int esc_param1, int ch,
                         int nb_esc_params) {

  for (auto it = console_putchar_csi.begin(); it != console_putchar_csi.end();
       ++it) {
    boost::python::call(*it,  esc_param0,  esc_param1,  ch,
                        int nb_esc_params)
  }
}
void cb_console_putchar_unhandled(int ch) {

  for (auto it = console_putchar_unhandled.begin();
       it != console_putchar_unhandled.end(); ++it) {
    boost::python::call(*it,  ch);
  }
}
void cb_console_txt_new(int w, int h) {

  for (auto it = console_txt_new.begin(); it != console_txt_new.end(); ++it) {
    boost::python::call(*it,  w,  h);
  }
}
void cb_console_select(int nr) {

  for (auto it = console_select.begin(); it != console_select.end(); ++it) {
    boost::python::call(*it,  nr);
  }
}
void cb_console_refresh(int interval) {

  for (auto it = console_refresh.begin(); it != console_refresh.end(); ++it) {
    boost::python::call(*it,  erval);
  }
}
void cb_displaysurface_create(void *display_surface, int w, int h) {

  for (auto it = displaysurface_create.begin();
       it != displaysurface_create.end(); ++it) {
    boost::python::call(*it,  display_surface,  w,  h)
  }
}
void cb_displaysurface_create_from(void *display_surface, int w, int h,
                                uint32_t format) {

  for (auto it = displaysurface_create_from.begin();
       it != displaysurface_create_from.end(); ++it) {
    boost::python::call(*it,  display_surface,  w,  h,
                        uint32_t format)
  }
}
void cb_displaysurface_create_pixman(void *display_surface) {

  for (auto it = displaysurface_create_pixman.begin();
       it != displaysurface_create_pixman.end(); ++it) {
    boost::python::call(*it,  display_surface)
  }
}
void cb_displaysurface_free(void *display_surface) {

  for (auto it = displaysurface_free.begin(); it != displaysurface_free.end();
       ++it) {
    boost::python::call(*it,  display_surface)
  }
}
void cb_displaychangelistener_register(void *dcl, const char *name) {

  for (auto it = displaychangelistener_register.begin();
       it != displaychangelistener_register.end(); ++it) {
    boost::python::call(*it,  dcl,   *name)
  }
}
void cb_displaychangelistener_unregister(void *dcl, const char *name) {

  for (auto it = displaychangelistener_unregister.begin();
       it != displaychangelistener_unregister.end(); ++it) {
    boost::python::call(*it,  dcl,   *name)
  }
}
void cb_ppm_save(int fd, void *image) {

  for (auto it = ppm_save.begin(); it != ppm_save.end(); ++it) {
    boost::python::call(*it,  fd, image);
  }
}

//#gtk - egl.c
//#gtk - gl - area.c
//#gtk.c
void cb_gd_switch(const char *tab, int width, int height) {

  for (auto it = gd_switch.begin(); it != gd_switch.end(); ++it) {
    boost::python::call(*it,   *tab,  width,  height)
  }
}
void cb_gd_update(const char *tab, int x, int y, int w, int h) {

  for (auto it = gd_update.begin(); it != gd_update.end(); ++it) {
    boost::python::call(*it,   *tab,  x,  y,  w,  h)
  }
}
void cb_gd_key_event(const char *tab, int gdk_keycode, int qkeycode,
                  const char *action) {

  for (auto it = gd_key_event.begin(); it != gd_key_event.end(); ++it) {
    boost::python::call(*it,   *tab,  gdk_keycode,
                        int qkeycode, const char *action)
  }
}
void cb_gd_grab(const char *tab, const char *device, const char *reason) {

  for (auto it = gd_grab.begin(); it != gd_grab.end(); ++it) {
    boost::python::call(*it,   *tab,   *device,
                        const char *reason)
  }
}
void cb_gd_ungrab(const char *tab, const char *device) {

  for (auto it = gd_ungrab.begin(); it != gd_ungrab.end(); ++it) {
    boost::python::call(*it,   *tab,   *device)
  }
}
void cb_gd_keymap_windowing(const char *name) {

  for (auto it = gd_keymap_windowing.begin(); it != gd_keymap_windowing.end();
       ++it) {
    boost::python::call(*it,   *name);
  }
}

//#vnc - auth - sasl.c
//#vnc - auth - vencrypt.c
//#vnc - ws.c
//#vnc.c
void cb_vnc_key_guest_leds(bool caps, bool num, bool scroll) {

  for (auto it = vnc_key_guest_leds.begin(); it != vnc_key_guest_leds.end();
       ++it) {
    boost::python::call(*it,  caps,  num,  scroll)
  }
}
void cb_vnc_key_map_init(const char *layout) {

  for (auto it = vnc_key_map_init.begin(); it != vnc_key_map_init.end(); ++it) {
    boost::python::call(*it,   *layout);
  }
}
void cb_vnc_key_event_ext(bool down, int sym, int keycode, const char *name) {

  for (auto it = vnc_key_event_ext.begin(); it != vnc_key_event_ext.end();
       ++it) {
    boost::python::call(*it,  down,  sym,  keycode,
                        const char *name)
  }
}
void cb_vnc_key_event_map(bool down, int sym, int keycode, const char *name) {

  for (auto it = vnc_key_event_map.begin(); it != vnc_key_event_map.end();
       ++it) {
    boost::python::call(*it,  down,  sym,  keycode,
                        const char *name)
  }
}
void cb_vnc_key_sync_numlock(bool on) {

  for (auto it = vnc_key_sync_numlock.begin(); it != vnc_key_sync_numlock.end();
       ++it) {
    boost::python::call(*it,  on);
  }
}
void cb_vnc_key_sync_capslock(bool on) {

  for (auto it = vnc_key_sync_capslock.begin();
       it != vnc_key_sync_capslock.end(); ++it) {
    boost::python::call(*it,  on);
  }
}
void cb_vnc_client_eof(void *state, void *ioc) {

  for (auto it = vnc_client_eof.begin(); it != vnc_client_eof.end(); ++it) {
    boost::python::call(*it,  state, ioc)
  }
}
void cb_vnc_client_io_error(void *state, void *ioc, const char *msg) {

  for (auto it = vnc_client_io_error.begin(); it != vnc_client_io_error.end();
       ++it) {
    boost::python::call(*it,  state, ioc,   *msg)
  }
}
void cb_vnc_client_connect(void *state, void *ioc) {

  for (auto it = vnc_client_connect.begin(); it != vnc_client_connect.end();
       ++it) {
    boost::python::call(*it,  state, ioc)
  }
}
void cb_vnc_client_disconnect_start(void *state, void *ioc) {

  for (auto it = vnc_client_disconnect_start.begin();
       it != vnc_client_disconnect_start.end(); ++it) {
    boost::python::call(*it,  state, ioc)
  }
}
void cb_vnc_client_disconnect_finish(void *state, void *ioc) {

  for (auto it = vnc_client_disconnect_finish.begin();
       it != vnc_client_disconnect_finish.end(); ++it) {
    boost::python::call(*it,  state, ioc)
  }
}
void cb_vnc_client_io_wrap(void *state, void *ioc, const char *type) {

  for (auto it = vnc_client_io_wrap.begin(); it != vnc_client_io_wrap.end();
       ++it) {
    boost::python::call(*it,  state, ioc,   *type)
  }
}
void cb_vnc_client_throttle_threshold(void *state, void *ioc, size_t oldoffset,
                                   size_t offset, int client_width,
                                   int client_height, int bytes_per_pixel,
                                   void *audio_cap) {

  for (auto it = vnc_client_throttle_threshold.begin();
       it != vnc_client_throttle_threshold.end(); ++it) {
    boost::python::call(*it,  state, ioc,  oldoffset,
                        size_t offset, int client_width, int client_height,
                        int bytes_per_pixel, void *audio_cap)
  }
}
void cb_vnc_client_throttle_incremental(void *state, void *ioc, int job_update,
                                     size_t offset) {

  for (auto it = vnc_client_throttle_incremental.begin();
       it != vnc_client_throttle_incremental.end(); ++it) {
    boost::python::call(*it,  state, ioc,  job_update,
                        size_t offset)
  }
}
void cb_vnc_client_throttle_forced(void *state, void *ioc, int job_update,
                                size_t offset) {

  for (auto it = vnc_client_throttle_forced.begin();
       it != vnc_client_throttle_forced.end(); ++it) {
    boost::python::call(*it,  state, ioc,  job_update,
                        size_t offset)
  }
}
void cb_vnc_client_throttle_audio(void *state, void *ioc, size_t offset) {

  for (auto it = vnc_client_throttle_audio.begin();
       it != vnc_client_throttle_audio.end(); ++it) {
    boost::python::call(*it,  state, ioc,  offset)
  }
}
void cb_vnc_client_unthrottle_forced(void *state, void *ioc) {

  for (auto it = vnc_client_unthrottle_forced.begin();
       it != vnc_client_unthrottle_forced.end(); ++it) {
    boost::python::call(*it,  state, ioc)
  }
}
void cb_vnc_client_unthrottle_incremental(void *state, void *ioc, size_t offset) {

  for (auto it = vnc_client_unthrottle_incremental.begin();
       it != vnc_client_unthrottle_incremental.end(); ++it) {
    boost::python::call(*it,  state, ioc,  offset)
  }
}
void cb_vnc_client_output_limit(void *state, void *ioc, size_t offset,
                             size_t threshold) {

  for (auto it = vnc_client_output_limit.begin();
       it != vnc_client_output_limit.end(); ++it) {
    boost::python::call(*it,  state, ioc,  offset,
                        size_t threshold)
  }
}
void cb_vnc_auth_init(void *display, int websock, int auth, int subauth) {

  for (auto it = vnc_auth_init.begin(); it != vnc_auth_init.end(); ++it) {
    boost::python::call(*it,  display,  websock,  auth,
                        int subauth)
  }
}
void cb_vnc_auth_start(void *state, int method) {

  for (auto it = vnc_auth_start.begin(); it != vnc_auth_start.end(); ++it) {
    boost::python::call(*it,  state,  method)
  }
}
void cb_vnc_auth_pass(void *state, int method) {

  for (auto it = vnc_auth_pass.begin(); it != vnc_auth_pass.end(); ++it) {
    boost::python::call(*it,  state,  method)
  }
}
void cb_vnc_auth_fail(void *state, int method, const char *message,
                   const char *reason) {

  for (auto it = vnc_auth_fail.begin(); it != vnc_auth_fail.end(); ++it) {
    boost::python::call(*it,  state,  method,   *message,
                        const char *reason)
  }
}
void cb_vnc_auth_reject(void *state, int expect, int got) {

  for (auto it = vnc_auth_reject.begin(); it != vnc_auth_reject.end(); ++it) {
    boost::python::call(*it,  state,  expect,  got)
  }
}
void cb_vnc_auth_vencrypt_version(void *state, int major, int minor) {

  for (auto it = vnc_auth_vencrypt_version.begin();
       it != vnc_auth_vencrypt_version.end(); ++it) {
    boost::python::call(*it,  state,  major,  minor)
  }
}
void cb_vnc_auth_vencrypt_subauth(void *state, int auth) {

  for (auto it = vnc_auth_vencrypt_subauth.begin();
       it != vnc_auth_vencrypt_subauth.end(); ++it) {
    boost::python::call(*it,  state,  auth)
  }
}
void cb_vnc_auth_sasl_mech_list(void *state, const char *mechs) {

  for (auto it = vnc_auth_sasl_mech_list.begin();
       it != vnc_auth_sasl_mech_list.end(); ++it) {
    boost::python::call(*it,  state,   *mechs)
  }
}
void cb_vnc_auth_sasl_mech_choose(void *state, const char *mech) {

  for (auto it = vnc_auth_sasl_mech_choose.begin();
       it != vnc_auth_sasl_mech_choose.end(); ++it) {
    boost::python::call(*it,  state,   *mech)
  }
}
void cb_vnc_auth_sasl_start(void *state, const void *clientdata, size_t clientlen,
                         const void *serverdata, size_t severlen, int ret) {

  for (auto it = vnc_auth_sasl_start.begin(); it != vnc_auth_sasl_start.end();
       ++it) {
    boost::python::call(*it,  state,  clientdata,
                        size_t clientlen, const void *serverdata,
                        size_t severlen, int ret)
  }
}
void cb_vnc_auth_sasl_step(void *state, const void *clientdata, size_t clientlen,
                        const void *serverdata, size_t severlen, int ret) {

  for (auto it = vnc_auth_sasl_step.begin(); it != vnc_auth_sasl_step.end();
       ++it) {
    boost::python::call(*it,  state,  clientdata,
                        size_t clientlen, const void *serverdata,
                        size_t severlen, int ret)
  }
}
void cb_vnc_auth_sasl_ssf(void *state, int ssf) {

  for (auto it = vnc_auth_sasl_ssf.begin(); it != vnc_auth_sasl_ssf.end();
       ++it) {
    boost::python::call(*it,  state,  ssf)
  }
}
void cb_vnc_auth_sasl_username(void *state, const char *name) {

  for (auto it = vnc_auth_sasl_username.begin();
       it != vnc_auth_sasl_username.end(); ++it) {
    boost::python::call(*it,  state,   *name)
  }
}
void cb_vnc_auth_sasl_acl(void *state, int allow) {

  for (auto it = vnc_auth_sasl_acl.begin(); it != vnc_auth_sasl_acl.end();
       ++it) {
    boost::python::call(*it,  state,  allow)
  }
}

//#input.c
void cb_input_event_key_number(int conidx, int number, const char *qcode,
                            bool down) {

  for (auto it = input_event_key_number.begin();
       it != input_event_key_number.end(); ++it) {
    boost::python::call(*it,  conidx,  number,   *qcode,
                        bool down)
  }
}
void cb_input_event_key_qcode(int conidx, const char *qcode, bool down) {

  for (auto it = input_event_key_qcode.begin();
       it != input_event_key_qcode.end(); ++it) {
    boost::python::call(*it,  conidx,   *qcode,  down)
  }
}
void cb_input_event_btn(int conidx, const char *btn, bool down) {

  for (auto it = input_event_btn.begin(); it != input_event_btn.end(); ++it) {
    boost::python::call(*it,  conidx,   *btn,  down)
  }
}
void cb_input_event_rel(int conidx, const char *axis, int value) {

  for (auto it = input_event_rel.begin(); it != input_event_rel.end(); ++it) {
    boost::python::call(*it,  conidx,   *axis,  value)
  }
}
void cb_input_event_abs(int conidx, const char *axis, int value) {

  for (auto it = input_event_abs.begin(); it != input_event_abs.end(); ++it) {
    boost::python::call(*it,  conidx,   *axis,  value)
  }
}
void cb_input_event_sync(void) {

  for (auto it = input_event_sync.begin(); it != input_event_sync.end(); ++it) {
    boost::python::call(*it, void);
  }
}
void cb_input_mouse_mode(int absolute) {

  for (auto it = input_mouse_mode.begin(); it != input_mouse_mode.end(); ++it) {
    boost::python::call(*it,  absolute);
  }
}

//#sdl2 - input.c
void cb_sdl2_process_key(int sdl_scancode, int qcode, const char *action) {

  for (auto it = sdl2_process_key.begin(); it != sdl2_process_key.end(); ++it) {
    boost::python::call(*it,  sdl_scancode,  qcode,
                        const char *action)
  }
}

//#spice - display.c
void cb_qemu_spice_add_memslot(int qid, uint32_t slot_id, unsigned long virt_start,
                            unsigned long virt_end, int async) {

  for (auto it = qemu_spice_add_memslot.begin();
       it != qemu_spice_add_memslot.end(); ++it) {
    boost::python::call(*it,  qid,  slot_id,
                        unsigned long virt_start, unsigned long virt_end,
                        int async)
  }
}
void cb_qemu_spice_del_memslot(int qid, uint32_t gid, uint32_t slot_id) {

  for (auto it = qemu_spice_del_memslot.begin();
       it != qemu_spice_del_memslot.end(); ++it) {
    boost::python::call(*it,  qid,  gid,  slot_id)
  }
}
void cb_qemu_spice_create_primary_surface(int qid, uint32_t sid, void *surface,
                                       int async) {

  for (auto it = qemu_spice_create_primary_surface.begin();
       it != qemu_spice_create_primary_surface.end(); ++it) {
    boost::python::call(*it,  qid,  sid, surface,
                        int async)
  }
}
void cb_qemu_spice_destroy_primary_surface(int qid, uint32_t sid, int async) {

  for (auto it = qemu_spice_destroy_primary_surface.begin();
       it != qemu_spice_destroy_primary_surface.end(); ++it) {
    boost::python::call(*it,  qid,  sid,  async)
  }
}
void cb_qemu_spice_wakeup(uint32_t qid) {

  for (auto it = qemu_spice_wakeup.begin(); it != qemu_spice_wakeup.end();
       ++it) {
    boost::python::call(*it,  qid);
  }
}
void cb_qemu_spice_create_update(uint32_t left, uint32_t right, uint32_t top,
                              uint32_t bottom) {

  for (auto it = qemu_spice_create_update.begin();
       it != qemu_spice_create_update.end(); ++it) {
    boost::python::call(*it,  left,  right,  top,
                        uint32_t bottom)
  }
}
void cb_qemu_spice_display_update(int qid, uint32_t x, uint32_t y, uint32_t w,
                               uint32_t h) {

  for (auto it = qemu_spice_display_update.begin();
       it != qemu_spice_display_update.end(); ++it) {
    boost::python::call(*it,  qid,  x,  y,  w,
                        uint32_t h)
  }
}
void cb_qemu_spice_display_surface(int qid, uint32_t w, uint32_t h, int fast) {

  for (auto it = qemu_spice_display_surface.begin();
       it != qemu_spice_display_surface.end(); ++it) {
    boost::python::call(*it,  qid,  w,  h,  fast)
  }
}
void cb_qemu_spice_display_refresh(int qid, int notify) {

  for (auto it = qemu_spice_display_refresh.begin();
       it != qemu_spice_display_refresh.end(); ++it) {
    boost::python::call(*it,  qid,  notify)
  }
}
void cb_qemu_spice_ui_info(int qid, uint32_t width, uint32_t height) {

  for (auto it = qemu_spice_ui_info.begin(); it != qemu_spice_ui_info.end();
       ++it) {
    boost::python::call(*it,  qid,  width,  height)
  }
}

void cb_qemu_spice_gl_surface(int qid, uint32_t w, uint32_t h, uint32_t fourcc) {

  for (auto it = qemu_spice_gl_surface.begin();
       it != qemu_spice_gl_surface.end(); ++it) {
    boost::python::call(*it,  qid,  w,  h,
                        uint32_t fourcc)
  }
}
void cb_qemu_spice_gl_scanout_disable(int qid) {

  for (auto it = qemu_spice_gl_scanout_disable.begin();
       it != qemu_spice_gl_scanout_disable.end(); ++it) {
    boost::python::call(*it,  qid)
  }
}
void cb_qemu_spice_gl_scanout_texture(int qid, uint32_t w, uint32_t h,
                                   uint32_t fourcc) {

  for (auto it = qemu_spice_gl_scanout_texture.begin();
       it != qemu_spice_gl_scanout_texture.end(); ++it) {
    boost::python::call(*it,  qid,  w,  h,
                        uint32_t fourcc)
  }
}
void cb_qemu_spice_gl_cursor(int qid, bool enabled, bool hotspot) {

  for (auto it = qemu_spice_gl_cursor.begin(); it != qemu_spice_gl_cursor.end();
       ++it) {
    boost::python::call(*it,  qid,  enabled,  hotspot)
  }
}
void cb_qemu_spice_gl_forward_dmabuf(int qid, uint32_t width, uint32_t height) {

  for (auto it = qemu_spice_gl_forward_dmabuf.begin();
       it != qemu_spice_gl_forward_dmabuf.end(); ++it) {
    boost::python::call(*it,  qid,  width,  height)
  }
}
void cb_qemu_spice_gl_render_dmabuf(int qid, uint32_t width, uint32_t height) {

  for (auto it = qemu_spice_gl_render_dmabuf.begin();
       it != qemu_spice_gl_render_dmabuf.end(); ++it) {
    boost::python::call(*it,  qid,  width,  height)
  }
}
void cb_qemu_spice_gl_update(int qid, uint32_t x, uint32_t y, uint32_t w,
                          uint32_t h) {

  for (auto it = qemu_spice_gl_update.begin(); it != qemu_spice_gl_update.end();
       ++it) {
    boost::python::call(*it,  qid,  x,  y,  w,
                        uint32_t h)
  }
}

//#keymaps.c
void cb_keymap_parse(const char *file) {

  for (auto it = keymap_parse.begin(); it != keymap_parse.end(); ++it) {
    boost::python::call(*it,   *file);
  }
}
void cb_keymap_add(int sym, int code, const char *line) {

  for (auto it = keymap_add.begin(); it != keymap_add.end(); ++it) {
    boost::python::call(*it,  sym,  code,   *line)
  }
}
void cb_keymap_unmapped(int sym) {

  for (auto it = keymap_unmapped.begin(); it != keymap_unmapped.end(); ++it) {
    boost::python::call(*it,  sym);
  }
}

//#x_keymap.c
void cb_xkeymap_extension(const char *name) {

  for (auto it = xkeymap_extension.begin(); it != xkeymap_extension.end();
       ++it) {
    boost::python::call(*it,   *name);
  }
}
void cb_xkeymap_vendor(const char *name) {

  for (auto it = xkeymap_vendor.begin(); it != xkeymap_vendor.end(); ++it) {
    boost::python::call(*it,   *name);
  }
}
void cb_xkeymap_keycodes(const char *name) {

  for (auto it = xkeymap_keycodes.begin(); it != xkeymap_keycodes.end(); ++it) {
    boost::python::call(*it,   *name);
  }
}
void cb_xkeymap_keymap(const char *name) {

  for (auto it = xkeymap_keymap.begin(); it != xkeymap_keymap.end(); ++it) {
    boost::python::call(*it,   *name);
  }
}
