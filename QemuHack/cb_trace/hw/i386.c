//# See docs/devel/tracing.txt for syntax documentation.

//# x86-iommu.c
void cb_x86_iommu_iec_notify(bool global,uint32_t index,uint32_t mask) {



						for(auto it = py_x86_iommu_iec_notify.begin(); it != py_x86_iommu_iec_notify.end(); ++it){
							boost::python::call(*it,global,index,mask);
						}
}

//# intel_iommu.c
void cb_vtd_inv_desc(const char *type,uint64_t hi,uint64_t lo) {



						for(auto it = py_vtd_inv_desc.begin(); it != py_vtd_inv_desc.end(); ++it){
							boost::python::call(*it,*type,hi,lo);
						}
}
void cb_vtd_inv_desc_cc_domain(uint16_t domain) {



						for(auto it = py_vtd_inv_desc_cc_domain.begin(); it != py_vtd_inv_desc_cc_domain.end(); ++it){
							boost::python::call(*it,domain);
						}
}
void cb_vtd_inv_desc_cc_global(void) {



						for(auto it = py_vtd_inv_desc_cc_global.begin(); it != py_vtd_inv_desc_cc_global.end(); ++it){
							boost::python::call(*it);
						}
}
void cb_vtd_inv_desc_cc_device(uint8_t bus,uint8_t dev,uint8_t fn) {



						for(auto it = py_vtd_inv_desc_cc_device.begin(); it != py_vtd_inv_desc_cc_device.end(); ++it){
							boost::python::call(*it,bus,dev,fn);
						}
}
void cb_vtd_inv_desc_cc_devices(uint16_t sid,uint16_t fmask) {



						for(auto it = py_vtd_inv_desc_cc_devices.begin(); it != py_vtd_inv_desc_cc_devices.end(); ++it){
							boost::python::call(*it,sid,fmask);
						}
}
void cb_vtd_inv_desc_iotlb_global(void) {



						for(auto it = py_vtd_inv_desc_iotlb_global.begin(); it != py_vtd_inv_desc_iotlb_global.end(); ++it){
							boost::python::call(*it);
						}
}
void cb_vtd_inv_desc_iotlb_domain(uint16_t domain) {



						for(auto it = py_vtd_inv_desc_iotlb_domain.begin(); it != py_vtd_inv_desc_iotlb_domain.end(); ++it){
							boost::python::call(*it,domain);
						}
}
void cb_vtd_inv_desc_iotlb_pages(uint16_t domain,uint64_t addr,uint8_t mask) {



						for(auto it = py_vtd_inv_desc_iotlb_pages.begin(); it != py_vtd_inv_desc_iotlb_pages.end(); ++it){
							boost::python::call(*it,domain,addr,mask);
						}
}
void cb_vtd_inv_desc_wait_sw(uint64_t addr,uint32_t data) {



						for(auto it = py_vtd_inv_desc_wait_sw.begin(); it != py_vtd_inv_desc_wait_sw.end(); ++it){
							boost::python::call(*it,addr,data);
						}
}
void cb_vtd_inv_desc_wait_irq(const char *msg) {



						for(auto it = py_vtd_inv_desc_wait_irq.begin(); it != py_vtd_inv_desc_wait_irq.end(); ++it){
							boost::python::call(*it,*msg);
						}
}
void cb_vtd_inv_desc_wait_write_fail(uint64_t hi,uint64_t lo) {



						for(auto it = py_vtd_inv_desc_wait_write_fail.begin(); it != py_vtd_inv_desc_wait_write_fail.end(); ++it){
							boost::python::call(*it,hi,lo);
						}
}
void cb_vtd_inv_desc_iec(uint32_t granularity,uint32_t index,uint32_t mask) {



						for(auto it = py_vtd_inv_desc_iec.begin(); it != py_vtd_inv_desc_iec.end(); ++it){
							boost::python::call(*it,granularity,index,mask);
						}
}
void cb_vtd_inv_qi_enable(bool enable) {



						for(auto it = py_vtd_inv_qi_enable.begin(); it != py_vtd_inv_qi_enable.end(); ++it){
							boost::python::call(*it,enable);
						}
}
void cb_vtd_inv_qi_setup(uint64_t addr,int size) {



						for(auto it = py_vtd_inv_qi_setup.begin(); it != py_vtd_inv_qi_setup.end(); ++it){
							boost::python::call(*it,addr,size);
						}
}
void cb_vtd_inv_qi_head(uint16_t head) {



						for(auto it = py_vtd_inv_qi_head.begin(); it != py_vtd_inv_qi_head.end(); ++it){
							boost::python::call(*it,head);
						}
}
void cb_vtd_inv_qi_tail(uint16_t head) {



						for(auto it = py_vtd_inv_qi_tail.begin(); it != py_vtd_inv_qi_tail.end(); ++it){
							boost::python::call(*it,head);
						}
}
void cb_vtd_inv_qi_fetch(void) {



						for(auto it = py_vtd_inv_qi_fetch.begin(); it != py_vtd_inv_qi_fetch.end(); ++it){
							boost::python::call(*it);
						}
}
void cb_vtd_context_cache_reset(void) {



						for(auto it = py_vtd_context_cache_reset.begin(); it != py_vtd_context_cache_reset.end(); ++it){
							boost::python::call(*it);
						}
}
void cb_vtd_re_not_present(uint8_t bus) {



						for(auto it = py_vtd_re_not_present.begin(); it != py_vtd_re_not_present.end(); ++it){
							boost::python::call(*it,bus);
						}
}
void cb_vtd_ce_not_present(uint8_t bus,uint8_t devfn) {



						for(auto it = py_vtd_ce_not_present.begin(); it != py_vtd_ce_not_present.end(); ++it){
							boost::python::call(*it,bus,devfn);
						}
}
void cb_vtd_iotlb_page_hit(uint16_t sid,uint64_t addr,uint64_t slpte,uint16_t domain) {



						for(auto it = py_vtd_iotlb_page_hit.begin(); it != py_vtd_iotlb_page_hit.end(); ++it){
							boost::python::call(*it,*id,addr,recv,success);
						}
}
void cb_vtd_iotlbuint16_t sid,uint64_t addr,uint64_t slpte,uint16_t domain){



						for(auto it = py_npcm7xx_smbus_send_address.begin(); it != py_npcm7xx_smbus_send_address.end(); ++it){
							boost::python::call(*it,*id,addr,recv,success);
						}
}
void cb_vtd_iotlbuint16_t sid,uint64_t addr,uint64_t slpte,uint16_t domain){



						for(auto it = py_npcm7xx_smbus_send_address.begin(); it != py_npcm7xx_smbus_send_address.end(); ++it){
							boost::python::call(*it,*id,addr,recv,success);
						}
}
void cb_vtd_iotlbuint8_t bus,uint8_t devfn,uint64_t high,uint64_t low,uint32_t gen){



						for(auto it = py_npcm7xx_smbus_send_address.begin(); it != py_npcm7xx_smbus_send_address.end(); ++it){
							boost::python::call(*it,*id,addr,recv,success);
						}
}
void cb_vtd_iotlbuint8_t bus,uint8_t devfn,uint64_t high,uint64_t low,uint32_t gen1,uint32_t gen2){



						for(auto it = py_npcm7xx_smbus_send_address.begin(); it != py_npcm7xx_smbus_send_address.end(); ++it){
							boost::python::call(*it,*reason);
						}
}
void cb_vtd_fault_disabled(void) {



						for(auto it = py_vtd_fault_disabled.begin(); it != py_vtd_fault_disabled.end(); ++it){
							boost::python::call(*it);
						}
}
void cb_vtd_replay_ce_valid(const char *mode,uint8_t bus,uint8_t dev,uint8_t fn,uint16_t domain,uint64_t hi,uint64_t lo) {



						for(auto it = py_vtd_replay_ce_valid.begin(); it != py_vtd_replay_ce_valid.end(); ++it){
							boost::python::call(*it,*id,addr,recv,success);
						}
}
void cb_vtd_replaconst char *mode,uint8_t bus,uint8_t dev,uint8_t fn,uint16_t domain,uint64_t hi,uint64_t lo){



						for(auto it = py_npcm7xx_smbus_send_address.begin(); it != py_npcm7xx_smbus_send_address.end(); ++it){
							boost::python::call(*it,bus,dev,fn);
						}
}
void cb_vtd_page_walk_level(uint64_t addr,uint32_t level,uint64_t start,uint64_t end) {



						for(auto it = py_vtd_page_walk_level.begin(); it != py_vtd_page_walk_level.end(); ++it){
							boost::python::call(*it,*id,addr,recv,success);
						}
}
void cb_vtd_page_uint64_t addr,uint32_t level,uint64_t start,uint64_t end){



						for(auto it = py_npcm7xx_smbus_send_address.begin(); it != py_npcm7xx_smbus_send_address.end(); ++it){
							boost::python::call(*it,*id,addr,recv,success);
						}
}
void cb_vtd_page_uint16_t domain,uint64_t iova,uint64_t gpa,uint64_t mask,int perm){



						for(auto it = py_npcm7xx_smbus_send_address.begin(); it != py_npcm7xx_smbus_send_address.end(); ++it){
							boost::python::call(*it,iova,mask,translated);
						}
}
void cb_vtd_page_walk_one_skip_unmap(uint64_t iova,uint64_t mask) {



						for(auto it = py_vtd_page_walk_one_skip_unmap.begin(); it != py_vtd_page_walk_one_skip_unmap.end(); ++it){
							boost::python::call(*it,iova,mask);
						}
}
void cb_vtd_page_walk_skip_read(uint64_t iova,uint64_t next) {



						for(auto it = py_vtd_page_walk_skip_read.begin(); it != py_vtd_page_walk_skip_read.end(); ++it){
							boost::python::call(*it,iova,next);
						}
}
void cb_vtd_page_walk_skip_reserve(uint64_t iova,uint64_t next) {



						for(auto it = py_vtd_page_walk_skip_reserve.begin(); it != py_vtd_page_walk_skip_reserve.end(); ++it){
							boost::python::call(*it,iova,next);
						}
}
void cb_vtd_switch_address_space(uint8_t bus,uint8_t slot,uint8_t fn,bool on) {



						for(auto it = py_vtd_switch_address_space.begin(); it != py_vtd_switch_address_space.end(); ++it){
							boost::python::call(*it,bus,slot,fn,on);
						}
}
void cb_vtd_as_unmap_whole(uint8_t bus,uint8_t slot,uint8_t fn,uint64_t iova,uint64_t size) {



						for(auto it = py_vtd_as_unmap_whole.begin(); it != py_vtd_as_unmap_whole.end(); ++it){
							boost::python::call(*it,*id,addr,recv,success);
						}
}
void cb_vtd_transuint8_t bus,uint8_t slot,uint8_t fn,uint64_t iova,uint64_t size){



						for(auto it = py_npcm7xx_smbus_send_address.begin(); it != py_npcm7xx_smbus_send_address.end(); ++it){
							boost::python::call(*it,sid,addr);
						}
}
void cb_vtd_pt_enable_fast_path(uint16_t sid,bool success) {



						for(auto it = py_vtd_pt_enable_fast_path.begin(); it != py_vtd_pt_enable_fast_path.end(); ++it){
							boost::python::call(*it,sid,success);
						}
}
void cb_vtd_irq_generate(uint64_t addr,uint64_t data) {



						for(auto it = py_vtd_irq_generate.begin(); it != py_vtd_irq_generate.end(); ++it){
							boost::python::call(*it,addr,data);
						}
}
void cb_vtd_reg_read(uint64_t addr,uint64_t size) {



						for(auto it = py_vtd_reg_read.begin(); it != py_vtd_reg_read.end(); ++it){
							boost::python::call(*it,addr,size);
						}
}
void cb_vtd_reg_write(uint64_t addr,uint64_t size,uint64_t val) {



						for(auto it = py_vtd_reg_write.begin(); it != py_vtd_reg_write.end(); ++it){
							boost::python::call(*it,addr,size,val);
						}
}
void cb_vtd_reg_dmar_root(uint64_t addr,bool scalable) {



						for(auto it = py_vtd_reg_dmar_root.begin(); it != py_vtd_reg_dmar_root.end(); ++it){
							boost::python::call(*it,addr,scalable);
						}
}
void cb_vtd_reg_ir_root(uint64_t addr,uint32_t size) {



						for(auto it = py_vtd_reg_ir_root.begin(); it != py_vtd_reg_ir_root.end(); ++it){
							boost::python::call(*it,addr,size);
						}
}
void cb_vtd_reg_write_gcmd(uint32_t status,uint32_t val) {



						for(auto it = py_vtd_reg_write_gcmd.begin(); it != py_vtd_reg_write_gcmd.end(); ++it){
							boost::python::call(*it,status,val);
						}
}
void cb_vtd_reg_write_fectl(uint32_t value) {



						for(auto it = py_vtd_reg_write_fectl.begin(); it != py_vtd_reg_write_fectl.end(); ++it){
							boost::python::call(*it,value);
						}
}
void cb_vtd_reg_write_iectl(uint32_t value) {



						for(auto it = py_vtd_reg_write_iectl.begin(); it != py_vtd_reg_write_iectl.end(); ++it){
							boost::python::call(*it,value);
						}
}
void cb_vtd_reg_ics_clear_ip(void) {



						for(auto it = py_vtd_reg_ics_clear_ip.begin(); it != py_vtd_reg_ics_clear_ip.end(); ++it){
							boost::python::call(*it);
						}
}
void cb_vtd_dmar_translate(uint8_t bus,uint8_t slot,uint8_t func,uint64_t iova,uint64_t gpa,uint64_t mask) {



						for(auto it = py_vtd_dmar_translate.begin(); it != py_vtd_dmar_translate.end(); ++it){
							boost::python::call(*it,*id,addr,recv,success);
						}
}
void cb_vtd_dmar_uint8_t bus,uint8_t slot,uint8_t func,uint64_t iova,uint64_t gpa,uint64_t mask){



						for(auto it = py_npcm7xx_smbus_send_address.begin(); it != py_npcm7xx_smbus_send_address.end(); ++it){
							boost::python::call(*it,en);
						}
}
void cb_vtd_dmar_fault(uint16_t sid,int fault,uint64_t addr,bool is_write) {



						for(auto it = py_vtd_dmar_fault.begin(); it != py_vtd_dmar_fault.end(); ++it){
							boost::python::call(*it,sid,fault,addr,is_write);
						}
}
void cb_vtd_ir_enable(bool en) {



						for(auto it = py_vtd_ir_enable.begin(); it != py_vtd_ir_enable.end(); ++it){
							boost::python::call(*it,en);
						}
}
void cb_vtd_ir_irte_get(int index,uint64_t lo,uint64_t hi) {



						for(auto it = py_vtd_ir_irte_get.begin(); it != py_vtd_ir_irte_get.end(); ++it){
							boost::python::call(*it,index,lo,hi);
						}
}
void cb_vtd_ir_remap(int index,int tri,int vec,int deliver,uint32_t dest,int dest_mode) {



						for(auto it = py_vtd_ir_remap.begin(); it != py_vtd_ir_remap.end(); ++it){
							boost::python::call(*it,*id,addr,recv,success);
						}
}
void cb_vtd_ir_reint index,int tri,int vec,int deliver,uint32_t dest,int dest_mode){



						for(auto it = py_npcm7xx_smbus_send_address.begin(); it != py_npcm7xx_smbus_send_address.end(); ++it){
							boost::python::call(*it,*type);
						}
}
void cb_vtd_ir_remap_msi(uint64_t addr,uint64_t data,uint64_t addr2,uint64_t data2) {



						for(auto it = py_vtd_ir_remap_msi.begin(); it != py_vtd_ir_remap_msi.end(); ++it){
							boost::python::call(*it,addr,data,addr2,data2);
						}
}
void cb_vtd_ir_remap_msi_req(uint64_t addr,uint64_t data) {



						for(auto it = py_vtd_ir_remap_msi_req.begin(); it != py_vtd_ir_remap_msi_req.end(); ++it){
							boost::python::call(*it,addr,data);
						}
}
void cb_vtd_fsts_ppf(bool set) {



						for(auto it = py_vtd_fsts_ppf.begin(); it != py_vtd_fsts_ppf.end(); ++it){
							boost::python::call(*it,set);
						}
}
void cb_vtd_fsts_clear_ip(void) {



						for(auto it = py_vtd_fsts_clear_ip.begin(); it != py_vtd_fsts_clear_ip.end(); ++it){
							boost::python::call(*it);
						}
}
void cb_vtd_frr_new(int index,uint64_t hi,uint64_t lo) {



						for(auto it = py_vtd_frr_new.begin(); it != py_vtd_frr_new.end(); ++it){
							boost::python::call(*it,index,hi,lo);
						}
}
void cb_vtd_warn_invalid_qi_tail(uint16_t tail) {



						for(auto it = py_vtd_warn_invalid_qi_tail.begin(); it != py_vtd_warn_invalid_qi_tail.end(); ++it){
							boost::python::call(*it,tail);
						}
}
void cb_vtd_warn_ir_vector(uint16_t sid,int index,int vec,int target) {



						for(auto it = py_vtd_warn_ir_vector.begin(); it != py_vtd_warn_ir_vector.end(); ++it){
							boost::python::call(*it,sid,index,vec,target);
						}
}
void cb_vtd_warn_ir_trigger(uint16_t sid,int index,int trig,int target) {



						for(auto it = py_vtd_warn_ir_trigger.begin(); it != py_vtd_warn_ir_trigger.end(); ++it){
							boost::python::call(*it,sid,index,trig,target);
						}
}

