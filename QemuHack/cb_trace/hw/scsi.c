//# See docs/devel/tracing.txt for syntax documentation.

//# scsi-bus.c
void cb_scsi_req_alloc(int target,int lun,int tag) {


		  for (auto it = py_scsi_req_alloc.begin(); it != py_scsi_req_alloc.end();
		       ++it) {
		    boost::python::call(*it,target,lun,tag);		  }

}
void cb_scsi_req_cancel(int target,int lun,int tag) {


		  for (auto it = py_scsi_req_cancel.begin(); it != py_scsi_req_cancel.end();
		       ++it) {
		    boost::python::call(*it,target,lun,tag);		  }

}
void cb_scsi_req_data(int target,int lun,int tag,int len) {


		  for (auto it = py_scsi_req_data.begin(); it != py_scsi_req_data.end();
		       ++it) {
		    boost::python::call(*it,target,lun,tag,len);		  }

}
void cb_scsi_req_data_canceled(int target,int lun,int tag,int len) {


		  for (auto it = py_scsi_req_data_canceled.begin(); it != py_scsi_req_data_canceled.end();
		       ++it) {
		    boost::python::call(*it,target,lun,tag,len);		  }

}
void cb_scsi_req_dequeue(int target,int lun,int tag) {


		  for (auto it = py_scsi_req_dequeue.begin(); it != py_scsi_req_dequeue.end();
		       ++it) {
		    boost::python::call(*it,target,lun,tag);		  }

}
void cb_scsi_req_continue(int target,int lun,int tag) {


		  for (auto it = py_scsi_req_continue.begin(); it != py_scsi_req_continue.end();
		       ++it) {
		    boost::python::call(*it,target,lun,tag);		  }

}
void cb_scsi_req_continue_canceled(int target,int lun,int tag) {


		  for (auto it = py_scsi_req_continue_canceled.begin(); it != py_scsi_req_continue_canceled.end();
		       ++it) {
		    boost::python::call(*it,target,lun,tag);		  }

}
void cb_scsi_req_parsed(int target,int lun,int tag,int cmd,int mode,int xfer) {


		  for (auto it = py_scsi_req_parsed.begin(); it != py_scsi_req_parsed.end();
		       ++it) {
		    boost::python::call(*it,target,lun,tag,cmd,mode,xfer);		  }

}
void cb_scsi_req_parsed_lba(int target,int lun,int tag,int cmd,uint64_t lba) {


		  for (auto it = py_scsi_req_parsed_lba.begin(); it != py_scsi_req_parsed_lba.end();
		       ++it) {
		    boost::python::call(*it,target,lun,tag,cmd,lba);		  }

}
void cb_scsi_req_parse_bad(int target,int lun,int tag,int cmd) {


		  for (auto it = py_scsi_req_parse_bad.begin(); it != py_scsi_req_parse_bad.end();
		       ++it) {
		    boost::python::call(*it,target,lun,tag,cmd);		  }

}
void cb_scsi_req_build_sense(int target,int lun,int tag,int key,int asc,int ascq) {


		  for (auto it = py_scsi_req_build_sense.begin(); it != py_scsi_req_build_sense.end();
		       ++it) {
		    boost::python::call(*it,target,lun,tag,key,asc,ascq);		  }

}
void cb_scsi_device_set_ua(int target,int lun,int key,int asc,int ascq) {


		  for (auto it = py_scsi_device_set_ua.begin(); it != py_scsi_device_set_ua.end();
		       ++it) {
		    boost::python::call(*it,target,lun,key,asc,ascq);		  }

}
void cb_scsi_report_luns(int target,int lun,int tag) {


		  for (auto it = py_scsi_report_luns.begin(); it != py_scsi_report_luns.end();
		       ++it) {
		    boost::python::call(*it,target,lun,tag);		  }

}
void cb_scsi_inquiry(int target,int lun,int tag,int cdb1,int cdb2) {


		  for (auto it = py_scsi_inquiry.begin(); it != py_scsi_inquiry.end();
		       ++it) {
		    boost::python::call(*it,target,lun,tag,cdb1,cdb2);		  }

}
void cb_scsi_test_unit_ready(int target,int lun,int tag) {


		  for (auto it = py_scsi_test_unit_ready.begin(); it != py_scsi_test_unit_ready.end();
		       ++it) {
		    boost::python::call(*it,target,lun,tag);		  }

}
void cb_scsi_request_sense(int target,int lun,int tag) {


		  for (auto it = py_scsi_request_sense.begin(); it != py_scsi_request_sense.end();
		       ++it) {
		    boost::python::call(*it,target,lun,tag);		  }

}

//# mptsas.c
void cb_mptsas_command_complete(void *dev,uint32_t ctx,uint32_t status,uint32_t resid) {


		  for (auto it = py_mptsas_command_complete.begin(); it != py_mptsas_command_complete.end();
		       ++it) {
		    boost::python::call(*it,*dev,ctx,status,resid);		  }

}
void cb_mptsas_diag_read(void *dev,uint32_t addr,uint32_t val) {


		  for (auto it = py_mptsas_diag_read.begin(); it != py_mptsas_diag_read.end();
		       ++it) {
		    boost::python::call(*it,*dev,addr,val);		  }

}
void cb_mptsas_diag_write(void *dev,uint32_t addr,uint32_t val) {


		  for (auto it = py_mptsas_diag_write.begin(); it != py_mptsas_diag_write.end();
		       ++it) {
		    boost::python::call(*it,*dev,addr,val);		  }

}
void cb_mptsas_irq_intx(void *dev,int level) {


		  for (auto it = py_mptsas_irq_intx.begin(); it != py_mptsas_irq_intx.end();
		       ++it) {
		    boost::python::call(*it,*dev,level);		  }

}
void cb_mptsas_irq_msi(void *dev) {


		  for (auto it = py_mptsas_irq_msi.begin(); it != py_mptsas_irq_msi.end();
		       ++it) {
		    boost::python::call(*it,*dev);		  }

}
void cb_mptsas_mmio_read(void *dev,uint32_t addr,uint32_t val) {


		  for (auto it = py_mptsas_mmio_read.begin(); it != py_mptsas_mmio_read.end();
		       ++it) {
		    boost::python::call(*it,*dev,addr,val);		  }

}
void cb_mptsas_mmio_unhandled_read(void *dev,uint32_t addr) {


		  for (auto it = py_mptsas_mmio_unhandled_read.begin(); it != py_mptsas_mmio_unhandled_read.end();
		       ++it) {
		    boost::python::call(*it,*dev,addr);		  }

}
void cb_mptsas_mmio_unhandled_write(void *dev,uint32_t addr,uint32_t val) {


		  for (auto it = py_mptsas_mmio_unhandled_write.begin(); it != py_mptsas_mmio_unhandled_write.end();
		       ++it) {
		    boost::python::call(*it,*dev,addr,val);		  }

}
void cb_mptsas_mmio_write(void *dev,uint32_t addr,uint32_t val) {


		  for (auto it = py_mptsas_mmio_write.begin(); it != py_mptsas_mmio_write.end();
		       ++it) {
		    boost::python::call(*it,*dev,addr,val);		  }

}
void cb_mptsas_process_message(void *dev,int msg,uint32_t ctx) {


		  for (auto it = py_mptsas_process_message.begin(); it != py_mptsas_process_message.end();
		       ++it) {
		    boost::python::call(*it,*dev,msg,ctx);		  }

}
void cb_mptsas_process_scsi_io_request(void *dev,int bus,int target,int lun,uint64_t len) {


		  for (auto it = py_mptsas_process_scsi_io_request.begin(); it != py_mptsas_process_scsi_io_request.end();
		       ++it) {
		    boost::python::call(*it,*dev,bus,target,lun,len);		  }

}
void cb_mptsas_reset(void *dev) {


		  for (auto it = py_mptsas_reset.begin(); it != py_mptsas_reset.end();
		       ++it) {
		    boost::python::call(*it,*dev);		  }

}
void cb_mptsas_scsi_overflow(void *dev,uint32_t ctx,uint64_t req,uint64_t found) {


		  for (auto it = py_mptsas_scsi_overflow.begin(); it != py_mptsas_scsi_overflow.end();
		       ++it) {
		    boost::python::call(*it,*dev,ctx,req,found);		  }

}
void cb_mptsas_sgl_overflow(void *dev,uint32_t ctx,uint64_t req,uint64_t found) {


		  for (auto it = py_mptsas_sgl_overflow.begin(); it != py_mptsas_sgl_overflow.end();
		       ++it) {
		    boost::python::call(*it,*dev,ctx,req,found);		  }

}
void cb_mptsas_unhandled_cmd(void *dev,uint32_t ctx,uint8_t msg_cmd) {


		  for (auto it = py_mptsas_unhandled_cmd.begin(); it != py_mptsas_unhandled_cmd.end();
		       ++it) {
		    boost::python::call(*it,*dev,ctx,msg_cmd);		  }

}
void cb_mptsas_unhandled_doorbell_cmd(void *dev,int cmd) {


		  for (auto it = py_mptsas_unhandled_doorbell_cmd.begin(); it != py_mptsas_unhandled_doorbell_cmd.end();
		       ++it) {
		    boost::python::call(*it,*dev,cmd);		  }

}

//# mptconfig.c
void cb_mptsas_config_sas_device(void *dev,int address,int port,int phy_handle,int dev_handle,int page) {


		  for (auto it = py_mptsas_config_sas_device.begin(); it != py_mptsas_config_sas_device.end();
		       ++it) {
		    boost::python::call(*it,*dev,address,port,phy_handle,dev_handle,page);		  }

}
void cb_mptsas_config_sas_phy(void *dev,int address,int port,int phy_handle,int dev_handle,int page) {


		  for (auto it = py_mptsas_config_sas_phy.begin(); it != py_mptsas_config_sas_phy.end();
		       ++it) {
		    boost::python::call(*it,*dev,address,port,phy_handle,dev_handle,page);		  }

}

