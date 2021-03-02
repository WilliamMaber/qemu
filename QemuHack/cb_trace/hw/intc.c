//# See docs/devel/tracing.txt for syntax documentation.

//# i8259.c
void cb_pic_update_irq(bool master,uint8_t imr,uint8_t irr,uint8_t padd) {




							for(auto it = py_pic_update_irq.begin(); it != py_pic_update_irq.end(); ++it){
								boost::python::call(*it,master,imr,irr,padd);
							}
}
void cb_pic_set_irq(bool master,int irq,int level) {




							for(auto it = py_pic_set_irq.begin(); it != py_pic_set_irq.end(); ++it){
								boost::python::call(*it,master,irq,level);
							}
}
void cb_pic_interrupt(int irq,int intno) {




							for(auto it = py_pic_interrupt.begin(); it != py_pic_interrupt.end(); ++it){
								boost::python::call(*it,irq,no);
							}
}
void cb_pic_ioport_write(bool master,uint64_t addr,uint64_t val) {




							for(auto it = py_pic_ioport_write.begin(); it != py_pic_ioport_write.end(); ++it){
								boost::python::call(*it,master,addr,val);
							}
}
void cb_pic_ioport_read(bool master,uint64_t addr,int val) {




							for(auto it = py_pic_ioport_read.begin(); it != py_pic_ioport_read.end(); ++it){
								boost::python::call(*it,master,addr,val);
							}
}

//# apic_common.c
void cb_cpu_set_apic_base(uint64_t val) {




							for(auto it = py_cpu_set_apic_base.begin(); it != py_cpu_set_apic_base.end(); ++it){
								boost::python::call(*it,val);
							}
}
void cb_cpu_get_apic_base(uint64_t val) {




							for(auto it = py_cpu_get_apic_base.begin(); it != py_cpu_get_apic_base.end(); ++it){
								boost::python::call(*it,val);
							}
}
//# coalescing
void cb_apic_report_irq_delivered(int apic_irq_delivered) {




							for(auto it = py_apic_report_irq_delivered.begin(); it != py_apic_report_irq_delivered.end(); ++it){
								boost::python::call(*it,apic_irq_delivered);
							}
}
void cb_apic_reset_irq_delivered(int apic_irq_delivered) {




							for(auto it = py_apic_reset_irq_delivered.begin(); it != py_apic_reset_irq_delivered.end(); ++it){
								boost::python::call(*it,apic_irq_delivered);
							}
}
void cb_apic_get_irq_delivered(int apic_irq_delivered) {




							for(auto it = py_apic_get_irq_delivered.begin(); it != py_apic_get_irq_delivered.end(); ++it){
								boost::python::call(*it,apic_irq_delivered);
							}
}

//# apic.c
void cb_apic_local_deliver(int vector,uint32_t lvt) {




							for(auto it = py_apic_local_deliver.begin(); it != py_apic_local_deliver.end(); ++it){
								boost::python::call(*it,vector,lvt);
							}
}
void cb_apic_deliver_irq(uint8_t dest,uint8_t dest_mode,uint8_t delivery_mode,uint8_t vector_num,uint8_t trigger_mode) {




							for(auto it = py_apic_deliver_irq.begin(); it != py_apic_deliver_irq.end(); ++it){
								boost::python::call(*it,dest,dest_mode,delivery_mode,vector_num,trigger_mode);
							}
}
void cb_apic_mem_readl(uint64_t addr,uint32_t val)  {




							for(auto it = py_apic_mem_readl.begin(); it != py_apic_mem_readl.end(); ++it){
								boost::python::call(*it,addr,val));
							}
}
void cb_apic_mem_writel(uint64_t addr,uint32_t val) {




							for(auto it = py_apic_mem_writel.begin(); it != py_apic_mem_writel.end(); ++it){
								boost::python::call(*it,addr,val);
							}
}

//# ioapic.c
void cb_ioapic_set_remote_irr(int n) {




							for(auto it = py_ioapic_set_remote_irr.begin(); it != py_ioapic_set_remote_irr.end(); ++it){
								boost::python::call(*it,n);
							}
}
void cb_ioapic_clear_remote_irr(int n,int vector) {




							for(auto it = py_ioapic_clear_remote_irr.begin(); it != py_ioapic_clear_remote_irr.end(); ++it){
								boost::python::call(*it,n,vector);
							}
}
void cb_ioapic_eoi_broadcast(int vector) {




							for(auto it = py_ioapic_eoi_broadcast.begin(); it != py_ioapic_eoi_broadcast.end(); ++it){
								boost::python::call(*it,vector);
							}
}
void cb_ioapic_eoi_delayed_reassert(int vector) {




							for(auto it = py_ioapic_eoi_delayed_reassert.begin(); it != py_ioapic_eoi_delayed_reassert.end(); ++it){
								boost::python::call(*it,vector);
							}
}
void cb_ioapic_mem_read(uint8_t addr,uint8_t regsel,uint8_t size,uint32_t val) {




							for(auto it = py_ioapic_mem_read.begin(); it != py_ioapic_mem_read.end(); ++it){
								boost::python::call(*it,addr,regsel,size,val);
							}
}
void cb_ioapic_mem_write(uint8_t addr,uint8_t regsel,uint8_t size,uint32_t val) {




							for(auto it = py_ioapic_mem_write.begin(); it != py_ioapic_mem_write.end(); ++it){
								boost::python::call(*it,addr,regsel,size,val);
							}
}
void cb_ioapic_set_irq(int vector,int level) {




							for(auto it = py_ioapic_set_irq.begin(); it != py_ioapic_set_irq.end(); ++it){
								boost::python::call(*it,vector,level);
							}
}

