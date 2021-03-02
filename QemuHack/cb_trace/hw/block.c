//# See docs/devel/tracing.txt for syntax documentation.

//# fdc.c
void cb_fdc_ioport_read(uint8_t reg,uint8_t value) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,reg,value)
				}
}
void cb_fdc_ioport_write(uint8_t reg,uint8_t value) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,reg,value)
				}
}

//# pflash_cfi01.c
//# pflash_cfi02.c
void cb_pflash_reset(void) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,void)
				}
}
void cb_pflash_timer_expired(uint8_t cmd) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,cmd)
				}
}
void cb_pflash_io_read(uint64_t offset,unsigned size,uint32_t value,uint8_t cmd,uint8_t wcycle) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,offset,size,value,cmd,wcycle)
				}
}
void cb_pflash_io_write(uint64_t offset,unsigned size,uint32_t value,uint8_t wcycle) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,offset,size,value,wcycle)
				}
}
void cb_pflash_data_read(uint64_t offset,unsigned size,uint32_t value) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,offset,size,value)
				}
}
void cb_pflash_data_write(uint64_t offset,unsigned size,uint32_t value,uint64_t counter) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,offset,size,value,counter)
				}
}

void cb_pflash_manufacturer_id(uint16_t id) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,id)
				}
}
void cb_pflash_device_id(uint16_t id) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,id)
				}
}
void cb_pflash_device_info(uint64_t offset) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,offset)
				}
}


//# virtio-blk.c
void cb_virtio_blk_req_complete(void *vdev,void *req,int status) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,vdev,req,status)
				}
}
void cb_virtio_blk_rw_complete(void *vdev,void *req,int ret) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,vdev,req,ret)
				}
}
void cb_virtio_blk_handle_write(void *vdev,void *req,uint64_t sector,size_t nsectors) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,vdev,req,sector,nsectors)
				}
}
void cb_virtio_blk_handle_read(void *vdev,void *req,uint64_t sector,size_t nsectors) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,vdev,req,sector,nsectors)
				}
}
void cb_virtio_blk_submit_multireq(void *vdev,void *mrb,int start,int num_reqs,uint64_t offset,size_t size,bool is_write) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,vdev,mrb,start,num_reqs,offset,size,is_write)
				}
}

//# hd-geometry.c
void cb_hd_geometry_lchs_guess(void *blk,int cyls,int heads,int secs) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,blk,cyls,heads,secs)
				}
}
void cb_hd_geometry_guess(void *blk,uint32_t cyls,uint32_t heads,uint32_t secs,int trans) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,blk,cyls,heads,secs,trans)
				}
}

