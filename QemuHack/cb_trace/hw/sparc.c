//#See docs / devel / tracing.txt for syntax documentation.

//#sun4m.c
void cb_sun4m_cpu_interrupt(unsigned int level) {

  for (auto it = py_sun4m_cpu_interrupt.begin();
       it != py_sun4m_cpu_interrupt.end(); ++it) {
    boost::python::call(*it, level);  }
}
void cb_sun4m_cpu_reset_interrupt(unsigned int level) {

  for (auto it = py_sun4m_cpu_reset_interrupt.begin();
       it != py_sun4m_cpu_reset_interrupt.end(); ++it) {
    boost::python::call(*it, level);  }
}
void cb_sun4m_cpu_set_irq_raise(int level) {

  for (auto it = py_sun4m_cpu_set_irq_raise.begin();
       it != py_sun4m_cpu_set_irq_raise.end(); ++it) {
    boost::python::call(*it, level);  }
}
void cb_sun4m_cpu_set_irq_lower(int level) {

  for (auto it = py_sun4m_cpu_set_irq_lower.begin();
       it != py_sun4m_cpu_set_irq_lower.end(); ++it) {
    boost::python::call(*it, level);  }
}

//#sun4m_iommu.c
void cb_sun4m_iommu_mem_readl(uint64_t addr, uint32_t ret) {

  for (auto it = py_sun4m_iommu_mem_readl.begin();
       it != py_sun4m_iommu_mem_readl.end(); ++it) {
    boost::python::call(*it, addr, ret);  }
}
void cb_sun4m_iommu_mem_writel(uint64_t addr, uint32_t val) {

  for (auto it = py_sun4m_iommu_mem_writel.begin();
       it != py_sun4m_iommu_mem_writel.end(); ++it) {
    boost::python::call(*it, addr, val);  }
}
void cb_sun4m_iommu_mem_writel_ctrl(uint64_t iostart) {

  for (auto it = py_sun4m_iommu_mem_writel_ctrl.begin();
       it != py_sun4m_iommu_mem_writel_ctrl.end(); ++it) {
    boost::python::call(*it, iostart);  }
}
void cb_sun4m_iommu_mem_writel_tlbflush(uint32_t val) {

  for (auto it = py_sun4m_iommu_mem_writel_tlbflush.begin();
       it != py_sun4m_iommu_mem_writel_tlbflush.end(); ++it) {
    boost::python::call(*it, val);  }
}
void cb_sun4m_iommu_mem_writel_pgflush(uint32_t val) {

  for (auto it = py_sun4m_iommu_mem_writel_pgflush.begin();
       it != py_sun4m_iommu_mem_writel_pgflush.end(); ++it) {
    boost::python::call(*it, val);  }
}
void cb_sun4m_iommu_page_get_flags(uint64_t pa, uint64_t iopte, uint32_t ret) {

  for (auto it = py_sun4m_iommu_page_get_flags.begin();
       it != py_sun4m_iommu_page_get_flags.end(); ++it) {
    boost::python::call(*it, pa, iopte, ret);  }
}
void cb_sun4m_iommu_translate_pa(uint64_t addr, uint64_t pa, uint32_t iopte) {

  for (auto it = py_sun4m_iommu_translate_pa.begin();
       it != py_sun4m_iommu_translate_pa.end(); ++it) {
    boost::python::call(*it, addr, pa, iopte);  }
}
void cb_sun4m_iommu_bad_addr(uint64_t addr) {

  for (auto it = py_sun4m_iommu_bad_addr.begin();
       it != py_sun4m_iommu_bad_addr.end(); ++it) {
    boost::python::call(*it, addr);  }
}

//#leon3.c
void cb_leon3_set_irq(int intno) {

  for (auto it = py_leon3_set_irq.begin();
       it != py_leon3_set_irq.end(); ++it) {
    boost::python::call(*it, intno);  }
}
void cb_leon3_reset_irq(int intno) {

  for (auto it = py_leon3_reset_irq.begin();
       it != py_leon3_reset_irq.end(); ++it) {
    boost::python::call(*it, intno);  }
}