//# megasas.c
void cb_megasas_init_firmware(uint64_t pa) {


		  for (auto it = py_megasas_init_firmware.begin(); it != py_megasas_init_firmware.end();
		       ++it) {
		    boost::python::call(*it,pa);		  }

}
void cb_megasas_init_queue(uint64_t queue_pa,int queue_len,uint64_t head,uint64_t tail,uint32_t flags) {


		  for (auto it = py_megasas_init_queue.begin(); it != py_megasas_init_queue.end();
		       ++it) {
		    boost::python::call(*it,queue_pa,queue_len,head,tail,flags);		  }

}
void cb_megasas_initq_map_failed(int frame) {


		  for (auto it = py_megasas_initq_map_failed.begin(); it != py_megasas_initq_map_failed.end();
		       ++it) {
		    boost::python::call(*it,frame);		  }

}
void cb_megasas_initq_mapped(uint64_t pa) {


		  for (auto it = py_megasas_initq_mapped.begin(); it != py_megasas_initq_mapped.end();
		       ++it) {
		    boost::python::call(*it,pa);		  }

}
void cb_megasas_initq_mismatch(int queue_len,int fw_cmds) {


		  for (auto it = py_megasas_initq_mismatch.begin(); it != py_megasas_initq_mismatch.end();
		       ++it) {
		    boost::python::call(*it,queue_len,fw_cmds);		  }

}
void cb_megasas_qf_mapped(unsigned int index) {


		  for (auto it = py_megasas_qf_mapped.begin(); it != py_megasas_qf_mapped.end();
		       ++it) {
		    boost::python::call(*it,index);		  }

}
void cb_megasas_qf_new(unsigned int index,uint64_t frame) {


		  for (auto it = py_megasas_qf_new.begin(); it != py_megasas_qf_new.end();
		       ++it) {
		    boost::python::call(*it,index,frame);		  }

}
void cb_megasas_qf_busy(unsigned long pa) {


		  for (auto it = py_megasas_qf_busy.begin(); it != py_megasas_qf_busy.end();
		       ++it) {
		    boost::python::call(*it,long pa);		  }

}
void cb_megasas_qf_enqueue(unsigned int index,unsigned int count,uint64_t context,unsigned int head,unsigned int tail,int busy) {


		  for (auto it = py_megasas_qf_enqueue.begin(); it != py_megasas_qf_enqueue.end();
		       ++it) {
		    boost::python::call(*it,index,count,context,head,tail,busy);		  }

}
void cb_megasas_qf_update(unsigned int head,unsigned int tail,unsigned int busy) {


		  for (auto it = py_megasas_qf_update.begin(); it != py_megasas_qf_update.end();
		       ++it) {
		    boost::python::call(*it,head,tail,busy);		  }

}
void cb_megasas_qf_map_failed(int cmd,unsigned long frame) {


		  for (auto it = py_megasas_qf_map_failed.begin(); it != py_megasas_qf_map_failed.end();
		       ++it) {
		    boost::python::call(*it,cmd,long frame);		  }

}
void cb_megasas_qf_complete_noirq(uint64_t context) {


		  for (auto it = py_megasas_qf_complete_noirq.begin(); it != py_megasas_qf_complete_noirq.end();
		       ++it) {
		    boost::python::call(*it,context);		  }

}
void cb_megasas_qf_complete(uint64_t context,unsigned int head,unsigned int tail,int busy) {


		  for (auto it = py_megasas_qf_complete.begin(); it != py_megasas_qf_complete.end();
		       ++it) {
		    boost::python::call(*it,context,head,tail,busy);		  }

}
void cb_megasas_frame_busy(uint64_t addr) {


		  for (auto it = py_megasas_frame_busy.begin(); it != py_megasas_frame_busy.end();
		       ++it) {
		    boost::python::call(*it,addr);		  }

}
void cb_megasas_unhandled_frame_cmd(int cmd,uint8_t frame_cmd) {


		  for (auto it = py_megasas_unhandled_frame_cmd.begin(); it != py_megasas_unhandled_frame_cmd.end();
		       ++it) {
		    boost::python::call(*it,cmd,frame_cmd);		  }

}
void cb_megasas_handle_scsi(const char *frame,int bus,int dev,int lun,void *sdev,unsigned long size) {


		  for (auto it = py_megasas_handle_scsi.begin(); it != py_megasas_handle_scsi.end();
		       ++it) {
		    boost::python::call(*it,*frame,bus,dev,lun,*sdev,long size);		  }

}
void cb_megasas_scsi_target_not_present(const char *frame,int bus,int dev,int lun) {


		  for (auto it = py_megasas_scsi_target_not_present.begin(); it != py_megasas_scsi_target_not_present.end();
		       ++it) {
		    boost::python::call(*it,*frame,bus,dev,lun);		  }

}
void cb_megasas_scsi_invalid_cdb_len(const char *frame,int bus,int dev,int lun,int len) {


		  for (auto it = py_megasas_scsi_invalid_cdb_len.begin(); it != py_megasas_scsi_invalid_cdb_len.end();
		       ++it) {
		    boost::python::call(*it,*frame,bus,dev,lun,len);		  }

}
void cb_megasas_iov_read_overflow(int cmd,int bytes,int len) {


		  for (auto it = py_megasas_iov_read_overflow.begin(); it != py_megasas_iov_read_overflow.end();
		       ++it) {
		    boost::python::call(*it,cmd,bytes,len);		  }

}
void cb_megasas_iov_write_overflow(int cmd,int bytes,int len) {


		  for (auto it = py_megasas_iov_write_overflow.begin(); it != py_megasas_iov_write_overflow.end();
		       ++it) {
		    boost::python::call(*it,cmd,bytes,len);		  }

}
void cb_megasas_iov_read_underflow(int cmd,int bytes,int len) {


		  for (auto it = py_megasas_iov_read_underflow.begin(); it != py_megasas_iov_read_underflow.end();
		       ++it) {
		    boost::python::call(*it,cmd,bytes,len);		  }

}
void cb_megasas_iov_write_underflow(int cmd,int bytes,int len) {


		  for (auto it = py_megasas_iov_write_underflow.begin(); it != py_megasas_iov_write_underflow.end();
		       ++it) {
		    boost::python::call(*it,cmd,bytes,len);		  }

}
void cb_megasas_scsi_req_alloc_failed(const char *frame,int dev,int lun) {


		  for (auto it = py_megasas_scsi_req_alloc_failed.begin(); it != py_megasas_scsi_req_alloc_failed.end();
		       ++it) {
		    boost::python::call(*it,*frame,dev,lun);		  }

}
void cb_megasas_scsi_read_start(int cmd,int len) {


		  for (auto it = py_megasas_scsi_read_start.begin(); it != py_megasas_scsi_read_start.end();
		       ++it) {
		    boost::python::call(*it,cmd,len);		  }

}
void cb_megasas_scsi_write_start(int cmd,int len) {


		  for (auto it = py_megasas_scsi_write_start.begin(); it != py_megasas_scsi_write_start.end();
		       ++it) {
		    boost::python::call(*it,cmd,len);		  }

}
void cb_megasas_scsi_nodata(int cmd) {


		  for (auto it = py_megasas_scsi_nodata.begin(); it != py_megasas_scsi_nodata.end();
		       ++it) {
		    boost::python::call(*it,cmd);		  }

}
void cb_megasas_scsi_complete(int cmd,uint32_t status,int len,int xfer) {


		  for (auto it = py_megasas_scsi_complete.begin(); it != py_megasas_scsi_complete.end();
		       ++it) {
		    boost::python::call(*it,cmd,status,len,xfer);		  }

}
void cb_megasas_command_complete(int cmd,uint32_t status,uint32_t resid) {


		  for (auto it = py_megasas_command_complete.begin(); it != py_megasas_command_complete.end();
		       ++it) {
		    boost::python::call(*it,cmd,status,resid);		  }

}
void cb_megasas_handle_io(int cmd,const char *frame,int dev,int lun,unsigned long lba,unsigned long count) {


		  for (auto it = py_megasas_handle_io.begin(); it != py_megasas_handle_io.end();
		       ++it) {
		    boost::python::call(*it,cmd,*frame,dev,lun,long lba,long count);		  }

}
void cb_megasas_io_target_not_present(int cmd,const char *frame,int dev,int lun) {


		  for (auto it = py_megasas_io_target_not_present.begin(); it != py_megasas_io_target_not_present.end();
		       ++it) {
		    boost::python::call(*it,cmd,*frame,dev,lun);		  }

}
void cb_megasas_io_read_start(int cmd,unsigned long lba,unsigned long count,unsigned long len) {


		  for (auto it = py_megasas_io_read_start.begin(); it != py_megasas_io_read_start.end();
		       ++it) {
		    boost::python::call(*it,cmd,long lba,long count,long len);		  }

}
void cb_megasas_io_write_start(int cmd,unsigned long lba,unsigned long count,unsigned long len) {


		  for (auto it = py_megasas_io_write_start.begin(); it != py_megasas_io_write_start.end();
		       ++it) {
		    boost::python::call(*it,cmd,long lba,long count,long len);		  }

}
void cb_megasas_io_complete(int cmd,uint32_t len) {


		  for (auto it = py_megasas_io_complete.begin(); it != py_megasas_io_complete.end();
		       ++it) {
		    boost::python::call(*it,cmd,len);		  }

}
void cb_megasas_iovec_sgl_overflow(int cmd,int index,int limit) {


		  for (auto it = py_megasas_iovec_sgl_overflow.begin(); it != py_megasas_iovec_sgl_overflow.end();
		       ++it) {
		    boost::python::call(*it,cmd,index,limit);		  }

}
void cb_megasas_iovec_sgl_underflow(int cmd,int index) {


		  for (auto it = py_megasas_iovec_sgl_underflow.begin(); it != py_megasas_iovec_sgl_underflow.end();
		       ++it) {
		    boost::python::call(*it,cmd,index);		  }

}
void cb_megasas_iovec_sgl_invalid(int cmd,int index,uint64_t pa,uint32_t len) {


		  for (auto it = py_megasas_iovec_sgl_invalid.begin(); it != py_megasas_iovec_sgl_invalid.end();
		       ++it) {
		    boost::python::call(*it,cmd,index,pa,len);		  }

}
void cb_megasas_iovec_overflow(int cmd,int len,int limit) {


		  for (auto it = py_megasas_iovec_overflow.begin(); it != py_megasas_iovec_overflow.end();
		       ++it) {
		    boost::python::call(*it,cmd,len,limit);		  }

}
void cb_megasas_iovec_underflow(int cmd,int len,int limit) {


		  for (auto it = py_megasas_iovec_underflow.begin(); it != py_megasas_iovec_underflow.end();
		       ++it) {
		    boost::python::call(*it,cmd,len,limit);		  }

}
void cb_megasas_handle_dcmd(int cmd,int opcode) {


		  for (auto it = py_megasas_handle_dcmd.begin(); it != py_megasas_handle_dcmd.end();
		       ++it) {
		    boost::python::call(*it,cmd,opcode);		  }

}
void cb_megasas_finish_dcmd(int cmd,int size) {


		  for (auto it = py_megasas_finish_dcmd.begin(); it != py_megasas_finish_dcmd.end();
		       ++it) {
		    boost::python::call(*it,cmd,size);		  }

}
void cb_megasas_dcmd_req_alloc_failed(int cmd,const char *desc) {


		  for (auto it = py_megasas_dcmd_req_alloc_failed.begin(); it != py_megasas_dcmd_req_alloc_failed.end();
		       ++it) {
		    boost::python::call(*it,cmd,*desc);		  }

}
void cb_megasas_dcmd_internal_submit(int cmd,const char *desc,int dev) {


		  for (auto it = py_megasas_dcmd_internal_submit.begin(); it != py_megasas_dcmd_internal_submit.end();
		       ++it) {
		    boost::python::call(*it,cmd,*desc,dev);		  }

}
void cb_megasas_dcmd_internal_finish(int cmd,int opcode,int lun) {


		  for (auto it = py_megasas_dcmd_internal_finish.begin(); it != py_megasas_dcmd_internal_finish.end();
		       ++it) {
		    boost::python::call(*it,cmd,opcode,lun);		  }

}
void cb_megasas_dcmd_internal_invalid(int cmd,int opcode) {


		  for (auto it = py_megasas_dcmd_internal_invalid.begin(); it != py_megasas_dcmd_internal_invalid.end();
		       ++it) {
		    boost::python::call(*it,cmd,opcode);		  }

}
void cb_megasas_dcmd_unhandled(int cmd,int opcode,int len) {


		  for (auto it = py_megasas_dcmd_unhandled.begin(); it != py_megasas_dcmd_unhandled.end();
		       ++it) {
		    boost::python::call(*it,cmd,opcode,len);		  }

}
void cb_megasas_dcmd_zero_sge(int cmd) {


		  for (auto it = py_megasas_dcmd_zero_sge.begin(); it != py_megasas_dcmd_zero_sge.end();
		       ++it) {
		    boost::python::call(*it,cmd);		  }

}
void cb_megasas_dcmd_invalid_sge(int cmd,int count) {


		  for (auto it = py_megasas_dcmd_invalid_sge.begin(); it != py_megasas_dcmd_invalid_sge.end();
		       ++it) {
		    boost::python::call(*it,cmd,count);		  }

}
void cb_megasas_dcmd_invalid_xfer_len(int cmd,unsigned long size,unsigned long max) {


		  for (auto it = py_megasas_dcmd_invalid_xfer_len.begin(); it != py_megasas_dcmd_invalid_xfer_len.end();
		       ++it) {
		    boost::python::call(*it,cmd,long size,long max);		  }

}
void cb_megasas_dcmd_enter(int cmd,const char *dcmd,int len) {


		  for (auto it = py_megasas_dcmd_enter.begin(); it != py_megasas_dcmd_enter.end();
		       ++it) {
		    boost::python::call(*it,cmd,*dcmd,len);		  }

}
void cb_megasas_dcmd_dummy(int cmd,unsigned long size) {


		  for (auto it = py_megasas_dcmd_dummy.begin(); it != py_megasas_dcmd_dummy.end();
		       ++it) {
		    boost::python::call(*it,cmd,long size);		  }

}
void cb_megasas_dcmd_set_fw_time(int cmd,unsigned long time) {


		  for (auto it = py_megasas_dcmd_set_fw_time.begin(); it != py_megasas_dcmd_set_fw_time.end();
		       ++it) {
		    boost::python::call(*it,cmd,long time);		  }

}
void cb_megasas_dcmd_pd_get_list(int cmd,int num,int max,int offset) {


		  for (auto it = py_megasas_dcmd_pd_get_list.begin(); it != py_megasas_dcmd_pd_get_list.end();
		       ++it) {
		    boost::python::call(*it,cmd,num,max,offset);		  }

}
void cb_megasas_dcmd_ld_get_list(int cmd,int num,int max) {


		  for (auto it = py_megasas_dcmd_ld_get_list.begin(); it != py_megasas_dcmd_ld_get_list.end();
		       ++it) {
		    boost::python::call(*it,cmd,num,max);		  }

}
void cb_megasas_dcmd_ld_get_info(int cmd,int ld_id) {


		  for (auto it = py_megasas_dcmd_ld_get_info.begin(); it != py_megasas_dcmd_ld_get_info.end();
		       ++it) {
		    boost::python::call(*it,cmd,ld_id);		  }

}
void cb_megasas_dcmd_ld_list_query(int cmd,int flags) {


		  for (auto it = py_megasas_dcmd_ld_list_query.begin(); it != py_megasas_dcmd_ld_list_query.end();
		       ++it) {
		    boost::python::call(*it,cmd,flags);		  }

}
void cb_megasas_dcmd_pd_get_info(int cmd,int pd_id) {


		  for (auto it = py_megasas_dcmd_pd_get_info.begin(); it != py_megasas_dcmd_pd_get_info.end();
		       ++it) {
		    boost::python::call(*it,cmd,pd_id);		  }

}
void cb_megasas_dcmd_pd_list_query(int cmd,int flags) {


		  for (auto it = py_megasas_dcmd_pd_list_query.begin(); it != py_megasas_dcmd_pd_list_query.end();
		       ++it) {
		    boost::python::call(*it,cmd,flags);		  }

}
void cb_megasas_dcmd_reset_ld(int cmd,int target_id) {


		  for (auto it = py_megasas_dcmd_reset_ld.begin(); it != py_megasas_dcmd_reset_ld.end();
		       ++it) {
		    boost::python::call(*it,cmd,target_id);		  }

}
void cb_megasas_dcmd_unsupported(int cmd,unsigned long size) {


		  for (auto it = py_megasas_dcmd_unsupported.begin(); it != py_megasas_dcmd_unsupported.end();
		       ++it) {
		    boost::python::call(*it,cmd,long size);		  }

}
void cb_megasas_abort_frame(int cmd,int abort_cmd) {


		  for (auto it = py_megasas_abort_frame.begin(); it != py_megasas_abort_frame.end();
		       ++it) {
		    boost::python::call(*it,cmd,abort_cmd);		  }

}
void cb_megasas_abort_no_cmd(int cmd,uint64_t context) {


		  for (auto it = py_megasas_abort_no_cmd.begin(); it != py_megasas_abort_no_cmd.end();
		       ++it) {
		    boost::python::call(*it,cmd,context);		  }

}
void cb_megasas_abort_invalid_context(int cmd,uint64_t context,int abort_cmd) {


		  for (auto it = py_megasas_abort_invalid_context.begin(); it != py_megasas_abort_invalid_context.end();
		       ++it) {
		    boost::python::call(*it,cmd,context,abort_cmd);		  }

}
void cb_megasas_reset(int fw_state) {


		  for (auto it = py_megasas_reset.begin(); it != py_megasas_reset.end();
		       ++it) {
		    boost::python::call(*it,fw_state);		  }

}
void cb_megasas_init(int sges,int cmds,const char *mode) {


		  for (auto it = py_megasas_init.begin(); it != py_megasas_init.end();
		       ++it) {
		    boost::python::call(*it,sges,cmds,*mode);		  }

}
void cb_megasas_msix_raise(int vector) {


		  for (auto it = py_megasas_msix_raise.begin(); it != py_megasas_msix_raise.end();
		       ++it) {
		    boost::python::call(*it,vector);		  }

}
void cb_megasas_msi_raise(int vector) {


		  for (auto it = py_megasas_msi_raise.begin(); it != py_megasas_msi_raise.end();
		       ++it) {
		    boost::python::call(*it,vector);		  }

}
void cb_megasas_irq_lower(void) {


		  for (auto it = py_megasas_irq_lower.begin(); it != py_megasas_irq_lower.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_megasas_irq_raise(void) {


		  for (auto it = py_megasas_irq_raise.begin(); it != py_megasas_irq_raise.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_megasas_intr_enabled(void) {


		  for (auto it = py_megasas_intr_enabled.begin(); it != py_megasas_intr_enabled.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_megasas_intr_disabled(void) {


		  for (auto it = py_megasas_intr_disabled.begin(); it != py_megasas_intr_disabled.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_megasas_msix_enabled(int vector) {


		  for (auto it = py_megasas_msix_enabled.begin(); it != py_megasas_msix_enabled.end();
		       ++it) {
		    boost::python::call(*it,vector);		  }

}
void cb_megasas_msi_enabled(int vector) {


		  for (auto it = py_megasas_msi_enabled.begin(); it != py_megasas_msi_enabled.end();
		       ++it) {
		    boost::python::call(*it,vector);		  }

}
void cb_megasas_mmio_readl(const char *reg,uint32_t val) {


		  for (auto it = py_megasas_mmio_readl.begin(); it != py_megasas_mmio_readl.end();
		       ++it) {
		    boost::python::call(*it,*reg,val);		  }

}
void cb_megasas_mmio_invalid_readl(unsigned long addr) {


		  for (auto it = py_megasas_mmio_invalid_readl.begin(); it != py_megasas_mmio_invalid_readl.end();
		       ++it) {
		    boost::python::call(*it,long addr);		  }

}
void cb_megasas_mmio_writel(const char *reg,uint32_t val) {


		  for (auto it = py_megasas_mmio_writel.begin(); it != py_megasas_mmio_writel.end();
		       ++it) {
		    boost::python::call(*it,*reg,val);		  }

}
void cb_megasas_mmio_invalid_writel(uint32_t addr,uint32_t val) {


		  for (auto it = py_megasas_mmio_invalid_writel.begin(); it != py_megasas_mmio_invalid_writel.end();
		       ++it) {
		    boost::python::call(*it,addr,val);		  }

}

//# vmw_pvscsi.c
void cb_pvscsi_ring_init_data(uint32_t txr_len_log2,uint32_t rxr_len_log2) {


		  for (auto it = py_pvscsi_ring_init_data.begin(); it != py_pvscsi_ring_init_data.end();
		       ++it) {
		    boost::python::call(*it,txr_len_log2,rxr_len_log2);		  }

}
void cb_pvscsi_ring_init_msg(uint32_t len_log2) {


		  for (auto it = py_pvscsi_ring_init_msg.begin(); it != py_pvscsi_ring_init_msg.end();
		       ++it) {
		    boost::python::call(*it,len_log2);		  }

}
void cb_pvscsi_ring_flush_cmp(uint64_t filled_cmp_ptr) {


		  for (auto it = py_pvscsi_ring_flush_cmp.begin(); it != py_pvscsi_ring_flush_cmp.end();
		       ++it) {
		    boost::python::call(*it,filled_cmp_ptr);		  }

}
void cb_pvscsi_ring_flush_msg(uint64_t filled_cmp_ptr) {


		  for (auto it = py_pvscsi_ring_flush_msg.begin(); it != py_pvscsi_ring_flush_msg.end();
		       ++it) {
		    boost::python::call(*it,filled_cmp_ptr);		  }

}
void cb_pvscsi_update_irq_level(bool raise,uint64_t mask,uint64_t status) {


		  for (auto it = py_pvscsi_update_irq_level.begin(); it != py_pvscsi_update_irq_level.end();
		       ++it) {
		    boost::python::call(*it,raise,mask,status);		  }

}
void cb_pvscsi_update_irq_msi(void) {


		  for (auto it = py_pvscsi_update_irq_msi.begin(); it != py_pvscsi_update_irq_msi.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_pvscsi_cmp_ring_put(unsigned long addr) {


		  for (auto it = py_pvscsi_cmp_ring_put.begin(); it != py_pvscsi_cmp_ring_put.end();
		       ++it) {
		    boost::python::call(*it,long addr);		  }

}
void cb_pvscsi_msg_ring_put(unsigned long addr) {


		  for (auto it = py_pvscsi_msg_ring_put.begin(); it != py_pvscsi_msg_ring_put.end();
		       ++it) {
		    boost::python::call(*it,long addr);		  }

}
void cb_pvscsi_complete_request(uint64_t context,uint64_t len,uint8_t sense_key) {


		  for (auto it = py_pvscsi_complete_request.begin(); it != py_pvscsi_complete_request.end();
		       ++it) {
		    boost::python::call(*it,context,len,sense_key);		  }

}
void cb_pvscsi_get_sg_list(int nsg,size_t size) {


		  for (auto it = py_pvscsi_get_sg_list.begin(); it != py_pvscsi_get_sg_list.end();
		       ++it) {
		    boost::python::call(*it,nsg,sizesize);		  }

}
void cb_pvscsi_get_next_sg_elem(uint32_t flags) {


		  for (auto it = py_pvscsi_get_next_sg_elem.begin(); it != py_pvscsi_get_next_sg_elem.end();
		       ++it) {
		    boost::python::call(*it,flags);		  }

}
void cb_pvscsi_command_complete_not_found(uint32_t tag) {


		  for (auto it = py_pvscsi_command_complete_not_found.begin(); it != py_pvscsi_command_complete_not_found.end();
		       ++it) {
		    boost::python::call(*it,tag);		  }

}
void cb_pvscsi_command_complete_data_run(void) {


		  for (auto it = py_pvscsi_command_complete_data_run.begin(); it != py_pvscsi_command_complete_data_run.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_pvscsi_command_complete_sense_len(int len) {


		  for (auto it = py_pvscsi_command_complete_sense_len.begin(); it != py_pvscsi_command_complete_sense_len.end();
		       ++it) {
		    boost::python::call(*it,len);		  }

}
void cb_pvscsi_convert_sglist(uint64_t context,unsigned long addr,uint32_t resid) {


		  for (auto it = py_pvscsi_convert_sglist.begin(); it != py_pvscsi_convert_sglist.end();
		       ++it) {
		    boost::python::call(*it,context,long addr,resid);		  }

}
void cb_pvscsi_process_req_descr(uint8_t cmd,uint64_t ctx) {


		  for (auto it = py_pvscsi_process_req_descr.begin(); it != py_pvscsi_process_req_descr.end();
		       ++it) {
		    boost::python::call(*it,cmd,ctx);		  }

}
void cb_pvscsi_process_req_descr_unknown_device(void) {


		  for (auto it = py_pvscsi_process_req_descr_unknown_device.begin(); it != py_pvscsi_process_req_descr_unknown_device.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_pvscsi_process_req_descr_invalid_dir(void) {


		  for (auto it = py_pvscsi_process_req_descr_invalid_dir.begin(); it != py_pvscsi_process_req_descr_invalid_dir.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_pvscsi_process_io(unsigned long addr) {


		  for (auto it = py_pvscsi_process_io.begin(); it != py_pvscsi_process_io.end();
		       ++it) {
		    boost::python::call(*it,long addr);		  }

}
void cb_pvscsi_on_cmd_noimpl(const char* cmd) {


		  for (auto it = py_pvscsi_on_cmd_noimpl.begin(); it != py_pvscsi_on_cmd_noimpl.end();
		       ++it) {
		    boost::python::call(*it,char* cmd);		  }

}
void cb_pvscsi_on_cmd_reset_dev(uint32_t tgt,int lun,void* dev) {


		  for (auto it = py_pvscsi_on_cmd_reset_dev.begin(); it != py_pvscsi_on_cmd_reset_dev.end();
		       ++it) {
		    boost::python::call(*it,tgt,lun,void* dev);		  }

}
void cb_pvscsi_on_cmd_arrived(const char* cmd) {


		  for (auto it = py_pvscsi_on_cmd_arrived.begin(); it != py_pvscsi_on_cmd_arrived.end();
		       ++it) {
		    boost::python::call(*it,char* cmd);		  }

}
void cb_pvscsi_on_cmd_abort(uint64_t ctx,uint32_t tgt) {


		  for (auto it = py_pvscsi_on_cmd_abort.begin(); it != py_pvscsi_on_cmd_abort.end();
		       ++it) {
		    boost::python::call(*it,ctx,tgt);		  }

}
void cb_pvscsi_on_cmd_unknown(uint64_t cmd_id) {


		  for (auto it = py_pvscsi_on_cmd_unknown.begin(); it != py_pvscsi_on_cmd_unknown.end();
		       ++it) {
		    boost::python::call(*it,cmd_id);		  }

}
void cb_pvscsi_on_cmd_unknown_data(uint32_t data) {


		  for (auto it = py_pvscsi_on_cmd_unknown_data.begin(); it != py_pvscsi_on_cmd_unknown_data.end();
		       ++it) {
		    boost::python::call(*it,data);		  }

}
void cb_pvscsi_io_write(const char* cmd,uint64_t val) {


		  for (auto it = py_pvscsi_io_write.begin(); it != py_pvscsi_io_write.end();
		       ++it) {
		    boost::python::call(*it,char* cmd,val);		  }

}
void cb_pvscsi_io_write_unknown(unsigned long addr,unsigned sz,uint64_t val) {


		  for (auto it = py_pvscsi_io_write_unknown.begin(); it != py_pvscsi_io_write_unknown.end();
		       ++it) {
		    boost::python::call(*it,long addr,sz,val);		  }

}
void cb_pvscsi_io_read(const char* cmd,uint64_t status) {


		  for (auto it = py_pvscsi_io_read.begin(); it != py_pvscsi_io_read.end();
		       ++it) {
		    boost::python::call(*it,char* cmd,status);		  }

}
void cb_pvscsi_io_read_unknown(unsigned long addr,unsigned sz) {


		  for (auto it = py_pvscsi_io_read_unknown.begin(); it != py_pvscsi_io_read_unknown.end();
		       ++it) {
		    boost::python::call(*it,long addr,sz);		  }

}
void cb_pvscsi_init_msi_fail(int res) {


		  for (auto it = py_pvscsi_init_msi_fail.begin(); it != py_pvscsi_init_msi_fail.end();
		       ++it) {
		    boost::python::call(*it,res);		  }

}
void cb_pvscsi_state(const char* state) {


		  for (auto it = py_pvscsi_state.begin(); it != py_pvscsi_state.end();
		       ++it) {
		    boost::python::call(*it,char* state);		  }

}
void cb_pvscsi_tx_rings_ppn(const char* label,uint64_t ppn) {


		  for (auto it = py_pvscsi_tx_rings_ppn.begin(); it != py_pvscsi_tx_rings_ppn.end();
		       ++it) {
		    boost::python::call(*it,char* label,ppn);		  }

}
void cb_pvscsi_tx_rings_num_pages(const char* label,uint32_t num) {


		  for (auto it = py_pvscsi_tx_rings_num_pages.begin(); it != py_pvscsi_tx_rings_num_pages.end();
		       ++it) {
		    boost::python::call(*it,char* label,num);		  }

}

//# esp.c
void cb_esp_error_fifo_overrun(void) {


		  for (auto it = py_esp_error_fifo_overrun.begin(); it != py_esp_error_fifo_overrun.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_esp_error_unhandled_command(uint32_t val) {


		  for (auto it = py_esp_error_unhandled_command.begin(); it != py_esp_error_unhandled_command.end();
		       ++it) {
		    boost::python::call(*it,val);		  }

}
void cb_esp_error_invalid_write(uint32_t val,uint32_t addr) {


		  for (auto it = py_esp_error_invalid_write.begin(); it != py_esp_error_invalid_write.end();
		       ++it) {
		    boost::python::call(*it,val,addr);		  }

}
void cb_esp_raise_irq(void) {


		  for (auto it = py_esp_raise_irq.begin(); it != py_esp_raise_irq.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_esp_lower_irq(void) {


		  for (auto it = py_esp_lower_irq.begin(); it != py_esp_lower_irq.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_esp_dma_enable(void) {


		  for (auto it = py_esp_dma_enable.begin(); it != py_esp_dma_enable.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_esp_dma_disable(void) {


		  for (auto it = py_esp_dma_disable.begin(); it != py_esp_dma_disable.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_esp_get_cmd(uint32_t dmalen,int target) {


		  for (auto iesp_get_cmd_crw.begin(); it != py_esp_get_cmd.end();
		       ++it) {
		    boost::python::call(*it,dmalen,target);		  }

}
void cb_esp_do_busid_cmd(uint8_t busid) {


		  for (auto it = py_esp_do_busid_cmd.begin(); it != py_esp_do_busid_cmd.end();
		       ++it) {
		    boost::python::call(*it,busid);		  }

}
void cb_esp_handle_satn_stop(uint32_t cmdlen) {


		  for (auto it = py_esp_handle_satn_stop.begin(); it != py_esp_handle_satn_stop.end();
		       ++it) {
		    boost::python::call(*it,cmdlen);		  }

}
void cb_esp_write_response(uint32_t status) {


		  for (auto it = py_esp_write_response.begin(); it != py_esp_write_response.end();
		       ++it) {
		    boost::python::call(*it,status);		  }

}
void cb_esp_do_dma(uint32_t cmdlen,uint32_t len) {


		  for (auto it = py_esp_do_dma.begin(); it != py_esp_do_dma.end();
		       ++it) {
		    boost::python::call(*it,cmdlen,len);		  }

}
void cb_esp_command_complete(void) {


		  for (auto it = py_esp_command_complete.begin(); it != py_esp_command_complete.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_esp_command_complete_deferred(void) {


		  for (auto it = py_esp_command_complete_deferred.begin(); it != py_esp_command_complete_deferred.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_esp_command_complete_unexpected(void) {


		  for (auto it = py_esp_command_complete_unexpected.begin(); it != py_esp_command_complete_unexpected.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_esp_command_complete_fail(void) {


		  for (auto it = py_esp_command_complete_fail.begin(); it != py_esp_command_complete_fail.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_esp_transfer_data(uint32_t dma_left,int32_t ti_size) {


		  for (auto it = py_esp_transfer_data.begin(); it != py_esp_transfer_data.end();
		       ++it) {
		    boost::python::call(*it,dma_left,intti_size);		  }

}
void cb_esp_handle_ti(uint32_t minlen) {


		  for (auto it = py_esp_handle_ti.begin(); it != py_esp_handle_ti.end();
		       ++it) {
		    boost::python::call(*it,minlen);		  }

}
void cb_esp_handle_ti_cmd(uint32_t cmdlen) {


		  for (auto it = py_esp_handle_ti_cmd.begin(); it != py_esp_handle_ti_cmd.end();
		       ++it) {
		    boost::python::call(*it,cmdlen);		  }

}
void cb_esp_mem_readb(uint32_t saddr,uint8_t reg) {


		  for (auto it = py_esp_mem_readb.begin(); it != py_esp_mem_readb.end();
		       ++it) {
		    boost::python::call(*it,saddr,reg);		  }

}
void cb_esp_mem_writeb(uint32_t saddr,uint8_t reg,uint32_t val) {


		  for (auto it = py_esp_mem_writeb.begin(); it != py_esp_mem_writeb.end();
		       ++it) {
		    boost::python::call(*it,saddr,reg,val);		  }

}
void cb_esp_mem_writeb_cmd_nop(uint32_t val) {


		  for (auto it = py_esp_mem_writeb_cmd_nop.begin(); it != py_esp_mem_writeb_cmd_nop.end();
		       ++it) {
		    boost::python::call(*it,val);		  }

}
void cb_esp_mem_writeb_cmd_flush(uint32_t val) {


		  for (auto it = py_esp_mem_writeb_cmd_flush.begin(); it != py_esp_mem_writeb_cmd_flush.end();
		       ++it) {
		    boost::python::call(*it,val);		  }

}
void cb_esp_mem_writeb_cmd_reset(uint32_t val) {


		  for (auto it = py_esp_mem_writeb_cmd_reset.begin(); it != py_esp_mem_writeb_cmd_reset.end();
		       ++it) {
		    boost::python::call(*it,val);		  }

}
void cb_esp_mem_writeb_cmd_bus_reset(uint32_t val) {


		  for (auto it = py_esp_mem_writeb_cmd_bus_reset.begin(); it != py_esp_mem_writeb_cmd_bus_reset.end();
		       ++it) {
		    boost::python::call(*it,val);		  }

}
void cb_esp_mem_writeb_cmd_iccs(uint32_t val) {


		  for (auto it = py_esp_mem_writeb_cmd_iccs.begin(); it != py_esp_mem_writeb_cmd_iccs.end();
		       ++it) {
		    boost::python::call(*it,val);		  }

}
void cb_esp_mem_writeb_cmd_msgacc(uint32_t val) {


		  for (auto it = py_esp_mem_writeb_cmd_msgacc.begin(); it != py_esp_mem_writeb_cmd_msgacc.end();
		       ++it) {
		    boost::python::call(*it,val);		  }

}
void cb_esp_mem_writeb_cmd_pad(uint32_t val) {


		  for (auto it = py_esp_mem_writeb_cmd_pad.begin(); it != py_esp_mem_writeb_cmd_pad.end();
		       ++it) {
		    boost::python::call(*it,val);		  }

}
void cb_esp_mem_writeb_cmd_satn(uint32_t val) {


		  for (auto it = py_esp_mem_writeb_cmd_satn.begin(); it != py_esp_mem_writeb_cmd_satn.end();
		       ++it) {
		    boost::python::call(*it,val);		  }

}
void cb_esp_mem_writeb_cmd_rstatn(uint32_t val) {


		  for (auto it = py_esp_mem_writeb_cmd_rstatn.begin(); it != py_esp_mem_writeb_cmd_rstatn.end();
		       ++it) {
		    boost::python::call(*it,val);		  }

}
void cb_esp_mem_writeb_cmd_sel(uint32_t val) {


		  for (auto it = py_esp_mem_writeb_cmd_sel.begin(); it != py_esp_mem_writeb_cmd_sel.end();
		       ++it) {
		    boost::python::call(*it,val);		  }

}
void cb_esp_mem_writeb_cmd_selatn(uint32_t val) {


		  for (auto it = py_esp_mem_writeb_cmd_selatn.begin(); it != py_esp_mem_writeb_cmd_selatn.end();
		       ++it) {
		    boost::python::call(*it,val);		  }

}
void cb_esp_mem_writeb_cmd_selatns(uint32_t val) {


		  for (auto it = py_esp_mem_writeb_cmd_selatns.begin(); it != py_esp_mem_writeb_cmd_selatns.end();
		       ++it) {
		    boost::python::call(*it,val);		  }

}
void cb_esp_mem_writeb_cmd_ensel(uint32_t val) {


		  for (auto it = py_esp_mem_writeb_cmd_ensel.begin(); it != py_esp_mem_writeb_cmd_ensel.end();
		       ++it) {
		    boost::python::call(*it,val);		  }

}
void cb_esp_mem_writeb_cmd_dissel(uint32_t val) {


		  for (auto it = py_esp_mem_writeb_cmd_dissel.begin(); it != py_esp_mem_writeb_cmd_dissel.end();
		       ++it) {
		    boost::python::call(*it,val);		  }

}

//# esp-pci.c
void cb_esp_pci_error_invalid_dma_direction(void) {


		  for (auto it = py_esp_pci_error_invalid_dma_direction.begin(); it != py_esp_pci_error_invalid_dma_direction.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_esp_pci_error_invalid_read(uint32_t reg) {


		  for (auto it = py_esp_pci_error_invalid_read.begin(); it != py_esp_pci_error_invalid_read.end();
		       ++it) {
		    boost::python::call(*it,reg);		  }

}
void cb_esp_pci_error_invalid_write(uint32_t reg) {


		  for (auto it = py_esp_pci_error_invalid_write.begin(); it != py_esp_pci_error_invalid_write.end();
		       ++it) {
		    boost::python::call(*it,reg);		  }

}
void cb_esp_pci_error_invalid_write_dma(uint32_t val,uint32_t addr) {


		  for (auto it = py_esp_pci_error_invalid_write_dma.begin(); it != py_esp_pci_error_invalid_write_dma.end();
		       ++it) {
		    boost::python::call(*it,val,addr);		  }

}
void cb_esp_pci_dma_read(uint32_t saddr,uint32_t reg) {


		  for (auto it = py_esp_pci_dma_read.begin(); it != py_esp_pci_dma_read.end();
		       ++it) {
		    boost::python::call(*it,saddr,reg);		  }

}
void cb_esp_pci_dma_write(uint32_t saddr,uint32_t reg,uint32_t val) {


		  for (auto it = py_esp_pci_dma_write.begin(); it != py_esp_pci_dma_write.end();
		       ++it) {
		    boost::python::call(*it,saddr,reg,val);		  }

}
void cb_esp_pci_dma_idle(uint32_t val) {


		  for (auto it = py_esp_pci_dma_idle.begin(); it != py_esp_pci_dma_idle.end();
		       ++it) {
		    boost::python::call(*it,val);		  }

}
void cb_esp_pci_dma_blast(uint32_t val) {


		  for (auto it = py_esp_pci_dma_blast.begin(); it != py_esp_pci_dma_blast.end();
		       ++it) {
		    boost::python::call(*it,val);		  }

}
void cb_esp_pci_dma_abort(uint32_t val) {


		  for (auto it = py_esp_pci_dma_abort.begin(); it != py_esp_pci_dma_abort.end();
		       ++it) {
		    boost::python::call(*it,val);		  }

}
void cb_esp_pci_dma_start(uint32_t val) {


		  for (auto it = py_esp_pci_dma_start.begin(); it != py_esp_pci_dma_start.end();
		       ++it) {
		    boost::python::call(*it,val);		  }

}
void cb_esp_pci_sbac_read(uint32_t reg) {


		  for (auto it = py_esp_pci_sbac_read.begin(); it != py_esp_pci_sbac_read.end();
		       ++it) {
		    boost::python::call(*it,reg);		  }

}
void cb_esp_pci_sbac_write(uint32_t reg,uint32_t val) {


		  for (auto it = py_esp_pci_sbac_write.begin(); it != py_esp_pci_sbac_write.end();
		       ++it) {
		    boost::python::call(*it,reg,val);		  }

}

//# spapr_vscsi.c
void cb_spapr_vscsi_send_rsp(uint8_t status,int32_t res_in,int32_t res_out) {


		  for (auto it = py_spapr_vscsi_send_rsp.begin(); it != py_spapr_vscsi_send_rsp.end();
		       ++it) {
		    boost::python::call(*it,status,intres_in,intres_out);		  }

}
void cb_spapr_vscsi_fetch_desc_no_data(void) {


		  for (auto it = py_spapr_vscsi_fetch_desc_no_data.begin(); it != py_spapr_vscsi_fetch_desc_no_data.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_spapr_vscsi_fetch_desc_direct(void) {


		  for (auto it = py_spapr_vscsi_fetch_desc_direct.begin(); it != py_spapr_vscsi_fetch_desc_direct.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_spapr_vscsi_fetch_desc_indirect(uint32_t qtag,unsigned desc,unsigned local_desc) {


		  for (auto it = py_spapr_vscsi_fetch_desc_indirect.begin(); it != py_spapr_vscsi_fetch_desc_indirect.end();
		       ++it) {
		    boost::python::call(*it,qtag,desc,local_desc);		  }

}
void cb_spapr_vscsi_fetch_desc_out_of_range(unsigned desc,unsigned desc_offset) {


		  for (auto it = py_spapr_vscsi_fetch_desc_out_of_range.begin(); it != py_spapr_vscsi_fetch_desc_out_of_range.end();
		       ++it) {
		    boost::python::call(*it,desc,desc_offset);		  }

}
void cb_spapr_vscsi_fetch_desc_dma_read_error(int rc) {


		  for (auto it = py_spapr_vscsi_fetch_desc_dma_read_error.begin(); it != py_spapr_vscsi_fetch_desc_dma_read_error.end();
		       ++it) {
		    boost::python::call(*it,rc);		  }

}
void cb_spapr_vscsi_fetch_desc_indirect_seg_ext(uint32_t qtag,unsigned n,unsigned desc,uint64_t va,uint32_t len) {


		  for (auto it = py_spapr_vscsi_fetch_desc_indirect_seg_ext.begin(); it != py_spapr_vscsi_fetch_desc_indirect_seg_ext.end();
		       ++it) {
		    boost::python::call(*it,qtag,n,desc,va,len);		  }

}
void cb_spapr_vscsi_fetch_desc_out_of_desc(void) {


		  for (auto it = py_spapr_vscsi_fetch_desc_out_of_desc.begin(); it != py_spapr_vscsi_fetch_desc_out_of_desc.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_spapr_vscsi_fetch_desc_out_of_desc_boundary(unsigned offset,unsigned desc,uint32_t len) {


		  for (auto it = py_spapr_vscsi_fetch_desc_out_of_desc_boundary.begin(); it != py_spapr_vscsi_fetch_desc_out_of_desc_boundary.end();
		       ++it) {
		    boost::python::call(*it,offset,desc,len);		  }

}
void cb_spapr_vscsi_fetch_desc_done(unsigned desc_num,unsigned desc_offset,uint64_t va,uint32_t len) {


		  for (auto it = py_spapr_vscsi_fetch_desc_done.begin(); it != py_spapr_vscsi_fetch_desc_done.end();
		       ++it) {
		    boost::python::call(*it,desc_num,desc_offset,va,len);		  }

}
void cb_spapr_vscsi_srp_indirect_data(uint32_t len) {


		  for (auto it = py_spapr_vscsi_srp_indirect_data.begin(); it != py_spapr_vscsi_srp_indirect_data.end();
		       ++it) {
		    boost::python::call(*it,len);		  }

}
void cb_spapr_vscsi_srp_indirect_data_rw(int writing,int rc) {


		  for (auto it = py_spapr_vscsi_srp_indirect_data_rw.begin(); it != py_spapr_vscsi_srp_indirect_data_rw.end();
		       ++it) {
		    boost::python::call(*it,writing,rc);		  }

}
void cb_spapr_vscsi_srp_indirect_data_buf(unsigned a,unsigned b,unsigned c,unsigned d) {


		  for (auto it = py_spapr_vscsi_srp_indirect_data_buf.begin(); it != py_spapr_vscsi_srp_indirect_data_buf.end();
		       ++it) {
		    boost::python::call(*it,a,b,c,d);		  }

}
void cb_spapr_vscsi_srp_transfer_data(uint32_t len) {


		  for (auto it = py_spapr_vscsi_srp_transfer_data.begin(); it != py_spapr_vscsi_srp_transfer_data.end();
		       ++it) {
		    boost::python::call(*it,len);		  }

}
void cb_spapr_vscsi_transfer_data(uint32_t tag,uint32_t len,void *req) {


		  for (auto it = py_spapr_vscsi_transfer_data.begin(); it != py_spapr_vscsi_transfer_data.end();
		       ++it) {
		    boost::python::call(*it,tag,len,*req);		  }

}
void cb_spapr_vscsi_command_complete(uint32_t tag,uint32_t status,void *req) {


		  for (auto it = py_spapr_vscsi_command_complete.begin(); it != py_spapr_vscsi_command_complete.end();
		       ++it) {
		    boost::python::call(*it,tag,status,*req);		  }

}
void cb_spapr_vscsi_command_complete_sense_data1(uint32_t len,unsigned s0,unsigned s1,unsigned s2,unsigned s3,unsigned s4,unsigned s5,unsigned s6,unsigned s7) {


		  for (auto it = py_spapr_vscsi_command_complete_sense_data1.begin(); it != py_spapr_vscsi_command_complete_sense_data1.end();
		       ++it) {
		    boost::python::call(*it,len,s0,s1,s2,s3,s4,s5,s6,s7);		  }

}
void cb_spapr_vscsi_command_complete_sense_data2(unsigned s8,unsigned s9,unsigned s10,unsigned s11,unsigned s12,unsigned s13,unsigned s14,unsigned s15)         {


		  for (auto it = py_spapr_vscsi_command_complete_sense_data2.begin(); it != py_spapr_vscsi_command_complete_sense_data2.end();
		       ++it) {
		    boost::python::call(*it,s8,s9,s10,s11,s12,s13,s14,s15)        ;		  }

}
void cb_spapr_vscsi_command_complete_status(uint32_t status) {


		  for (auto it = py_spapr_vscsi_command_complete_status.begin(); it != py_spapr_vscsi_command_complete_status.end();
		       ++it) {
		    boost::python::call(*it,status);		  }

}
void cb_spapr_vscsi_save_request(uint32_t qtag,unsigned desc,unsigned offset) {


		  for (auto it = py_spapr_vscsi_save_request.begin(); it != py_spapr_vscsi_save_request.end();
		       ++it) {
		    boost::python::call(*it,qtag,desc,offset);		  }

}
void cb_spapr_vscsi_load_request(uint32_t qtag,unsigned desc,unsigned offset) {


		  for (auto it = py_spapr_vscsi_load_request.begin(); it != py_spapr_vscsi_load_request.end();
		       ++it) {
		    boost::python::call(*it,qtag,desc,offset);		  }

}
void cb_spapr_vscsi_process_login(void) {


		  for (auto it = py_spapr_vscsi_process_login.begin(); it != py_spapr_vscsi_process_login.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_spapr_vscsi_process_tsk_mgmt(uint8_t func) {


		  for (auto it = py_spapr_vscsi_process_tsk_mgmt.begin(); it != py_spapr_vscsi_process_tsk_mgmt.end();
		       ++it) {
		    boost::python::call(*it,func);		  }

}
void cb_spapr_vscsi_queue_cmd_no_drive(uint64_t lun) {


		  for (auto it = py_spapr_vscsi_queue_cmd_no_drive.begin(); it != py_spapr_vscsi_queue_cmd_no_drive.end();
		       ++it) {
		    boost::python::call(*it,lun);		  }

}
void cb_spapr_vscsi_queue_cmd(uint32_t qtag,unsigned cdb,const char *cmd,int lun,int ret) {


		  for (auto it = py_spapr_vscsi_queue_cmd.begin(); it != py_spapr_vscsi_queue_cmd.end();
		       ++it) {
		    boost::python::call(*it,qtag,cdb,*cmd,lun,ret);		  }

}
void cb_spapr_vscsi_do_crq(unsigned c0,unsigned c1) {


		  for (auto it = py_spapr_vscsi_do_crq.begin(); it != py_spapr_vscsi_do_crq.end();
		       ++it) {
		    boost::python::call(*it,c0,c1);		  }

}

//# lsi53c895a.c
void cb_lsi_reset(void) {


		  for (auto it = py_lsi_reset.begin(); it != py_lsi_reset.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_lsi_update_irq(int level,uint8_t dstat,uint8_t sist1,uint8_t sist0) {


		  for (auto it = py_lsi_update_irq.begin(); it != py_lsi_update_irq.end();
		       ++it) {
		    boost::python::call(*it,level,dstat,sist1,sist0);		  }

}
void cb_lsi_update_irq_disconnected(void) {


		  for (auto it = py_lsi_update_irq_disconnected.begin(); it != py_lsi_update_irq_disconnected.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_lsi_script_scsi_interrupt(uint8_t stat1,uint8_t stat0,uint8_t sist1,uint8_t sist0) {


		  for (auto it = py_lsi_script_scsi_interrupt.begin(); it != py_lsi_script_scsi_interrupt.end();
		       ++it) {
		    boost::python::call(*it,stat1,stat0,sist1,sist0);		  }

}
void cb_lsi_script_dma_interrupt(uint8_t stat,uint8_t dstat) {


		  for (auto it = py_lsi_script_dma_interrupt.begin(); it != py_lsi_script_dma_interrupt.end();
		       ++it) {
		    boost::python::call(*it,stat,dstat);		  }

}
void cb_lsi_bad_phase_jump(uint32_t dsp) {


		  for (auto it = py_lsi_bad_phase_jump.begin(); it != py_lsi_bad_phase_jump.end();
		       ++it) {
		    boost::python::call(*it,dsp);		  }

}
void cb_lsi_bad_phase_interrupt(void) {


		  for (auto it = py_lsi_bad_phase_interrupt.begin(); it != py_lsi_bad_phase_interrupt.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_lsi_bad_selection(uint32_t id) {


		  for (auto it = py_lsi_bad_selection.begin(); it != py_lsi_bad_selection.end();
		       ++it) {
		    boost::python::call(*it,id);		  }

}
void cb_lsi_do_dma_unavailable(void) {


		  for (auto it = py_lsi_do_dma_unavailable.begin(); it != py_lsi_do_dma_unavailable.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_lsi_do_dma(uint64_t addr,int len) {


		  for (auto it = py_lsi_do_dma.begin(); it != py_lsi_do_dma.end();
		       ++it) {
		    boost::python::call(*it,addr,len);		  }

}
void cb_lsi_queue_command(uint32_t tag) {


		  for (auto it = py_lsi_queue_command.begin(); it != py_lsi_queue_command.end();
		       ++it) {
		    boost::python::call(*it,tag);		  }

}
void cb_lsi_add_msg_byte_error(void) {


		  for (auto it = py_lsi_add_msg_byte_error.begin(); it != py_lsi_add_msg_byte_error.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_lsi_add_msg_byte(uint8_t data) {


		  for (auto it = py_lsi_add_msg_byte.begin(); it != py_lsi_add_msg_byte.end();
		       ++it) {
		    boost::python::call(*it,data);		  }

}
void cb_lsi_reselect(int id) {


		  for (auto it = py_lsi_reselect.begin(); it != py_lsi_reselect.end();
		       ++it) {
		    boost::python::call(*it,id);		  }

}
void cb_lsi_queue_req_error(void *p) {


		  for (auto it = py_lsi_queue_req_error.begin(); it != py_lsi_queue_req_error.end();
		       ++it) {
		    boost::python::call(*it,*p);		  }

}
void cb_lsi_queue_req(uint32_t tag) {


		  for (auto it = py_lsi_queue_req.begin(); it != py_lsi_queue_req.end();
		       ++it) {
		    boost::python::call(*it,tag);		  }

}
void cb_lsi_command_complete(uint32_t status) {


		  for (auto it = py_lsi_command_complete.begin(); it != py_lsi_command_complete.end();
		       ++it) {
		    boost::python::call(*it,status);		  }

}
void cb_lsi_transfer_data(uint32_t tag,uint32_t len) {


		  for (auto it = py_lsi_transfer_data.begin(); it != py_lsi_transfer_data.end();
		       ++it) {
		    boost::python::call(*it,tag,len);		  }

}
void cb_lsi_do_command(uint32_t dbc) {


		  for (auto it = py_lsi_do_command.begin(); it != py_lsi_do_command.end();
		       ++it) {
		    boost::python::call(*it,dbc);		  }

}
void cb_lsi_do_status(uint32_t dbc,uint8_t status) {


		  for (auto it = py_lsi_do_status.begin(); it != py_lsi_do_status.end();
		       ++it) {
		    boost::python::call(*it,dbc,status);		  }

}
void cb_lsi_do_status_error(void) {


		  for (auto it = py_lsi_do_status_error.begin(); it != py_lsi_do_status_error.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_lsi_do_msgin(uint32_t dbc,int len) {


		  for (auto it = py_lsi_do_msgin.begin(); it != py_lsi_do_msgin.end();
		       ++it) {
		    boost::python::call(*it,dbc,len);		  }

}
void cb_lsi_do_msgout(uint32_t dbc) {


		  for (auto it = py_lsi_do_msgout.begin(); it != py_lsi_do_msgout.end();
		       ++it) {
		    boost::python::call(*it,dbc);		  }

}
void cb_lsi_do_msgout_disconnect(void) {


		  for (auto it = py_lsi_do_msgout_disconnect.begin(); it != py_lsi_do_msgout_disconnect.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_lsi_do_msgout_noop(void) {


		  for (auto it = py_lsi_do_msgout_noop.begin(); it != py_lsi_do_msgout_noop.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_lsi_do_msgout_extended(uint8_t msg,uint8_t len) {


		  for (auto it = py_lsi_do_msgout_extended.begin(); it != py_lsi_do_msgout_extended.end();
		       ++it) {
		    boost::python::call(*it,msg,len);		  }

}
void cb_lsi_do_msgout_ignored(const char *msg) {


		  for (auto it = py_lsi_do_msgout_ignored.begin(); it != py_lsi_do_msgout_ignored.end();
		       ++it) {
		    boost::python::call(*it,*msg);		  }

}
void cb_lsi_do_msgout_simplequeue(uint8_t select_tag) {


		  for (auto it = py_lsi_do_msgout_simplequeue.begin(); it != py_lsi_do_msgout_simplequeue.end();
		       ++it) {
		    boost::python::call(*it,select_tag);		  }

}
void cb_lsi_do_msgout_abort(uint32_t tag) {


		  for (auto it = py_lsi_do_msgout_abort.begin(); it != py_lsi_do_msgout_abort.end();
		       ++it) {
		    boost::python::call(*it,tag);		  }

}
void cb_lsi_do_msgout_clearqueue(uint32_t tag) {


		  for (auto it = py_lsi_do_msgout_clearqueue.begin(); it != py_lsi_do_msgout_clearqueue.end();
		       ++it) {
		    boost::python::call(*it,tag);		  }

}
void cb_lsi_do_msgout_busdevicereset(uint32_t tag) {


		  for (auto it = py_lsi_do_msgout_busdevicereset.begin(); it != py_lsi_do_msgout_busdevicereset.end();
		       ++it) {
		    boost::python::call(*it,tag);		  }

}
void cb_lsi_do_msgout_select(int id) {


		  for (auto it = py_lsi_do_msgout_select.begin(); it != py_lsi_do_msgout_select.end();
		       ++it) {
		    boost::python::call(*it,id);		  }

}
void cb_lsi_memcpy(uint32_t dest,uint32_t src,int count) {


		  for (auto it = py_lsi_memcpy.begin(); it != py_lsi_memcpy.end();
		       ++it) {
		    boost::python::call(*it,dest,src,count);		  }

}
void cb_lsi_wait_reselect(void) {


		  for (auto it = py_lsi_wait_reselect.begin(); it != py_lsi_wait_reselect.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_lsi_execute_script(uint32_t dsp,uint32_t insn,uint32_t addr) {


		  for (auto it = py_lsi_execute_script.begin(); it != py_lsi_execute_script.end();
		       ++it) {
		    boost::python::call(*it,dsp,insn,addr);		  }

}
void cb_lsi_execute_script_blockmove_delayed(void) {


		  for (auto it = py_lsi_execute_script_blockmove_delayed.begin(); it != py_lsi_execute_script_blockmove_delayed.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_lsi_execute_script_blockmove_badphase(const char *phase,const char *expected) {


		  for (auto it = py_lsi_execute_script_blockmove_badphase.begin(); it != py_lsi_execute_script_blockmove_badphase.end();
		       ++it) {
		    boost::python::call(*it,*phase,*expected);		  }

}
void cb_lsi_execute_script_io_alreadyreselected(void) {


		  for (auto it = py_lsi_execute_script_io_alreadyreselected.begin(); it != py_lsi_execute_script_io_alreadyreselected.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_lsi_execute_script_io_selected(uint8_t id,const char *atn) {


		  for (auto it = py_lsi_execute_script_io_selected.begin(); it != py_lsi_execute_script_io_selected.end();
		       ++it) {
		    boost::python::call(*it,id,*atn);		  }

}
void cb_lsi_execute_script_io_disconnect(void) {


		  for (auto it = py_lsi_execute_script_io_disconnect.begin(); it != py_lsi_execute_script_io_disconnect.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_lsi_execute_script_io_set(const char *atn,const char *ack,const char *tm,const char *cc) {


		  for (auto it = py_lsi_execute_script_io_set.begin(); it != py_lsi_execute_script_io_set.end();
		       ++it) {
		    boost::python::call(*it,*atn,*ack,*tm,*cc);		  }

}
void cb_lsi_execute_script_io_clear(const char *atn,const char *ack,const char *tm,const char *cc) {


		  for (auto it = py_lsi_execute_script_io_clear.begin(); it != py_lsi_execute_script_io_clear.end();
		       ++it) {
		    boost::python::call(*it,*atn,*ack,*tm,*cc);		  }

}
void cb_lsi_execute_script_io_opcode(const char *opcode,int reg,const char *opname,uint8_t data8,uint32_t sfbr,const char *ssfbr) {


		  for (auto it = py_lsi_execute_script_io_opcode.begin(); it != py_lsi_execute_script_io_opcode.end();
		       ++it) {
		    boost::python::call(*it,*opcode,reg,*opname,data8,sfbr,*ssfbr);		  }

}
void cb_lsi_execute_script_tc_nop(void) {


		  for (auto it = py_lsi_execute_script_tc_nop.begin(); it != py_lsi_execute_script_tc_nop.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_lsi_execute_script_tc_delayedselect_timeout(void) {


		  for (auto it = py_lsi_execute_script_tc_delayedselect_timeout.begin(); it != py_lsi_execute_script_tc_delayedselect_timeout.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_lsi_execute_script_tc_compc(int result) {


		  for (auto it = py_lsi_execute_script_tc_compc.begin(); it != py_lsi_execute_script_tc_compc.end();
		       ++it) {
		    boost::python::call(*it,result);		  }

}
void cb_lsi_execute_script_tc_compp(const char *phase,char op,const char *insn_phase) {


		  for (auto it = py_lsi_execute_script_tc_compp.begin(); it != py_lsi_execute_script_tc_compp.end();
		       ++it) {
		    boost::python::call(*it,*phase,op,*insn_phase);		  }

}
void cb_lsi_execute_script_tc_compd(uint32_t sfbr,uint8_t mask,char op,int result) {


		  for (auto it = py_lsi_execute_script_tc_compd.begin(); it != py_lsi_execute_script_tc_compd.end();
		       ++it) {
		    boost::python::call(*it,sfbr,mask,op,result);		  }

}
void cb_lsi_execute_script_tc_jump(uint32_t addr) {


		  for (auto it = py_lsi_execute_script_tc_jump.begin(); it != py_lsi_execute_script_tc_jump.end();
		       ++it) {
		    boost::python::call(*it,addr);		  }

}
void cb_lsi_execute_script_tc_call(uint32_t addr) {


		  for (auto it = py_lsi_execute_script_tc_call.begin(); it != py_lsi_execute_script_tc_call.end();
		       ++it) {
		    boost::python::call(*it,addr);		  }

}
void cb_lsi_execute_script_tc_return(uint32_t addr) {


		  for (auto it = py_lsi_execute_script_tc_return.begin(); it != py_lsi_execute_script_tc_return.end();
		       ++it) {
		    boost::python::call(*it,addr);		  }

}
void cb_lsi_execute_script_tc_interrupt(uint32_t addr) {


		  for (auto it = py_lsi_execute_script_tc_interrupt.begin(); it != py_lsi_execute_script_tc_interrupt.end();
		       ++it) {
		    boost::python::call(*it,addr);		  }

}
void cb_lsi_execute_script_tc_illegal(void) {


		  for (auto it = py_lsi_execute_script_tc_illegal.begin(); it != py_lsi_execute_script_tc_illegal.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_lsi_execute_script_tc_cc_failed(void) {


		  for (auto it = py_lsi_execute_script_tc_cc_failed.begin(); it != py_lsi_execute_script_tc_cc_failed.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_lsi_execute_script_mm_load(int reg,int n,uint32_t addr,int data) {


		  for (auto it = py_lsi_execute_script_mm_load.begin(); it != py_lsi_execute_script_mm_load.end();
		       ++it) {
		    boost::python::call(*it,reg,n,addr,data);		  }

}
void cb_lsi_execute_script_mm_store(int reg,int n,uint32_t addr) {


		  for (auto it = py_lsi_execute_script_mm_store.begin(); it != py_lsi_execute_script_mm_store.end();
		       ++it) {
		    boost::python::call(*it,reg,n,addr);		  }

}
void cb_lsi_execute_script_stop(void) {


		  for (auto it = py_lsi_execute_script_stop.begin(); it != py_lsi_execute_script_stop.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_lsi_awoken(void) {


		  for (auto it = py_lsi_awoken.begin(); it != py_lsi_awoken.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_lsi_reg_read(const char *name,int offset,uint8_t ret) {


		  for (auto it = py_lsi_reg_read.begin(); it != py_lsi_reg_read.end();
		       ++it) {
		    boost::python::call(*it,*name,offset,ret);		  }

}
void cb_lsi_reg_write(const char *name,int offset,uint8_t val) {


		  for (auto it = py_lsi_reg_write.begin(); it != py_lsi_reg_write.end();
		       ++it) {
		    boost::python::call(*it,*name,offset,val);		  }

}

//# virtio-scsi.c
void cb_virtio_scsi_cmd_req(int lun,uint32_t tag,uint8_t cmd) {


		  for (auto it = py_virtio_scsi_cmd_req.begin(); it != py_virtio_scsi_cmd_req.end();
		       ++it) {
		    boost::python::call(*it,lun,tag,cmd);		  }

}
void cb_virtio_scsi_cmd_resp(int lun,uint32_t tag,int response,uint8_t status) {


		  for (auto it = py_virtio_scsi_cmd_resp.begin(); it != py_virtio_scsi_cmd_resp.end();
		       ++it) {
		    boost::python::call(*it,lun,tag,response,status);		  }

}
void cb_virtio_scsi_tmf_req(int lun,uint32_t tag,int subtype) {


		  for (auto it = py_virtio_scsi_tmf_req.begin(); it != py_virtio_scsi_tmf_req.end();
		       ++it) {
		    boost::python::call(*it,lun,tag,subtype);		  }

}
void cb_virtio_scsi_tmf_resp(int lun,uint32_t tag,int response) {


		  for (auto it = py_virtio_scsi_tmf_resp.begin(); it != py_virtio_scsi_tmf_resp.end();
		       ++it) {
		    boost::python::call(*it,lun,tag,response);		  }

}
void cb_virtio_scsi_an_req(int lun,uint32_t event_requested) {


		  for (auto it = py_virtio_scsi_an_req.begin(); it != py_virtio_scsi_an_req.end();
		       ++it) {
		    boost::python::call(*it,lun,event_requested);		  }

}
void cb_virtio_scsi_an_resp(int lun,int response) {


		  for (auto it = py_virtio_scsi_an_resp.begin(); it != py_virtio_scsi_an_resp.end();
		       ++it) {
		    boost::python::call(*it,lun,response);		  }

}
void cb_virtio_scsi_event(int lun,int event,int reason) {


		  for (auto it = py_virtio_scsi_event.begin(); it != py_virtio_scsi_event.end();
		       ++it) {
		    boost::python::call(*it,lun,event,reason);		  }

}

//# scsi-disk.c
void cb_scsi_disk_check_condition(uint32_t tag,uint8_t key,uint8_t asc,uint8_t ascq) {


		  for (auto it = py_scsi_disk_check_condition.begin(); it != py_scsi_disk_check_condition.end();
		       ++it) {
		    boost::python::call(*it,tag,key,asc,ascq);		  }

}
void cb_scsi_disk_read_complete(uint32_t tag,size_t size) {


		  for (auto it = py_scsi_disk_read_complete.begin(); it != py_scsi_disk_read_complete.end();
		       ++it) {
		    boost::python::call(*it,tag,sizesize);		  }

}
void cb_scsi_disk_read_data_count(uint32_t sector_count) {


		  for (auto it = py_scsi_disk_read_data_count.begin(); it != py_scsi_disk_read_data_count.end();
		       ++it) {
		    boost::python::call(*it,sector_count);		  }

}
void cb_scsi_disk_read_data_invalid(void) {


		  for (auto it = py_scsi_disk_read_data_invalid.begin(); it != py_scsi_disk_read_data_invalid.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_scsi_disk_write_complete_noio(uint32_t tag,size_t size) {


		  for (auto it = py_scsi_disk_write_complete_noio.begin(); it != py_scsi_disk_write_complete_noio.end();
		       ++it) {
		    boost::python::call(*it,tag,sizesize);		  }

}
void cb_scsi_disk_write_data_invalid(void) {


		  for (auto it = py_scsi_disk_write_data_invalid.begin(); it != py_scsi_disk_write_data_invalid.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_scsi_disk_emulate_vpd_page_00(size_t xfer) {


		  for (auto it = py_scsi_disk_emulate_vpd_page_00.begin(); it != py_scsi_disk_emulate_vpd_page_00.end();
		       ++it) {
		    boost::python::call(*it,sizexfer);		  }

}
void cb_scsi_disk_emulate_vpd_page_80_not_supported(void) {


		  for (auto it = py_scsi_disk_emulate_vpd_page_80_not_supported.begin(); it != py_scsi_disk_emulate_vpd_page_80_not_supported.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_scsi_disk_emulate_vpd_page_80(size_t xfer) {


		  for (auto it = py_scsi_disk_emulate_vpd_page_80.begin(); it != py_scsi_disk_emulate_vpd_page_80.end();
		       ++it) {
		    boost::python::call(*it,sizexfer);		  }

}
void cb_scsi_disk_emulate_vpd_page_83(size_t xfer) {


		  for (auto it = py_scsi_disk_emulate_vpd_page_83.begin(); it != py_scsi_disk_emulate_vpd_page_83.end();
		       ++it) {
		    boost::python::call(*it,sizexfer);		  }

}
void cb_scsi_disk_emulate_vpd_page_b0_not_supported(void) {


		  for (auto it = py_scsi_disk_emulate_vpd_page_b0_not_supported.begin(); it != py_scsi_disk_emulate_vpd_page_b0_not_supported.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_scsi_disk_emulate_mode_sense(int cmd,int page,size_t xfer,int control) {


		  for (auto it = py_scsi_disk_emulate_mode_sense.begin(); it != py_scsi_disk_emulate_mode_sense.end();
		       ++it) {
		    boost::python::call(*it,cmd,page,sizexfer,control);		  }

}
void cb_scsi_disk_emulate_read_toc(int start_track,int format,int msf) {


		  for (auto it = py_scsi_disk_emulate_read_toc.begin(); it != py_scsi_disk_emulate_read_toc.end();
		       ++it) {
		    boost::python::call(*it,start_track,format,msf);		  }

}
void cb_scsi_disk_emulate_read_data(int buflen) {


		  for (auto it = py_scsi_disk_emulate_read_data.begin(); it != py_scsi_disk_emulate_read_data.end();
		       ++it) {
		    boost::python::call(*it,buflen);		  }

}
void cb_scsi_disk_emulate_write_data(int buflen) {


		  for (auto it = py_scsi_disk_emulate_write_data.begin(); it != py_scsi_disk_emulate_write_data.end();
		       ++it) {
		    boost::python::call(*it,buflen);		  }

}
void cb_scsi_disk_emulate_command_SAI_16(void) {


		  for (auto it = py_scsi_disk_emulate_command_SAI_16.begin(); it != py_scsi_disk_emulate_command_SAI_16.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_scsi_disk_emulate_command_SAI_unsupported(void) {


		  for (auto it = py_scsi_disk_emulate_command_SAI_unsupported.begin(); it != py_scsi_disk_emulate_command_SAI_unsupported.end();
		       ++it) {
		    boost::python::call(*it);		  }

}
void cb_scsi_disk_emulate_command_SEEK_10(uint64_t lba) {


		  for (auto it = py_scsi_disk_emulate_command_SEEK_10.begin(); it != py_scsi_disk_emulate_command_SEEK_10.end();
		       ++it) {
		    boost::python::call(*it,lba);		  }

}
void cb_scsi_disk_emulate_command_MODE_SELECT(size_t xfer) {


		  for (auto it = py_scsi_disk_emulate_command_MODE_SELECT.begin(); it != py_scsi_disk_emulate_command_MODE_SELECT.end();
		       ++it) {
		    boost::python::call(*it,sizexfer);		  }

}
void cb_scsi_disk_emulate_command_MODE_SELECT_10(size_t xfer) {


		  for (auto it = py_scsi_disk_emulate_command_MODE_SELECT_10.begin(); it != py_scsi_disk_emulate_command_MODE_SELECT_10.end();
		       ++it) {
		    boost::python::call(*it,sizexfer);		  }

}
void cb_scsi_disk_emulate_command_UNMAP(size_t xfer) {


		  for (auto it = py_scsi_disk_emulate_command_UNMAP.begin(); it != py_scsi_disk_emulate_command_UNMAP.end();
		       ++it) {
		    boost::python::call(*it,sizexfer);		  }

}
void cb_scsi_disk_emulate_command_VERIFY(int bytchk) {


		  for (auto it = py_scsi_disk_emulate_command_VERIFY.begin(); it != py_scsi_disk_emulate_command_VERIFY.end();
		       ++it) {
		    boost::python::call(*it,bytchk);		  }

}
void cb_scsi_disk_emulate_command_WRITE_SAME(int cmd,size_t xfer) {


		  for (auto it = py_scsi_disk_emulate_command_WRITE_SAME.begin(); it != py_scsi_disk_emulate_command_WRITE_SAME.end();
		       ++it) {
		    boost::python::call(*it,cmd,sizexfer);		  }

}
void cb_scsi_disk_emulate_command_UNKNOWN(int cmd,const char *name) {


		  for (auto it = py_scsi_disk_emulate_command_UNKNOWN.begin(); it != py_scsi_disk_emulate_command_UNKNOWN.end();
		       ++it) {
		    boost::python::call(*it,cmd,*name);		  }

}
void cb_scsi_disk_dma_command_READ(uint64_t lba,uint32_t len) {


		  for (auto it = py_scsi_disk_dma_command_READ.begin(); it != py_scsi_disk_dma_command_READ.end();
		       ++it) {
		    boost::python::call(*it,lba,len);		  }

}
void cb_scsi_disk_dma_command_WRITE(const char *cmd,uint64_t lba,int len) {


		  for (auto it = py_scsi_disk_dma_command_WRITE.begin(); it != py_scsi_disk_dma_command_WRITE.end();
		       ++it) {
		    boost::python::call(*it,*cmd,lba,len);		  }

}
void cb_scsi_disk_new_request(uint32_t lun,uint32_t tag,const char *line) {


		  for (auto it = py_scsi_disk_new_request.begin(); it != py_scsi_disk_new_request.end();
		       ++it) {
		    boost::python::call(*it,lun,tag,*line);		  }

}

//# scsi-generic.c
void cb_scsi_generic_command_complete_noio(void *req,uint32_t tag,int statuc) {


		  for (auto it = py_scsi_generic_command_complete_noio.begin(); it != py_scsi_generic_command_complete_noio.end();
		       ++it) {
		    boost::python::call(*it,*req,tag,statuc);		  }

}
void cb_scsi_generic_read_complete(uint32_t tag,int len) {


		  for (auto it = py_scsi_generic_read_complete.begin(); it != py_scsi_generic_read_complete.end();
		       ++it) {
		    boost::python::call(*it,tag,len);		  }

}
void cb_scsi_generic_read_data(uint32_t tag) {


		  for (auto it = py_scsi_generic_read_data.begin(); it != py_scsi_generic_read_data.end();
		       ++it) {
		    boost::python::call(*it,tag);		  }

}
void cb_scsi_generic_write_complete(int ret) {


		  for (auto it = py_scsi_generic_write_complete.begin(); it != py_scsi_generic_write_complete.end();
		       ++it) {
		    boost::python::call(*it,ret);		  }

}
void cb_scsi_generic_write_complete_blocksize(int blocksize) {


		  for (auto it = py_scsi_generic_write_complete_blocksize.begin(); it != py_scsi_generic_write_complete_blocksize.end();
		       ++it) {
		    boost::python::call(*it,blocksize);		  }

}
void cb_scsi_generic_write_data(uint32_t tag) {


		  for (auto it = py_scsi_generic_write_data.begin(); it != py_scsi_generic_write_data.end();
		       ++it) {
		    boost::python::call(*it,tag);		  }

}
void cb_scsi_generic_send_command(const char *line) {


		  for (auto it = py_scsi_generic_send_command.begin(); it != py_scsi_generic_send_command.end();
		       ++it) {
		    boost::python::call(*it,*line);		  }

}
void cb_scsi_generic_realize_type(int type) {


		  for (auto it = py_scsi_generic_realize_type.begin(); it != py_scsi_generic_realize_type.end();
		       ++it) {
		    boost::python::call(*it,type);		  }

}
void cb_scsi_generic_realize_blocksize(int blocksize) {


		  for (auto it = py_scsi_generic_realize_blocksize.begin(); it != py_scsi_generic_realize_blocksize.end();
		       ++it) {
		    boost::python::call(*it,blocksize);		  }

}