//# nvme.c
//# nvme traces for successful events
void cb_pci_nvme_register_namespace(uint32_t nsid) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,nsid)
				}
}
void cb_pci_nvme_irq_msix(uint32_t vector) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,vector)
				}
}
void cb_pci_nvme_irq_pin(void) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,void)
				}
}
void cb_pci_nvme_irq_masked(void) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,void)
				}
}
void cb_pci_nvme_dma_read(uint64_t prp1,uint64_t prp2) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,prp1,prp2)
				}
}
void cb_pci_nvme_map_addr(uint64_t addr,uint64_t len) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,addr,len)
				}
}
void cb_pci_nvme_map_addr_cmb(uint64_t addr,uint64_t len) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,addr,len)
				}
}
void cb_pci_nvme_map_prp(uint64_t trans_len,uint32_t len,uint64_t prp1,uint64_t prp2,int num_prps) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,trans_len,len,prp1,prp2,num_prps)
				}
}
void cb_pci_nvme_map_sgl(uint16_t cid,uint8_t typ,uint64_t len) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,cid,typ,len)
				}
}
void cb_pci_nvme_io_cmd(uint16_t cid,uint32_t nsid,uint16_t sqid,uint8_t opcode,const char *opname) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,cid,nsid,sqid,opcode,*opname)
				}
}
void cb_pci_nvme_admin_cmd(uint16_t cid,uint16_t sqid,uint8_t opcode,const char *opname) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,cid,sqid,opcode,*opname)
				}
}
void cb_pci_nvme_read(uint16_t cid,uint32_t nsid,uint32_t nlb,uint64_t count,uint64_t lba) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,cid,nsid,nlb,count,lba)
				}
}
void cb_pci_nvme_write(uint16_t cid,const char *verb,uint32_t nsid,uint32_t nlb,uint64_t count,uint64_t lba) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,cid,*verb,nsid,nlb,count,lba)
				}
}
void cb_pci_nvme_rw_cb(uint16_t cid,const char *blkname) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,cid,*blkname)
				}
}
void cb_pci_nvme_block_status(int64_t offset,int64_t bytes,int64_t pnum,int ret,bool zeroed) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,offset,bytes,pnum,ret,zeroed)
				}
}
void cb_pci_nvme_dsm(uint16_t cid,uint32_t nsid,uint32_t nr,uint32_t attr) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,cid,nsid,nr,attr)
				}
}
void cb_pci_nvme_dsm_deallocate(uint16_t cid,uint32_t nsid,uint64_t slba,uint32_t nlb) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,cid,nsid,slba,nlb)
				}
}
void cb_pci_nvme_compare(uint16_t cid,uint32_t nsid,uint64_t slba,uint32_t nlb) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,cid,nsid,slba,nlb)
				}
}
void cb_pci_nvme_compare_cb(uint16_t cid) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,cid)
				}
}
void cb_pci_nvme_aio_discard_cb(uint16_t cid) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,cid)
				}
}
void cb_pci_nvme_aio_zone_reset_cb(uint16_t cid,uint64_t zslba) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,cid,zslba)
				}
}
void cb_pci_nvme_create_sq(uint64_t addr,uint16_t sqid,uint16_t cqid,uint16_t qsize,uint16_t qflags) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,addr,sqid,cqid,qsize,qflags)
				}
}
void cb_pci_nvme_create_cq(uint64_t addr,uint16_t cqid,uint16_t vector,uint16_t size,uint16_t qflags,int ien) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,addr,cqid,vector,size,qflags,ien)
				}
}
void cb_pci_nvme_del_sq(uint16_t qid) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,qid)
				}
}
void cb_pci_nvme_del_cq(uint16_t cqid) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,cqid)
				}
}
void cb_pci_nvme_identify_ctrl(void) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,void)
				}
}
void cb_pci_nvme_identify_ctrl_csi(uint8_t csi) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,csi)
				}
}
void cb_pci_nvme_identify_ns(uint32_t ns) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,ns)
				}
}
void cb_pci_nvme_identify_ns_csi(uint32_t ns,uint8_t csi) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,ns,csi)
				}
}
void cb_pci_nvme_identify_nslist(uint32_t ns) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,ns)
				}
}
void cb_pci_nvme_identify_nslist_csi(uint16_t ns,uint8_t csi) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,ns,csi)
				}
}
void cb_pci_nvme_identify_cmd_set(void) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,void)
				}
}
void cb_pci_nvme_identify_ns_descr_list(uint32_t ns) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,ns)
				}
}
void cb_pci_nvme_get_log(uint16_t cid,uint8_t lid,uint8_t lsp,uint8_t rae,uint32_t len,uint64_t off) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,cid,lid,lsp,rae,len,off)
				}
}
void cb_pci_nvme_getfeat(uint16_t cid,uint32_t nsid,uint8_t fid,uint8_t sel,uint32_t cdw11) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,cid,nsid,fid,sel,cdw11)
				}
}
void cb_pci_nvme_setfeat(uint16_t cid,uint32_t nsid,uint8_t fid,uint8_t save,uint32_t cdw11) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,cid,nsid,fid,save,cdw11)
				}
}
void cb_pci_nvme_getfeat_vwcache(const char* result) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,* result)
				}
}
void cb_pci_nvme_getfeat_numq(int result) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,result)
				}
}
void cb_pci_nvme_setfeat_numq(int reqcq,int reqsq,int gotcq,int gotsq) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,reqcq,reqsq,gotcq,gotsq)
				}
}
void cb_pci_nvme_setfeat_timestamp(uint64_t ts) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,ts)
				}
}
void cb_pci_nvme_getfeat_timestamp(uint64_t ts) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,ts)
				}
}
void cb_pci_nvme_process_aers(int queued) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,queued)
				}
}
void cb_pci_nvme_aer(uint16_t cid) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,cid)
				}
}
void cb_pci_nvme_aer_aerl_exceeded(void) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,void)
				}
}
void cb_pci_nvme_aer_masked(uint8_t type,uint8_t mask) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,type,mask)
				}
}
void cb_pci_nvme_aer_post_cqe(uint8_t typ,uint8_t info,uint8_t log_page) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,typ,info,log_page)
				}
}
void cb_pci_nvme_enqueue_event(uint8_t typ,uint8_t info,uint8_t log_page) {

				for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
					boost::python::call(*it,typ,info,log_page)
				}
}
void cb_pci_nvme_enqueue_event_noqueue(int queued) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,queued)
					}
}
void cb_pci_nvme_enqueue_event_masked(uint8_t typ) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,typ)
					}
}
void cb_pci_nvme_no_outstanding_aers(void) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,void)
					}
}
void cb_pci_nvme_enqueue_req_completion(uint16_t cid,uint16_t cqid,uint16_t status) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,cid,cqid,status)
					}
}
void cb_pci_nvme_mmio_read(uint64_t addr,unsigned size) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,addr,size)
					}
}
void cb_pci_nvme_mmio_write(uint64_t addr,uint64_t data,unsigned size) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,addr,data,size)
					}
}
void cb_pci_nvme_mmio_doorbell_cq(uint16_t cqid,uint16_t new_head) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,cqid,new_head)
					}
}
void cb_pci_nvme_mmio_doorbell_sq(uint16_t sqid,uint16_t new_tail) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,sqid,new_tail)
					}
}
void cb_pci_nvme_mmio_intm_set(uint64_t data,uint64_t new_mask) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,data,new_mask)
					}
}
void cb_pci_nvme_mmio_intm_clr(uint64_t data,uint64_t new_mask) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,data,new_mask)
					}
}
void cb_pci_nvme_mmio_cfg(uint64_t data) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,data)
					}
}
void cb_pci_nvme_mmio_aqattr(uint64_t data) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,data)
					}
}
void cb_pci_nvme_mmio_asqaddr(uint64_t data) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,data)
					}
}
void cb_pci_nvme_mmio_acqaddr(uint64_t data) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,data)
					}
}
void cb_pci_nvme_mmio_asqaddr_hi(uint64_t data,uint64_t new_addr) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,data,new_addr)
					}
}
void cb_pci_nvme_mmio_acqaddr_hi(uint64_t data,uint64_t new_addr) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,data,new_addr)
					}
}
void cb_pci_nvme_mmio_start_success(void) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,void)
					}
}
void cb_pci_nvme_mmio_stopped(void) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,void)
					}
}
void cb_pci_nvme_mmio_shutdown_set(void) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,void)
					}
}
void cb_pci_nvme_mmio_shutdown_cleared(void) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,void)
					}
}
void cb_pci_nvme_open_zone(uint64_t slba,uint32_t zone_idx,int all) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,slba,zone_idx,all)
					}
}
void cb_pci_nvme_close_zone(uint64_t slba,uint32_t zone_idx,int all) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,slba,zone_idx,all)
					}
}
void cb_pci_nvme_finish_zone(uint64_t slba,uint32_t zone_idx,int all) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,slba,zone_idx,all)
					}
}
void cb_pci_nvme_reset_zone(uint64_t slba,uint32_t zone_idx,int all) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,slba,zone_idx,all)
					}
}
void cb_pci_nvme_offline_zone(uint64_t slba,uint32_t zone_idx,int all) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,slba,zone_idx,all)
					}
}
void cb_pci_nvme_set_descriptor_extension(uint64_t slba,uint32_t zone_idx) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,slba,zone_idx)
					}
}
void cb_pci_nvme_zd_extension_set(uint32_t zone_idx) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,zone_idx)
					}
}
void cb_pci_nvme_clear_ns_close(uint32_t state,uint64_t slba) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,state,slba)
					}
}
void cb_pci_nvme_clear_ns_reset(uint32_t state,uint64_t slba) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,state,slba)
					}
}

