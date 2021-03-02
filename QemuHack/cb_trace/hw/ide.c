//# See docs/devel/tracing.txt for syntax documentation.

//# core.c
//# portio
void cb_ide_ioport_read(uint32_t addr,const char *reg,uint32_t val,void *bus,void *s)  {



						for(auto it = ide_ioport_read.begin(); it != py_ide_ioport_read.end(); ++it){
							boost::python::call(*it,addr,*reg,val,bus,s);
						}

}
void cb_ide_ioport_write(uint32_t addr,const char *reg,uint32_t val,void *bus,void *s) {



						for(auto it = ide_ioport_write.begin(); it != py_ide_ioport_write.end(); ++it){
							boost::python::call(*it,addr,*reg,val,bus,s);
						}

}
void cb_ide_status_read(uint32_t addr,uint32_t val,void *bus,void *s)                   {



						for(auto it = ide_status_read.begin(); it != py_ide_status_read.end(); ++it){
							boost::python::call(*it,addr,val,bus,s)                 );
						}

}
void cb_ide_ctrl_write(uint32_t addr,uint32_t val,void *bus)                             {



						for(auto it = ide_ctrl_write.begin(); it != py_ide_ctrl_write.end(); ++it){
							boost::python::call(*it,addr,val,bus)                           );
						}

}
//# Warning: verbose
void cb_ide_data_readw(uint32_t addr,uint32_t val,void *bus,void *s)                    {



						for(auto it = ide_data_readw.begin(); it != py_ide_data_readw.end(); ++it){
							boost::python::call(*it,addr,val,bus,s)                  ;
						}

}
void cb_ide_data_writew(uint32_t addr,uint32_t val,void *bus,void *s)                   {



						for(auto it = ide_data_writew.begin(); it != py_ide_data_writew.end(); ++it){
							boost::python::call(*it,addr,val,bus,s)                 ;
						}

}
void cb_ide_data_readl(uint32_t addr,uint32_t val,void *bus,void *s)                    {



						for(auto it = ide_data_readl.begin(); it != py_ide_data_readl.end(); ++it){
							boost::python::call(*it,addr,val,bus,s)                  ;
						}

}
void cb_ide_data_writel(uint32_t addr,uint32_t val,void *bus,void *s)                   {



						for(auto it = ide_data_writel.begin(); it != py_ide_data_writel.end(); ++it){
							boost::python::call(*it,addr,val,bus,s)                 );
						}

}
//# misc
void cb_ide_exec_cmd(void *bus,void *state,uint32_t cmd) {



						for(auto it = ide_exec_cmd.begin(); it != py_ide_exec_cmd.end(); ++it){
							boost::python::call(*it,bus,state,cmd);
						}

}
void cb_ide_cancel_dma_sync_buffered(void *fn,void *req) {



						for(auto it = ide_cancel_dma_sync_buffered.begin(); it != py_ide_cancel_dma_sync_buffered.end(); ++it){
							boost::python::call(*it,fn,req);
						}

}
void cb_ide_cancel_dma_sync_remaining(void) {



						for(auto it = ide_cancel_dma_sync_remaining.begin(); it != py_ide_cancel_dma_sync_remaining.end(); ++it){
							boost::python::call(*it);
						}

}
void cb_ide_sector_read(int64_t sector_num,int nsectors) {



						for(auto it = ide_sector_read.begin(); it != py_ide_sector_read.end(); ++it){
							boost::python::call(*it,sector_num,nsectors);
						}

}
void cb_ide_sector_write(int64_t sector_num,int nsectors) {



						for(auto it = ide_sector_write.begin(); it != py_ide_sector_write.end(); ++it){
							boost::python::call(*it,sector_num,nsectors);
						}

}
void cb_ide_reset(void *s) {



						for(auto it = ide_reset.begin(); it != py_ide_reset.end(); ++it){
							boost::python::call(*it,s);
						}

}
void cb_ide_bus_reset_aio(void) {



						for(auto it = ide_bus_reset_aio.begin(); it != py_ide_bus_reset_aio.end(); ++it){
							boost::python::call(*it);
						}

}
void cb_ide_dma_cb(void *s,int64_t sector_num,int n,const char *dma) {



						for(auto it = ide_dma_cb.begin(); it != py_ide_dma_cb.end(); ++it){
							boost::python::call(*it,s,sector_num,n,*dma);
						}

}

