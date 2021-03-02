//#See docs / devel / tracing.txt for syntax documentation.

//#spapr_pci.c
void spapr_pci_msi(const char *msg,uint32_t ca) {

  for (auto it = py_spapr_pci_msi.begin(); it != py_py_spapr_pci_msi.end(); ++it) {
    boost::python::call(*it,*msg,ca);  }
}
void spapr_pci_msi_setup(const char *name,unsigned vector,uint64_t addr) {

  for (auto it = py_spapr_pci_msi_setup.begin(); it != py_py_spapr_pci_msi_setup.end();
       ++it) {
    boost::python::call(*it,*name,vector,addr);  }
}
void spapr_pci_rtas_ibm_change_msi(unsigned cfg,unsigned func,unsigned req,unsigned first) {

  for (auto it = py_spapr_pci_rtas_ibm_change_msi.begin();
       it != py_py_spapr_pci_rtas_ibm_change_msi.end(); ++it) {
    boost::python::call(*it,cfg,func,req,first);  }
}
void spapr_pci_rtas_ibm_query_interrupt_source_number(unsigned ioa,unsigned intr) {

  for (auto it = py_spapr_pci_rtas_ibm_query_interrupt_source_number.begin();
       it != py_py_spapr_pci_rtas_ibm_query_interrupt_source_number.end(); ++it) {
    boost::python::call(*it,ioa,r);  }
}
void spapr_pci_msi_write(uint64_t addr,uint64_t data,uint32_t dt_irq) {

  for (auto it = py_spapr_pci_msi_write.begin(); it != py_py_spapr_pci_msi_write.end();
       ++it) {
    boost::python::call(*it,addr,data,dt_irq);  }
}
void spapr_pci_lsi_set(const char *busname,int pin,uint32_t irq) {

  for (auto it = py_spapr_pci_lsi_set.begin(); it != py_py_spapr_pci_lsi_set.end();
       ++it) {
    boost::python::call(*it,*busname,pin,irq);  }
}
void spapr_pci_msi_retry(unsigned config_addr,unsigned req_num,unsigned max_irqs) {

  for (auto it = py_spapr_pci_msi_retry.begin(); it != py_py_spapr_pci_msi_retry.end();
       ++it) {
    boost::python::call(*it,config_addr,req_num,max_irqs);  }
}

//#spapr_hcall.c
void spapr_cas_continue(unsigned long n) {

  for (auto it = py_spapr_cas_continue.begin(); it != py_py_spapr_cas_continue.end();
       ++it) {
    boost::python::call(*it,long n);  }
}
void spapr_cas_pvr(uint32_t cur_pvr,bool explicit_match,uint32_t new_pvr) {

  for (auto it = py_spapr_cas_pvr.begin(); it != py_py_spapr_cas_pvr.end(); ++it) {
    boost::python::call(*it,cur_pvr,explicit_match,new_pvr);  }
}
void spapr_h_resize_hpt_prepare(uint64_t flags,uint64_t shift) {

  for (auto it = py_spapr_h_resize_hpt_prepare.begin();
       it != py_py_spapr_h_resize_hpt_prepare.end(); ++it) {
    boost::python::call(*it,flags,shift);  }
}
void spapr_h_resize_hpt_commit(uint64_t flags,uint64_t shift) {

  for (auto it = py_spapr_h_resize_hpt_commit.begin();
       it != py_py_spapr_h_resize_hpt_commit.end(); ++it) {
    boost::python::call(*it,flags,shift);  }
}
void spapr_update_dt(unsigned cb) {

  for (auto it = py_spapr_update_dt.begin(); it != py_py_spapr_update_dt.end(); ++it) {
    boost::python::call(*it,cb);  }
}
void spapr_update_dt_failed_size(unsigned cbold,unsigned cbnew,unsigned magic) {

  for (auto it = py_spapr_update_dt_failed_size.begin();
       it != py_py_spapr_update_dt_failed_size.end(); ++it) {
    boost::python::call(*it,cbold,cbnew,magic);  }
}
void spapr_update_dt_failed_check(unsigned cbold,unsigned cbnew,unsigned magic) {

  for (auto it = py_spapr_update_dt_failed_check.begin();
       it != py_py_spapr_update_dt_failed_check.end(); ++it) {
    boost::python::call(*it,cbold,cbnew,magic);  }
}