//# nvme traces for error conditions
void cb_pci_nvme_err_mdts(uint16_t cid,size_t len) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,cid,len)
					}
				}
void cb_pci_nvme_err_req_status(uint16_t cid,uint32_t nsid,uint16_t status,uint8_t opc) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,cid,nsid,status,opc)
					}
				}
void cb_pci_nvme_err_addr_read(uint64_t addr) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,addr)
					}
				}
void cb_pci_nvme_err_addr_write(uint64_t addr) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,addr)
					}
				}
void cb_pci_nvme_err_cfs(void) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,void)
					}
				}
void cb_pci_nvme_err_aio(uint16_t cid,const char *errname,uint16_t status) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,cid,*errname,status)
					}
				}
void cb_pci_nvme_err_invalid_sgld(uint16_t cid,uint8_t typ) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,cid,typ)
					}
				}
void cb_pci_nvme_err_invalid_num_sgld(uint16_t cid,uint8_t typ) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,cid,typ)
					}
				}
void cb_pci_nvme_err_invalid_sgl_excess_length(uint16_t cid) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,cid)
					}
				}
void cb_pci_nvme_err_invalid_dma(void) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,void)
					}
				}
void cb_pci_nvme_err_invalid_prplist_ent(uint64_t prplist) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,prplist)
					}
				}