//# BMDMA HBAs:

//# cmd646.c
void cb_bmdma_read_cmd646(uint64_t addr,uint32_t val) {



						for(auto it = bmdma_read_cmd646.begin(); it != py_bmdma_read_cmd646.end(); ++it){
							boost::python::call(*it,addr,val);
						}

}
void cb_bmdma_write_cmd646(uint64_t addr,uint64_t val) {



						for(auto it = bmdma_write_cmd646.begin(); it != py_bmdma_write_cmd646.end(); ++it){
							boost::python::call(*it,addr,val);
						}

}

//# pci.c
void cb_bmdma_reset(void) {



						for(auto it = bmdma_reset.begin(); it != py_bmdma_reset.end(); ++it){
							boost::python::call(*it);
						}

}
void cb_bmdma_cmd_writeb(uint32_t val) {



						for(auto it = bmdma_cmd_writeb.begin(); it != py_bmdma_cmd_writeb.end(); ++it){
							boost::python::call(*it,val);
						}

}
void cb_bmdma_addr_read(uint64_t data) {



						for(auto it = bmdma_addr_read.begin(); it != py_bmdma_addr_read.end(); ++it){
							boost::python::call(*it,data);
						}

}
void cb_bmdma_addr_write(uint64_t data) {



						for(auto it = bmdma_addr_write.begin(); it != py_bmdma_addr_write.end(); ++it){
							boost::python::call(*it,data);
						}

}

//# piix.c
void cb_bmdma_read(uint64_t addr,uint8_t val) {



						for(auto it = bmdma_read.begin(); it != py_bmdma_read.end(); ++it){
							boost::python::call(*it,addr,val);
						}

}
void cb_bmdma_write(uint64_t addr,uint64_t val) {



						for(auto it = bmdma_write.begin(); it != py_bmdma_write.end(); ++it){
							boost::python::call(*it,addr,val);
						}

}

//# sii3112.c
void cb_sii3112_read(int size,uint64_t addr,uint64_t val) {



						for(auto it = sii3112_read.begin(); it != py_sii3112_read.end(); ++it){
							boost::python::call(*it,size,addr,val);
						}

}
void cb_sii3112_write(int size,uint64_t addr,uint64_t val) {



						for(auto it = sii3112_write.begin(); it != py_sii3112_write.end(); ++it){
							boost::python::call(*it,size,addr,val);
						}

}
void cb_sii3112_set_irq(int channel,int level) {



						for(auto it = sii3112_set_irq.begin(); it != py_sii3112_set_irq.end(); ++it){
							boost::python::call(*it,channel,level);
						}

}

//# via.c
void cb_bmdma_read_via(uint64_t addr,uint32_t val) {



						for(auto it = bmdma_read_via.begin(); it != py_bmdma_read_via.end(); ++it){
							boost::python::call(*it,addr,val);
						}

}
void cb_bmdma_write_via(uint64_t addr,uint64_t val) {



						for(auto it = bmdma_write_via.begin(); it != py_bmdma_write_via.end(); ++it){
							boost::python::call(*it,addr,val);
						}

}