//# slavio_intctl.c
void cb_slavio_intctl_mem_readl(uint32_t cpu,uint64_t addr,uint32_t ret) {




							for(auto it = py_slavio_intctl_mem_readl.begin(); it != py_slavio_intctl_mem_readl.end(); ++it){
								boost::python::call(*it,cpu,addr,ret);
							}
}
void cb_slavio_intctl_mem_writel(uint32_t cpu,uint64_t addr,uint32_t val) {




							for(auto it = py_slavio_intctl_mem_writel.begin(); it != py_slavio_intctl_mem_writel.end(); ++it){
								boost::python::call(*it,cpu,addr,val);
							}
}
void cb_slavio_intctl_mem_writel_clear(uint32_t cpu,uint32_t val,uint32_t intreg_pending) {




							for(auto it = py_slavio_intctl_mem_writel_clear.begin(); it != py_slavio_intctl_mem_writel_clear.end(); ++it){
								boost::python::call(*it,cpu,val,reg_pending);
							}
}
void cb_slavio_intctl_mem_writel_set(uint32_t cpu,uint32_t val,uint32_t intreg_pending) {




							for(auto it = py_slavio_intctl_mem_writel_set.begin(); it != py_slavio_intctl_mem_writel_set.end(); ++it){
								boost::python::call(*it,cpu,val,reg_pending);
							}
}
void cb_slavio_intctlm_mem_readl(uint64_t addr,uint32_t ret) {




							for(auto it = py_slavio_intctlm_mem_readl.begin(); it != py_slavio_intctlm_mem_readl.end(); ++it){
								boost::python::call(*it,addr,ret);
							}
}
void cb_slavio_intctlm_mem_writel(uint64_t addr,uint32_t val) {




							for(auto it = py_slavio_intctlm_mem_writel.begin(); it != py_slavio_intctlm_mem_writel.end(); ++it){
								boost::python::call(*it,addr,val);
							}
}
void cb_slavio_intctlm_mem_writel_enable(uint32_t val,uint32_t intregm_disabled) {




							for(auto it = py_slavio_intctlm_mem_writel_enable.begin(); it != py_slavio_intctlm_mem_writel_enable.end(); ++it){
								boost::python::call(*it,val,regm_disabled);
							}
}
void cb_slavio_intctlm_mem_writel_disable(uint32_t val,uint32_t intregm_disabled) {




							for(auto it = py_slavio_intctlm_mem_writel_disable.begin(); it != py_slavio_intctlm_mem_writel_disable.end(); ++it){
								boost::python::call(*it,val,regm_disabled);
							}
}
void cb_slavio_intctlm_mem_writel_target(uint32_t cpu) {




							for(auto it = py_slavio_intctlm_mem_writel_target.begin(); it != py_slavio_intctlm_mem_writel_target.end(); ++it){
								boost::python::call(*it,cpu);
							}
}
void cb_slavio_check_interrupts(uint32_t pending,uint32_t intregm_disabled) {




							for(auto it = py_slavio_check_interrupts.begin(); it != py_slavio_check_interrupts.end(); ++it){
								boost::python::call(*it,pending,regm_disabled);
							}
}
void cb_slavio_set_irq(uint32_t target_cpu,int irq,uint32_t pil,int level) {




							for(auto it = py_slavio_set_irq.begin(); it != py_slavio_set_irq.end(); ++it){
								boost::python::call(*it,target_cpu,irq,pil,level);
							}
}
void cb_slavio_set_timer_irq_cpu(int cpu,int level) {




							for(auto it = py_slavio_set_timer_irq_cpu.begin(); it != py_slavio_set_timer_irq_cpu.end(); ++it){
								boost::python::call(*it,cpu,level);
							}
}

//# grlib_irqmp.c
void cb_grlib_irqmp_check_irqs(uint32_t pend,uint32_t force,uint32_t mask,uint32_t lvl1,uint32_t lvl2) {




							for(auto it = py_grlib_irqmp_check_irqs.begin(); it != py_grlib_irqmp_check_irqs.end(); ++it){
								boost::python::call(*it,pend,force,mask,lvl1,lvl2);
							}
}
void cb_grlib_irqmp_ack(int intno) {




							for(auto it = py_grlib_irqmp_ack.begin(); it != py_grlib_irqmp_ack.end(); ++it){
								boost::python::call(*it,no);
							}
}
void cb_grlib_irqmp_set_irq(int irq) {




							for(auto it = py_grlib_irqmp_set_irq.begin(); it != py_grlib_irqmp_set_irq.end(); ++it){
								boost::python::call(*it,irq);
							}
}
void cb_grlib_irqmp_readl_unknown(uint64_t addr) {




							for(auto it = py_grlib_irqmp_readl_unknown.begin(); it != py_grlib_irqmp_readl_unknown.end(); ++it){
								boost::python::call(*it,addr);
							}
}
void cb_grlib_irqmp_writel_unknown(uint64_t addr,uint32_t value) {




							for(auto it = py_grlib_irqmp_writel_unknown.begin(); it != py_grlib_irqmp_writel_unknown.end(); ++it){
								boost::python::call(*it,addr,value);
							}
}

//# lm32_pic.c
void cb_lm32_pic_raise_irq(void) {




							for(auto it = py_lm32_pic_raise_irq.begin(); it != py_lm32_pic_raise_irq.end(); ++it){
								boost::python::call(*it);
							}
}
void cb_lm32_pic_lower_irq(void) {




							for(auto it = py_lm32_pic_lower_irq.begin(); it != py_lm32_pic_lower_irq.end(); ++it){
								boost::python::call(*it);
							}
}
void cb_lm32_pic_interrupt(int irq,int level) {




							for(auto it = py_lm32_pic_interrupt.begin(); it != py_lm32_pic_interrupt.end(); ++it){
								boost::python::call(*it,irq,level);
							}
}
void cb_lm32_pic_set_im(uint32_t im) {




							for(auto it = py_lm32_pic_set_im.begin(); it != py_lm32_pic_set_im.end(); ++it){
								boost::python::call(*it,im);
							}
}
void cb_lm32_pic_set_ip(uint32_t ip) {




							for(auto it = py_lm32_pic_set_ip.begin(); it != py_lm32_pic_set_ip.end(); ++it){
								boost::python::call(*it,ip);
							}
}
void cb_lm32_pic_get_im(uint32_t im) {




							for(auto it = py_lm32_pic_get_im.begin(); it != py_lm32_pic_get_im.end(); ++it){
								boost::python::call(*it,im);
							}
}
void cb_lm32_pic_get_ip(uint32_t ip) {




							for(auto it = py_lm32_pic_get_ip.begin(); it != py_lm32_pic_get_ip.end(); ++it){
								boost::python::call(*it,ip);
							}
}