//# amd_iommu.c
void cb_amdvi_evntlog_fail(uint64_t addr,uint32_t head) {



						for(auto it = py_amdvi_evntlog_fail.begin(); it != py_amdvi_evntlog_fail.end(); ++it){
							boost::python::call(*it,addr,head);
						}
}
void cb_amdvi_cache_update(uint16_t domid,uint8_t bus,uint8_t slot,uint8_t func,uint64_t gpa,uint64_t txaddr) {



						for(auto it = py_amdvi_cache_update.begin(); it != py_amdvi_cache_update.end(); ++it){
							boost::python::call(*it,*id,addr,recv,success);
						}
}
void cb_amdvi_comuint16_t domid,uint8_t bus,uint8_t slot,uint8_t func,uint64_t gpa,uint64_t txaddr){



						for(auto it = py_npcm7xx_smbus_send_address.begin(); it != py_npcm7xx_smbus_send_address.end(); ++it){
							boost::python::call(*it,addr);
						}
}
void cb_amdvi_mmio_write(const char *reg,uint64_t addr,unsigned size,uint64_t val,uint64_t offset) {



						for(auto it = py_amdvi_mmio_write.begin(); it != py_amdvi_mmio_write.end(); ++it){
							boost::python::call(*it,*id,addr,recv,success);
						}
}
void cb_amdvi_mmiconst char *reg,uint64_t addr,unsigned size,uint64_t val,uint64_t offset){



						for(auto it = py_npcm7xx_smbus_send_address.begin(); it != py_npcm7xx_smbus_send_address.end(); ++it){
							boost::python::call(*it,*id,addr,recv,success);
						}
}
void cb_amdvi_mmiconst char *reg,uint64_t addr,unsigned size,uint64_t offset){



						for(auto it = py_npcm7xx_smbus_send_address.begin(); it != py_npcm7xx_smbus_send_address.end(); ++it){
							boost::python::call(*it,max,addr,size);
						}
}
void cb_amdvi_command_error(uint64_t status) {



						for(auto it = py_amdvi_command_error.begin(); it != py_amdvi_command_error.end(); ++it){
							boost::python::call(*it,status);
						}
}
void cb_amdvi_command_read_fail(uint64_t addr,uint32_t head) {



						for(auto it = py_amdvi_command_read_fail.begin(); it != py_amdvi_command_read_fail.end(); ++it){
							boost::python::call(*it,addr,head);
						}
}
void cb_amdvi_command_exec(uint32_t head,uint32_t tail,uint64_t buf) {



						for(auto it = py_amdvi_command_exec.begin(); it != py_amdvi_command_exec.end(); ++it){
							boost::python::call(*it,head,tail,buf);
						}
}
void cb_amdvi_unhandled_command(uint8_t type) {



						for(auto it = py_amdvi_unhandled_command.begin(); it != py_amdvi_unhandled_command.end(); ++it){
							boost::python::call(*it,type);
						}
}
void cb_amdvi_intr_inval(void) {



						for(auto it = py_amdvi_intr_inval.begin(); it != py_amdvi_intr_inval.end(); ++it){
							boost::python::call(*it);
						}
}
void cb_amdvi_iotlb_inval(void) {



						for(auto it = py_amdvi_iotlb_inval.begin(); it != py_amdvi_iotlb_inval.end(); ++it){
							boost::python::call(*it);
						}
}
void cb_amdvi_prefetch_pages(void) {



						for(auto it = py_amdvi_prefetch_pages.begin(); it != py_amdvi_prefetch_pages.end(); ++it){
							boost::python::call(*it);
						}
}
void cb_amdvi_pages_inval(uint16_t domid) {



						for(auto it = py_amdvi_pages_inval.begin(); it != py_amdvi_pages_inval.end(); ++it){
							boost::python::call(*it,domid);
						}
}
void cb_amdvi_all_inval(void) {



						for(auto it = py_amdvi_all_inval.begin(); it != py_amdvi_all_inval.end(); ++it){
							boost::python::call(*it);
						}
}
void cb_amdvi_ppr_exec(void) {



						for(auto it = py_amdvi_ppr_exec.begin(); it != py_amdvi_ppr_exec.end(); ++it){
							boost::python::call(*it);
						}
}
void cb_amdvi_devtab_inval(uint8_t bus,uint8_t slot,uint8_t func) {



						for(auto it = py_amdvi_devtab_inval.begin(); it != py_amdvi_devtab_inval.end(); ++it){
							boost::python::call(*it,bus,slot,func);
						}
}
void cb_amdvi_completion_wait(uint64_t addr,uint64_t data) {



						for(auto it = py_amdvi_completion_wait.begin(); it != py_amdvi_completion_wait.end(); ++it){
							boost::python::call(*it,addr,data);
						}
}
void cb_amdvi_control_status(uint64_t val) {



						for(auto it = py_amdvi_control_status.begin(); it != py_amdvi_control_status.end(); ++it){
							boost::python::call(*it,val);
						}
}
void cb_amdvi_iotlb_reset(void) {



						for(auto it = py_amdvi_iotlb_reset.begin(); it != py_amdvi_iotlb_reset.end(); ++it){
							boost::python::call(*it);
						}
}
void cb_amdvi_dte_get_fail(uint64_t addr,uint32_t offset) {



						for(auto it = py_amdvi_dte_get_fail.begin(); it != py_amdvi_dte_get_fail.end(); ++it){
							boost::python::call(*it,addr,offset);
						}
}
void cb_amdvi_invalid_dte(uint64_t addr) {



						for(auto it = py_amdvi_invalid_dte.begin(); it != py_amdvi_invalid_dte.end(); ++it){
							boost::python::call(*it,addr);
						}
}
void cb_amdvi_get_pte_hwerror(uint64_t addr) {



						for(auto it = py_amdvi_get_pte_hwerror.begin(); it != py_amdvi_get_pte_hwerror.end(); ++it){
							boost::python::call(*it,addr);
						}
}
void cb_amdvi_mode_invalid(uint8_t level,uint64_t addr){



						for(auto it = py_amdvi_mode_invalid.begin(); it != py_amdvi_mode_invalid.end(); ++it){
							boost::python::call(*it,level,addr;
						}
}
void cb_amdvi_page_fault(uint64_t addr) {



						for(auto it = py_amdvi_page_fault.begin(); it != py_amdvi_page_fault.end(); ++it){
							boost::python::call(*it,addr);
						}
}
void cb_amdvi_iotlb_hit(uint8_t bus,uint8_t slot,uint8_t func,uint64_t addr,uint64_t txaddr) {



						for(auto it = py_amdvi_iotlb_hit.begin(); it != py_amdvi_iotlb_hit.end(); ++it){
							boost::python::call(*it,*id,addr,recv,success);
						}
}
void cb_amdvi_trauint8_t bus,uint8_t slot,uint8_t func,uint64_t addr,uint64_t txaddr){



						for(auto it = py_npcm7xx_smbus_send_address.begin(); it != py_npcm7xx_smbus_send_address.end(); ++it){
							boost::python::call(*it,*id,addr,recv,success);
						}
}
void cb_amdvi_memuint8_t bus,uint8_t slot,uint8_t func,uint64_t addr,uint64_t txaddr){



						for(auto it = py_npcm7xx_smbus_send_address.begin(); it != py_npcm7xx_smbus_send_address.end(); ++it){
							boost::python::call(*it,addr,val,size);
						}
}
void cb_amdvi_mem_ir_write(uint64_t addr,uint64_t val) {



						for(auto it = py_amdvi_mem_ir_write.begin(); it != py_amdvi_mem_ir_write.end(); ++it){
							boost::python::call(*it,addr,val);
						}
}
void cb_amdvi_ir_remap_msi_req(uint64_t addr,uint64_t data,uint8_t devid) {



						for(auto it = py_amdvi_ir_remap_msi_req.begin(); it != py_amdvi_ir_remap_msi_req.end(); ++it){
							boost::python::call(*it,addr,data,devid);
						}
}
void cb_amdvi_ir_remap_msi(uint64_t addr,uint64_t data,uint64_t addr2,uint64_t data2) {



						for(auto it = py_amdvi_ir_remap_msi.begin(); it != py_amdvi_ir_remap_msi.end(); ++it){
							boost::python::call(*it,*id,addr,recv,success);
						}
}
void cb_amdvi_erruint64_t addr,uint64_t data,uint64_t addr2,uint64_t data2){



						for(auto it = py_npcm7xx_smbus_send_address.begin(); it != py_npcm7xx_smbus_send_address.end(); ++it){
							boost::python::call(*it,*str);
						}
}
void cb_amdvi_ir_irte(uint64_t addr,uint64_t data) {



						for(auto it = py_amdvi_ir_irte.begin(); it != py_amdvi_ir_irte.end(); ++it){
							boost::python::call(*it,addr,data);
						}
}
void cb_amdvi_ir_irte_val(uint32_t data) {



						for(auto it = py_amdvi_ir_irte_val.begin(); it != py_amdvi_ir_irte_val.end(); ++it){
							boost::python::call(*it,data);
						}
}
void cb_amdvi_ir_err(const char *str) {



						for(auto it = py_amdvi_ir_err.begin(); it != py_amdvi_ir_err.end(); ++it){
							boost::python::call(*it,*str);
						}
}
void cb_amdvi_ir_intctl(uint8_t val) {



						for(auto it = py_amdvi_ir_intctl.begin(); it != py_amdvi_ir_intctl.end(); ++it){
							boost::python::call(*it,val);
						}
}
void cb_amdvi_ir_target_abort(const char *str) {



						for(auto it = py_amdvi_ir_target_abort.begin(); it != py_amdvi_ir_target_abort.end(); ++it){
							boost::python::call(*it,*str);
						}
}
void cb_amdvi_ir_delivery_mode(const char *str) {



						for(auto it = py_amdvi_ir_delivery_mode.begin(); it != py_amdvi_ir_delivery_mode.end(); ++it){
							boost::python::call(*it,*str);
						}
}
void cb_amdvi_ir_irte_ga_val(uint64_t hi,uint64_t lo) {



						for(auto it = py_amdvi_ir_irte_ga_val.begin(); it != py_amdvi_ir_irte_ga_val.end(); ++it){
							boost::python::call(*it,hi,lo);
						}
}