//#spapr_tpm_proxy.c
void spapr_h_tpm_comm(const char *device_path,uint64_t operation) {

  for (auto it = py_spapr_h_tpm_comm.begin(); it != py_py_spapr_h_tpm_comm.end(); ++it) {
    boost::python::call(*it,*device_path,operation);  }
}
void spapr_tpm_execute(uint64_t data_in,uint64_t data_in_sz,uint64_t data_out,uint64_t data_out_sz) {

  for (auto it = py_spapr_tpm_execute.begin(); it != py_py_spapr_tpm_execute.end();
       ++it) {
    boost::python::call(*it,data_in,data_in_sz,data_out,data_out_sz);  }
}

//#spapr_iommu.c
void spapr_iommu_put(uint64_t liobn,uint64_t ioba,uint64_t tce,uint64_t ret) {

  for (auto it = py_spapr_iommu_put.begin(); it != py_py_spapr_iommu_put.end(); ++it) {
    boost::python::call(*it,liobn,ioba,tce,ret);  }
}
void spapr_iommu_get(uint64_t liobn,uint64_t ioba,uint64_t ret,uint64_t tce) {

  for (auto it = py_spapr_iommu_get.begin(); it != py_py_spapr_iommu_get.end(); ++it) {
    boost::python::call(*it,liobn,ioba,ret,tce);  }
}
void spapr_iommu_indirect(uint64_t liobn,uint64_t ioba,uint64_t tce,uint64_t iobaN,uint64_t tceN,uint64_t ret) {

  for (auto it = py_spapr_iommu_indirect.begin(); it != py_py_spapr_iommu_indirect.end();
       ++it) {
    boost::python::call(*it,liobn,ioba,tce,iobaN,tceN,ret);  }
}
void spapr_iommu_stuff(uint64_t liobn,uint64_t ioba,uint64_t tce_value,uint64_t npages,uint64_t ret) {

  for (auto it = py_spapr_iommu_stuff.begin(); it != py_py_spapr_iommu_stuff.end();
       ++it) {
    boost::python::call(*it,liobn,ioba,tce_value,npages,ret);  }
}
void spapr_iommu_pci_put(uint64_t liobn,uint64_t ioba,uint64_t tce,uint64_t ret) {

  for (auto it = py_spapr_iommu_pci_put.begin(); it != py_py_spapr_iommu_pci_put.end();
       ++it) {
    boost::python::call(*it,liobn,ioba,tce,ret);  }
}
void spapr_iommu_pci_get(uint64_t liobn,uint64_t ioba,uint64_t ret,uint64_t tce) {

  for (auto it = py_spapr_iommu_pci_get.begin(); it != py_py_spapr_iommu_pci_get.end();
       ++it) {
    boost::python::call(*it,liobn,ioba,ret,tce);  }
}
void spapr_iommu_pci_indirect(uint64_t liobn,uint64_t ioba,uint64_t tce,uint64_t iobaN,uint64_t tceN,uint64_t ret) {

  for (auto it = py_spapr_iommu_pci_indirect.begin();
       it != py_py_spapr_iommu_pci_indirect.end(); ++it) {
    boost::python::call(*it,liobn,ioba,tce,iobaN,tceN,ret);  }
}
void spapr_iommu_pci_stuff(uint64_t liobn,uint64_t ioba,uint64_t tce_value,uint64_t npages,uint64_t ret) {

  for (auto it = py_spapr_iommu_pci_stuff.begin();
       it != py_py_spapr_iommu_pci_stuff.end(); ++it) {
    boost::python::call(*it,liobn,ioba,tce_value,npages,ret);  }
}
void spapr_iommu_xlate(uint64_t liobn,uint64_t ioba,uint64_t tce,unsigned perm,unsigned pgsize) {

  for (auto it = py_spapr_iommu_xlate.begin(); it != py_py_spapr_iommu_xlate.end();
       ++it) {
    boost::python::call(*it,liobn,ioba,tce,perm,pgsize);  }
}
void spapr_iommu_new_table(uint64_t liobn,void *table,int fd) {

  for (auto it = py_spapr_iommu_new_table.begin();
       it != py_py_spapr_iommu_new_table.end(); ++it) {
    boost::python::call(*it,liobn,table,fd);  }
}
void spapr_iommu_pre_save(uint64_t liobn,uint32_t nb,uint64_t offs,uint32_t ps) {

  for (auto it = py_spapr_iommu_pre_save.begin(); it != py_py_spapr_iommu_pre_save.end();
       ++it) {
    boost::python::call(*it,liobn,nb,offs,ps);  }
}
void spapr_iommu_post_load(uint64_t liobn,uint32_t pre_nb,uint32_t post_nb,uint64_t offs,uint32_t ps) {

  for (auto it = py_spapr_iommu_post_load.begin();
       it != py_py_spapr_iommu_post_load.end(); ++it) {
    boost::python::call(*it,liobn,pre_nb,post_nb,offs,ps);  }
}