void cb_pci_nvme_err_invalid_prp2_align(uint64_t prp2) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,prp2)
					}
				}
void cb_pci_nvme_err_invalid_opc(uint8_t opc) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,opc)
					}
				}
void cb_pci_nvme_err_invalid_admin_opc(uint8_t opc) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,opc)
					}
				}
void cb_pci_nvme_err_invalid_lba_range(uint64_t start,uint64_t len,uint64_t limit) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,start,len,limit)
					}
				}
void cb_pci_nvme_err_invalid_log_page_offset(uint64_t ofs,uint64_t size) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,ofs,size)
					}
				}
void cb_pci_nvme_err_cmb_invalid_cba(uint64_t cmbmsc) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,cmbmsc)
					}
				}
void cb_pci_nvme_err_cmb_not_enabled(uint64_t cmbmsc) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,cmbmsc)
					}
				}
void cb_pci_nvme_err_unaligned_zone_cmd(uint8_t action,uint64_t slba,uint64_t zslba) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,action,slba,zslba)
					}
				}
void cb_pci_nvme_err_invalid_zone_state_transition(uint8_t action,uint64_t slba,uint8_t attrs) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,action,slba,attrs)
					}
				}
void cb_pci_nvme_err_write_not_at_wp(uint64_t slba,uint64_t zone,uint64_t wp) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,slba,zone,wp)
					}
				}
void cb_pci_nvme_err_append_not_at_start(uint64_t slba,uint64_t zone) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,slba,zone)
					}
				}
void cb_pci_nvme_err_zone_is_full(uint64_t zslba) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,zslba)
					}
				}
void cb_pci_nvme_err_zone_is_read_only(uint64_t zslba) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,zslba)
					}
				}
void cb_pci_nvme_err_zone_is_offline(uint64_t zslba) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,zslba)
					}
				}
void cb_pci_nvme_err_zone_boundary(uint64_t slba,uint32_t nlb,uint64_t zcap) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,slba,nlb,zcap)
					}
				}
void cb_pci_nvme_err_zone_invalid_write(uint64_t slba,uint64_t wp) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,slba,wp)
					}
				}
void cb_pci_nvme_err_zone_write_not_ok(uint64_t slba,uint32_t nlb,uint16_t status) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,slba,nlb,status)
					}
				}
void cb_pci_nvme_err_zone_read_not_ok(uint64_t slba,uint32_t nlb,uint16_t status) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,slba,nlb,status)
					}
				}
void cb_pci_nvme_err_append_too_large(uint64_t slba,uint32_t nlb,uint8_t zasl) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,slba,nlb,zasl)
					}
				}
void cb_pci_nvme_err_insuff_active_res(uint32_t max_active) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,max_active)
					}
				}
void cb_pci_nvme_err_insuff_open_res(uint32_t max_open) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,max_open)
					}
				}
void cb_pci_nvme_err_zd_extension_map_error(uint32_t zone_idx) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,zone_idx)
					}
				}
void cb_pci_nvme_err_invalid_iocsci(uint32_t idx) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,idx)
					}
				}
void cb_pci_nvme_err_invalid_del_sq(uint16_t qid) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,qid)
					}
				}
void cb_pci_nvme_err_invalid_create_sq_cqid(uint16_t cqid) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,cqid)
					}
				}
void cb_pci_nvme_err_invalid_create_sq_sqid(uint16_t sqid) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,sqid)
					}
				}
void cb_pci_nvme_err_invalid_create_sq_size(uint16_t qsize) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,qsize)
					}
				}
void cb_pci_nvme_err_invalid_create_sq_addr(uint64_t addr) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,addr)
					}
				}
void cb_pci_nvme_err_invalid_create_sq_qflags(uint16_t qflags) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,qflags)
					}
				}
void cb_pci_nvme_err_invalid_del_cq_cqid(uint16_t cqid) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,cqid)
					}
				}
void cb_pci_nvme_err_invalid_del_cq_notempty(uint16_t cqid) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,cqid)
					}
				}
