//# See docs/devel/tracing.txt for syntax documentation.

//# sun4u.c
void cb_ebus_isa_irq_handler(int n,int level) {


	  for (auto it = py_ebus_isa_irq_handler.begin();
	       it != py_ebus_isa_irq_handler.end(); ++it) {
	    boost::python::call(*it,n,level);	  }

}

//# sun4u_iommu.c
void cb_sun4u_iommu_mem_read(uint64_t addr,uint64_t val,int size) {


	  for (auto it = py_sun4u_iommu_mem_read.begin();
	       it != py_sun4u_iommu_mem_read.end(); ++it) {
	    boost::python::call(*it,addr,val,size);	  }

}
void cb_sun4u_iommu_mem_write(uint64_t addr,uint64_t val,int size) {


	  for (auto it = py_sun4u_iommu_mem_write.begin();
	       it != py_sun4u_iommu_mem_write.end(); ++it) {
	    boost::python::call(*it,addr,val,size);	  }

}
void cb_sun4u_iommu_translate(uint64_t addr,uint64_t trans_addr,uint64_t tte) {


	  for (auto it = py_sun4u_iommu_translate.begin();
	       it != py_sun4u_iommu_translate.end(); ++it) {
	    boost::python::call(*it,addr,trans_addr,tte);	  }

}

//# sparc64.c
void cb_sparc64_cpu_check_irqs_reset_irq(int intno) {


	  for (auto it = py_sparc64_cpu_check_irqs_reset_irq.begin();
	       it != py_sparc64_cpu_check_irqs_reset_irq.end(); ++it) {
	    boost::python::call(*it,intno);	  }

}
void cb_sparc64_cpu_check_irqs_noset_irq(uint32_t tl,uint32_t tt,int intno) {


	  for (auto it = py_sparc64_cpu_check_irqs_noset_irq.begin();
	       it != py_sparc64_cpu_check_irqs_noset_irq.end(); ++it) {
	    boost::python::call(*it,tl,tt,intno);	  }

}
void cb_sparc64_cpu_check_irqs_set_irq(unsigned int i,int old,int new) {


	  for (auto it = py_sparc64_cpu_check_irqs_set_irq.begin();
	       it != py_sparc64_cpu_check_irqs_set_irq.end(); ++it) {
	    boost::python::call(*it,i,old,new);	  }

}
void cb_sparc64_cpu_check_irqs_disabled(uint32_t pil,uint32_t pil_in,uint32_t softint,int intno) {


	  for (auto it = py_sparc64_cpu_check_irqs_disabled.begin();
	       it != py_sparc64_cpu_check_irqs_disabled.end(); ++it) {
	    boost::python::call(*it,pil,pil_in,softint,intno);	  }

}
void cb_sparc64_cpu_ivec_raise_irq(int irq) {


	  for (auto it = py_sparc64_cpu_ivec_raise_irq.begin();
	       it != py_sparc64_cpu_ivec_raise_irq.end(); ++it) {
	    boost::python::call(*it,irq);	  }

}
void cb_sparc64_cpu_ivec_lower_irq(int irq) {


	  for (auto it = py_sparc64_cpu_ivec_lower_irq.begin();
	       it != py_sparc64_cpu_ivec_lower_irq.end(); ++it) {
	    boost::python::call(*it,irq);	  }

}
void cb_sparc64_cpu_tick_irq_disabled(void) {


	  for (auto it = py_sparc64_cpu_tick_irq_disabled.begin();
	       it != py_sparc64_cpu_tick_irq_disabled.end(); ++it) {
	    boost::python::call(*it);	  }

}
void cb_sparc64_cpu_tick_irq_fire(void) {


	  for (auto it = py_sparc64_cpu_tick_irq_fire.begin();
	       it != py_sparc64_cpu_tick_irq_fire.end(); ++it) {
	    boost::python::call(*it);	  }

}
void cb_sparc64_cpu_stick_irq_disabled(void) {


	  for (auto it = py_sparc64_cpu_stick_irq_disabled.begin();
	       it != py_sparc64_cpu_stick_irq_disabled.end(); ++it) {
	    boost::python::call(*it);	  }

}
void cb_sparc64_cpu_stick_irq_fire(void) {


	  for (auto it = py_sparc64_cpu_stick_irq_fire.begin();
	       it != py_sparc64_cpu_stick_irq_fire.end(); ++it) {
	    boost::python::call(*it);	  }

}
void cb_sparc64_cpu_hstick_irq_disabled(void) {


	  for (auto it = py_sparc64_cpu_hstick_irq_disabled.begin();
	       it != py_sparc64_cpu_hstick_irq_disabled.end(); ++it) {
	    boost::python::call(*it);	  }

}
void cb_sparc64_cpu_hstick_irq_fire(void) {


	  for (auto it = py_sparc64_cpu_hstick_irq_fire.begin();
	       it != py_sparc64_cpu_hstick_irq_fire.end(); ++it) {
	    boost::python::call(*it);	  }

}
void cb_sparc64_cpu_tick_set_count(const char *name,uint64_t real_count,const char *npt,void *p) {

  for (auto it = py_sparc64_cpu_tick_set_count.begin();
       it != py_sparc64_cpu_tick_set_count.end(); ++it) {
    boost::python::call(*it,*name,real_count,*npt,*p);  }
}
void cb_sparc64_cpu_tick_get_count(const char *name,uint64_t real_count,const char *npt,void *p) {


	  for (auto it = py_sparc64_cpu_tick_get_count.begin();
	       it != py_sparc64_cpu_tick_get_count.end(); ++it) {
	    boost::python::call(*it,*name,real_count,*npt,*p);	  }

}
void cb_sparc64_cpu_tick_set_limit(const char *name,uint64_t real_limit,const char *dis,void *p,uint64_t limit,uint64_t t,uint64_t dt) {


	  for (auto it = py_sparc64_cpu_tick_set_limit.begin();
	       it != py_sparc64_cpu_tick_set_limit.end(); ++it) {
	    boost::python::call(*it,*name,real_limit,*dis,*p,limit,t,dt);	  }

}
void cb_sparc64_cpu_tick_set_limit_zero(const char *name) {


	  for (auto it = py_sparc64_cpu_tick_set_limit_zero.begin();
	       it != py_sparc64_cpu_tick_set_limit_zero.end(); ++it) {
	    boost::python::call(*it,*name);	  }

}