//# atapi.c
void cb_cd_read_sector_sync(int lba) {



						for(auto it = cd_read_sector_sync.begin(); it != py_cd_read_sector_sync.end(); ++it){
							boost::python::call(*it,lba);
						}

}
void cb_cd_read_sector_cb(int lba,int ret) {



						for(auto it = cd_read_sector_cb.begin(); it != py_cd_read_sector_cb.end(); ++it){
							boost::python::call(*it,lba,ret);
						}

}
void cb_cd_read_sector(int lba) {



						for(auto it = cd_read_sector.begin(); it != py_cd_read_sector.end(); ++it){
							boost::python::call(*it,lba);
						}

}
void cb_ide_atapi_cmd_error(void *s,int sense_key,int asc) {



						for(auto it = ide_atapi_cmd_error.begin(); it != py_ide_atapi_cmd_error.end(); ++it){
							boost::python::call(*it,s,sense_key,asc);
						}

}
void cb_ide_atapi_cmd_reply_end(void *s,int tx_size,int elem_tx_size,int32_t index) {



						for(auto it = ide_atapi_cmd_reply_end.begin(); it != py_ide_atapi_cmd_reply_end.end(); ++it){
							boost::python::call(*it,s,tx_size,elem_tx_size,index);
						}

}
void cb_ide_atapi_cmd_reply_end_eot(void *s,int status) {



						for(auto it = ide_atapi_cmd_reply_end_eot.begin(); it != py_ide_atapi_cmd_reply_end_eot.end(); ++it){
							boost::python::call(*it,s,status);
						}

}
void cb_ide_atapi_cmd_reply_end_bcl(void *s,int bcl) {



						for(auto it = ide_atapi_cmd_reply_end_bcl.begin(); it != py_ide_atapi_cmd_reply_end_bcl.end(); ++it){
							boost::python::call(*it,s,bcl);
						}

}
void cb_ide_atapi_cmd_reply_end_new(void *s,int status) {



						for(auto it = ide_atapi_cmd_reply_end_new.begin(); it != py_ide_atapi_cmd_reply_end_new.end(); ++it){
							boost::python::call(*it,s,status);
						}

}
void cb_ide_atapi_cmd_check_status(void *s) {



						for(auto it = ide_atapi_cmd_check_status.begin(); it != py_ide_atapi_cmd_check_status.end(); ++it){
							boost::python::call(*it,s);
						}

}
void cb_ide_atapi_cmd_read(void *s,const char *method,int lba,int nb_sectors) {



						for(auto it = ide_atapi_cmd_read.begin(); it != py_ide_atapi_cmd_read.end(); ++it){
							boost::python::call(*it,s,*method,lba,nb_sectors);
						}

}
void cb_ide_atapi_cmd(void *s,uint8_t cmd) {



						for(auto it = ide_atapi_cmd.begin(); it != py_ide_atapi_cmd.end(); ++it){
							boost::python::call(*it,s,cmd);
						}

}
void cb_ide_atapi_cmd_read_dma_cb_aio(void *s,int lba,int n) {



						for(auto it = ide_atapi_cmd_read_dma_cb_aio.begin(); it != py_ide_atapi_cmd_read_dma_cb_aio.end(); ++it){
							boost::python::call(*it,s,lba,n);
						}

}
//# Warning: Verbose
void cb_ide_atapi_cmd_packet(void *s,uint16_t limit,const char *packet) {



						for(auto it = ide_atapi_cmd_packet.begin(); it != py_ide_atapi_cmd_packet.end(); ++it){
							boost::python::call(*it,s,limit,*packet);
						}

}