void cb_pci_nvme_err_invalid_create_cq_cqid(uint16_t cqid) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,cqid)
					}
				}
void cb_pci_nvme_err_invalid_create_cq_size(uint16_t size) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,size)
					}
				}
void cb_pci_nvme_err_invalid_create_cq_addr(uint64_t addr) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,addr)
					}
				}
void cb_pci_nvme_err_invalid_create_cq_vector(uint16_t vector) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,vector)
					}
				}
void cb_pci_nvme_err_invalid_create_cq_qflags(uint16_t qflags) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,qflags)
					}
				}
void cb_pci_nvme_err_invalid_identify_cns(uint16_t cns) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,cns)
					}
				}
void cb_pci_nvme_err_invalid_getfeat(int dw10) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,dw10)
					}
				}
void cb_pci_nvme_err_invalid_setfeat(uint32_t dw10) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,dw10)
					}
				}
void cb_pci_nvme_err_invalid_log_page(uint16_t cid,uint16_t lid) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,cid,lid)
					}
				}
void cb_pci_nvme_err_startfail_cq(void) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,void)
					}
				}
void cb_pci_nvme_err_startfail_sq(void) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,void)
					}
				}
void cb_pci_nvme_err_startfail_nbarasq(void) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,void)
					}
				}
void cb_pci_nvme_err_startfail_nbaracq(void) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,void)
					}
				}
void cb_pci_nvme_err_startfail_asq_misaligned(uint64_t addr) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,addr)
					}
				}
void cb_pci_nvme_err_startfail_acq_misaligned(uint64_t addr) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,addr)
					}
				}
void cb_pci_nvme_err_startfail_page_too_small(uint8_t log2ps,uint8_t maxlog2ps) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,log2ps,maxlog2ps)
					}
				}
void cb_pci_nvme_err_startfail_page_too_large(uint8_t log2ps,uint8_t maxlog2ps) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,log2ps,maxlog2ps)
					}
				}
void cb_pci_nvme_err_startfail_cqent_too_small(uint8_t log2ps,uint8_t maxlog2ps) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,log2ps,maxlog2ps)
					}
				}
void cb_pci_nvme_err_startfail_cqent_too_large(uint8_t log2ps,uint8_t maxlog2ps) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,log2ps,maxlog2ps)
					}
				}
void cb_pci_nvme_err_startfail_sqent_too_small(uint8_t log2ps,uint8_t maxlog2ps) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,log2ps,maxlog2ps)
					}
				}
void cb_pci_nvme_err_startfail_sqent_too_large(uint8_t log2ps,uint8_t maxlog2ps) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,log2ps,maxlog2ps)
					}
				}
void cb_pci_nvme_err_startfail_css(uint8_t css) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,css)
					}
				}
void cb_pci_nvme_err_startfail_asqent_sz_zero(void) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,void)
					}
				}
void cb_pci_nvme_err_startfail_acqent_sz_zero(void) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,void)
					}
				}
void cb_pci_nvme_err_startfail_zasl_too_small(uint32_t zasl,uint32_t pagesz) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,zasl,pagesz)
					}
				}
void cb_pci_nvme_err_startfail(void) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,void)
					}
				}
void cb_pci_nvme_err_invalid_mgmt_action(uint8_t action) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,action)
					}
				}