//#spapr_rtas_ddw.c
void spapr_iommu_ddw_query(uint64_t buid,uint32_t cfgaddr,unsigned wa,uint64_t win_size,uint32_t pgmask) {

  for (auto it = py_spapr_iommu_ddw_query.begin();
       it != py_py_spapr_iommu_ddw_query.end(); ++it) {
    boost::python::call(*it,buid,cfgaddr,wa,win_size,pgmask);  }
}
void spapr_iommu_ddw_create(uint64_t buid,uint32_t cfgaddr,uint64_t pg_size,uint64_t req_size,uint64_t start,uint32_t liobn) {

  for (auto it = py_spapr_iommu_ddw_create.begin();
       it != py_py_spapr_iommu_ddw_create.end(); ++it) {
    boost::python::call(*it,buid,cfgaddr,pg_size,req_size,start,liobn);  }
}
void spapr_iommu_ddw_remove(uint32_t liobn) {

  for (auto it = py_spapr_iommu_ddw_remove.begin();
       it != py_py_spapr_iommu_ddw_remove.end(); ++it) {
    boost::python::call(*it,liobn);  }
}
void spapr_iommu_ddw_reset(uint64_t buid,uint32_t cfgaddr) {

  for (auto it = py_spapr_iommu_ddw_reset.begin();
       it != py_py_spapr_iommu_ddw_reset.end(); ++it) {
    boost::python::call(*it,buid,cfgaddr);  }
}

//#spapr_drc.c
void spapr_drc_set_isolation_state(uint32_t index,int state) {

  for (auto it = py_spapr_drc_set_isolation_state.begin();
       it != py_py_spapr_drc_set_isolation_state.end(); ++it) {
    boost::python::call(*it,index,state);  }
}
void spapr_drc_set_isolation_state_finalizing(uint32_t index) {

  for (auto it = py_spapr_drc_set_isolation_state_finalizing.begin();
       it != py_py_spapr_drc_set_isolation_state_finalizing.end(); ++it) {
    boost::python::call(*it,index);  }
}
void spapr_drc_set_dr_indicator(uint32_t index,int state) {

  for (auto it = py_spapr_drc_set_dr_indicator.begin();
       it != py_py_spapr_drc_set_dr_indicator.end(); ++it) {
    boost::python::call(*it,index,state);  }
}
void spapr_drc_set_allocation_state(uint32_t index,int state) {

  for (auto it = py_spapr_drc_set_allocation_state.begin();
       it != py_py_spapr_drc_set_allocation_state.end(); ++it) {
    boost::python::call(*it,index,state);  }
}
void spapr_drc_set_allocation_state_finalizing(uint32_t index) {

  for (auto it = py_spapr_drc_set_allocation_state_finalizing.begin();
       it != py_py_spapr_drc_set_allocation_state_finalizing.end(); ++it) {
    boost::python::call(*it,index);  }
}
void spapr_drc_set_configured(uint32_t index) {

  for (auto it = py_spapr_drc_set_configured.begin();
       it != py_py_spapr_drc_set_configured.end(); ++it) {
    boost::python::call(*it,index);  }
}
void spapr_drc_attach(uint32_t index) {

  for (auto it = py_spapr_drc_attach.begin(); it != py_py_spapr_drc_attach.end(); ++it) {
    boost::python::call(*it,index);  }
}
void spapr_drc_detach(uint32_t index) {

  for (auto it = py_spapr_drc_detach.begin(); it != py_py_spapr_drc_detach.end(); ++it) {
    boost::python::call(*it,index);  }
}
void spapr_drc_awaiting_quiesce(uint32_t index) {

  for (auto it = py_spapr_drc_awaiting_quiesce.begin();
       it != py_py_spapr_drc_awaiting_quiesce.end(); ++it) {
    boost::python::call(*it,index);  }
}
void spapr_drc_reset(uint32_t index) {

  for (auto it = py_spapr_drc_reset.begin(); it != py_py_spapr_drc_reset.end(); ++it) {
    boost::python::call(*it,index);  }
}
void spapr_drc_realize(uint32_t index) {

  for (auto it = py_spapr_drc_realize.begin(); it != py_py_spapr_drc_realize.end();
       ++it) {
    boost::python::call(*it,index);  }
}
void spapr_drc_realize_child(uint32_t index,const char *childname) {

  for (auto it = py_spapr_drc_realize_child.begin();
       it != py_py_spapr_drc_realize_child.end(); ++it) {
    boost::python::call(*it,index,*childname);  }
}
void spapr_drc_realize_complete(uint32_t index) {

  for (auto it = py_spapr_drc_realize_complete.begin();
       it != py_py_spapr_drc_realize_complete.end(); ++it) {
    boost::python::call(*it,index);  }
}
void spapr_drc_unrealize(uint32_t index) {

  for (auto it = py_spapr_drc_unrealize.begin(); it != py_py_spapr_drc_unrealize.end();
       ++it) {
    boost::python::call(*it,index);  }
}