//# xics.c
void cb_xics_icp_check_ipi(int server,uint8_t mfrr) {




							for(auto it = py_xics_icp_check_ipi.begin(); it != py_xics_icp_check_ipi.end(); ++it){
								boost::python::call(*it,server,mfrr);
							}
}
void cb_xics_icp_accept(uint32_t old_xirr,uint32_t new_xirr) {




							for(auto it = py_xics_icp_accept.begin(); it != py_xics_icp_accept.end(); ++it){
								boost::python::call(*it,old_xirr,new_xirr);
							}
}
void cb_xics_icp_eoi(int server,uint32_t xirr,uint32_t new_xirr) {




							for(auto it = py_xics_icp_eoi.begin(); it != py_xics_icp_eoi.end(); ++it){
								boost::python::call(*it,server,xirr,new_xirr);
							}
}
void cb_xics_icp_irq(int server,int nr,uint8_t priority) {




							for(auto it = py_xics_icp_irq.begin(); it != py_xics_icp_irq.end(); ++it){
								boost::python::call(*it,server,nr,priority);
							}
}
void cb_xics_icp_raise(uint32_t xirr,uint8_t pending_priority) {




							for(auto it = py_xics_icp_raise.begin(); it != py_xics_icp_raise.end(); ++it){
								boost::python::call(*it,xirr,pending_priority);
							}
}
void cb_xics_ics_set_irq_msi(int srcno,int nr) {




							for(auto it = py_xics_ics_set_irq_msi.begin(); it != py_xics_ics_set_irq_msi.end(); ++it){
								boost::python::call(*it,srcno,nr);
							}
}
void cb_xics_masked_pending(void) {




							for(auto it = py_xics_masked_pending.begin(); it != py_xics_masked_pending.end(); ++it){
								boost::python::call(*it);
							}
}
void cb_xics_ics_set_irq_lsi(int srcno,int nr) {




							for(auto it = py_xics_ics_set_irq_lsi.begin(); it != py_xics_ics_set_irq_lsi.end(); ++it){
								boost::python::call(*it,srcno,nr);
							}
}
void cb_xics_ics_write_xive(int nr,int srcno,int server,uint8_t priority) {




							for(auto it = py_xics_ics_write_xive.begin(); it != py_xics_ics_write_xive.end(); ++it){
								boost::python::call(*it,nr,srcno,server,priority);
							}
}
void cb_xics_ics_reject(int nr,int srcno) {




							for(auto it = py_xics_ics_reject.begin(); it != py_xics_ics_reject.end(); ++it){
								boost::python::call(*it,nr,srcno);
							}
}
void cb_xics_ics_eoi(int nr) {




							for(auto it = py_xics_ics_eoi.begin(); it != py_xics_ics_eoi.end(); ++it){
								boost::python::call(*it,nr);
							}
}

//# s390_flic_kvm.c
void cb_flic_create_device(int err) {




							for(auto it = py_flic_create_device.begin(); it != py_flic_create_device.end(); ++it){
								boost::python::call(*it,err);
							}
}
void cb_flic_reset_failed(int err) {




							for(auto it = py_flic_reset_failed.begin(); it != py_flic_reset_failed.end(); ++it){
								boost::python::call(*it,err);
							}
}

//# s390_flic.c
void cb_qemu_s390_airq_suppressed(uint8_t type,uint8_t isc) {




							for(auto it = py_qemu_s390_airq_suppressed.begin(); it != py_qemu_s390_airq_suppressed.end(); ++it){
								boost::python::call(*it,type,isc);
							}
}
void cb_qemu_s390_suppress_airq(uint8_t isc,const char *from,const char *to) {




							for(auto it = py_qemu_s390_suppress_airq.begin(); it != py_qemu_s390_suppress_airq.end(); ++it){
								boost::python::call(*it,isc,*from,*to);
							}
}

//# aspeed_vic.c
void cb_aspeed_vic_set_irq(int irq,int level) {




							for(auto it = py_aspeed_vic_set_irq.begin(); it != py_aspeed_vic_set_irq.end(); ++it){
								boost::python::call(*it,irq,level);
							}
}
void cb_aspeed_vic_update_fiq(int flags) {




							for(auto it = py_aspeed_vic_update_fiq.begin(); it != py_aspeed_vic_update_fiq.end(); ++it){
								boost::python::call(*it,flags);
							}
}
void cb_aspeed_vic_update_irq(int flags) {




							for(auto it = py_aspeed_vic_update_irq.begin(); it != py_aspeed_vic_update_irq.end(); ++it){
								boost::python::call(*it,flags);
							}
}
void cb_aspeed_vic_read(uint64_t offset,unsigned size,uint32_t value) {




							for(auto it = py_aspeed_vic_read.begin(); it != py_aspeed_vic_read.end(); ++it){
								boost::python::call(*it,offset,size,value);
							}
}
void cb_aspeed_vic_write(uint64_t offset,unsigned size,uint32_t data) {




							for(auto it = py_aspeed_vic_write.begin(); it != py_aspeed_vic_write.end(); ++it){
								boost::python::call(*it,offset,size,data);
							}
}

//# arm_gic.c
void cb_gic_enable_irq(int irq) {




							for(auto it = py_gic_enable_irq.begin(); it != py_gic_enable_irq.end(); ++it){
								boost::python::call(*it,irq);
							}
}
void cb_gic_disable_irq(int irq) {




							for(auto it = py_gic_disable_irq.begin(); it != py_gic_disable_irq.end(); ++it){
								boost::python::call(*it,irq);
							}
}
void cb_gic_set_irq(int irq,int level,int cpumask,int target) {




							for(auto it = py_gic_set_irq.begin(); it != py_gic_set_irq.end(); ++it){
								boost::python::call(*it,irq,level,cpumask,target);
							}
}
void cb_gic_update_bestirq(const char *s,int cpu,int irq,int prio,int priority_mask,int running_priority) {




							for(auto it = py_gic_update_bestirq.begin(); it != py_gic_update_bestirq.end(); ++it){
								boost::python::call(*it,*s,cpu,irq,prio,priority_mask,running_priority);
							}
}
void cb_gic_update_set_irq(int cpu,const char *name,int level) {




							for(auto it = py_gic_update_set_irq.begin(); it != py_gic_update_set_irq.end(); ++it){
								boost::python::call(*it,cpu,*name,level);
							}
}
void cb_gic_acknowledge_irq(const char *s,int cpu,int irq) {




							for(auto it = py_gic_acknowledge_irq.begin(); it != py_gic_acknowledge_irq.end(); ++it){
								boost::python::call(*it,*s,cpu,irq);
							}
}
void cb_gic_cpu_write(const char *s,int cpu,int addr,uint32_t val) {




							for(auto it = py_gic_cpu_write.begin(); it != py_gic_cpu_write.end(); ++it){
								boost::python::call(*it,*s,cpu,addr,val);
							}
}
void cb_gic_cpu_read(const char *s,int cpu,int addr,uint32_t val) {




							for(auto it = py_gic_cpu_read.begin(); it != py_gic_cpu_read.end(); ++it){
								boost::python::call(*it,*s,cpu,addr,val);
							}
}
void cb_gic_hyp_read(int addr,uint32_t val) {




							for(auto it = py_gic_hyp_read.begin(); it != py_gic_hyp_read.end(); ++it){
								boost::python::call(*it,addr,val);
							}
}
void cb_gic_hyp_write(int addr,uint32_t val) {




							for(auto it = py_gic_hyp_write.begin(); it != py_gic_hyp_write.end(); ++it){
								boost::python::call(*it,addr,val);
							}
}
void cb_gic_dist_read(int addr,unsigned int size,uint32_t val) {




							for(auto it = py_gic_dist_read.begin(); it != py_gic_dist_read.end(); ++it){
								boost::python::call(*it,addr,size,val);
							}
}
void cb_gic_dist_write(int addr,unsigned int size,uint32_t val) {




							for(auto it = py_gic_dist_write.begin(); it != py_gic_dist_write.end(); ++it){
								boost::python::call(*it,addr,size,val);
							}
}
void cb_gic_lr_entry(int cpu,int entry,uint32_t val) {




							for(auto it = py_gic_lr_entry.begin(); it != py_gic_lr_entry.end(); ++it){
								boost::python::call(*it,cpu,entry,val);
							}
}
void cb_gic_update_maintenance_irq(int cpu,int val) {




							for(auto it = py_gic_update_maintenance_irq.begin(); it != py_gic_update_maintenance_irq.end(); ++it){
								boost::python::call(*it,cpu,val);
							}
}

