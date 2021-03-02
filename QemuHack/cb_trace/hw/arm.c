////# See docs/devel/tracing.txt for syntax documentation.

////# virt-acpi-build.c
void cb_virt_acpi_setup(void){
	for(auto it = py_virt_acpi_setup.begin(); it != py_virt_acpi_setup.end(); ++it){
	  boost::python::call(*it)
	}


}

////# smmu-common.c
void cb_smmu_add_mr(const char *name){
	for(auto it = py_smmu_add_mr.begin(); it != py_smmu_add_mr.end(); ++it){
	  boost::python::call(*it,name)
	}

}
void cb_smmu_ptw_level(int level,uint64_t iova,size_t subpage_size,uint64_t baseaddr,uint32_t offset,uint64_t pte){
	for(auto it = py_smmu_ptw_level.begin(); it != py_smmu_ptw_level.end(); ++it){
	  boost::python::call(*it,level,iova,subpage_size,baseaddr,offset,pte)
	}

}
void cb_smmu_ptw_invalid_pte(int stage,int level,uint64_t baseaddr,uint64_t pteaddr,uint32_t offset,uint64_t pte){
	for(auto it = py_smmu_ptw_invalid_pte.begin(); it != py_smmu_ptw_invalid_pte.end(); ++it){
	  boost::python::call(*it)
	}

}
void cb_smmu_ptw_page_pte(int stage,int level,uint64_t iova,uint64_t baseaddr,uint64_t pteaddr,uint64_t pte,uint64_t address){
	for(auto it = py_smmu_ptw_page_pte.begin(); it != py_smmu_ptw_page_pte.end(); ++it){
	  boost::python::call(*it)
	}

}
void cb_smmu_ptw_block_pte(int stage,int level,uint64_t baseaddr,uint64_t pteaddr,uint64_t pte,uint64_t iova,uint64_t gpa,int bsize_mb){
	for(auto it = py_smmu_ptw_block_pte.begin(); it != py_smmu_ptw_block_pte.end(); ++it){
	  boost::python::call(*it)
	}

}
void cb_smmu_get_pte(uint64_t baseaddr,int index,uint64_t pteaddr,uint64_t pte) PRIx64{
	for(auto it = py_smmu_get_pte.begin(); it != py_virt_acpi_setup.end(); ++it){
	  boost::python::call(*it)
	}

}
void cb_smmu_iotlb_inv_all(void){
	for(auto it = py_smmu_iotlb_inv_all.begin(); it != py_smmu_iotlb_inv_all.end(); ++it){
	  boost::python::call(*it)
	}

}
void cb_smmu_iotlb_inv_asid(uint16_t asid){
	for(auto it = py_smmu_iotlb_inv_asid.begin(); it != py_smmu_iotlb_inv_asid.end(); ++it){
	  boost::python::call(*it)
	}

}
void cb_smmu_iotlb_inv_iova(uint16_t asid,uint64_t addr) PRIx64{
	for(auto it = py_smmu_iotlb_inv_iova.begin(); it != py_smmu_iotlb_inv_iova.end(); ++it){
	  boost::python::call(*it)
	}

}
void cb_smmu_inv_notifiers_mr(const char *name){
	for(auto it = py_smmu_inv_notifiers_mr.begin(); it != py_smmu_inv_notifiers_mr.end(); ++it){
	  boost::python::call(*it)
	}

}
void cb_smmu_iotlb_lookup_hit(uint16_t asid,uint64_t addr,uint32_t hit,uint32_t miss,uint32_t p){
	for(auto it = py_smmu_iotlb_lookup_hit.begin(); it != py_smmu_iotlb_lookup_hit.end(); ++it){
	  boost::python::call(*it)
	}

}
void cb_smmu_iotlb_lookup_miss(uint16_t asid,uint64_t addr,uint32_t hit,uint32_t miss,uint32_t p){
	for(auto it = py_smmu_iotlb_lookup_miss.begin(); it != py_smmu_iotlb_lookup_miss.end(); ++it){
	  boost::python::call(*it)
	}

}
void cb_smmu_iotlb_insert(uint16_t asid,uint64_t addr,uint8_t tg,uint8_t level){
	for(auto it = py_smmu_iotlb_insert.begin(); it != py_smmu_iotlb_insert.end(); ++it){
	  boost::python::call(*it)
	}

}