//#spapr_ovec.c
void spapr_ovec_parse_vector(int vector,int byte,uint16_t vec_len,uint8_t entry) {

  for (auto it = py_spapr_ovec_parse_vector.begin();
       it != py_py_spapr_ovec_parse_vector.end(); ++it) {
    boost::python::call(*it,vector,byte,vec_len,entry);  }
}
void spapr_ovec_populate_dt(int byte,uint16_t vec_len,uint8_t entry) {

  for (auto it = py_spapr_ovec_populate_dt.begin();
       it != py_py_spapr_ovec_populate_dt.end(); ++it) {
    boost::python::call(*it,byte,vec_len,entry);  }
}

//#spapr_drc.c
void spapr_rtas_get_sensor_state_not_supported(uint32_t index,uint32_t type) {

  for (auto it = py_spapr_rtas_get_sensor_state_not_supported.begin();
       it != py_py_spapr_rtas_get_sensor_state_not_supported.end(); ++it) {
    boost::python::call(*it,index,type);  }
}
void spapr_rtas_get_sensor_state_invalid(uint32_t index) {

  for (auto it = py_spapr_rtas_get_sensor_state_invalid.begin();
       it != py_py_spapr_rtas_get_sensor_state_invalid.end(); ++it) {
    boost::python::call(*it,index);  }
}
void spapr_rtas_ibm_configure_connector_invalid(uint32_t index) {

  for (auto it = py_spapr_rtas_ibm_configure_connector_invalid.begin();
       it != py_py_spapr_rtas_ibm_configure_connector_invalid.end(); ++it) {
    boost::python::call(*it,index);  }
}

//#spapr_vio.c
void spapr_vio_h_reg_crq(uint64_t reg,uint64_t queue_addr,uint64_t queue_len) {

  for (auto it = py_spapr_vio_h_reg_crq.begin(); it != py_py_spapr_vio_h_reg_crq.end();
       ++it) {
    boost::python::call(*it,reg,queue_addr,queue_len);  }
}
void spapr_vio_free_crq(uint32_t reg) {

  for (auto it = py_spapr_vio_free_crq.begin(); it != py_py_spapr_vio_free_crq.end();
       ++it) {
    boost::python::call(*it,reg);  }
}

//#ppc.c
void ppc_tb_adjust(uint64_t offs1,uint64_t offs2,int64_t diff,int64_t seconds) {

  for (auto it = py_ppc_tb_adjust.begin(); it != py_py_ppc_tb_adjust.end(); ++it) {
    boost::python::call(*it,offs1,offs2,diff,intseconds);  }
}