//# arm_gicv3_cpuif.c
void cb_gicv3_icc_pmr_read(uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icc_pmr_read.begin(); it != py_gicv3_icc_pmr_read.end(); ++it){
								boost::python::call(*it,cpu,val);
							}
}
void cb_gicv3_icc_pmr_write(uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icc_pmr_write.begin(); it != py_gicv3_icc_pmr_write.end(); ++it){
								boost::python::call(*it,cpu,val);
							}
}
void cb_gicv3_icc_bpr_read(int grp,uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icc_bpr_read.begin(); it != py_gicv3_icc_bpr_read.end(); ++it){
								boost::python::call(*it,grp,cpu,val);
							}
}
void cb_gicv3_icc_bpr_write(int grp,uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icc_bpr_write.begin(); it != py_gicv3_icc_bpr_write.end(); ++it){
								boost::python::call(*it,grp,cpu,val);
							}
}
void cb_gicv3_icc_ap_read(int grp,int regno,uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icc_ap_read.begin(); it != py_gicv3_icc_ap_read.end(); ++it){
								boost::python::call(*it,grp,regno,cpu,val);
							}
}
void cb_gicv3_icc_ap_write(int grp,int regno,uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icc_ap_write.begin(); it != py_gicv3_icc_ap_write.end(); ++it){
								boost::python::call(*it,grp,regno,cpu,val);
							}
}
void cb_gicv3_icc_igrpen_read(int grp,uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icc_igrpen_read.begin(); it != py_gicv3_icc_igrpen_read.end(); ++it){
								boost::python::call(*it,grp,cpu,val);
							}
}
void cb_gicv3_icc_igrpen_write(int grp,uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icc_igrpen_write.begin(); it != py_gicv3_icc_igrpen_write.end(); ++it){
								boost::python::call(*it,grp,cpu,val);
							}
}
void cb_gicv3_icc_igrpen1_el3_read(uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icc_igrpen1_el3_read.begin(); it != py_gicv3_icc_igrpen1_el3_read.end(); ++it){
								boost::python::call(*it,cpu,val);
							}
}
void cb_gicv3_icc_igrpen1_el3_write(uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icc_igrpen1_el3_write.begin(); it != py_gicv3_icc_igrpen1_el3_write.end(); ++it){
								boost::python::call(*it,cpu,val);
							}
}
void cb_gicv3_icc_ctlr_read(uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icc_ctlr_read.begin(); it != py_gicv3_icc_ctlr_read.end(); ++it){
								boost::python::call(*it,cpu,val);
							}
}
void cb_gicv3_icc_ctlr_write(uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icc_ctlr_write.begin(); it != py_gicv3_icc_ctlr_write.end(); ++it){
								boost::python::call(*it,cpu,val);
							}
}
void cb_gicv3_icc_ctlr_el3_read(uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icc_ctlr_el3_read.begin(); it != py_gicv3_icc_ctlr_el3_read.end(); ++it){
								boost::python::call(*it,cpu,val);
							}
}
void cb_gicv3_icc_ctlr_el3_write(uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icc_ctlr_el3_write.begin(); it != py_gicv3_icc_ctlr_el3_write.end(); ++it){
								boost::python::call(*it,cpu,val);
							}
}
void cb_gicv3_cpuif_update(uint32_t cpuid,int irq,int grp,int prio) {




							for(auto it = py_gicv3_cpuif_update.begin(); it != py_gicv3_cpuif_update.end(); ++it){
								boost::python::call(*it,cpuid,irq,grp,prio);
							}
}
void cb_gicv3_cpuif_set_irqs(uint32_t cpuid,int fiqlevel,int irqlevel) {




							for(auto it = py_gicv3_cpuif_set_irqs.begin(); it != py_gicv3_cpuif_set_irqs.end(); ++it){
								boost::python::call(*it,cpuid,fiqlevel,irqlevel);
							}
}
void cb_gicv3_icc_generate_sgi(uint32_t cpuid,int irq,int irm,uint32_t aff,uint32_t targetlist) {




							for(auto it = py_gicv3_icc_generate_sgi.begin(); it != py_gicv3_icc_generate_sgi.end(); ++it){
								boost::python::call(*it,cpuid,irq,irm,aff,targetlist);
							}
}
void cb_gicv3_icc_iar0_read(uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icc_iar0_read.begin(); it != py_gicv3_icc_iar0_read.end(); ++it){
								boost::python::call(*it,cpu,val);
							}
}
void cb_gicv3_icc_iar1_read(uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icc_iar1_read.begin(); it != py_gicv3_icc_iar1_read.end(); ++it){
								boost::python::call(*it,cpu,val);
							}
}
void cb_gicv3_icc_eoir_write(int grp,uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icc_eoir_write.begin(); it != py_gicv3_icc_eoir_write.end(); ++it){
								boost::python::call(*it,grp,cpu,val);
							}
}
void cb_gicv3_icc_hppir0_read(uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icc_hppir0_read.begin(); it != py_gicv3_icc_hppir0_read.end(); ++it){
								boost::python::call(*it,cpu,val);
							}
}
void cb_gicv3_icc_hppir1_read(uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icc_hppir1_read.begin(); it != py_gicv3_icc_hppir1_read.end(); ++it){
								boost::python::call(*it,cpu,val);
							}
}
void cb_gicv3_icc_dir_write(uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icc_dir_write.begin(); it != py_gicv3_icc_dir_write.end(); ++it){
								boost::python::call(*it,cpu,val);
							}
}
void cb_gicv3_icc_rpr_read(uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icc_rpr_read.begin(); it != py_gicv3_icc_rpr_read.end(); ++it){
								boost::python::call(*it,cpu,val);
							}
}
void cb_gicv3_ich_ap_read(int grp,int regno,uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_ich_ap_read.begin(); it != py_gicv3_ich_ap_read.end(); ++it){
								boost::python::call(*it,grp,regno,cpu,val);
							}
}
void cb_gicv3_ich_ap_write(int grp,int regno,uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_ich_ap_write.begin(); it != py_gicv3_ich_ap_write.end(); ++it){
								boost::python::call(*it,grp,regno,cpu,val);
							}
}
void cb_gicv3_ich_hcr_read(uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_ich_hcr_read.begin(); it != py_gicv3_ich_hcr_read.end(); ++it){
								boost::python::call(*it,cpu,val);
							}
}
void cb_gicv3_ich_hcr_write(uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_ich_hcr_write.begin(); it != py_gicv3_ich_hcr_write.end(); ++it){
								boost::python::call(*it,cpu,val);
							}
}
void cb_gicv3_ich_vmcr_read(uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_ich_vmcr_read.begin(); it != py_gicv3_ich_vmcr_read.end(); ++it){
								boost::python::call(*it,cpu,val);
							}
}
void cb_gicv3_ich_vmcr_write(uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_ich_vmcr_write.begin(); it != py_gicv3_ich_vmcr_write.end(); ++it){
								boost::python::call(*it,cpu,val);
							}
}
void cb_gicv3_ich_lr_read(int regno,uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_ich_lr_read.begin(); it != py_gicv3_ich_lr_read.end(); ++it){
								boost::python::call(*it,regno,cpu,val);
							}
}
void cb_gicv3_ich_lr32_read(int regno,uint32_t cpu,uint32_t val) {




							for(auto it = py_gicv3_ich_lr32_read.begin(); it != py_gicv3_ich_lr32_read.end(); ++it){
								boost::python::call(*it,regno,cpu,val);
							}
}
void cb_gicv3_ich_lrc_read(int regno,uint32_t cpu,uint32_t val) {




							for(auto it = py_gicv3_ich_lrc_read.begin(); it != py_gicv3_ich_lrc_read.end(); ++it){
								boost::python::call(*it,regno,cpu,val);
							}
}
void cb_gicv3_ich_lr_write(int regno,uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_ich_lr_write.begin(); it != py_gicv3_ich_lr_write.end(); ++it){
								boost::python::call(*it,regno,cpu,val);
							}
}
void cb_gicv3_ich_lr32_write(int regno,uint32_t cpu,uint32_t val) {




							for(auto it = py_gicv3_ich_lr32_write.begin(); it != py_gicv3_ich_lr32_write.end(); ++it){
								boost::python::call(*it,regno,cpu,val);
							}
}
void cb_gicv3_ich_lrc_write(int regno,uint32_t cpu,uint32_t val) {




							for(auto it = py_gicv3_ich_lrc_write.begin(); it != py_gicv3_ich_lrc_write.end(); ++it){
								boost::python::call(*it,regno,cpu,val);
							}
}
void cb_gicv3_ich_vtr_read(uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_ich_vtr_read.begin(); it != py_gicv3_ich_vtr_read.end(); ++it){
								boost::python::call(*it,cpu,val);
							}
}
void cb_gicv3_ich_misr_read(uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_ich_misr_read.begin(); it != py_gicv3_ich_misr_read.end(); ++it){
								boost::python::call(*it,cpu,val);
							}
}
void cb_gicv3_ich_eisr_read(uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_ich_eisr_read.begin(); it != py_gicv3_ich_eisr_read.end(); ++it){
								boost::python::call(*it,cpu,val);
							}
}
void cb_gicv3_ich_elrsr_read(uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_ich_elrsr_read.begin(); it != py_gicv3_ich_elrsr_read.end(); ++it){
								boost::python::call(*it,cpu,val);
							}
}
void cb_gicv3_icv_ap_read(int grp,int regno,uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icv_ap_read.begin(); it != py_gicv3_icv_ap_read.end(); ++it){
								boost::python::call(*it,grp,regno,cpu,val);
							}
}
void cb_gicv3_icv_ap_write(int grp,int regno,uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icv_ap_write.begin(); it != py_gicv3_icv_ap_write.end(); ++it){
								boost::python::call(*it,grp,regno,cpu,val);
							}
}
void cb_gicv3_icv_bpr_read(int grp,uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icv_bpr_read.begin(); it != py_gicv3_icv_bpr_read.end(); ++it){
								boost::python::call(*it,grp,cpu,val);
							}
}
void cb_gicv3_icv_bpr_write(int grp,uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icv_bpr_write.begin(); it != py_gicv3_icv_bpr_write.end(); ++it){
								boost::python::call(*it,grp,cpu,val);
							}
}
void cb_gicv3_icv_pmr_read(uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icv_pmr_read.begin(); it != py_gicv3_icv_pmr_read.end(); ++it){
								boost::python::call(*it,cpu,val);
							}
}
void cb_gicv3_icv_pmr_write(uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icv_pmr_write.begin(); it != py_gicv3_icv_pmr_write.end(); ++it){
								boost::python::call(*it,cpu,val);
							}
}
void cb_gicv3_icv_igrpen_read(int grp,uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icv_igrpen_read.begin(); it != py_gicv3_icv_igrpen_read.end(); ++it){
								boost::python::call(*it,grp,cpu,val);
							}
}
void cb_gicv3_icv_igrpen_write(int grp,uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icv_igrpen_write.begin(); it != py_gicv3_icv_igrpen_write.end(); ++it){
								boost::python::call(*it,grp,cpu,val);
							}
}
void cb_gicv3_icv_ctlr_read(uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icv_ctlr_read.begin(); it != py_gicv3_icv_ctlr_read.end(); ++it){
								boost::python::call(*it,cpu,val);
							}
}
void cb_gicv3_icv_ctlr_write(uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icv_ctlr_write.begin(); it != py_gicv3_icv_ctlr_write.end(); ++it){
								boost::python::call(*it,cpu,val);
							}
}
void cb_gicv3_icv_rpr_read(uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icv_rpr_read.begin(); it != py_gicv3_icv_rpr_read.end(); ++it){
								boost::python::call(*it,cpu,val);
							}
}
void cb_gicv3_icv_hppir_read(int grp,uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icv_hppir_read.begin(); it != py_gicv3_icv_hppir_read.end(); ++it){
								boost::python::call(*it,grp,cpu,val);
							}
}
void cb_gicv3_icv_dir_write(uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icv_dir_write.begin(); it != py_gicv3_icv_dir_write.end(); ++it){
								boost::python::call(*it,cpu,val);
							}
}
void cb_gicv3_icv_iar_read(int grp,uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icv_iar_read.begin(); it != py_gicv3_icv_iar_read.end(); ++it){
								boost::python::call(*it,grp,cpu,val);
							}
}
void cb_gicv3_icv_eoir_write(int grp,uint32_t cpu,uint64_t val) {




							for(auto it = py_gicv3_icv_eoir_write.begin(); it != py_gicv3_icv_eoir_write.end(); ++it){
								boost::python::call(*it,grp,cpu,val);
							}
}
void cb_gicv3_cpuif_virt_update(uint32_t cpuid,int idx) {




							for(auto it = py_gicv3_cpuif_virt_update.begin(); it != py_gicv3_cpuif_virt_update.end(); ++it){
								boost::python::call(*it,cpuid,idx);
							}
}
void cb_gicv3_cpuif_virt_set_irqs(uint32_t cpuid,int fiqlevel,int irqlevel,int maintlevel) {




							for(auto it = py_gicv3_cpuif_virt_set_irqs.begin(); it != py_gicv3_cpuif_virt_set_irqs.end(); ++it){
								boost::python::call(*it,cpuid,fiqlevel,irqlevel,malevel);
							}
}

