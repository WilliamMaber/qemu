//# See docs/devel/tracing.txt for syntax documentation.

//# jazz_led.c
void cb_jazz_led_read(uint64_t addr,uint8_t val) {
	for(auto it = py_jazz_led_read.begin(); it != py_jazz_led_read.end(); ++it){
		boost::python::call(*it,addr,val);
	}
}
void cb_jazz_led_write(uint64_t addr,uint8_t new) {
	for(auto it = py_jazz_led_write.begin(); it != py_jazz_led_write.end(); ++it){
		boost::python::call(*it,addr,new);
	}
}

//# xenfb.c
void cb_xenfb_mouse_event(void *opaque,int dx,int dy,int dz,int button_state,int abs_pointer_wanted) {
	for(auto it = py_xenfb_mouse_event.begin(); it != py_xenfb_mouse_event.end(); ++it){
		boost::python::call(*it,voiopaque,dx,dy,dz,button_state,abs_poer_wanted	}
}
void cb_xenfb_key_event(void *opaque,int scancode,int button_state) {
	for(auto it = py_xenfb_key_event.begin(); it != py_xenfb_key_event.end(); ++it){
		boost::python::call(*it,voiopaque,scancode,button_state	}
}
void cb_xenfb_input_connected(void *xendev,int abs_pointer_wanted) {
	for(auto it = py_xenfb_input_connected.begin(); it != py_xenfb_input_connected.end(); ++it){
		boost::python::call(*it,voixendev,abs_poer_wanted	}
}

//# g364fb.c
void cb_g364fb_read(uint64_t addr,uint32_t val) {
	for(auto it = py_g364fb_read.begin(); it != py_g364fb_read.end(); ++it){
		boost::python::call(*it,addr,val);
	}
}
void cb_g364fb_write(uint64_t addr,uint32_t new) {
	for(auto it = py_g364fb_write.begin(); it != py_g364fb_write.end(); ++it){
		boost::python::call(*it,addr,new);
	}
}

//# milkymist-tmu2.c
void cb_milkymist_tmu2_memory_read(uint32_t addr,uint32_t value) {
	for(auto it = py_milkymist_tmu2_memory_read.begin(); it != py_milkymist_tmu2_memory_read.end(); ++it){
		boost::python::call(*it,voi addr,value	}
}
void cb_milkymist_tmu2_memory_write(uint32_t addr,uint32_t value) {
	for(auto it = py_milkymist_tmu2_memory_write.begin(); it != py_milkymist_tmu2_memory_write.end(); ++it){
		boost::python::call(*it,voi addr,value	}
}
void cb_milkymist_tmu2_start(void) {
	for(auto it = py_milkymist_tmu2_start.begin(); it != py_milkymist_tmu2_start.end(); ++it){
		boost::python::call(*it);
	}
}
void cb_milkymist_tmu2_pulse_irq(void) {
	for(auto it = py_milkymist_tmu2_pulse_irq.begin(); it != py_milkymist_tmu2_pulse_irq.end(); ++it){
		boost::python::call(*it);
	}
}

//# milkymist-vgafb.c
void cb_milkymist_vgafb_memory_read(uint32_t addr,uint32_t value) {
	for(auto it = py_milkymist_vgafb_memory_read.begin(); it != py_milkymist_vgafb_memory_read.end(); ++it){
		boost::python::call(*it,voi addr,value	}
}
void cb_milkymist_vgafb_memory_write(uint32_t addr,uint32_t value) {
	for(auto it = py_milkymist_vgafb_memory_write.begin(); it != py_milkymist_vgafb_memory_write.end(); ++it){
		boost::python::call(*it,voi addr,value	}
}

//# vmware_vga.c
void cb_vmware_value_read(uint32_t index,uint32_t value) {
	for(auto it = py_vmware_value_read.begin(); it != py_vmware_value_read.end(); ++it){
		boost::python::call(*it,index,value);
	}
}
void cb_vmware_value_write(uint32_t index,uint32_t value) {
	for(auto it = py_vmware_value_write.begin(); it != py_vmware_value_write.end(); ++it){
		boost::python::call(*it,index,value);
	}
}
void cb_vmware_palette_read(uint32_t index,uint32_t value) {
	for(auto it = py_vmware_palette_read.begin(); it != py_vmware_palette_read.end(); ++it){
		boost::python::call(*it,index,value);
	}
}
void cb_vmware_palette_write(uint32_t index,uint32_t value) {
	for(auto it = py_vmware_palette_write.begin(); it != py_vmware_palette_write.end(); ++it){
		boost::python::call(*it,index,value);
	}
}
void cb_vmware_scratch_read(uint32_t index,uint32_t value) {
	for(auto it = py_vmware_scratch_read.begin(); it != py_vmware_scratch_read.end(); ++it){
		boost::python::call(*it,index,value);
	}
}
void cb_vmware_scratch_write(uint32_t index,uint32_t value) {
	for(auto it = py_vmware_scratch_write.begin(); it != py_vmware_scratch_write.end(); ++it){
		boost::python::call(*it,index,value);
	}
}
void cb_vmware_setmode(uint32_t w,uint32_t h,uint32_t bpp) {
	for(auto it = py_vmware_setmode.begin(); it != py_vmware_setmode.end(); ++it){
		boost::python::call(*it,w,h,bpp);
	}
}

//# virtio-gpu-base.c
void cb_virtio_gpu_features(bool virgl) {
	for(auto it = py_virtio_gpu_features.begin(); it != py_virtio_gpu_features.end(); ++it){
		boost::python::call(*it,virgl);
	}
}

//# virtio-gpu-3d.c
//# virtio-gpu.c
void cb_virtio_gpu_cmd_get_display_info(void) {
	for(auto it = py_virtio_gpu_cmd_get_display_info.begin(); it != py_virtio_gpu_cmd_get_display_info.end(); ++it){
		boost::python::call(*it);
	}
}
void cb_virtio_gpu_cmd_get_edid(uint32_t scanout) {
	for(auto it = py_virtio_gpu_cmd_get_edid.begin(); it != py_virtio_gpu_cmd_get_edid.end(); ++it){
		boost::python::call(*it,scanout);
	}
}
void cb_virtio_gpu_cmd_set_scanout(uint32_t id,uint32_t res,uint32_t w,uint32_t h,uint32_t x,uint32_t y) {
	for(auto it = py_virtio_gpu_cmd_set_scanout.begin(); it != py_virtio_gpu_cmd_set_scanout.end(); ++it){
		boost::python::call(*it,voi id,res,w,h,x,y	}
}
void cb_virtio_gpu_cmd_res_create_2d(uint32_t res,uint32_t fmt,uint32_t w,uint32_t h) {
	for(auto it = py_virtio_gpu_cmd_res_create_2d.begin(); it != py_virtio_gpu_cmd_res_create_2d.end(); ++it){
		boost::python::call(*it,voi res,fmt,w,h	}
}
void cb_virtio_gpu_cmd_res_create_3d(uint32_t res,uint32_t fmt,uint32_t w,uint32_t h,uint32_t d) {
	for(auto it = py_virtio_gpu_cmd_res_create_3d.begin(); it != py_virtio_gpu_cmd_res_create_3d.end(); ++it){
		boost::python::call(*it,voi res,fmt,w,h,d	}
}
void cb_virtio_gpu_cmd_res_unref(uint32_t res) {
	for(auto it = py_virtio_gpu_cmd_res_unref.begin(); it != py_virtio_gpu_cmd_res_unref.end(); ++it){
		boost::python::call(*it,res);
	}
}
void cb_virtio_gpu_cmd_res_back_attach(uint32_t res) {
	for(auto it = py_virtio_gpu_cmd_res_back_attach.begin(); it != py_virtio_gpu_cmd_res_back_attach.end(); ++it){
		boost::python::call(*it,res);
	}
}
void cb_virtio_gpu_cmd_res_back_detach(uint32_t res) {
	for(auto it = py_virtio_gpu_cmd_res_back_detach.begin(); it != py_virtio_gpu_cmd_res_back_detach.end(); ++it){
		boost::python::call(*it,res);
	}
}
void cb_virtio_gpu_cmd_res_xfer_toh_2d(uint32_t res) {
	for(auto it = py_virtio_gpu_cmd_res_xfer_toh_2d.begin(); it != py_virtio_gpu_cmd_res_xfer_toh_2d.end(); ++it){
		boost::python::call(*it,res);
	}
}
void cb_virtio_gpu_cmd_res_xfer_toh_3d(uint32_t res) {
	for(auto it = py_virtio_gpu_cmd_res_xfer_toh_3d.begin(); it != py_virtio_gpu_cmd_res_xfer_toh_3d.end(); ++it){
		boost::python::call(*it,res);
	}
}
void cb_virtio_gpu_cmd_res_xfer_fromh_3d(uint32_t res) {
	for(auto it = py_virtio_gpu_cmd_res_xfer_fromh_3d.begin(); it != py_virtio_gpu_cmd_res_xfer_fromh_3d.end(); ++it){
		boost::python::call(*it,res);
	}
}
void cb_virtio_gpu_cmd_res_flush(uint32_t res,uint32_t w,uint32_t h,uint32_t x,uint32_t y) {
	for(auto it = py_virtio_gpu_cmd_res_flush.begin(); it != py_virtio_gpu_cmd_res_flush.end(); ++it){
		boost::python::call(*it,voi res,w,h,x,y	}
}
void cb_virtio_gpu_cmd_ctx_create(uint32_t ctx,const char *name) {
	for(auto it = py_virtio_gpu_cmd_ctx_create.begin(); it != py_virtio_gpu_cmd_ctx_create.end(); ++it){
		boost::python::call(*it,voi ctx,*name	}
}
void cb_virtio_gpu_cmd_ctx_destroy(uint32_t ctx) {
	for(auto it = py_virtio_gpu_cmd_ctx_destroy.begin(); it != py_virtio_gpu_cmd_ctx_destroy.end(); ++it){
		boost::python::call(*it,ctx);
	}
}
void cb_virtio_gpu_cmd_ctx_res_attach(uint32_t ctx,uint32_t res) {
	for(auto it = py_virtio_gpu_cmd_ctx_res_attach.begin(); it != py_virtio_gpu_cmd_ctx_res_attach.end(); ++it){
		boost::python::call(*it,voi ctx,res	}
}
void cb_virtio_gpu_cmd_ctx_res_detach(uint32_t ctx,uint32_t res) {
	for(auto it = py_virtio_gpu_cmd_ctx_res_detach.begin(); it != py_virtio_gpu_cmd_ctx_res_detach.end(); ++it){
		boost::python::call(*it,voi ctx,res	}
}
void cb_virtio_gpu_cmd_ctx_submit(uint32_t ctx,uint32_t size) {
	for(auto it = py_virtio_gpu_cmd_ctx_submit.begin(); it != py_virtio_gpu_cmd_ctx_submit.end(); ++it){
		boost::python::call(*it,ctx,size);
	}
}
void cb_virtio_gpu_update_cursor(uint32_t scanout,uint32_t x,uint32_t y,const char *type,uint32_t res) {
	for(auto it = py_virtio_gpu_update_cursor.begin(); it != py_virtio_gpu_update_cursor.end(); ++it){
		boost::python::call(*it,voi scanout,x,y,*type,res	}
}
void cb_virtio_gpu_fence_ctrl(uint64_t fence,uint32_t type) {
	for(auto it = py_virtio_gpu_fence_ctrl.begin(); it != py_virtio_gpu_fence_ctrl.end(); ++it){
		boost::python::call(*it,fence,type);
	}
}
void cb_virtio_gpu_fence_resp(uint64_t fence) ; PRIx6{
	for(auto it = py_virtio_gpu_fence_resp.begin(); it != py_virtio_gpu_fence_resp.end(); ++it){
		boost::python::call(*it,fence) ; PRI);
	}
}

//# qxl.c
void cb_disable qxl_interface_set_mm_time(int qid,uint32_t mm_time) {
	for(auto it = py_disable qxl_interface_set_mm_time.begin(); it != py_disable qxl_interface_set_mm_time.end(); ++it){
		boost::python::call(*it,voi qid,mm_time	}
}
void cb_disable qxl_io_write_vga(int qid,const char *mode,uint32_t addr,uint32_t val) {
	for(auto it = py_disable qxl_io_write_vga.begin(); it != py_disable qxl_io_write_vga.end(); ++it){
		boost::python::call(*it,voi qid,*mode,addr,val	}
}
void cb_qxl_create_guest_primary(int qid,uint32_t width,uint32_t height,uint64_t mem,uint32_t format,uint32_t position) {
	for(auto it = py_qxl_create_guest_primary.begin(); it != py_qxl_create_guest_primary.end(); ++it){
		boost::python::call(*it,voi qid,width,height,mem,format,position	}
}
void cb_qxl_create_guest_primary_rest(int qid,int32_t stride,uint32_t type,uint32_t flags) {
	for(auto it = py_qxl_create_guest_primary_rest.begin(); it != py_qxl_create_guest_primary_rest.end(); ++it){
		boost::python::call(*it,voi qid,stride,type,flags	}
}
void cb_qxl_destroy_primary(int qid) {
	for(auto it = py_qxl_destroy_primary.begin(); it != py_qxl_destroy_primary.end(); ++it){
		boost::python::call(*it,qid);
	}
}
void cb_qxl_enter_vga_mode(int qid) {
	for(auto it = py_qxl_enter_vga_mode.begin(); it != py_qxl_enter_vga_mode.end(); ++it){
		boost::python::call(*it,qid);
	}
}
void cb_qxl_exit_vga_mode(int qid) {
	for(auto it = py_qxl_exit_vga_mode.begin(); it != py_qxl_exit_vga_mode.end(); ++it){
		boost::python::call(*it,qid);
	}
}
void cb_qxl_hard_reset(int qid,int64_t loadvm) ;PRId6{
	for(auto it = py_qxl_hard_reset.begin(); it != py_qxl_hard_reset.end(); ++it){
		boost::python::call(*it,qid,loadvm) ;PRI);
	}
}
void cb_qxl_interface_async_complete_io(int qid,uint32_t current_async,void *cookie) {
	for(auto it = py_qxl_interface_async_complete_io.begin(); it != py_qxl_interface_async_complete_io.end(); ++it){
		boost::python::call(*it,voi qid,current_async,cookie	}
}
void cb_qxl_interface_attach_worker(int qid) {
	for(auto it = py_qxl_interface_attach_worker.begin(); it != py_qxl_interface_attach_worker.end(); ++it){
		boost::python::call(*it,qid);
	}
}
void cb_qxl_interface_get_init_info(int qid) {
	for(auto it = py_qxl_interface_get_init_info.begin(); it != py_qxl_interface_get_init_info.end(); ++it){
		boost::python::call(*it,qid);
	}
}
void cb_qxl_interface_set_compression_level(int qid,int64_t level) ;PRId6{
	for(auto it = py_qxl_interface_set_compression_level.begin(); it != py_qxl_interface_set_compression_level.end(); ++it){
		boost::python::call(*it,voi qid,level) ;PRI	}
}
void cb_qxl_interface_update_area_complete(int qid,uint32_t surface_id,uint32_t dirty_left,uint32_t dirty_right,uint32_t dirty_top,uint32_t dirty_bottom) {
	for(auto it = py_qxl_interface_update_area_complete.begin(); it != py_qxl_interface_update_area_complete.end(); ++it){
		boost::python::call(*it,voi qid,surface_id,dirty_left,dirty_right,dirty_top,dirty_bottom	}
}
void cb_qxl_interface_update_area_complete_rest(int qid,uint32_t num_updated_rects) {
	for(auto it = py_qxl_interface_update_area_complete_rest.begin(); it != py_qxl_interface_update_area_complete_rest.end(); ++it){
		boost::python::call(*it,voi qid,num_updated_rects	}
}
void cb_qxl_interface_update_area_complete_overflow(int qid,int max) {
	for(auto it = py_qxl_interface_update_area_complete_overflow.begin(); it != py_qxl_interface_update_area_complete_overflow.end(); ++it){
		boost::python::call(*it,voi qid,max	}
}
void cb_qxl_interface_update_area_complete_schedule_bh(int qid,uint32_t num_dirty) {
	for(auto it = py_qxl_interface_update_area_complete_schedule_bh.begin(); it != py_qxl_interface_update_area_complete_schedule_bh.end(); ++it){
		boost::python::call(*it,voi qid,num_dirty	}
}
void cb_qxl_io_destroy_primary_ignored(int qid,const char *mode) {
	for(auto it = py_qxl_io_destroy_primary_ignored.begin(); it != py_qxl_io_destroy_primary_ignored.end(); ++it){
		boost::python::call(*it,voi qid,*mode	}
}
void cb_qxl_io_log(int qid,const char *log_buf) {
	for(auto it = py_qxl_io_log.begin(); it != py_qxl_io_log.end(); ++it){
		boost::python::call(*it,qid,*log_buf);
	}
}
void cb_qxl_io_read_unexpected(int qid) {
	for(auto it = py_qxl_io_read_unexpected.begin(); it != py_qxl_io_read_unexpected.end(); ++it){
		boost::python::call(*it,qid);
	}
}
void cb_qxl_io_unexpected_vga_mode(int qid,uint64_t addr,uint64_t val,const char *desc) {
	for(auto it = py_qxl_io_unexpected_vga_mode.begin(); it != py_qxl_io_unexpected_vga_mode.end(); ++it){
		boost::python::call(*it,voi qid,addr,val,*desc	}
}
void cb_qxl_io_write(int qid,const char *mode,uint64_t addr,const char *aname,uint64_t val,unsigned size,int async) {
	for(auto it = py_qxl_io_write.begin(); it != py_qxl_io_write.end(); ++it){
		boost::python::call(*it,voi qid,*mode,addr,*aname,val,size,async	}
}
void cb_qxl_memslot_add_guest(int qid,uint32_t slot_id,uint64_t guest_start,uint64_t guest_end) ; PRIx6{
	for(auto it = py_qxl_memslot_add_guest.begin(); it != py_qxl_memslot_add_guest.end(); ++it){
		boost::python::call(*it,voi qid,slot_id,guest_start,guest_end) ; PRI	}
}
void cb_qxl_post_load(int qid,const char *mode) {
	for(auto it = py_qxl_post_load.begin(); it != py_qxl_post_load.end(); ++it){
		boost::python::call(*it,qid,*mode);
	}
}
void cb_qxl_pre_load(int qid) {
	for(auto it = py_qxl_pre_load.begin(); it != py_qxl_pre_load.end(); ++it){
		boost::python::call(*it,qid);
	}
}
void cb_qxl_pre_save(int qid) {
	for(auto it = py_qxl_pre_save.begin(); it != py_qxl_pre_save.end(); ++it){
		boost::python::call(*it,qid);
	}
}
void cb_qxl_reset_surfaces(int qid) {
	for(auto it = py_qxl_reset_surfaces.begin(); it != py_qxl_reset_surfaces.end(); ++it){
		boost::python::call(*it,qid);
	}
}
void cb_qxl_ring_command_check(int qid,const char *mode) {
	for(auto it = py_qxl_ring_command_check.begin(); it != py_qxl_ring_command_check.end(); ++it){
		boost::python::call(*it,qid,*mode);
	}
}
void cb_qxl_ring_command_get(int qid,const char *mode) {
	for(auto it = py_qxl_ring_command_get.begin(); it != py_qxl_ring_command_get.end(); ++it){
		boost::python::call(*it,qid,*mode);
	}
}
void cb_qxl_ring_command_req_notification(int qid) {
	for(auto it = py_qxl_ring_command_req_notification.begin(); it != py_qxl_ring_command_req_notification.end(); ++it){
		boost::python::call(*it,qid);
	}
}
void cb_qxl_ring_cursor_check(int qid,const char *mode) {
	for(auto it = py_qxl_ring_cursor_check.begin(); it != py_qxl_ring_cursor_check.end(); ++it){
		boost::python::call(*it,qid,*mode);
	}
}
void cb_qxl_ring_cursor_get(int qid,const char *mode) {
	for(auto it = py_qxl_ring_cursor_get.begin(); it != py_qxl_ring_cursor_get.end(); ++it){
		boost::python::call(*it,qid,*mode);
	}
}
void cb_qxl_ring_cursor_req_notification(int qid) {
	for(auto it = py_qxl_ring_cursor_req_notification.begin(); it != py_qxl_ring_cursor_req_notification.end(); ++it){
		boost::python::call(*it,qid);
	}
}
void cb_qxl_ring_res_push(int qid,const char *mode,uint32_t surface_count,uint32_t free_res,void *last_release,const char *notify) {
	for(auto it = py_qxl_ring_res_push.begin(); it != py_qxl_ring_res_push.end(); ++it){
		boost::python::call(*it,voi qid,*mode,surface_count,free_res,last_release,*notify	}
}
void cb_qxl_ring_res_push_rest(int qid,uint32_t ring_has,uint32_t ring_size,uint32_t prod,uint32_t cons) {
	for(auto it = py_qxl_ring_res_push_rest.begin(); it != py_qxl_ring_res_push_rest.end(); ++it){
		boost::python::call(*it,voi qid,ring_has,ring_size,prod,cons	}
}
void cb_qxl_ring_res_put(int qid,uint32_t free_res) {
	for(auto it = py_qxl_ring_res_put.begin(); it != py_qxl_ring_res_put.end(); ++it){
		boost::python::call(*it,qid,free_res);
	}
}
void cb_qxl_set_mode(int qid,int modenr,uint32_t x_res,uint32_t y_res,uint32_t bits,uint64_t devmem) {
	for(auto it = py_qxl_set_mode.begin(); it != py_qxl_set_mode.end(); ++it){
		boost::python::call(*it,voi qid,modenr,x_res,y_res,bits,devmem	}
}
void cb_qxl_soft_reset(int qid) {
	for(auto it = py_qxl_soft_reset.begin(); it != py_qxl_soft_reset.end(); ++it){
		boost::python::call(*it,qid);
	}
}
void cb_qxl_spice_destroy_surfaces_complete(int qid) {
	for(auto it = py_qxl_spice_destroy_surfaces_complete.begin(); it != py_qxl_spice_destroy_surfaces_complete.end(); ++it){
		boost::python::call(*it,qid);
	}
}
void cb_qxl_spice_destroy_surfaces(int qid,int async) {
	for(auto it = py_qxl_spice_destroy_surfaces.begin(); it != py_qxl_spice_destroy_surfaces.end(); ++it){
		boost::python::call(*it,qid,async);
	}
}
void cb_qxl_spice_destroy_surface_wait_complete(int qid,uint32_t id) {
	for(auto it = py_qxl_spice_destroy_surface_wait_complete.begin(); it != py_qxl_spice_destroy_surface_wait_complete.end(); ++it){
		boost::python::call(*it,voi qid,id	}
}
void cb_qxl_spice_destroy_surface_wait(int qid,uint32_t id,int async) {
	for(auto it = py_qxl_spice_destroy_surface_wait.begin(); it != py_qxl_spice_destroy_surface_wait.end(); ++it){
		boost::python::call(*it,voi qid,id,async	}
}
void cb_qxl_spice_flush_surfaces_async(int qid,uint32_t surface_count,uint32_t num_free_res) {
	for(auto it = py_qxl_spice_flush_surfaces_async.begin(); it != py_qxl_spice_flush_surfaces_async.end(); ++it){
		boost::python::call(*it,voi qid,surface_count,num_free_res	}
}
void cb_qxl_spice_monitors_config(int qid) {
	for(auto it = py_qxl_spice_monitors_config.begin(); it != py_qxl_spice_monitors_config.end(); ++it){
		boost::python::call(*it,qid);
	}
}
void cb_qxl_spice_loadvm_commands(int qid,void *ext,uint32_t count) {
	for(auto it = py_qxl_spice_loadvm_commands.begin(); it != py_qxl_spice_loadvm_commands.end(); ++it){
		boost::python::call(*it,voi qid,ext,count	}
}
void cb_qxl_spice_oom(int qid) {
	for(auto it = py_qxl_spice_oom.begin(); it != py_qxl_spice_oom.end(); ++it){
		boost::python::call(*it,qid);
	}
}
void cb_qxl_spice_reset_cursor(int qid) {
	for(auto it = py_qxl_spice_reset_cursor.begin(); it != py_qxl_spice_reset_cursor.end(); ++it){
		boost::python::call(*it,qid);
	}
}
void cb_qxl_spice_reset_image_cache(int qid) {
	for(auto it = py_qxl_spice_reset_image_cache.begin(); it != py_qxl_spice_reset_image_cache.end(); ++it){
		boost::python::call(*it,qid);
	}
}
void cb_qxl_spice_reset_memslots(int qid) {
	for(auto it = py_qxl_spice_reset_memslots.begin(); it != py_qxl_spice_reset_memslots.end(); ++it){
		boost::python::call(*it,qid);
	}
}
void cb_qxl_spice_update_area(int qid,uint32_t surface_id,uint32_t left,uint32_t right,uint32_t top,uint32_t bottom) {
	for(auto it = py_qxl_spice_update_area.begin(); it != py_qxl_spice_update_area.end(); ++it){
		boost::python::call(*it,voi qid,surface_id,left,right,top,bottom	}
}
void cb_qxl_spice_update_area_rest(int qid,uint32_t num_dirty_rects,uint32_t clear_dirty_region) {
	for(auto it = py_qxl_spice_update_area_rest.begin(); it != py_qxl_spice_update_area_rest.end(); ++it){
		boost::python::call(*it,voi qid,num_dirty_rects,clear_dirty_region	}
}
void cb_qxl_surfaces_dirty(int qid,uint64_t offset,uint64_t size) ;PRIx6{
	for(auto it = py_qxl_surfaces_dirty.begin(); it != py_qxl_surfaces_dirty.end(); ++it){
		boost::python::call(*it,voi qid,offset,size) ;PRI	}
}
void cb_qxl_send_events(int qid,uint32_t events) {
	for(auto it = py_qxl_send_events.begin(); it != py_qxl_send_events.end(); ++it){
		boost::python::call(*it,qid,events);
	}
}
void cb_qxl_send_events_vm_stopped(int qid,uint32_t events) {
	for(auto it = py_qxl_send_events_vm_stopped.begin(); it != py_qxl_send_events_vm_stopped.end(); ++it){
		boost::python::call(*it,qid,events);
	}
}
void cb_qxl_set_guest_bug(int qid) {
	for(auto it = py_qxl_set_guest_bug.begin(); it != py_qxl_set_guest_bug.end(); ++it){
		boost::python::call(*it,qid);
	}
}
void cb_qxl_interrupt_client_monitors_config(int qid,int num_heads,void *heads) {
	for(auto it = py_qxl_interrupt_client_monitors_config.begin(); it != py_qxl_interrupt_client_monitors_config.end(); ++it){
		boost::python::call(*it,voi qid,num_heads,heads	}
}
void cb_qxl_client_monitors_config_unsupported_by_guest(int qid,uint32_t int_mask,void *client_monitors_config) {
	for(auto it = py_qxl_client_monitors_config_unsupported_by_guest.begin(); it != py_qxl_client_monitors_config_unsupported_by_guest.end(); ++it){
		boost::python::call(*it,voi qid,_mask,client_monitors_config	}
}
void cb_qxl_client_monitors_config_unsupported_by_device(int qid,int revision) {
	for(auto it = py_qxl_client_monitors_config_unsupported_by_device.begin(); it != py_qxl_client_monitors_config_unsupported_by_device.end(); ++it){
		boost::python::call(*it,voi qid,revision	}
}
void cb_qxl_client_monitors_config_capped(int qid,int requested,int limit) {
	for(auto it = py_qxl_client_monitors_config_capped.begin(); it != py_qxl_client_monitors_config_capped.end(); ++it){
		boost::python::call(*it,voi qid,requested,limit	}
}
void cb_qxl_client_monitors_config_crc(int qid,unsigned size,uint32_t crc32) {
	for(auto it = py_qxl_client_monitors_config_crc.begin(); it != py_qxl_client_monitors_config_crc.end(); ++it){
		boost::python::call(*it,voi qid,size,crc32	}
}
void cb_qxl_set_client_capabilities_unsupported_by_revision(int qid,int revision) {
	for(auto it = py_qxl_set_client_capabilities_unsupported_by_revision.begin(); it != py_qxl_set_client_capabilities_unsupported_by_revision.end(); ++it){
		boost::python::call(*it,voi qid,revision	}
}

//# qxl-render.c
void cb_qxl_render_blit(int32_t stride,int32_t left,int32_t right,int32_t top,int32_t bottom) {
	for(auto it = py_qxl_render_blit.begin(); it != py_qxl_render_blit.end(); ++it){
		boost::python::call(*it,voi stride,left,right,top,bottom	}
}
void cb_qxl_render_guest_primary_resized(int32_t width,int32_t height,int32_t stride,int32_t bytes_pp,int32_t bits_pp) {
	for(auto it = py_qxl_render_guest_primary_resized.begin(); it != py_qxl_render_guest_primary_resized.end(); ++it){
		boost::python::call(*it,voi width,height,stride,bytes_pp,bits_pp	}
}
void cb_qxl_render_update_area_done(void *cookie) {
	for(auto it = py_qxl_render_update_area_done.begin(); it != py_qxl_render_update_area_done.end(); ++it){
		boost::python::call(*it,cookie);
	}
}

//# vga.c
void cb_vga_std_read_io(uint32_t addr,uint32_t val) {
	for(auto it = py_vga_std_read_io.begin(); it != py_vga_std_read_io.end(); ++it){
		boost::python::call(*it,addr,val);
	}
}
void cb_vga_std_write_io(uint32_t addr,uint32_t val) {
	for(auto it = py_vga_std_write_io.begin(); it != py_vga_std_write_io.end(); ++it){
		boost::python::call(*it,addr,val);
	}
}
void cb_vga_vbe_read(uint32_t index,uint32_t val) {
	for(auto it = py_vga_vbe_read.begin(); it != py_vga_vbe_read.end(); ++it){
		boost::python::call(*it,index,val);
	}
}
void cb_vga_vbe_write(uint32_t index,uint32_t val) {
	for(auto it = py_vga_vbe_write.begin(); it != py_vga_vbe_write.end(); ++it){
		boost::python::call(*it,index,val);
	}
}

//# cirrus_vga.c
void cb_vga_cirrus_read_io(uint32_t addr,uint32_t val) {
	for(auto it = py_vga_cirrus_read_io.begin(); it != py_vga_cirrus_read_io.end(); ++it){
		boost::python::call(*it,addr,val);
	}
}
void cb_vga_cirrus_write_io(uint32_t addr,uint32_t val) {
	for(auto it = py_vga_cirrus_write_io.begin(); it != py_vga_cirrus_write_io.end(); ++it){
		boost::python::call(*it,addr,val);
	}
}
void cb_vga_cirrus_write_blt(uint32_t offset,uint32_t val) {
	for(auto it = py_vga_cirrus_write_blt.begin(); it != py_vga_cirrus_write_blt.end(); ++it){
		boost::python::call(*it,offset,val);
	}
}
void cb_vga_cirrus_write_gr(uint8_t index,uint8_t val) {
	for(auto it = py_vga_cirrus_write_gr.begin(); it != py_vga_cirrus_write_gr.end(); ++it){
		boost::python::call(*it,index,val);
	}
}
void cb_vga_cirrus_bitblt_start(uint8_t blt_rop,uint8_t blt_mode,uint8_t blt_modeext,int blt_width,int blt_height,int blt_dstpitch,int blt_srcpitch,uint32_t blt_dstaddr,uint32_t blt_srcaddr,uint8_t gr_val) {
	for(auto it = py_vga_cirrus_bitblt_start.begin(); it != py_vga_cirrus_bitblt_start.end(); ++it){
		boost::python::call(*it,voi blt_rop,blt_mode,blt_modeext,blt_width,blt_height,blt_dstpitch,blt_srcpitch,blt_dstaddr,blt_srcaddr,gr_val	}
}

//# sii9022.c
void cb_sii9022_read_reg(uint8_t addr,uint8_t val) {
	for(auto it = py_sii9022_read_reg.begin(); it != py_sii9022_read_reg.end(); ++it){
		boost::python::call(*it,addr,val);
	}
}
void cb_sii9022_write_reg(uint8_t addr,uint8_t val) {
	for(auto it = py_sii9022_write_reg.begin(); it != py_sii9022_write_reg.end(); ++it){
		boost::python::call(*it,addr,val);
	}
}
void cb_sii9022_switch_mode(const char *mode) {
	for(auto it = py_sii9022_switch_mode.begin(); it != py_sii9022_switch_mode.end(); ++it){
		boost::python::call(*it,*mode);
	}
}

//# ati.c
void cb_ati_mm_read(unsigned int size,uint64_t addr,const char *name,uint64_t val) {
	for(auto it = py_ati_mm_read.begin(); it != py_ati_mm_read.end(); ++it){
		boost::python::call(*it,voi  size,addr,*name,val	}
}
void cb_ati_mm_write(unsigned int size,uint64_t addr,const char *name,uint64_t val) {
	for(auto it = py_ati_mm_write.begin(); it != py_ati_mm_write.end(); ++it){
		boost::python::call(*it,voi  size,addr,*name,val	}
}

//# artist.c
void cb_artist_reg_read(unsigned int size,uint64_t addr,const char *name,uint64_t val) {
	for(auto it = py_artist_reg_read.begin(); it != py_artist_reg_read.end(); ++it){
		boost::python::call(*it,voi  size,addr,*name,val	}
}
void cb_artist_reg_write(unsigned int size,uint64_t addr,const char *name,uint64_t val) {
	for(auto it = py_artist_reg_write.begin(); it != py_artist_reg_write.end(); ++it){
		boost::python::call(*it,voi  size,addr,*name,val	}
}
void cb_artist_vram_read(unsigned int size,uint64_t addr,int posx,int posy,uint64_t val) {
	for(auto it = py_artist_vram_read.begin(); it != py_artist_vram_read.end(); ++it){
		boost::python::call(*it,voi  size,addr,posx,posy,val	}
}
void cb_artist_vram_write(unsigned int size,uint64_t addr,uint64_t val) {
	for(auto it = py_artist_vram_write.begin(); it != py_artist_vram_write.end(); ++it){
		boost::python::call(*it,voi  size,addr,val	}
}
void cb_artist_fill_window(unsigned int start_x,unsigned int start_y,unsigned int width,unsigned int height,uint32_t op,uint32_t ctlpln) {
	for(auto it = py_artist_fill_window.begin(); it != py_artist_fill_window.end(); ++it){
		boost::python::call(*it,voi  start_x,start_y,width,height,op,ctlpln	}
}
void cb_artist_block_move(unsigned int start_x,unsigned int start_y,unsigned int dest_x,unsigned int dest_y,unsigned int width,unsigned int height) {
	for(auto it = py_artist_block_move.begin(); it != py_artist_block_move.end(); ++it){
		boost::python::call(*it,voi  start_x,start_y,dest_x,dest_y,width,height	}
}
void cb_artist_draw_line(unsigned int start_x,unsigned int start_y,unsigned int end_x,unsigned int end_y) {
	for(auto it = py_artist_draw_line.begin(); it != py_artist_draw_line.end(); ++it){
		boost::python::call(*it,voi  start_x,start_y,end_x,end_y	}
}

//# cg3.c
void cb_cg3_read(uint32_t addr,uint32_t val,unsigned size) {
	for(auto it = py_cg3_read.begin(); it != py_cg3_read.end(); ++it){
		boost::python::call(*it,addr,val,size);
	}
}
void cb_cg3_write(uint32_t addr,uint32_t val,unsigned size) {
	for(auto it = py_cg3_write.begin(); it != py_cg3_write.end(); ++it){
		boost::python::call(*it,addr,val,size);
	}
}

//# dpcd.c
void cb_dpcd_read(uint32_t addr,uint8_t val) {
	for(auto it = py_dpcd_read.begin(); it != py_dpcd_read.end(); ++it){
		boost::python::call(*it,addr,val);
	}
}
void cb_dpcd_write(uint32_t addr,uint8_t val) {
	for(auto it = py_dpcd_write.begin(); it != py_dpcd_write.end(); ++it){
		boost::python::call(*it,addr,val);
	}
}

//# sm501.c
void cb_sm501_system_config_read(uint32_t addr,uint32_t val) {
	for(auto it = py_sm501_system_config_read.begin(); it != py_sm501_system_config_read.end(); ++it){
		boost::python::call(*it,addr,val);
	}
}
void cb_sm501_system_config_write(uint32_t addr,uint32_t val) {
	for(auto it = py_sm501_system_config_write.begin(); it != py_sm501_system_config_write.end(); ++it){
		boost::python::call(*it,addr,val);
	}
}
void cb_sm501_i2c_read(uint32_t addr,uint8_t val) {
	for(auto it = py_sm501_i2c_read.begin(); it != py_sm501_i2c_read.end(); ++it){
		boost::python::call(*it,addr,val);
	}
}
void cb_sm501_i2c_write(uint32_t addr,uint32_t val) {
	for(auto it = py_sm501_i2c_write.begin(); it != py_sm501_i2c_write.end(); ++it){
		boost::python::call(*it,addr,val);
	}
}
void cb_sm501_palette_read(uint32_t addr) {
	for(auto it = py_sm501_palette_read.begin(); it != py_sm501_palette_read.end(); ++it){
		boost::python::call(*it,addr);
	}
}
void cb_sm501_palette_write(uint32_t addr,uint32_t val) {
	for(auto it = py_sm501_palette_write.begin(); it != py_sm501_palette_write.end(); ++it){
		boost::python::call(*it,addr,val);
	}
}
void cb_sm501_disp_ctrl_read(uint32_t addr,uint32_t val) {
	for(auto it = py_sm501_disp_ctrl_read.begin(); it != py_sm501_disp_ctrl_read.end(); ++it){
		boost::python::call(*it,addr,val);
	}
}
void cb_sm501_disp_ctrl_write(uint32_t addr,uint32_t val) {
	for(auto it = py_sm501_disp_ctrl_write.begin(); it != py_sm501_disp_ctrl_write.end(); ++it){
		boost::python::call(*it,addr,val);
	}
}
void cb_sm501_2d_engine_read(uint32_t addr,uint32_t val) {
	for(auto it = py_sm501_2d_engine_read.begin(); it != py_sm501_2d_engine_read.end(); ++it){
		boost::python::call(*it,addr,val);
	}
}
void cb_sm501_2d_engine_write(uint32_t addr,uint32_t val) {
	for(auto it = py_sm501_2d_engine_write.begin(); it != py_sm501_2d_engine_write.end(); ++it){
		boost::python::call(*it,addr,val);
	}
}