//# vmport.c
void cb_vmport_register(unsigned char command,void *func,void *opaque) {



						for(auto it = py_vmport_register.begin(); it != py_vmport_register.end(); ++it){
							boost::python::call(*it,command,func,opaque);
						}
}
void cb_vmport_command(unsigned char command) {



						for(auto it = py_vmport_command.begin(); it != py_vmport_command.end(); ++it){
							boost::python::call(*it,command);
						}
}

//# x86.c
void cb_x86_gsi_interrupt(int irqn,int level) {



						for(auto it = py_x86_gsi_interrupt.begin(); it != py_x86_gsi_interrupt.end(); ++it){
							boost::python::call(*it,irqn,level);
						}
}
void cb_x86_pic_interrupt(int irqn,int level) {



						for(auto it = py_x86_pic_interrupt.begin(); it != py_x86_pic_interrupt.end(); ++it){
							boost::python::call(*it,irqn,level);
						}
}

//# port92.c
void cb_port92_read(uint8_t val) {



						for(auto it = py_port92_read.begin(); it != py_port92_read.end(); ++it){
							boost::python::call(*it,val);
						}
}
void cb_port92_write(uint8_t val) {



						for(auto it = py_port92_write.begin(); it != py_port92_write.end(); ++it){
							boost::python::call(*it,val);
						}
}