//# arm_gicv3_dist.c
void cb_gicv3_dist_read(uint64_t offset,uint64_t data,unsigned size,bool secure) {




							for(auto it = py_gicv3_dist_read.begin(); it != py_gicv3_dist_read.end(); ++it){
								boost::python::call(*it,offset,data,size,secure);
							}
}
void cb_gicv3_dist_badread(uint64_t offset,unsigned size,bool secure) {




							for(auto it = py_gicv3_dist_badread.begin(); it != py_gicv3_dist_badread.end(); ++it){
								boost::python::call(*it,offset,size,secure);
							}
}
void cb_gicv3_dist_write(uint64_t offset,uint64_t data,unsigned size,bool secure) {




							for(auto it = py_gicv3_dist_write.begin(); it != py_gicv3_dist_write.end(); ++it){
								boost::python::call(*it,offset,data,size,secure);
							}
}
void cb_gicv3_dist_badwrite(uint64_t offset,uint64_t data,unsigned size,bool secure) {




							for(auto it = py_gicv3_dist_badwrite.begin(); it != py_gicv3_dist_badwrite.end(); ++it){
								boost::python::call(*it,offset,data,size,secure);
							}
}
void cb_gicv3_dist_set_irq(int irq,int level) {




							for(auto it = py_gicv3_dist_set_irq.begin(); it != py_gicv3_dist_set_irq.end(); ++it){
								boost::python::call(*it,irq,level);
							}
}