//# ahci.c
void cb_ahci_port_read(void *s,int port,const char *reg,int offset,uint32_t ret) {



						for(auto it = ahci_port_read.begin(); it != py_ahci_port_read.end(); ++it){
							boost::python::call(*it,s,port,*reg,offset,ret);
						}

}
void cb_ahci_port_read_default(void *s,int port,const char *reg,int offset) {



						for(auto it = ahci_port_read_default.begin(); it != py_ahci_port_read_default.end(); ++it){
							boost::python::call(*it,s,port,*reg,offset);
						}

}
void cb_ahci_irq_raise(void *s) {



						for(auto it = ahci_irq_raise.begin(); it != py_ahci_irq_raise.end(); ++it){
							boost::python::call(*it,s);
						}

}
void cb_ahci_irq_lower(void *s) {



						for(auto it = ahci_irq_lower.begin(); it != py_ahci_irq_lower.end(); ++it){
							boost::python::call(*it,s);
						}

}
void cb_ahci_check_irq(void *s,uint32_t old,uint32_t new) {



						for(auto it = ahci_check_irq.begin(); it != py_ahci_check_irq.end(); ++it){
							boost::python::call(*it,s,old,new);
						}

}
void cb_ahci_trigger_irq(void *s,int port,const char *name,uint32_t val,uint32_t old,uint32_t new,uint32_t effective) {



						for(auto it = ahci_trigger_irq.begin(); it != py_ahci_trigger_irq.end(); ++it){
							boost::python::call(*it,s,port,*name,val,old,new,effective);
						}

}
void cb_ahci_port_write(void *s,int port,const char *reg,int offset,uint32_t val) {



						for(auto it = ahci_port_write.begin(); it != py_ahci_port_write.end(); ++it){
							boost::python::call(*it,s,port,*reg,offset,val);
						}

}
void cb_ahci_port_write_unimpl(void *s,int port,const char *reg,int offset,uint32_t val) {



						for(auto it = ahci_port_write_unimpl.begin(); it != py_ahci_port_write_unimpl.end(); ++it){
							boost::python::call(*it,s,port,*reg,offset,val);
						}

}
void cb_ahci_mem_read_32(void *s,uint64_t addr,uint32_t val) {



						for(auto it = ahci_mem_read_32.begin(); it != py_ahci_mem_read_32.end(); ++it){
							boost::python::call(*it,s,addr,val);
						}

}
void cb_ahci_mem_read_32_default(void *s,uint64_t addr,uint32_t val) {



						for(auto it = ahci_mem_read_32_default.begin(); it != py_ahci_mem_read_32_default.end(); ++it){
							boost::python::call(*it,s,addr,val);
						}

}
void cb_ahci_mem_read_32_host(void *s,const char *reg,uint64_t addr,uint32_t val) {



						for(auto it = ahci_mem_read_32_host.begin(); it != py_ahci_mem_read_32_host.end(); ++it){
							boost::python::call(*it,s,*reg,addr,val);
						}

}
void cb_ahci_mem_read_32_host_default(void *s,const char *reg,uint64_t addr) {



						for(auto it = ahci_mem_read_32_host_default.begin(); it != py_ahci_mem_read_32_host_default.end(); ++it){
							boost::python::call(*it,s,*reg,addr);
						}

}
void cb_ahci_mem_read(void *s,unsigned size,uint64_t addr,uint64_t val) {



						for(auto it = ahci_mem_read.begin(); it != py_ahci_mem_read.end(); ++it){
							boost::python::call(*it,s,size,addr,val);
						}

}
void cb_ahci_mem_write(void *s,unsigned size,uint64_t addr,uint64_t val) {



						for(auto it = ahci_mem_write.begin(); it != py_ahci_mem_write.end(); ++it){
							boost::python::call(*it,s,size,addr,val);
						}

}
void cb_ahci_mem_write_host_unimpl(void *s,unsigned size,const char *reg,uint64_t addr) {



						for(auto it = ahci_mem_write_host_unimpl.begin(); it != py_ahci_mem_write_host_unimpl.end(); ++it){
							boost::python::call(*it,s,size,*reg,addr);
						}

}
void cb_ahci_mem_write_host(void *s,unsigned size,const char *reg,uint64_t addr,uint64_t val) {



						for(auto it = ahci_mem_write_host.begin(); it != py_ahci_mem_write_host.end(); ++it){
							boost::python::call(*it,s,size,*reg,addr,val);
						}

}
void cb_ahci_mem_write_unimpl(void *s,unsigned size,uint64_t addr,uint64_t val) {



						for(auto it = ahci_mem_write_unimpl.begin(); it != py_ahci_mem_write_unimpl.end(); ++it){
							boost::python::call(*it,s,size,addr,val);
						}

}
void cb_ahci_set_signature(void *s,int port,uint8_t nsector,uint8_t sector,uint8_t lcyl,uint8_t hcyl,uint32_t sig) {



						for(auto it = ahci_set_signature.begin(); it != py_ahci_set_signature.end(); ++it){
							boost::python::call(*it,s,port,nsector,sector,lcyl,hcyl,sig);
						}

}
void cb_ahci_reset_port(void *s,int port) {



						for(auto it = ahci_reset_port.begin(); it != py_ahci_reset_port.end(); ++it){
							boost::python::call(*it,s,port);
						}

}
void cb_ahci_unmap_fis_address_null(void *s,int port) {



						for(auto it = ahci_unmap_fis_address_null.begin(); it != py_ahci_unmap_fis_address_null.end(); ++it){
							boost::python::call(*it,s,port);
						}

}
void cb_ahci_unmap_clb_address_null(void *s,int port) {



						for(auto it = ahci_unmap_clb_address_null.begin(); it != py_ahci_unmap_clb_address_null.end(); ++it){
							boost::python::call(*it,s,port);
						}

}
void cb_ahci_populate_sglist(void *s,int port) {



						for(auto it = ahci_populate_sglist.begin(); it != py_ahci_populate_sglist.end(); ++it){
							boost::python::call(*it,s,port);
						}

}
void cb_ahci_populate_sglist_no_prdtl(void *s,int port,uint16_t opts) {



						for(auto it = ahci_populate_sglist_no_prdtl.begin(); it != py_ahci_populate_sglist_no_prdtl.end(); ++it){
							boost::python::call(*it,s,port,opts);
						}

}
void cb_ahci_populate_sglist_no_map(void *s,int port) {



						for(auto it = ahci_populate_sglist_no_map.begin(); it != py_ahci_populate_sglist_no_map.end(); ++it){
							boost::python::call(*it,s,port);
						}

}
void cb_ahci_populate_sglist_short_map(void *s,int port) {



						for(auto it = ahci_populate_sglist_short_map.begin(); it != py_ahci_populate_sglist_short_map.end(); ++it){
							boost::python::call(*it,s,port);
						}

}
void cb_ahci_populate_sglist_bad_offset(void *s,int port,int off_idx,int64_t off_pos) {



						for(auto it = ahci_populate_sglist_bad_offset.begin(); it != py_ahci_populate_sglist_bad_offset.end(); ++it){
							boost::python::call(*it,s,port,off_idx,off_pos);
						}

}
void cb_ncq_finish(void *s,int port,uint8_t tag) {



						for(auto it = ncq_finish.begin(); it != py_ncq_finish.end(); ++it){
							boost::python::call(*it,s,port,tag);
						}

}
void cb_execute_ncq_command_read(void *s,int port,uint8_t tag,int count,int64_t lba) {



						for(auto it = execute_ncq_command_read.begin(); it != py_execute_ncq_command_read.end(); ++it){
							boost::python::call(*it,s,port,tag,count,lba);
						}

}
void cb_execute_ncq_command_unsup(void *s,int port,uint8_t tag,uint8_t cmd) {



						for(auto it = execute_ncq_command_unsup.begin(); it != py_execute_ncq_command_unsup.end(); ++it){
							boost::python::call(*it,s,port,tag,cmd);
						}

}
void cb_process_ncq_command_mismatch(void *s,int port,uint8_t tag,uint8_t slot) {



						for(auto it = process_ncq_command_mismatch.begin(); it != py_process_ncq_command_mismatch.end(); ++it){
							boost::python::call(*it,s,port,tag,slot);
						}

}
void cb_process_ncq_command_aux(void *s,int port,uint8_t tag) {



						for(auto it = process_ncq_command_aux.begin(); it != py_process_ncq_command_aux.end(); ++it){
							boost::python::call(*it,s,port,tag);
						}

}
void cb_process_ncq_command_prioicc(void *s,int port,uint8_t tag) {



						for(auto it = process_ncq_command_prioicc.begin(); it != py_process_ncq_command_prioicc.end(); ++it){
							boost::python::call(*it,s,port,tag);
						}

}
void cb_process_ncq_command_fua(void *s,int port,uint8_t tag) {



						for(auto it = process_ncq_command_fua.begin(); it != py_process_ncq_command_fua.end(); ++it){
							boost::python::call(*it,s,port,tag);
						}

}
void cb_process_ncq_command_rarc(void *s,int port,uint8_t tag) {



						for(auto it = process_ncq_command_rarc.begin(); it != py_process_ncq_command_rarc.end(); ++it){
							boost::python::call(*it,s,port,tag);
						}

}
void cb_process_ncq_command_large(void *s,int port,uint8_t tag,size_t prdtl,size_t size) {



						for(auto it = process_ncq_command_large.begin(); it != py_process_ncq_command_large.end(); ++it){
							boost::python::call(*it,s,port,tag,prdtl,size);
						}

}
void cb_process_ncq_command(void *s,int port,uint8_t tag,uint8_t cmd,uint64_t lba,uint64_t end) {



						for(auto it = process_ncq_command.begin(); it != py_process_ncq_command.end(); ++it){
							boost::python::call(*it,s,port,tag,cmd,lba,end);
						}

}
void cb_handle_reg_h2d_fis_pmp(void *s,int port,char b0,char b1,char b2) {



						for(auto it = handle_reg_h2d_fis_pmp.begin(); it != py_handle_reg_h2d_fis_pmp.end(); ++it){
							boost::python::call(*it,s,port,b0,b1,b2);
						}

}
void cb_handle_reg_h2d_fis_res(void *s,int port,char b0,char b1,char b2) {



						for(auto it = handle_reg_h2d_fis_res.begin(); it != py_handle_reg_h2d_fis_res.end(); ++it){
							boost::python::call(*it,s,port,b0,b1,b2);
						}

}
void cb_handle_cmd_busy(void *s,int port) {



						for(auto it = handle_cmd_busy.begin(); it != py_handle_cmd_busy.end(); ++it){
							boost::python::call(*it,s,port);
						}

}
void cb_handle_cmd_nolist(void *s,int port) {



						for(auto it = handle_cmd_nolist.begin(); it != py_handle_cmd_nolist.end(); ++it){
							boost::python::call(*it,s,port);
						}

}
void cb_handle_cmd_badport(void *s,int port) {



						for(auto it = handle_cmd_badport.begin(); it != py_handle_cmd_badport.end(); ++it){
							boost::python::call(*it,s,port);
						}

}
void cb_handle_cmd_badfis(void *s,int port) {



						for(auto it = handle_cmd_badfis.begin(); it != py_handle_cmd_badfis.end(); ++it){
							boost::python::call(*it,s,port);
						}

}
void cb_handle_cmd_badmap(void *s,int port,uint64_t len) {



						for(auto it = handle_cmd_badmap.begin(); it != py_handle_cmd_badmap.end(); ++it){
							boost::python::call(*it,s,port,len);
						}

}
void cb_handle_cmd_unhandled_fis(void *s,int port,uint8_t b0,uint8_t b1,uint8_t b2) {



						for(auto it = handle_cmd_unhandled_fis.begin(); it != py_handle_cmd_unhandled_fis.end(); ++it){
							boost::python::call(*it,s,port,b0,b1,b2);
						}

}
void cb_ahci_pio_transfer(void *s,int port,const char *rw,uint32_t size,const char *tgt,const char *sgl) {



						for(auto it = ahci_pio_transfer.begin(); it != py_ahci_pio_transfer.end(); ++it){
							boost::python::call(*it,s,port,*rw,size,*tgt,*sgl);
						}

}
void cb_ahci_start_dma(void *s,int port) {



						for(auto it = ahci_start_dma.begin(); it != py_ahci_start_dma.end(); ++it){
							boost::python::call(*it,s,port);
						}

}
void cb_ahci_dma_prepare_buf(void *s,int port,int32_t io_buffer_size,int32_t limit) {



						for(auto it = ahci_dma_prepare_buf.begin(); it != py_ahci_dma_prepare_buf.end(); ++it){
							boost::python::call(*it,s,port,io_buffer_size,limit);
						}

}
void cb_ahci_dma_prepare_buf_fail(void *s,int port) {



						for(auto it = ahci_dma_prepare_buf_fail.begin(); it != py_ahci_dma_prepare_buf_fail.end(); ++it){
							boost::python::call(*it,s,port);
						}

}
void cb_ahci_dma_rw_buf(void *s,int port,int l) {



						for(auto it = ahci_dma_rw_buf.begin(); it != py_ahci_dma_rw_buf.end(); ++it){
							boost::python::call(*it,s,port,l);
						}

}
void cb_ahci_cmd_done(void *s,int port) {



						for(auto it = ahci_cmd_done.begin(); it != py_ahci_cmd_done.end(); ++it){
							boost::python::call(*it,s,port);
						}

}
void cb_ahci_reset(void *s) {



						for(auto it = ahci_reset.begin(); it != py_ahci_reset.end(); ++it){
							boost::python::call(*it,s);
						}

}

//# Warning: Verbose
void cb_handle_reg_h2d_fis_dump(void *s,int port,const char *fis) {



						for(auto it = handle_reg_h2d_fis_dump.begin(); it != py_handle_reg_h2d_fis_dump.end(); ++it){
							boost::python::call(*it,s,port,*fis);
						}

}
void cb_handle_cmd_fis_dump(void *s,int port,const char *fis) {



						for(auto it = handle_cmd_fis_dump.begin(); it != py_handle_cmd_fis_dump.end(); ++it){
							boost::python::call(*it,s,port,*fis);
						}

}

//# ahci-allwinner.c
void cb_allwinner_ahci_mem_read(void *s,void *a,uint64_t addr,uint64_t val,unsigned size) {



						for(auto it = allwinner_ahci_mem_read.begin(); it != py_allwinner_ahci_mem_read.end(); ++it){
							boost::python::call(*it,s,a,addr,val,size);
						}

}
void cb_allwinner_ahci_mem_write(void *s,void *a,uint64_t addr,uint64_t val,unsigned size) {



						for(auto it = allwinner_ahci_mem_write.begin(); it != py_allwinner_ahci_mem_write.end(); ++it){
							boost::python::call(*it,s,a,addr,val,size);
						}

}