//# Traces for undefined behavior
void cb_pci_nvme_ub_mmiowr_misaligned32(uint64_t offset) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,offset)
					}
}
void cb_pci_nvme_ub_mmiowr_toosmall(uint64_t offset,unsigned size) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,offset,size)
					}
}
void cb_pci_nvme_ub_mmiowr_intmask_with_msix(void) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,void)
					}
}
void cb_pci_nvme_ub_mmiowr_ro_csts(void) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,void)
					}
}
void cb_pci_nvme_ub_mmiowr_ssreset_w1c_unsupported(void) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,void)
					}
}
void cb_pci_nvme_ub_mmiowr_ssreset_unsupported(void) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,void)
					}
}
void cb_pci_nvme_ub_mmiowr_cmbloc_reserved(void) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,void)
					}
}
void cb_pci_nvme_ub_mmiowr_cmbsz_readonly(void) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,void)
					}
}
void cb_pci_nvme_ub_mmiowr_pmrcap_readonly(void) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,void)
					}
}
void cb_pci_nvme_ub_mmiowr_pmrsts_readonly(void) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,void)
					}
}
void cb_pci_nvme_ub_mmiowr_pmrebs_readonly(void) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,void)
					}
}
void cb_pci_nvme_ub_mmiowr_pmrswtp_readonly(void) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,void)
					}
}
void cb_pci_nvme_ub_mmiowr_invalid(uint64_t offset,uint64_t data) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,offset,data)
					}
}
void cb_pci_nvme_ub_mmiord_misaligned32(uint64_t offset) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,offset)
					}
}
void cb_pci_nvme_ub_mmiord_toosmall(uint64_t offset) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,offset)
					}
}
void cb_pci_nvme_ub_mmiord_invalid_ofs(uint64_t offset) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,offset)
					}
}
void cb_pci_nvme_ub_db_wr_misaligned(uint64_t offset) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,offset)
					}
}
void cb_pci_nvme_ub_db_wr_invalid_cq(uint32_t qid) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,qid)
					}
}
void cb_pci_nvme_ub_db_wr_invalid_cqhead(uint32_t qid,uint16_t new_head) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,qid,new_head)
					}
}
void cb_pci_nvme_ub_db_wr_invalid_sq(uint32_t qid) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,qid)
					}
}
void cb_pci_nvme_ub_db_wr_invalid_sqtail(uint32_t qid,uint16_t new_tail) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,qid,new_tail)
					}
}
void cb_pci_nvme_ub_unknown_css_value(void) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,void)
					}
}

//# xen-block.c
void cb_xen_block_realize(const char *type,uint32_t disk,uint32_t partition) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,*type,disk,partition)
					}
}
void cb_xen_block_connect(const char *type,uint32_t disk,uint32_t partition) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,*type,disk,partition)
					}
}
void cb_xen_block_disconnect(const char *type,uint32_t disk,uint32_t partition) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,*type,disk,partition)
					}
}
void cb_xen_block_unrealize(const char *type,uint32_t disk,uint32_t partition) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,*type,disk,partition)
					}
}
void cb_xen_block_size(const char *type,uint32_t disk,uint32_t partition,int64_t sectors) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,*type,disk,partition,sectors)
					}
}

void cb_xen_disk_realize(void) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,void)
					}
				}
void cb_xen_disk_unrealize(void) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,void)
					}
				}
void cb_xen_cdrom_realize(void) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,void)
					}
				}
void cb_xen_cdrom_unrealize(void) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,void)
					}
				}
void cb_xen_block_blockdev_add(char *str) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,*str)
					}
				}
void cb_xen_block_blockdev_del(const char *node_name) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,*node_name)
					}
				}
void cb_xen_block_device_create(unsigned int number) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,number)
					}
				}
void cb_xen_block_device_destroy(unsigned int number) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,number)
					}
				}

//# m25p80.c
void cb_m25p80_flash_erase(void *s,int offset,uint32_t len) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,s,offset,len)
					}
}
void cb_m25p80_programming_zero_to_one(void *s,uint32_t addr,uint8_t prev,uint8_t data) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,s,addr,prev,data)
					}
}
void cb_m25p80_reset_done(void *s) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,s)
					}
}
void cb_m25p80_command_decoded(void *s,uint32_t cmd) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,s,cmd)
					}
}
void cb_m25p80_complete_collecting(void *s,uint32_t cmd,int n,uint8_t ear,uint32_t cur_addr) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,s,cmd,n,ear,cur_addr)
					}
}
void cb_m25p80_populated_jedec(void *s) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,s)
					}
}
void cb_m25p80_chip_erase(void *s) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,s)
					}
}
void cb_m25p80_select(void *s,const char *what) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,s,*what)
					}
}
void cb_m25p80_page_program(void *s,uint32_t addr,uint8_t tx) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,s,addr,tx)
					}
}
void cb_m25p80_transfer(void *s,uint8_t state,uint32_t len,uint8_t needed,uint32_t pos,uint32_t cur_addr,uint8_t t) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,s,state,len,needed,pos,cur_addr,t)
					}
}
void cb_m25p80_read_byte(void *s,uint32_t addr,uint8_t v) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,s,addr,v)
					}
}
void cb_m25p80_read_data(void *s,uint32_t pos,uint8_t v) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,s,pos,v)
					}
}
void cb_m25p80_binding(void *s) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,s)
					}
}
void cb_m25p80_binding_no_bdrv(void *s) {


					for(auto it = py_hda_audio_overrun.begin(); it != py_hda_audio_overrun.end(); ++it){
						boost::python::call(*it,s)
					}
}