//# arm_gicv3_redist.c
void cb_gicv3_redist_read(uint32_t cpu,uint64_t offset,uint64_t data,unsigned size,bool secure) {




							for(auto it = py_gicv3_redist_read.begin(); it != py_gicv3_redist_read.end(); ++it){
								boost::python::call(*it,cpu,offset,data,size,secure);
							}
}
void cb_gicv3_redist_badread(uint32_t cpu,uint64_t offset,unsigned size,bool secure) {




							for(auto it = py_gicv3_redist_badread.begin(); it != py_gicv3_redist_badread.end(); ++it){
								boost::python::call(*it,cpu,offset,size,secure);
							}
}
void cb_gicv3_redist_write(uint32_t cpu,uint64_t offset,uint64_t data,unsigned size,bool secure) {




							for(auto it = py_gicv3_redist_write.begin(); it != py_gicv3_redist_write.end(); ++it){
								boost::python::call(*it,cpu,offset,data,size,secure);
							}
}
void cb_gicv3_redist_badwrite(uint32_t cpu,uint64_t offset,uint64_t data,unsigned size,bool secure) {




							for(auto it = py_gicv3_redist_badwrite.begin(); it != py_gicv3_redist_badwrite.end(); ++it){
								boost::python::call(*it,cpu,offset,data,size,secure);
							}
}
void cb_gicv3_redist_set_irq(uint32_t cpu,int irq,int level) {




							for(auto it = py_gicv3_redist_set_irq.begin(); it != py_gicv3_redist_set_irq.end(); ++it){
								boost::python::call(*it,cpu,irq,level);
							}
}
void cb_gicv3_redist_send_sgi(uint32_t cpu,int irq) {




							for(auto it = py_gicv3_redist_send_sgi.begin(); it != py_gicv3_redist_send_sgi.end(); ++it){
								boost::python::call(*it,cpu,irq);
							}
}