//#prep_systemio.c
void prep_systemio_read(uint32_t addr,uint32_t val) {

  for (auto it = py_prep_systemio_read.begin(); it != py_py_prep_systemio_read.end();
       ++it) {
    boost::python::call(*it,addr,val);  }
}
void prep_systemio_write(uint32_t addr,uint32_t val) {

  for (auto it = py_prep_systemio_write.begin(); it != py_py_prep_systemio_write.end();
       ++it) {
    boost::python::call(*it,addr,val);  }
}

//#rs6000_mc.c
void rs6000mc_id_read(uint32_t addr,uint32_t val) {

  for (auto it = py_rs6000mc_id_read.begin(); it != py_py_rs6000mc_id_read.end(); ++it) {
    boost::python::call(*it,addr,val);  }
}
void rs6000mc_presence_read(uint32_t addr,uint32_t val) {

  for (auto it = py_rs6000mc_presence_read.begin();
       it != py_py_rs6000mc_presence_read.end(); ++it) {
    boost::python::call(*it,addr,val);  }
}
void rs6000mc_size_read(uint32_t addr,uint32_t val) {

  for (auto it = py_rs6000mc_size_read.begin(); it != py_py_rs6000mc_size_read.end();
       ++it) {
    boost::python::call(*it,addr,val);  }
}
void rs6000mc_size_write(uint32_t addr,uint32_t val) {

  for (auto it = py_rs6000mc_size_write.begin(); it != py_py_rs6000mc_size_write.end();
       ++it) {
    boost::python::call(*it,addr,val);  }
}
void rs6000mc_parity_read(uint32_t addr,uint32_t val) {

  for (auto it = py_rs6000mc_parity_read.begin(); it != py_py_rs6000mc_parity_read.end();
       ++it) {
    boost::python::call(*it,addr,val);  }
}

//#ppc4xx_pci.c
void ppc4xx_pci_map_irq(int32_t devfn,int irq_num,int slot) {

  for (auto it = py_ppc4xx_pci_map_irq.begin(); it != py_py_ppc4xx_pci_map_irq.end();
       ++it) {
    boost::python::call(*it,devfn,irq_num,slot);  }
}
void ppc4xx_pci_set_irq(int irq_num) {

  for (auto it = py_ppc4xx_pci_set_irq.begin(); it != py_py_ppc4xx_pci_set_irq.end();
       ++it) {
    boost::python::call(*it,irq_num);  }
}

//#ppc440_pcix.c
void ppc440_pcix_map_irq(int32_t devfn,int irq_num,int slot) {

  for (auto it = py_ppc440_pcix_map_irq.begin(); it != py_py_ppc440_pcix_map_irq.end();
       ++it) {
    boost::python::call(*it,devfn,irq_num,slot);  }
}
void ppc440_pcix_set_irq(int irq_num) {

  for (auto it = py_ppc440_pcix_set_irq.begin(); it != py_py_ppc440_pcix_set_irq.end();
       ++it) {
    boost::python::call(*it,irq_num);  }
}
void ppc440_pcix_update_pim(int idx,uint64_t size,uint64_t la) {

  for (auto it = py_ppc440_pcix_update_pim.begin();
       it != py_py_ppc440_pcix_update_pim.end(); ++it) {
    boost::python::call(*it,idx,size,la);  }
}
void ppc440_pcix_update_pom(int idx,uint32_t size,uint64_t la,uint64_t pcia) {

  for (auto it = py_ppc440_pcix_update_pom.begin();
       it != py_py_ppc440_pcix_update_pom.end(); ++it) {
    boost::python::call(*it,idx,size,la,pcia);  }
}
void ppc440_pcix_reg_read(uint64_t addr,uint32_t val) {

  for (auto it = py_ppc440_pcix_reg_read.begin(); it != py_py_ppc440_pcix_reg_read.end();
       ++it) {
    boost::python::call(*it,addr,val);  }
}
void ppc440_pcix_reg_write(uint64_t addr,uint32_t val,uint32_t size) {

  for (auto it = py_ppc440_pcix_reg_write.begin();
       it != py_py_ppc440_pcix_reg_write.end(); ++it) {
    boost::python::call(*it,addr,val,size);  }
}