////# smmuv3.c
void cb_smmuv3_read_mmio(uint64_t addr,uint64_t val,unsigned size,uint32_t r){
	for(auto it = py_smmuv3_read_mmio.begin(); it != py_smmuv3_read_mmio.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_trigger_irq(int irq){
	for(auto it = py_smmuv3_trigger_irq.begin(); it != py_virt_acpi_setup.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_write_gerror(uint32_t toggled,uint32_t gerror){
	for(auto it = py_smmuv3_write_gerror.begin(); it != py_smmuv3_write_gerror.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_write_gerrorn(uint32_t acked,uint32_t gerrorn){
	for(auto it = py_smmuv3_write_gerrorn.begin(); it != py_smmuv3_write_gerrorn.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_unhandled_cmd(uint32_t type){
	for(auto it = py_smmuv3_unhandled_cmd.begin(); it != py_smmuv3_unhandled_cmd.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_cmdq_consume(uint32_t prod,uint32_t cons,uint8_t prod_wrap,uint8_t cons_wrap){
	for(auto it = py_smmuv3_cmdq_consume.begin(); it != py_smmuv3_cmdq_consume.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_cmdq_opcode(const char *opcode){
	for(auto it = py_smmuv3_cmdq_opcode.begin(); it != py_smmuv3_cmdq_opcode.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_cmdq_consume_out(uint32_t prod,uint32_t cons,uint8_t prod_wrap,uint8_t cons_wrap){
	for(auto it = py_smmuv3_cmdq_consume_out.begin(); it != py_smmuv3_cmdq_consume_out.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_cmdq_consume_error(const char *cmd_name,uint8_t cmd_error){
	for(auto it = py_smmuv3_cmdq_consume_error.begin(); it != py_smmuv3_cmdq_consume_error.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_write_mmio(uint64_t addr,uint64_t val,unsigned size,uint32_t r){
	for(auto it = py_smmuv3_write_mmio.begin(); it != py_smmuv3_write_mmio.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_record_event(const char *type,uint32_t sid){
	for(auto it = py_smmuv3_record_event.begin(); it != py_smmuv3_record_event.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_find_ste(uint16_t sid,uint32_t features,uint16_t sid_split){
	for(auto it = py_smmuv3_find_ste.begin(); it != py_smmuv3_find_ste.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_find_ste_2lvl(uint64_t strtab_base,uint64_t l1ptr,int l1_ste_offset,uint64_t l2ptr,int l2_ste_offset,int max_l2_ste){
	for(auto it = py_smmuv3_find_ste_2lvl.begin(); it != py_smmuv3_find_ste_2lvl.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_get_ste(uint64_t addr) PRIx64{
	for(auto it = py_smmuv3_get_ste.begin(); it != py_smmuv3_get_ste.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_translate_disable(const char *n,uint16_t sid,uint64_t addr,bool is_write){
	for(auto it = py_smmuv3_translate_disable.begin(); it != py_smmuv3_translate_disable.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_translate_bypass(const char *n,uint16_t sid,uint64_t addr,bool is_write){
	for(auto it = py_smmuv3_translate_bypass.begin(); it != py_smmuv3_translate_bypass.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_translate_abort(const char *n,uint16_t sid,uint64_t addr,bool is_write){
	for(auto it = py_smmuv3_translate_abort.begin(); it != py_smmuv3_translate_abort.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_translate_success(const char *n,uint16_t sid,uint64_t iova,uint64_t translated,int perm){
	for(auto it = py_smmuv3_translate_success.begin(); it != py_smmuv3_translate_success.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_get_cd(uint64_t addr){
	for(auto it = py_smmuv3_get_cd.begin(); it != py_smmuv3_get_cd.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_decode_cd(uint32_t oas){
	for(auto it = py_smmuv3_decode_cd.begin(); it != py_smmuv3_decode_cd.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_decode_cd_tt(int i,uint32_t tsz,uint64_t ttb,uint32_t granule_sz,bool had){
	for(auto it = py_smmuv3_decode_cd_tt.begin(); it != py_smmuv3_decode_cd_tt.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_cmdq_cfgi_ste(int streamid){
	for(auto it = py_smmuv3_cmdq_cfgi_ste.begin(); it != py_smmuv3_cmdq_cfgi_ste.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_cmdq_cfgi_ste_range(int start,int end){
	for(auto it = py_smmuv3_cmdq_cfgi_ste_range.begin(); it != py_smmuv3_cmdq_cfgi_ste_range.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_cmdq_cfgi_cd(uint32_t sid){
	for(auto it = py_smmuv3_cmdq_cfgi_cd.begin(); it != py_smmuv3_cmdq_cfgi_cd.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_config_cache_hit(uint32_t sid,uint32_t hits,uint32_t misses,uint32_t perc){
	for(auto it = py_smmuv3_config_cache_hit.begin(); it != py_smmuv3_config_cache_hit.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_config_cache_miss(uint32_t sid,uint32_t hits,uint32_t misses,uint32_t perc){
	for(auto it = py_smmuv3_config_cache_miss.begin(); it != py_smmuv3_config_cache_miss.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_s1_range_inval(int vmid,int asid,uint64_t addr,uint8_t tg,uint64_t num_pages,uint8_t ttl,bool leaf){
	for(auto it = py_smmuv3_s1_range_inval.begin(); it != py_smmuv3_s1_range_inval.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_cmdq_tlbi_nh(void){
	for(auto it = py_smmuv3_cmdq_tlbi_nh.begin(); it != py_smmuv3_cmdq_tlbi_nh.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_cmdq_tlbi_nh_asid(uint16_t asid){
	for(auto it = py_smmuv3_cmdq_tlbi_nh_asid.begin(); it != py_smmuv3_cmdq_tlbi_nh_asid.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_config_cache_inv(uint32_t sid){
	for(auto it = py_smmuv3_config_cache_inv.begin(); it != py_smmuv3_config_cache_inv.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_notify_flag_add(const char *iommu){
	for(auto it = py_smmuv3_notify_flag_add.begin(); it != py_smmuv3_notify_flag_add.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_notify_flag_del(const char *iommu){
	for(auto it = py_smmuv3_notify_flag_del.begin(); it != py_smmuv3_notify_flag_del.end(); ++it){
	  boost::python::call(*it)
	}
}
void cb_smmuv3_inv_notifiers_iova(const char *name,uint16_t asid,uint64_t iova,uint8_t tg,uint64_t num_pages){
	for(auto it = py_smmuv3_inv_notifiers_iova.begin(); it != py_smmuv3_inv_notifiers_iova.end(); ++it){
	  boost::python::call(*it,*name,asid,iova,tg,num_pages)
	}
}