//# armv7m_nvic.c
void cb_nvic_recompute_state(int vectpending,int vectpending_prio,int exception_prio) {




							for(auto it = py_nvic_recompute_state.begin(); it != py_nvic_recompute_state.end(); ++it){
								boost::python::call(*it,vectpending,vectpending_prio,exception_prio);
							}
}
void cb_nvic_recompute_state_secure(int vectpending,bool vectpending_is_s_banked,int vectpending_prio,int exception_prio) {




							for(auto it = py_nvic_recompute_state_secure.begin(); it != py_nvic_recompute_state_secure.end(); ++it){
								boost::python::call(*it,vectpending,vectpending_is_s_banked,vectpending_prio,exception_prio);
							}
}
void cb_nvic_set_prio(int irq,bool secure,uint8_t prio) {




							for(auto it = py_nvic_set_prio.begin(); it != py_nvic_set_prio.end(); ++it){
								boost::python::call(*it,irq,secure,prio);
							}
}
void cb_nvic_irq_update(int vectpending,int pendprio,int exception_prio,int level) {




							for(auto it = py_nvic_irq_update.begin(); it != py_nvic_irq_update.end(); ++it){
								boost::python::call(*it,vectpending,pendprio,exception_prio,level);
							}
}
void cb_nvic_escalate_prio(int irq,int irqprio,int runprio) {




							for(auto it = py_nvic_escalate_prio.begin(); it != py_nvic_escalate_prio.end(); ++it){
								boost::python::call(*it,irq,irqprio,runprio);
							}
}
void cb_nvic_escalate_disabled(int irq) {




							for(auto it = py_nvic_escalate_disabled.begin(); it != py_nvic_escalate_disabled.end(); ++it){
								boost::python::call(*it,irq);
							}
}
void cb_nvic_set_pending(int irq,bool secure,bool targets_secure,bool derived,int en,int prio) {




							for(auto it = py_nvic_set_pending.begin(); it != py_nvic_set_pending.end(); ++it){
								boost::python::call(*it,irq,secure,targets_secure,derived,en,prio);
							}
}
void cb_nvic_clear_pending(int irq,bool secure,int en,int prio) {




							for(auto it = py_nvic_clear_pending.begin(); it != py_nvic_clear_pending.end(); ++it){
								boost::python::call(*it,irq,secure,en,prio);
							}
}
void cb_nvic_acknowledge_irq(int irq,int prio) {




							for(auto it = py_nvic_acknowledge_irq.begin(); it != py_nvic_acknowledge_irq.end(); ++it){
								boost::python::call(*it,irq,prio);
							}
}
void cb_nvic_get_pending_irq_info(int irq,bool secure) {




							for(auto it = py_nvic_get_pending_irq_info.begin(); it != py_nvic_get_pending_irq_info.end(); ++it){
								boost::python::call(*it,irq,secure);
							}
}
void cb_nvic_complete_irq(int irq,bool secure) {




							for(auto it = py_nvic_complete_irq.begin(); it != py_nvic_complete_irq.end(); ++it){
								boost::python::call(*it,irq,secure);
							}
}
void cb_nvic_set_irq_level(int irq,int level) {




							for(auto it = py_nvic_set_irq_level.begin(); it != py_nvic_set_irq_level.end(); ++it){
								boost::python::call(*it,irq,level);
							}
}
void cb_nvic_set_nmi_level(int level) {




							for(auto it = py_nvic_set_nmi_level.begin(); it != py_nvic_set_nmi_level.end(); ++it){
								boost::python::call(*it,level);
							}
}
void cb_nvic_sysreg_read(uint64_t addr,uint32_t value,unsigned size) {




							for(auto it = py_nvic_sysreg_read.begin(); it != py_nvic_sysreg_read.end(); ++it){
								boost::python::call(*it,addr,value,size);
							}
}
void cb_nvic_sysreg_write(uint64_t addr,uint32_t value,unsigned size) {




							for(auto it = py_nvic_sysreg_write.begin(); it != py_nvic_sysreg_write.end(); ++it){
								boost::python::call(*it,addr,value,size);
							}
}

//# heathrow_pic.c
void cb_heathrow_write(uint64_t addr,unsigned int n,uint64_t value) {




							for(auto it = py_heathrow_write.begin(); it != py_heathrow_write.end(); ++it){
								boost::python::call(*it,addr,n,value);
							}
}
void cb_heathrow_read(uint64_t addr,unsigned int n,uint64_t value) {




							for(auto it = py_heathrow_read.begin(); it != py_heathrow_read.end(); ++it){
								boost::python::call(*it,addr,n,value);
							}
}
void cb_heathrow_set_irq(int num,int level) {




							for(auto it = py_heathrow_set_irq.begin(); it != py_heathrow_set_irq.end(); ++it){
								boost::python::call(*it,num,level);
							}
}

//# bcm2835_ic.c
void cb_bcm2835_ic_set_gpu_irq(int irq,int level) {




							for(auto it = py_bcm2835_ic_set_gpu_irq.begin(); it != py_bcm2835_ic_set_gpu_irq.end(); ++it){
								boost::python::call(*it,irq,level);
							}
}
void cb_bcm2835_ic_set_cpu_irq(int irq,int level) {




							for(auto it = py_bcm2835_ic_set_cpu_irq.begin(); it != py_bcm2835_ic_set_cpu_irq.end(); ++it){
								boost::python::call(*it,irq,level);
							}
}

//# spapr_xive.c
void cb_spapr_xive_claim_irq(uint32_t lisn,bool lsi) {




							for(auto it = py_spapr_xive_claim_irq.begin(); it != py_spapr_xive_claim_irq.end(); ++it){
								boost::python::call(*it,lisn,lsi);
							}
}
void cb_spapr_xive_free_irq(uint32_t lisn) {




							for(auto it = py_spapr_xive_free_irq.begin(); it != py_spapr_xive_free_irq.end(); ++it){
								boost::python::call(*it,lisn);
							}
}
void cb_spapr_xive_set_irq(uint32_t lisn,uint32_t val) {




							for(auto it = py_spapr_xive_set_irq.begin(); it != py_spapr_xive_set_irq.end(); ++it){
								boost::python::call(*it,lisn,val);
							}
}
void cb_spapr_xive_get_source_info(uint64_t flags,uint64_t lisn) {




							for(auto it = py_spapr_xive_get_source_info.begin(); it != py_spapr_xive_get_source_info.end(); ++it){
								boost::python::call(*it,flags,lisn);
							}
}
void cb_spapr_xive_set_source_config(uint64_t flags,uint64_t lisn,uint64_t target,uint64_t priority,uint64_t eisn) {




							for(auto it = py_spapr_xive_set_source_config.begin(); it != py_spapr_xive_set_source_config.end(); ++it){
								boost::python::call(*it,flags,lisn,target,priority,eisn);
							}
}
void cb_spapr_xive_get_source_config(uint64_t flags,uint64_t lisn) {




							for(auto it = py_spapr_xive_get_source_config.begin(); it != py_spapr_xive_get_source_config.end(); ++it){
								boost::python::call(*it,flags,lisn);
							}
}
void cb_spapr_xive_get_queue_info(uint64_t flags,uint64_t target,uint64_t priority) {




							for(auto it = py_spapr_xive_get_queue_info.begin(); it != py_spapr_xive_get_queue_info.end(); ++it){
								boost::python::call(*it,flags,target,priority);
							}
}
void cb_spapr_xive_set_queue_config(uint64_t flags,uint64_t target,uint64_t priority,uint64_t qpage,uint64_t qsize) {




							for(auto it = py_spapr_xive_set_queue_config.begin(); it != py_spapr_xive_set_queue_config.end(); ++it){
								boost::python::call(*it,flags,target,priority,qpage,qsize);
							}
}
void cb_spapr_xive_get_queue_config(uint64_t flags,uint64_t target,uint64_t priority) {




							for(auto it = py_spapr_xive_get_queue_config.begin(); it != py_spapr_xive_get_queue_config.end(); ++it){
								boost::python::call(*it,flags,target,priority);
							}
}
void cb_spapr_xive_set_os_reporting_line(uint64_t flags) {




							for(auto it = py_spapr_xive_set_os_reporting_line.begin(); it != py_spapr_xive_set_os_reporting_line.end(); ++it){
								boost::python::call(*it,flags);
							}
}
void cb_spapr_xive_get_os_reporting_line(uint64_t flags) {




							for(auto it = py_spapr_xive_get_os_reporting_line.begin(); it != py_spapr_xive_get_os_reporting_line.end(); ++it){
								boost::python::call(*it,flags);
							}
}
void cb_spapr_xive_esb(uint64_t flags,uint64_t lisn,uint64_t offset,uint64_t data) {




							for(auto it = py_spapr_xive_esb.begin(); it != py_spapr_xive_esb.end(); ++it){
								boost::python::call(*it,flags,lisn,offset,data);
							}
}
void cb_spapr_xive_sync(uint64_t flags,uint64_t lisn) {




							for(auto it = py_spapr_xive_sync.begin(); it != py_spapr_xive_sync.end(); ++it){
								boost::python::call(*it,flags,lisn);
							}
}
void cb_spapr_xive_reset(uint64_t flags) {




							for(auto it = py_spapr_xive_reset.begin(); it != py_spapr_xive_reset.end(); ++it){
								boost::python::call(*it,flags);
							}
}

//# spapr_xive_kvm.c
void cb_kvm_xive_cpu_connect(uint32_t id) {




							for(auto it = py_kvm_xive_cpu_connect.begin(); it != py_kvm_xive_cpu_connect.end(); ++it){
								boost::python::call(*it,id);
							}
}
void cb_kvm_xive_source_reset(uint32_t srcno) {




							for(auto it = py_kvm_xive_source_reset.begin(); it != py_kvm_xive_source_reset.end(); ++it){
								boost::python::call(*it,srcno);
							}
}

//# xive.c
void cb_xive_tctx_accept(uint32_t index,uint8_t ring,uint8_t ipb,uint8_t pipr,uint8_t cppr,uint8_t nsr) {




							for(auto it = py_xive_tctx_accept.begin(); it != py_xive_tctx_accept.end(); ++it){
								boost::python::call(*it,index,ring,ipb,pipr,cppr,nsr);
							}
}
void cb_xive_tctx_notify(uint32_t index,uint8_t ring,uint8_t ipb,uint8_t pipr,uint8_t cppr,uint8_t nsr) {




							for(auto it = py_xive_tctx_notify.begin(); it != py_xive_tctx_notify.end(); ++it){
								boost::python::call(*it,index,ring,ipb,pipr,cppr,nsr);
							}
}
void cb_xive_tctx_set_cppr(uint32_t index,uint8_t ring,uint8_t ipb,uint8_t pipr,uint8_t cppr,uint8_t nsr) {




							for(auto it = py_xive_tctx_set_cppr.begin(); it != py_xive_tctx_set_cppr.end(); ++it){
								boost::python::call(*it,index,ring,ipb,pipr,cppr,nsr);
							}
}
void cb_xive_source_esb_read(uint64_t addr,uint32_t srcno,uint64_t value) {




							for(auto it = py_xive_source_esb_read.begin(); it != py_xive_source_esb_read.end(); ++it){
								boost::python::call(*it,addr,srcno,value);
							}
}
void cb_xive_source_esb_write(uint64_t addr,uint32_t srcno,uint64_t value) {




							for(auto it = py_xive_source_esb_write.begin(); it != py_xive_source_esb_write.end(); ++it){
								boost::python::call(*it,addr,srcno,value);
							}
}
void cb_xive_router_end_notify(uint8_t end_blk,uint32_t end_idx,uint32_t end_data) {




							for(auto it = py_xive_router_end_notify.begin(); it != py_xive_router_end_notify.end(); ++it){
								boost::python::call(*it,end_blk,end_idx,end_data);
							}
}
void cb_xive_router_end_escalate(uint8_t end_blk,uint32_t end_idx,uint8_t esc_blk,uint32_t esc_idx,uint32_t end_data) {




							for(auto it = py_xive_router_end_escalate.begin(); it != py_xive_router_end_escalate.end(); ++it){
								boost::python::call(*it,end_blk,end_idx,esc_blk,esc_idx,end_data);
							}
}
void cb_xive_tctx_tm_write(uint64_t offset,unsigned int size,uint64_t value) {




							for(auto it = py_xive_tctx_tm_write.begin(); it != py_xive_tctx_tm_write.end(); ++it){
								boost::python::call(*it,offset,size,value);
							}
}
void cb_xive_tctx_tm_read(uint64_t offset,unsigned int size,uint64_t value) {




							for(auto it = py_xive_tctx_tm_read.begin(); it != py_xive_tctx_tm_read.end(); ++it){
								boost::python::call(*it,offset,size,value);
							}
}
void cb_xive_presenter_notify(uint8_t nvt_blk,uint32_t nvt_idx,uint8_t ring) {




							for(auto it = py_xive_presenter_notify.begin(); it != py_xive_presenter_notify.end(); ++it){
								boost::python::call(*it,nvt_blk,nvt_idx,ring);
							}
}
void cb_xive_end_source_read(uint8_t end_blk,uint32_t end_idx,uint64_t addr) {




							for(auto it = py_xive_end_source_read.begin(); it != py_xive_end_source_read.end(); ++it){
								boost::python::call(*it,end_blk,end_idx,addr);
							}
}

//# pnv_xive.c
void cb_pnv_xive_ic_hw_trigger(uint64_t addr,uint64_t val) {




							for(auto it = py_pnv_xive_ic_hw_trigger.begin(); it != py_pnv_xive_ic_hw_trigger.end(); ++it){
								boost::python::call(*it,addr,val);
							}
}
