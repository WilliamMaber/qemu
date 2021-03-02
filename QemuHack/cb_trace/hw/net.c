//#See docs / devel / tracing.txt for syntax documentation.

//#allwinner - sun8i - emac.c
void cb_allwinner_sun8i_emac_mii_write_reg(uint32_t reg,uint32_t value) {

  for (auto it = py_allwinner_sun8i_emac_mii_write_reg.begin();
       it != py_allwinner_sun8i_emac_mii_write_reg.end(); ++it) {
    boost::python::call(*it,reg,value);  }
}
void cb_allwinner_sun8i_emac_mii_read_reg(uint32_t reg,uint32_t value) {

  for (auto it = py_allwinner_sun8i_emac_mii_read_reg.begin();
       it != py_allwinner_sun8i_emac_mii_read_reg.end(); ++it) {
    boost::python::call(*it,reg,value);  }
}
void cb_allwinner_sun8i_emac_receive(uint32_t desc,uint32_t paddr,uint32_t bytes) {

  for (auto it = py_allwinner_sun8i_emac_receive.begin();
       it != py_allwinner_sun8i_emac_receive.end(); ++it) {
    boost::python::call(*it,desc,paddr,bytes);  }
}
void cb_allwinner_sun8i_emac_transmit(uint32_t desc,uint32_t paddr,uint32_t bytes) {

  for (auto it = py_allwinner_sun8i_emac_transmit.begin();
       it != py_allwinner_sun8i_emac_transmit.end(); ++it) {
    boost::python::call(*it,desc,paddr,bytes);  }
}
void cb_allwinner_sun8i_emac_reset(void) {

  for (auto it = py_allwinner_sun8i_emac_reset.begin();
       it != py_allwinner_sun8i_emac_reset.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_allwinner_sun8i_emac_set_link(bool active) {

  for (auto it = py_allwinner_sun8i_emac_set_link.begin();
       it != py_allwinner_sun8i_emac_set_link.end(); ++it) {
    boost::python::call(*it,active);  }
}
void cb_allwinner_sun8i_emac_read(uint64_t offset,uint64_t val) {

  for (auto it = py_allwinner_sun8i_emac_read.begin();
       it != py_allwinner_sun8i_emac_read.end(); ++it) {
    boost::python::call(*it,offset,val);  }
}
void cb_allwinner_sun8i_emac_write(uint64_t offset,uint64_t val) {

  for (auto it = py_allwinner_sun8i_emac_write.begin();
       it != py_allwinner_sun8i_emac_write.end(); ++it) {
    boost::python::call(*it,offset,val);  }
}

//#etraxfs_eth.c
void cb_mdio_phy_read(int regnum,uint16_t value) {

  for (auto it = py_mdio_phy_read.begin(); it != py_mdio_phy_read.end(); ++it) {
    boost::python::call(*it,regnum,value);  }
}
void cb_mdio_phy_write(int regnum,uint16_t value) {

  for (auto it = py_mdio_phy_write.begin(); it != py_mdio_phy_write.end(); ++it) {
    boost::python::call(*it,regnum,value);  }
}
void cb_mdio_bitbang(bool mdc,bool mdio,int state,uint16_t cnt,unsigned int drive) {

  for (auto it = py_mdio_bitbang.begin(); it != py_mdio_bitbang.end(); ++it) {
    boost::python::call(*it,mdc,mdio,state,cnt,drive);  }
}

//#lance.c
void cb_lance_mem_readw(uint64_t addr,uint32_t ret) {

  for (auto it = py_lance_mem_readw.begin(); it != py_lance_mem_readw.end(); ++it) {
    boost::python::call(*it,addr,ret);  }
}
void cb_lance_mem_writew(uint64_t addr,uint32_t val) {

  for (auto it = py_lance_mem_writew.begin(); it != py_lance_mem_writew.end(); ++it) {
    boost::python::call(*it,addr,val);  }
}

//#milkymist - minimac2.c
void cb_milkymist_minimac2_memory_read(uint32_t addr,uint32_t value) {

  for (auto it = py_milkymist_minimac2_memory_read.begin();
       it != py_milkymist_minimac2_memory_read.end(); ++it) {
    boost::python::call(*it,addr,value);  }
}
void cb_milkymist_minimac2_memory_write(uint32_t addr,uint32_t value) {

  for (auto it = py_milkymist_minimac2_memory_write.begin();
       it != py_milkymist_minimac2_memory_write.end(); ++it) {
    boost::python::call(*it,addr,value);  }
}
void cb_milkymist_minimac2_mdio_write(uint8_t phy_addr,uint8_t addr,uint16_t value) {

  for (auto it = py_milkymist_minimac2_mdio_write.begin();
       it != py_milkymist_minimac2_mdio_write.end(); ++it) {
    boost::python::call(*it,phy_addr,addr,value);  }
}
void cb_milkymist_minimac2_mdio_read(uint8_t phy_addr,uint8_t addr,uint16_t value) {

  for (auto it = py_milkymist_minimac2_mdio_read.begin();
       it != py_milkymist_minimac2_mdio_read.end(); ++it) {
    boost::python::call(*it,phy_addr,addr,value);  }
}
void cb_milkymist_minimac2_tx_frame(uint32_t length) {

  for (auto it = py_milkymist_minimac2_tx_frame.begin();
       it != py_milkymist_minimac2_tx_frame.end(); ++it) {
    boost::python::call(*it,length);  }
}
void cb_milkymist_minimac2_rx_frame(const void *buf,uint32_t length) {

  for (auto it = py_milkymist_minimac2_rx_frame.begin();
       it != py_milkymist_minimac2_rx_frame.end(); ++it) {
    boost::python::call(*it,buf,length);  }
}
void cb_milkymist_minimac2_rx_transfer(const void *buf,uint32_t length) {

  for (auto it = py_milkymist_minimac2_rx_transfer.begin();
       it != py_milkymist_minimac2_rx_transfer.end(); ++it) {
    boost::python::call(*it,buf,length);  }
}
void cb_milkymist_minimac2_raise_irq_rx(void) {

  for (auto it = py_milkymist_minimac2_raise_irq_rx.begin();
       it != py_milkymist_minimac2_raise_irq_rx.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_milkymist_minimac2_lower_irq_rx(void) {

  for (auto it = py_milkymist_minimac2_lower_irq_rx.begin();
       it != py_milkymist_minimac2_lower_irq_rx.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_milkymist_minimac2_pulse_irq_tx(void) {

  for (auto it = py_milkymist_minimac2_pulse_irq_tx.begin();
       it != py_milkymist_minimac2_pulse_irq_tx.end(); ++it) {
    boost::python::call(*it,void);  }
}

//#mipsnet.c
void cb_mipsnet_send(uint32_t size) {

  for (auto it = py_mipsnet_send.begin(); it != py_mipsnet_send.end(); ++it) {
    boost::python::call(*it,size);  }
}
void cb_mipsnet_receive(uint32_t size) {

  for (auto it = py_mipsnet_receive.begin(); it != py_mipsnet_receive.end(); ++it) {
    boost::python::call(*it,size);  }
}
void cb_mipsnet_read(uint64_t addr,uint32_t val) {

  for (auto it = py_mipsnet_read.begin(); it != py_mipsnet_read.end(); ++it) {
    boost::python::call(*it,addr,val);  }
}
void cb_mipsnet_write(uint64_t addr,uint64_t val) {

  for (auto it = py_mipsnet_write.begin(); it != py_mipsnet_write.end(); ++it) {
    boost::python::call(*it,addr,val);  }
}
void cb_mipsnet_irq(uint32_t isr,uint32_t intctl) {

  for (auto it = py_mipsnet_irq.begin(); it != py_mipsnet_irq.end(); ++it) {
    boost::python::call(*it,isr,ctl);  }
}

//#ne2000.c
void cb_ne2000_read(uint64_t addr,uint64_t val) {

  for (auto it = py_ne2000_read.begin(); it != py_ne2000_read.end(); ++it) {
    boost::python::call(*it,addr,val);  }
}
void cb_ne2000_write(uint64_t addr,uint64_t val) {

  for (auto it = py_ne2000_write.begin(); it != py_ne2000_write.end(); ++it) {
    boost::python::call(*it,addr,val);  }
}
void cb_ne2000_ioport_read(uint64_t addr,uint64_t val) {

  for (auto it = py_ne2000_ioport_read.begin(); it != py_ne2000_ioport_read.end();
       ++it) {
    boost::python::call(*it,addr,val);  }
}
void cb_ne2000_ioport_write(uint64_t addr,uint64_t val) {

  for (auto it = py_ne2000_ioport_write.begin(); it != py_ne2000_ioport_write.end();
       ++it) {
    boost::python::call(*it,addr,val);  }
}

//#opencores_eth.c
void cb_open_eth_mii_write(unsigned idx,uint16_t v) {

  for (auto it = py_open_eth_mii_write.begin(); it != py_open_eth_mii_write.end();
       ++it) {
    boost::python::call(*it,idx,v);  }
}
void cb_open_eth_mii_read(unsigned idx,uint16_t v) {

  for (auto it = py_open_eth_mii_read.begin(); it != py_open_eth_mii_read.end();
       ++it) {
    boost::python::call(*it,idx,v);  }
}
void cb_open_eth_update_irq(uint32_t v) {

  for (auto it = py_open_eth_update_irq.begin(); it != py_open_eth_update_irq.end();
       ++it) {
    boost::python::call(*it,v);  }
}
void cb_open_eth_receive(unsigned len) {

  for (auto it = py_open_eth_receive.begin(); it != py_open_eth_receive.end(); ++it) {
    boost::python::call(*it,len);  }
}
void cb_open_eth_receive_mcast(unsigned idx,uint32_t h0,uint32_t h1) {

  for (auto it = py_open_eth_receive_mcast.begin();
       it != py_open_eth_receive_mcast.end(); ++it) {
    boost::python::call(*it,idx,h0,h1);  }
}
void cb_open_eth_receive_reject(void) {

  for (auto it = py_open_eth_receive_reject.begin();
       it != py_open_eth_receive_reject.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_open_eth_receive_desc(uint32_t addr,uint32_t len_flags) {

  for (auto it = py_open_eth_receive_desc.begin();
       it != py_open_eth_receive_desc.end(); ++it) {
    boost::python::call(*it,addr,len_flags);  }
}
void cb_open_eth_start_xmit(uint32_t addr,unsigned len,unsigned tx_len) {

  for (auto it = py_open_eth_start_xmit.begin(); it != py_open_eth_start_xmit.end();
       ++it) {
    boost::python::call(*it,addr,len,tx_len);  }
}
void cb_open_eth_reg_read(uint32_t addr,uint32_t v) {

  for (auto it = py_open_eth_reg_read.begin(); it != py_open_eth_reg_read.end();
       ++it) {
    boost::python::call(*it,addr,v);  }
}
void cb_open_eth_reg_write(uint32_t addr,uint32_t v) {

  for (auto it = py_open_eth_reg_write.begin(); it != py_open_eth_reg_write.end();
       ++it) {
    boost::python::call(*it,addr,v);  }
}
void cb_open_eth_desc_read(uint32_t addr,uint32_t v) {

  for (auto it = py_open_eth_desc_read.begin(); it != py_open_eth_desc_read.end();
       ++it) {
    boost::python::call(*it,addr,v);  }
}
void cb_open_eth_desc_write(uint32_t addr,uint32_t v) {

  for (auto it = py_open_eth_desc_write.begin(); it != py_open_eth_desc_write.end();
       ++it) {
    boost::python::call(*it,addr,v);  }
}

//#pcnet.c
void cb_pcnet_s_reset(void *s) {

  for (auto it = py_pcnet_s_reset.begin(); it != py_pcnet_s_reset.end(); ++it) {
    boost::python::call(*it,s);  }
}
void cb_pcnet_user_int(void *s) {

  for (auto it = py_pcnet_user_int.begin(); it != py_pcnet_user_int.end(); ++it) {
    boost::python::call(*it,s);  }
}
void cb_pcnet_isr_change(void *s,uint32_t isr,uint32_t isr_old) {

  for (auto it = py_pcnet_isr_change.begin(); it != py_pcnet_isr_change.end(); ++it) {
    boost::python::call(*it,s,isr,isr_old);  }
}
void cb_pcnet_init(void *s,uint64_t init_addr) {

  for (auto it = py_pcnet_init.begin(); it != py_pcnet_init.end(); ++it) {
    boost::python::call(*it,s,init_addr);  }
}
void cb_pcnet_rlen_tlen(void *s,uint32_t rlen,uint32_t tlen) {

  for (auto it = py_pcnet_rlen_tlen.begin(); it != py_pcnet_rlen_tlen.end(); ++it) {
    boost::python::call(*it,s,rlen,tlen);  }
}
void cb_pcnet_ss32_rdra_tdra(void *s,uint32_t ss32,uint32_t rdra,uint32_t rcvrl,uint32_t tdra,uint32_t xmtrl) {

  for (auto it = py_pcnet_ss32_rdra_tdra.begin(); it != py_pcnet_ss32_rdra_tdra.end();
       ++it) {
    boost::python::call(*it,s,ss32,rdra,rcvrl,tdra,xmtrl);  }
}

//#pcnet - pci.c
void cb_pcnet_aprom_writeb(void *opaque,uint32_t addr,uint32_t val) {

  for (auto it = py_pcnet_aprom_writeb.begin(); it != py_pcnet_aprom_writeb.end();
       ++it) {
    boost::python::call(*it,opaque,addr,val);  }
}
void cb_pcnet_aprom_readb(void *opaque,uint32_t addr,uint32_t val) {

  for (auto it = py_pcnet_aprom_readb.begin(); it != py_pcnet_aprom_readb.end();
       ++it) {
    boost::python::call(*it,opaque,addr,val);  }
}
void cb_pcnet_ioport_read(void *opaque,uint64_t addr,unsigned size) {

  for (auto it = py_pcnet_ioport_read.begin(); it != py_pcnet_ioport_read.end();
       ++it) {
    boost::python::call(*it,opaque,addr,size);  }
}
void cb_pcnet_ioport_write(void *opaque,uint64_t addr,uint64_t data,unsigned size) {

  for (auto it = py_pcnet_ioport_write.begin(); it != py_pcnet_ioport_write.end();
       ++it) {
    boost::python::call(*it,opaque,addr,data,size);  }
}

//#net_rx_pkt.c
void cb_net_rx_pkt_parsed(bool ip4,bool ip6,bool udp,bool tcp,size_t l3o,size_t l4o,size_t l5o) {

  for (auto it = py_net_rx_pkt_parsed.begin(); it != py_net_rx_pkt_parsed.end();
       ++it) {
    boost::python::call(*it,ip4,ip6,udp,tcp,l3o,sizel4o,sizel5o);  }
}
void cb_net_rx_pkt_l4_csum_validate_entry(void) {

  for (auto it = py_net_rx_pkt_l4_csum_validate_entry.begin();
       it != py_net_rx_pkt_l4_csum_validate_entry.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_net_rx_pkt_l4_csum_validate_not_xxp(void) {

  for (auto it = py_net_rx_pkt_l4_csum_validate_not_xxp.begin();
       it != py_net_rx_pkt_l4_csum_validate_not_xxp.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_net_rx_pkt_l4_csum_validate_udp_with_no_checksum(void) {

  for (auto it = py_net_rx_pkt_l4_csum_validate_udp_with_no_checksum.begin();
       it != py_net_rx_pkt_l4_csum_validate_udp_with_no_checksum.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_net_rx_pkt_l4_csum_validate_ip4_fragment(void) {

  for (auto it = py_net_rx_pkt_l4_csum_validate_ip4_fragment.begin();
       it != py_net_rx_pkt_l4_csum_validate_ip4_fragment.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_net_rx_pkt_l4_csum_validate_csum(bool csum_valid) {

  for (auto it = py_net_rx_pkt_l4_csum_validate_csum.begin();
       it != py_net_rx_pkt_l4_csum_validate_csum.end(); ++it) {
    boost::python::call(*it,csum_valid);  }
}

void cb_net_rx_pkt_l4_csum_calc_entry(void) {

  for (auto it = py_net_rx_pkt_l4_csum_calc_entry.begin();
       it != py_net_rx_pkt_l4_csum_calc_entry.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_net_rx_pkt_l4_csum_calc_ip4_udp(void) {

  for (auto it = py_net_rx_pkt_l4_csum_calc_ip4_udp.begin();
       it != py_net_rx_pkt_l4_csum_calc_ip4_udp.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_net_rx_pkt_l4_csum_calc_ip4_tcp(void) {

  for (auto it = py_net_rx_pkt_l4_csum_calc_ip4_tcp.begin();
       it != py_net_rx_pkt_l4_csum_calc_ip4_tcp.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_net_rx_pkt_l4_csum_calc_ip6_udp(void) {

  for (auto it = py_net_rx_pkt_l4_csum_calc_ip6_udp.begin();
       it != py_net_rx_pkt_l4_csum_calc_ip6_udp.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_net_rx_pkt_l4_csum_calc_ip6_tcp(void) {

  for (auto it = py_net_rx_pkt_l4_csum_calc_ip6_tcp.begin();
       it != py_net_rx_pkt_l4_csum_calc_ip6_tcp.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_net_rx_pkt_l4_csum_calc_ph_csum(uint32_t cntr,uint16_t csl) {

  for (auto it = py_net_rx_pkt_l4_csum_calc_ph_csum.begin();
       it != py_net_rx_pkt_l4_csum_calc_ph_csum.end(); ++it) {
    boost::python::call(*it,cntr,csl);  }
}
void cb_net_rx_pkt_l4_csum_calc_csum(size_t l4hdr_off,uint16_t csl,uint32_t cntr,uint16_t csum) {

  for (auto it = py_net_rx_pkt_l4_csum_calc_csum.begin();
       it != py_net_rx_pkt_l4_csum_calc_csum.end(); ++it) {
    boost::python::call(*it,l4hdr_off,csl,cntr,csum);  }
}

void cb_net_rx_pkt_l4_csum_fix_entry(void) {

  for (auto it = py_net_rx_pkt_l4_csum_fix_entry.begin();
       it != py_net_rx_pkt_l4_csum_fix_entry.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_net_rx_pkt_l4_csum_fix_tcp(uint32_t l4_cso) {

  for (auto it = py_net_rx_pkt_l4_csum_fix_tcp.begin();
       it != py_net_rx_pkt_l4_csum_fix_tcp.end(); ++it) {
    boost::python::call(*it,l4_cso);  }
}
void cb_net_rx_pkt_l4_csum_fix_udp(uint32_t l4_cso) {

  for (auto it = py_net_rx_pkt_l4_csum_fix_udp.begin();
       it != py_net_rx_pkt_l4_csum_fix_udp.end(); ++it) {
    boost::python::call(*it,l4_cso);  }
}
void cb_net_rx_pkt_l4_csum_fix_not_xxp(void) {

  for (auto it = py_net_rx_pkt_l4_csum_fix_not_xxp.begin();
       it != py_net_rx_pkt_l4_csum_fix_not_xxp.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_net_rx_pkt_l4_csum_fix_ip4_fragment(void) {

  for (auto it = py_net_rx_pkt_l4_csum_fix_ip4_fragment.begin();
       it != py_net_rx_pkt_l4_csum_fix_ip4_fragment.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_net_rx_pkt_l4_csum_fix_udp_with_no_checksum(void) {

  for (auto it = py_net_rx_pkt_l4_csum_fix_udp_with_no_checksum.begin();
       it != py_net_rx_pkt_l4_csum_fix_udp_with_no_checksum.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_net_rx_pkt_l4_csum_fix_csum(uint32_t cso,uint16_t csum) {

  for (auto it = py_net_rx_pkt_l4_csum_fix_csum.begin();
       it != py_net_rx_pkt_l4_csum_fix_csum.end(); ++it) {
    boost::python::call(*it,cso,csum);  }
}

void cb_net_rx_pkt_l3_csum_validate_entry(void) {

  for (auto it = py_net_rx_pkt_l3_csum_validate_entry.begin();
       it != py_net_rx_pkt_l3_csum_validate_entry.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_net_rx_pkt_l3_csum_validate_not_ip4(void) {

  for (auto it = py_net_rx_pkt_l3_csum_validate_not_ip4.begin();
       it != py_net_rx_pkt_l3_csum_validate_not_ip4.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_net_rx_pkt_l3_csum_validate_csum(size_t l3hdr_off,uint32_t csl,uint32_t cntr,uint16_t csum,bool csum_valid) {

  for (auto it = py_net_rx_pkt_l3_csum_validate_csum.begin();
       it != py_net_rx_pkt_l3_csum_validate_csum.end(); ++it) {
    boost::python::call(*it,l3hdr_off,csl,cntr,csum,csum_valid);  }
}

void cb_net_rx_pkt_rss_ip4(void) {

  for (auto it = py_net_rx_pkt_rss_ip4.begin(); it != py_net_rx_pkt_rss_ip4.end();
       ++it) {
    boost::python::call(*it,void);  }
}
void cb_net_rx_pkt_rss_ip4_tcp(void) {

  for (auto it = py_net_rx_pkt_rss_ip4_tcp.begin();
       it != py_net_rx_pkt_rss_ip4_tcp.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_net_rx_pkt_rss_ip4_udp(void) {

  for (auto it = py_net_rx_pkt_rss_ip4_udp.begin();
       it != py_net_rx_pkt_rss_ip4_udp.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_net_rx_pkt_rss_ip6_tcp(void) {

  for (auto it = py_net_rx_pkt_rss_ip6_tcp.begin();
       it != py_net_rx_pkt_rss_ip6_tcp.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_net_rx_pkt_rss_ip6_udp(void) {

  for (auto it = py_net_rx_pkt_rss_ip6_udp.begin();
       it != py_net_rx_pkt_rss_ip6_udp.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_net_rx_pkt_rss_ip6(void) {

  for (auto it = py_net_rx_pkt_rss_ip6.begin(); it != py_net_rx_pkt_rss_ip6.end();
       ++it) {
    boost::python::call(*it,void);  }
}
void cb_net_rx_pkt_rss_ip6_ex(void) {

  for (auto it = py_net_rx_pkt_rss_ip6_ex.begin();
       it != py_net_rx_pkt_rss_ip6_ex.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_net_rx_pkt_rss_ip6_ex_tcp(void) {

  for (auto it = py_net_rx_pkt_rss_ip6_ex_tcp.begin();
       it != py_net_rx_pkt_rss_ip6_ex_tcp.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_net_rx_pkt_rss_ip6_ex_udp(void) {

  for (auto it = py_net_rx_pkt_rss_ip6_ex_udp.begin();
       it != py_net_rx_pkt_rss_ip6_ex_udp.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_net_rx_pkt_rss_hash(size_t rss_length,uint32_t rss_hash) {

  for (auto it = py_net_rx_pkt_rss_hash.begin(); it != py_net_rx_pkt_rss_hash.end();
       ++it) {
    boost::python::call(*it,rss_length,rss_hash);  }
}
void cb_net_rx_pkt_rss_add_chunk(void *ptr,size_t size,size_t input_offset) {

  for (auto it = py_net_rx_pkt_rss_add_chunk.begin();
       it != py_net_rx_pkt_rss_add_chunk.end(); ++it) {
    boost::python::call(*it,ptr,size,input_offset);  }
}

//#e1000.c
void cb_e1000_receiver_overrun(size_t s,uint32_t rdh,uint32_t rdt) {

  for (auto it = py_e1000_receiver_overrun.begin();
       it != py_e1000_receiver_overrun.end(); ++it) {
    boost::python::call(*it,s,rdh,rdt);  }
}

//#e1000x_common.c
void cb_e1000x_rx_can_recv_disabled(bool link_up,bool rx_enabled,bool pci_master) {

  for (auto it = py_e1000x_rx_can_recv_disabled.begin();
       it != py_e1000x_rx_can_recv_disabled.end(); ++it) {
    boost::python::call(*it,link_up,rx_enabled,pci_master);  }
}
void cb_e1000x_vlan_is_vlan_pkt(bool is_vlan_pkt,uint16_t eth_proto,uint16_t vet) {

  for (auto it = py_e1000x_vlan_is_vlan_pkt.begin();
       it != py_e1000x_vlan_is_vlan_pkt.end(); ++it) {
    boost::python::call(*it,is_vlan_pkt,eth_proto,vet);  }
}
void cb_e1000x_rx_flt_ucast_match(uint32_t idx,uint8_t b0,uint8_t b1,uint8_t b2,uint8_t b3,uint8_t b4,uint8_t b5) {

  for (auto it = py_e1000x_rx_flt_ucast_match.begin();
       it != py_e1000x_rx_flt_ucast_match.end(); ++it) {
    boost::python::call(*it,idx,b0,b1,b2,b3,b4,b5);  }
}
void cb_e1000x_rx_flt_ucast_mismatch(uint8_t b0,uint8_t b1,uint8_t b2,uint8_t b3,uint8_t b4,uint8_t b5) {

  for (auto it = py_e1000x_rx_flt_ucast_mismatch.begin();
       it != py_e1000x_rx_flt_ucast_mismatch.end(); ++it) {
    boost::python::call(*it,b0,b1,b2,b3,b4,b5);  }
}
void cb_e1000x_rx_flt_inexact_mismatch(uint8_t b0,uint8_t b1,uint8_t b2,uint8_t b3,uint8_t b4,uint8_t b5,uint32_t mo,uint32_t mta,uint32_t mta_val) {

  for (auto it = py_e1000x_rx_flt_inexact_mismatch.begin();
       it != py_e1000x_rx_flt_inexact_mismatch.end(); ++it) {
    boost::python::call(*it,b0,b1,b2,b3,b4,b5,mo,mta,mta_val);  }
}
void cb_e1000x_rx_link_down(uint32_t status_reg) {

  for (auto it = py_e1000x_rx_link_down.begin(); it != py_e1000x_rx_link_down.end();
       ++it) {
    boost::python::call(*it,status_reg);  }
}
void cb_e1000x_rx_disabled(uint32_t rctl_reg) {

  for (auto it = py_e1000x_rx_disabled.begin(); it != py_e1000x_rx_disabled.end();
       ++it) {
    boost::python::call(*it,rctl_reg);  }
}
void cb_e1000x_rx_oversized(size_t size) {

  for (auto it = py_e1000x_rx_oversized.begin(); it != py_e1000x_rx_oversized.end();
       ++it) {
    boost::python::call(*it,size);  }
}
void cb_e1000x_mac_indicate(uint8_t b0,uint8_t b1,uint8_t b2,uint8_t b3,uint8_t b4,uint8_t b5) {

  for (auto it = py_e1000x_mac_indicate.begin(); it != py_e1000x_mac_indicate.end();
       ++it) {
    boost::python::call(*it,b0,b1,b2,b3,b4,b5);  }
}
void cb_e1000x_link_negotiation_start(void) {

  for (auto it = py_e1000x_link_negotiation_start.begin();
       it != py_e1000x_link_negotiation_start.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000x_link_negotiation_done(void) {

  for (auto it = py_e1000x_link_negotiation_done.begin();
       it != py_e1000x_link_negotiation_done.end(); ++it) {
    boost::python::call(*it,void);  }
}

//#e1000e_core.c
void cb_e1000e_core_write(uint64_t index,uint32_t size,uint64_t val) {

  for (auto it = py_e1000e_core_write.begin(); it != py_e1000e_core_write.end();
       ++it) {
    boost::python::call(*it,index,size,val);  }
}
void cb_e1000e_core_read(uint64_t index,uint32_t size,uint64_t val) {

  for (auto it = py_e1000e_core_read.begin(); it != py_e1000e_core_read.end(); ++it) {
    boost::python::call(*it,index,size,val);  }
}
void cb_e1000e_core_mdic_read(uint8_t page,uint32_t addr,uint32_t data) {

  for (auto it = py_e1000e_core_mdic_read.begin();
       it != py_e1000e_core_mdic_read.end(); ++it) {
    boost::python::call(*it,page,addr,data);  }
}
void cb_e1000e_core_mdic_read_unhandled(uint8_t page,uint32_t addr) {

  for (auto it = py_e1000e_core_mdic_read_unhandled.begin();
       it != py_e1000e_core_mdic_read_unhandled.end(); ++it) {
    boost::python::call(*it,page,addr);  }
}
void cb_e1000e_core_mdic_write(uint8_t page,uint32_t addr,uint32_t data) {

  for (auto it = py_e1000e_core_mdic_write.begin();
       it != py_e1000e_core_mdic_write.end(); ++it) {
    boost::python::call(*it,page,addr,data);  }
}
void cb_e1000e_core_mdic_write_unhandled(uint8_t page,uint32_t addr) {

  for (auto it = py_e1000e_core_mdic_write_unhandled.begin();
       it != py_e1000e_core_mdic_write_unhandled.end(); ++it) {
    boost::python::call(*it,page,addr);  }
}
void cb_e1000e_core_ctrl_write(uint64_t index,uint32_t val) {

  for (auto it = py_e1000e_core_ctrl_write.begin();
       it != py_e1000e_core_ctrl_write.end(); ++it) {
    boost::python::call(*it,index,val);  }
}
void cb_e1000e_core_ctrl_sw_reset(void) {

  for (auto it = py_e1000e_core_ctrl_sw_reset.begin();
       it != py_e1000e_core_ctrl_sw_reset.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_core_ctrl_phy_reset(void) {

  for (auto it = py_e1000e_core_ctrl_phy_reset.begin();
       it != py_e1000e_core_ctrl_phy_reset.end(); ++it) {
    boost::python::call(*it,void);  }
}

void cb_e1000e_link_autoneg_flowctl(bool enabled) {

  for (auto it = py_e1000e_link_autoneg_flowctl.begin();
       it != py_e1000e_link_autoneg_flowctl.end(); ++it) {
    boost::python::call(*it,enabled);  }
}
void cb_e1000e_link_set_params(bool autodetect,uint32_t speed,bool force_spd,bool force_dplx,bool rx_fctl,bool tx_fctl) {

  for (auto it = py_e1000e_link_set_params.begin();
       it != py_e1000e_link_set_params.end(); ++it) {
    boost::python::call(*it,autodetect,speed,force_spd,force_dplx,rx_fctl,tx_fctl);  }
}
void cb_e1000e_link_read_params(bool autodetect,uint32_t speed,bool force_spd,bool force_dplx,bool rx_fctl,bool tx_fctl) {

  for (auto it = py_e1000e_link_read_params.begin();
       it != py_e1000e_link_read_params.end(); ++it) {
    boost::python::call(*it,autodetect,speed,force_spd,force_dplx,rx_fctl,tx_fctl);  }
}
void cb_e1000e_link_set_ext_params(bool asd_check,bool speed_select_bypass) {

  for (auto it = py_e1000e_link_set_ext_params.begin();
       it != py_e1000e_link_set_ext_params.end(); ++it) {
    boost::python::call(*it,asd_check,speed_select_bypass);  }
}
void cb_e1000e_link_status(bool link_up,bool full_dplx,uint32_t speed,uint32_t asdv) {

  for (auto it = py_e1000e_link_status.begin(); it != py_e1000e_link_status.end();
       ++it) {
    boost::python::call(*it,link_up,full_dplx,speed,asdv);  }
}
void cb_e1000e_link_status_changed(bool status) {

  for (auto it = py_e1000e_link_status_changed.begin();
       it != py_e1000e_link_status_changed.end(); ++it) {
    boost::python::call(*it,status);  }
}

void cb_e1000e_wrn_regs_write_ro(uint64_t index,uint32_t size,uint64_t val) {

  for (auto it = py_e1000e_wrn_regs_write_ro.begin();
       it != py_e1000e_wrn_regs_write_ro.end(); ++it) {
    boost::python::call(*it,index,size,val);  }
}
void cb_e1000e_wrn_regs_write_unknown(uint64_t index,uint32_t size,uint64_t val) {

  for (auto it = py_e1000e_wrn_regs_write_unknown.begin();
       it != py_e1000e_wrn_regs_write_unknown.end(); ++it) {
    boost::python::call(*it,index,size,val);  }
}
void cb_e1000e_wrn_regs_read_unknown(uint64_t index,uint32_t size) {

  for (auto it = py_e1000e_wrn_regs_read_unknown.begin();
       it != py_e1000e_wrn_regs_read_unknown.end(); ++it) {
    boost::python::call(*it,index,size);  }
}
void cb_e1000e_wrn_regs_read_trivial(uint32_t index) {

  for (auto it = py_e1000e_wrn_regs_read_trivial.begin();
       it != py_e1000e_wrn_regs_read_trivial.end(); ++it) {
    boost::python::call(*it,index);  }
}
void cb_e1000e_wrn_regs_write_trivial(uint32_t index) {

  for (auto it = py_e1000e_wrn_regs_write_trivial.begin();
       it != py_e1000e_wrn_regs_write_trivial.end(); ++it) {
    boost::python::call(*it,index);  }
}
void cb_e1000e_wrn_no_ts_support(void) {

  for (auto it = py_e1000e_wrn_no_ts_support.begin();
       it != py_e1000e_wrn_no_ts_support.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_wrn_no_snap_support(void) {

  for (auto it = py_e1000e_wrn_no_snap_support.begin();
       it != py_e1000e_wrn_no_snap_support.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_wrn_iscsi_filtering_not_supported(void) {

  for (auto it = py_e1000e_wrn_iscsi_filtering_not_supported.begin();
       it != py_e1000e_wrn_iscsi_filtering_not_supported.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_wrn_nfsw_filtering_not_supported(void) {

  for (auto it = py_e1000e_wrn_nfsw_filtering_not_supported.begin();
       it != py_e1000e_wrn_nfsw_filtering_not_supported.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_wrn_nfsr_filtering_not_supported(void) {

  for (auto it = py_e1000e_wrn_nfsr_filtering_not_supported.begin();
       it != py_e1000e_wrn_nfsr_filtering_not_supported.end(); ++it) {
    boost::python::call(*it,void);  }
}

void cb_e1000e_tx_disabled(void) {

  for (auto it = py_e1000e_tx_disabled.begin(); it != py_e1000e_tx_disabled.end();
       ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_tx_descr(void *addr,uint32_t lower,uint32_t upper) {

  for (auto it = py_e1000e_tx_descr.begin(); it != py_e1000e_tx_descr.end(); ++it) {
    boost::python::call(*it,addr,lower,upper);  }
}

void cb_e1000e_ring_free_space(int ridx,uint32_t rdlen,uint32_t rdh,uint32_t rdt) {

  for (auto it = py_e1000e_ring_free_space.begin();
       it != py_e1000e_ring_free_space.end(); ++it) {
    boost::python::call(*it,ridx,rdlen,rdh,rdt);  }
}

void cb_e1000e_rx_can_recv_rings_full(void) {

  for (auto it = py_e1000e_rx_can_recv_rings_full.begin();
       it != py_e1000e_rx_can_recv_rings_full.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_rx_can_recv(void) {

  for (auto it = py_e1000e_rx_can_recv.begin(); it != py_e1000e_rx_can_recv.end();
       ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_rx_has_buffers(int ridx,uint32_t free_desc,size_t total_size,uint32_t desc_buf_size) {

  for (auto it = py_e1000e_rx_has_buffers.begin();
       it != py_e1000e_rx_has_buffers.end(); ++it) {
    boost::python::call(*it,ridx,free_desc,total_size,desc_buf_size);  }
}
void cb_e1000e_rx_null_descriptor(void) {

  for (auto it = py_e1000e_rx_null_descriptor.begin();
       it != py_e1000e_rx_null_descriptor.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_rx_flt_vlan_mismatch(uint16_t vid) {

  for (auto it = py_e1000e_rx_flt_vlan_mismatch.begin();
       it != py_e1000e_rx_flt_vlan_mismatch.end(); ++it) {
    boost::python::call(*it,vid);  }
}
void cb_e1000e_rx_flt_vlan_match(uint16_t vid) {

  for (auto it = py_e1000e_rx_flt_vlan_match.begin();
       it != py_e1000e_rx_flt_vlan_match.end(); ++it) {
    boost::python::call(*it,vid);  }
}
void cb_e1000e_rx_desc_ps_read(uint64_t a0,uint64_t a1,uint64_t a2,uint64_t a3) {

  for (auto it = py_e1000e_rx_desc_ps_read.begin();
       it != py_e1000e_rx_desc_ps_read.end(); ++it) {
    boost::python::call(*it,a0,a1,a2,a3);  }
}
void cb_e1000e_rx_desc_ps_write(uint16_t a0,uint16_t a1,uint16_t a2,uint16_t a3) {

  for (auto it = py_e1000e_rx_desc_ps_write.begin();
       it != py_e1000e_rx_desc_ps_write.end(); ++it) {
    boost::python::call(*it,a0,a1,a2,a3);  }
}
void cb_e1000e_rx_desc_buff_sizes(uint32_t b0,uint32_t b1,uint32_t b2,uint32_t b3) {

  for (auto it = py_e1000e_rx_desc_buff_sizes.begin();
       it != py_e1000e_rx_desc_buff_sizes.end(); ++it) {
    boost::python::call(*it,b0,b1,b2,b3);  }
}
void cb_e1000e_rx_desc_len(uint8_t rx_desc_len) {

  for (auto it = py_e1000e_rx_desc_len.begin(); it != py_e1000e_rx_desc_len.end();
       ++it) {
    boost::python::call(*it,rx_desc_len);  }
}
void cb_e1000e_rx_desc_buff_write(uint8_t idx,uint64_t addr,uint16_t offset,const void *source,uint32_t len) {

  for (auto it = py_e1000e_rx_desc_buff_write.begin();
       it != py_e1000e_rx_desc_buff_write.end(); ++it) {
    boost::python::call(*it,idx,addr,offset,*source,len);  }
}
void cb_e1000e_rx_descr(int ridx,uint64_t base,uint8_t len) {

  for (auto it = py_e1000e_rx_descr.begin(); it != py_e1000e_rx_descr.end(); ++it) {
    boost::python::call(*it,ridx,base,len);  }
}
void cb_e1000e_rx_set_rctl(uint32_t rctl) {

  for (auto it = py_e1000e_rx_set_rctl.begin(); it != py_e1000e_rx_set_rctl.end();
       ++it) {
    boost::python::call(*it,rctl);  }
}
void cb_e1000e_rx_receive_iov(int iovcnt) {

  for (auto it = py_e1000e_rx_receive_iov.begin();
       it != py_e1000e_rx_receive_iov.end(); ++it) {
    boost::python::call(*it,iovcnt);  }
}
void cb_e1000e_rx_flt_dropped(void) {

  for (auto it = py_e1000e_rx_flt_dropped.begin();
       it != py_e1000e_rx_flt_dropped.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_rx_written_to_guest(uint32_t causes) {

  for (auto it = py_e1000e_rx_written_to_guest.begin();
       it != py_e1000e_rx_written_to_guest.end(); ++it) {
    boost::python::call(*it,causes);  }
}
void cb_e1000e_rx_not_written_to_guest(uint32_t causes) {

  for (auto it = py_e1000e_rx_not_written_to_guest.begin();
       it != py_e1000e_rx_not_written_to_guest.end(); ++it) {
    boost::python::call(*it,causes);  }
}
void cb_e1000e_rx_interrupt_set(uint32_t causes) {

  for (auto it = py_e1000e_rx_interrupt_set.begin();
       it != py_e1000e_rx_interrupt_set.end(); ++it) {
    boost::python::call(*it,causes);  }
}
void cb_e1000e_rx_interrupt_delayed(uint32_t causes) {

  for (auto it = py_e1000e_rx_interrupt_delayed.begin();
       it != py_e1000e_rx_interrupt_delayed.end(); ++it) {
    boost::python::call(*it,causes);  }
}
void cb_e1000e_rx_set_cso(int cso_state) {

  for (auto it = py_e1000e_rx_set_cso.begin(); it != py_e1000e_rx_set_cso.end();
       ++it) {
    boost::python::call(*it,cso_state);  }
}
void cb_e1000e_rx_set_rdt(int queue_idx,uint32_t val) {

  for (auto it = py_e1000e_rx_set_rdt.begin(); it != py_e1000e_rx_set_rdt.end();
       ++it) {
    boost::python::call(*it,queue_idx,val);  }
}
void cb_e1000e_rx_set_rfctl(uint32_t val) {

  for (auto it = py_e1000e_rx_set_rfctl.begin(); it != py_e1000e_rx_set_rfctl.end();
       ++it) {
    boost::python::call(*it,val);  }
}
e1000e_rx_start_recv(void)

    void e1000e_rx_rss_started(void) {

  for (auto it = py_e1000e_rx_rss_started.begin();
       it != py_e1000e_rx_rss_started.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_rx_rss_disabled(void) {

  for (auto it = py_e1000e_rx_rss_disabled.begin();
       it != py_e1000e_rx_rss_disabled.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_rx_rss_type(uint32_t type) {

  for (auto it = py_e1000e_rx_rss_type.begin(); it != py_e1000e_rx_rss_type.end();
       ++it) {
    boost::python::call(*it,type);  }
}
void cb_e1000e_rx_rss_ip4(bool isfragment,bool istcp,uint32_t mrqc,bool tcpipv4_enabled,bool ipv4_enabled) {

  for (auto it = py_e1000e_rx_rss_ip4.begin(); it != py_e1000e_rx_rss_ip4.end();
       ++it) {
    boost::python::call(*it,isfragment,istcp,mrqc,tcpipv4_enabled,ipv4_enabled);  }
}
void cb_e1000e_rx_rss_ip6_rfctl(uint32_t rfctl) {

  for (auto it = py_e1000e_rx_rss_ip6_rfctl.begin();
       it != py_e1000e_rx_rss_ip6_rfctl.end(); ++it) {
    boost::python::call(*it,rfctl);  }
}
void cb_e1000e_rx_rss_ip6(bool ex_dis,bool new_ex_dis,bool istcp,bool has_ext_headers,bool ex_dst_valid,bool ex_src_valid,uint32_t mrqc,bool tcpipv6_enabled,bool ipv6ex_enabled,bool ipv6_enabled) {

  for (auto it = py_e1000e_rx_rss_ip6.begin(); it != py_e1000e_rx_rss_ip6.end();
       ++it) {
    boost::python::call(*it,ex_dis,new_ex_dis,istcp,has_ext_headers,ex_dst_valid,ex_src_valid,mrqc,tcpipv6_enabled,ipv6ex_enabled,ipv6_enabled);  }
}
void cb_e1000e_rx_rss_dispatched_to_queue(int queue_idx) {

  for (auto it = py_e1000e_rx_rss_dispatched_to_queue.begin();
       it != py_e1000e_rx_rss_dispatched_to_queue.end(); ++it) {
    boost::python::call(*it,queue_idx);  }
}

void cb_e1000e_rx_metadata_protocols(bool isip4,bool isip6,bool isudp,bool istcp) {

  for (auto it = py_e1000e_rx_metadata_protocols.begin();
       it != py_e1000e_rx_metadata_protocols.end(); ++it) {
    boost::python::call(*it,isip4,isip6,isudp,istcp);  }
}
void cb_e1000e_rx_metadata_vlan(uint16_t vlan_tag) {

  for (auto it = py_e1000e_rx_metadata_vlan.begin();
       it != py_e1000e_rx_metadata_vlan.end(); ++it) {
    boost::python::call(*it,vlan_tag);  }
}
void cb_e1000e_rx_metadata_rss(uint32_t rss,uint32_t mrq) {

  for (auto it = py_e1000e_rx_metadata_rss.begin();
       it != py_e1000e_rx_metadata_rss.end(); ++it) {
    boost::python::call(*it,rss,mrq);  }
}
void cb_e1000e_rx_metadata_ip_id(uint16_t ip_id) {

  for (auto it = py_e1000e_rx_metadata_ip_id.begin();
       it != py_e1000e_rx_metadata_ip_id.end(); ++it) {
    boost::python::call(*it,ip_id);  }
}
void cb_e1000e_rx_metadata_ack(void) {

  for (auto it = py_e1000e_rx_metadata_ack.begin();
       it != py_e1000e_rx_metadata_ack.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_rx_metadata_pkt_type(uint32_t pkt_type) {

  for (auto it = py_e1000e_rx_metadata_pkt_type.begin();
       it != py_e1000e_rx_metadata_pkt_type.end(); ++it) {
    boost::python::call(*it,pkt_type);  }
}
void cb_e1000e_rx_metadata_no_virthdr(void) {

  for (auto it = py_e1000e_rx_metadata_no_virthdr.begin();
       it != py_e1000e_rx_metadata_no_virthdr.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_rx_metadata_virthdr_no_csum_info(void) {

  for (auto it = py_e1000e_rx_metadata_virthdr_no_csum_info.begin();
       it != py_e1000e_rx_metadata_virthdr_no_csum_info.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_rx_metadata_l3_cso_disabled(void) {

  for (auto it = py_e1000e_rx_metadata_l3_cso_disabled.begin();
       it != py_e1000e_rx_metadata_l3_cso_disabled.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_rx_metadata_l4_cso_disabled(void) {

  for (auto it = py_e1000e_rx_metadata_l4_cso_disabled.begin();
       it != py_e1000e_rx_metadata_l4_cso_disabled.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_rx_metadata_l3_csum_validation_failed(void) {

  for (auto it = py_e1000e_rx_metadata_l3_csum_validation_failed.begin();
       it != py_e1000e_rx_metadata_l3_csum_validation_failed.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_rx_metadata_l4_csum_validation_failed(void) {

  for (auto it = py_e1000e_rx_metadata_l4_csum_validation_failed.begin();
       it != py_e1000e_rx_metadata_l4_csum_validation_failed.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_rx_metadata_status_flags(uint32_t status_flags) {

  for (auto it = py_e1000e_rx_metadata_status_flags.begin();
       it != py_e1000e_rx_metadata_status_flags.end(); ++it) {
    boost::python::call(*it,status_flags);  }
}
void cb_e1000e_rx_metadata_ipv6_sum_disabled(void) {

  for (auto it = py_e1000e_rx_metadata_ipv6_sum_disabled.begin();
       it != py_e1000e_rx_metadata_ipv6_sum_disabled.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_rx_metadata_ipv6_filtering_disabled(void) {

  for (auto it = py_e1000e_rx_metadata_ipv6_filtering_disabled.begin();
       it != py_e1000e_rx_metadata_ipv6_filtering_disabled.end(); ++it) {
    boost::python::call(*it,void);  }
}

void cb_e1000e_vlan_vet(uint16_t vet) {

  for (auto it = py_e1000e_vlan_vet.begin(); it != py_e1000e_vlan_vet.end(); ++it) {
    boost::python::call(*it,vet);  }
}

void cb_e1000e_irq_msi_notify(uint32_t cause) {

  for (auto it = py_e1000e_irq_msi_notify.begin();
       it != py_e1000e_irq_msi_notify.end(); ++it) {
    boost::python::call(*it,cause);  }
}
void cb_e1000e_irq_throttling_no_pending_interrupts(void) {

  for (auto it = py_e1000e_irq_throttling_no_pending_interrupts.begin();
       it != py_e1000e_irq_throttling_no_pending_interrupts.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_irq_msi_notify_postponed(void) {

  for (auto it = py_e1000e_irq_msi_notify_postponed.begin();
       it != py_e1000e_irq_msi_notify_postponed.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_irq_legacy_notify_postponed(void) {

  for (auto it = py_e1000e_irq_legacy_notify_postponed.begin();
       it != py_e1000e_irq_legacy_notify_postponed.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_irq_throttling_no_pending_vec(int idx) {

  for (auto it = py_e1000e_irq_throttling_no_pending_vec.begin();
       it != py_e1000e_irq_throttling_no_pending_vec.end(); ++it) {
    boost::python::call(*it,idx);  }
}
void cb_e1000e_irq_msix_notify_postponed_vec(int idx) {

  for (auto it = py_e1000e_irq_msix_notify_postponed_vec.begin();
       it != py_e1000e_irq_msix_notify_postponed_vec.end(); ++it) {
    boost::python::call(*it,idx);  }
}
void cb_e1000e_irq_legacy_notify(bool level) {

  for (auto it = py_e1000e_irq_legacy_notify.begin();
       it != py_e1000e_irq_legacy_notify.end(); ++it) {
    boost::python::call(*it,level);  }
}
void cb_e1000e_irq_msix_notify_vec(uint32_t vector) {

  for (auto it = py_e1000e_irq_msix_notify_vec.begin();
       it != py_e1000e_irq_msix_notify_vec.end(); ++it) {
    boost::python::call(*it,vector);  }
}
void cb_e1000e_irq_postponed_by_xitr(uint32_t reg) {

  for (auto it = py_e1000e_irq_postponed_by_xitr.begin();
       it != py_e1000e_irq_postponed_by_xitr.end(); ++it) {
    boost::python::call(*it,reg);  }
}
void cb_e1000e_irq_clear_ims(uint32_t bits,uint32_t old_ims,uint32_t new_ims) {

  for (auto it = py_e1000e_irq_clear_ims.begin(); it != py_e1000e_irq_clear_ims.end();
       ++it) {
    boost::python::call(*it,bits,old_ims,new_ims);  }
}
void cb_e1000e_irq_set_ims(uint32_t bits,uint32_t old_ims,uint32_t new_ims) {

  for (auto it = py_e1000e_irq_set_ims.begin(); it != py_e1000e_irq_set_ims.end();
       ++it) {
    boost::python::call(*it,bits,old_ims,new_ims);  }
}
void cb_e1000e_irq_fix_icr_asserted(uint32_t new_val) {

  for (auto it = py_e1000e_irq_fix_icr_asserted.begin();
       it != py_e1000e_irq_fix_icr_asserted.end(); ++it) {
    boost::python::call(*it,new_val);  }
}
void cb_e1000e_irq_add_msi_other(uint32_t new_val) {

  for (auto it = py_e1000e_irq_add_msi_other.begin();
       it != py_e1000e_irq_add_msi_other.end(); ++it) {
    boost::python::call(*it,new_val);  }
}
void cb_e1000e_irq_pending_interrupts(uint32_t pending,uint32_t icr,uint32_t ims) {

  for (auto it = py_e1000e_irq_pending_interrupts.begin();
       it != py_e1000e_irq_pending_interrupts.end(); ++it) {
    boost::python::call(*it,pending,icr,ims);  }
}
void cb_e1000e_irq_set_cause_entry(uint32_t val,uint32_t icr) {

  for (auto it = py_e1000e_irq_set_cause_entry.begin();
       it != py_e1000e_irq_set_cause_entry.end(); ++it) {
    boost::python::call(*it,val,icr);  }
}
void cb_e1000e_irq_set_cause_exit(uint32_t val,uint32_t icr) {

  for (auto it = py_e1000e_irq_set_cause_exit.begin();
       it != py_e1000e_irq_set_cause_exit.end(); ++it) {
    boost::python::call(*it,val,icr);  }
}
void cb_e1000e_irq_icr_write(uint32_t bits,uint32_t old_icr,uint32_t new_icr) {

  for (auto it = py_e1000e_irq_icr_write.begin(); it != py_e1000e_irq_icr_write.end();
       ++it) {
    boost::python::call(*it,bits,old_icr,new_icr);  }
}
void cb_e1000e_irq_write_ics(uint32_t val) {

  for (auto it = py_e1000e_irq_write_ics.begin(); it != py_e1000e_irq_write_ics.end();
       ++it) {
    boost::python::call(*it,val);  }
}
void cb_e1000e_irq_icr_process_iame(void) {

  for (auto it = py_e1000e_irq_icr_process_iame.begin();
       it != py_e1000e_irq_icr_process_iame.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_irq_read_ics(uint32_t ics) {

  for (auto it = py_e1000e_irq_read_ics.begin(); it != py_e1000e_irq_read_ics.end();
       ++it) {
    boost::python::call(*it,ics);  }
}
void cb_e1000e_irq_read_ims(uint32_t ims) {

  for (auto it = py_e1000e_irq_read_ims.begin(); it != py_e1000e_irq_read_ims.end();
       ++it) {
    boost::python::call(*it,ims);  }
}
void cb_e1000e_irq_icr_read_entry(uint32_t icr) {

  for (auto it = py_e1000e_irq_icr_read_entry.begin();
       it != py_e1000e_irq_icr_read_entry.end(); ++it) {
    boost::python::call(*it,icr);  }
}
void cb_e1000e_irq_icr_read_exit(uint32_t icr) {

  for (auto it = py_e1000e_irq_icr_read_exit.begin();
       it != py_e1000e_irq_icr_read_exit.end(); ++it) {
    boost::python::call(*it,icr);  }
}
void cb_e1000e_irq_icr_clear_zero_ims(void) {

  for (auto it = py_e1000e_irq_icr_clear_zero_ims.begin();
       it != py_e1000e_irq_icr_clear_zero_ims.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_irq_icr_clear_iame(void) {

  for (auto it = py_e1000e_irq_icr_clear_iame.begin();
       it != py_e1000e_irq_icr_clear_iame.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_irq_iam_clear_eiame(uint32_t iam,uint32_t cause) {

  for (auto it = py_e1000e_irq_iam_clear_eiame.begin();
       it != py_e1000e_irq_iam_clear_eiame.end(); ++it) {
    boost::python::call(*it,iam,cause);  }
}
void cb_e1000e_irq_icr_clear_eiac(uint32_t icr,uint32_t eiac) {

  for (auto it = py_e1000e_irq_icr_clear_eiac.begin();
       it != py_e1000e_irq_icr_clear_eiac.end(); ++it) {
    boost::python::call(*it,icr,eiac);  }
}
void cb_e1000e_irq_ims_clear_set_imc(uint32_t val) {

  for (auto it = py_e1000e_irq_ims_clear_set_imc.begin();
       it != py_e1000e_irq_ims_clear_set_imc.end(); ++it) {
    boost::python::call(*it,val);  }
}
void cb_e1000e_irq_fire_delayed_interrupts(void) {

  for (auto it = py_e1000e_irq_fire_delayed_interrupts.begin();
       it != py_e1000e_irq_fire_delayed_interrupts.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_irq_rearm_timer(uint32_t reg,int64_t delay_ns) {

  for (auto it = py_e1000e_irq_rearm_timer.begin();
       it != py_e1000e_irq_rearm_timer.end(); ++it) {
    boost::python::call(*it,reg,delay_ns);  }
}
void cb_e1000e_irq_throttling_timer(uint32_t reg) {

  for (auto it = py_e1000e_irq_throttling_timer.begin();
       it != py_e1000e_irq_throttling_timer.end(); ++it) {
    boost::python::call(*it,reg);  }
}
void cb_e1000e_irq_rdtr_fpd_running(void) {

  for (auto it = py_e1000e_irq_rdtr_fpd_running.begin();
       it != py_e1000e_irq_rdtr_fpd_running.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_irq_rdtr_fpd_not_running(void) {

  for (auto it = py_e1000e_irq_rdtr_fpd_not_running.begin();
       it != py_e1000e_irq_rdtr_fpd_not_running.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_irq_tidv_fpd_running(void) {

  for (auto it = py_e1000e_irq_tidv_fpd_running.begin();
       it != py_e1000e_irq_tidv_fpd_running.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_irq_tidv_fpd_not_running(void) {

  for (auto it = py_e1000e_irq_tidv_fpd_not_running.begin();
       it != py_e1000e_irq_tidv_fpd_not_running.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_irq_eitr_set(uint32_t eitr_num,uint32_t val) {

  for (auto it = py_e1000e_irq_eitr_set.begin(); it != py_e1000e_irq_eitr_set.end();
       ++it) {
    boost::python::call(*it,eitr_num,val);  }
}
void cb_e1000e_irq_itr_set(uint32_t val) {

  for (auto it = py_e1000e_irq_itr_set.begin(); it != py_e1000e_irq_itr_set.end();
       ++it) {
    boost::python::call(*it,val);  }
}
void cb_e1000e_irq_fire_all_timers(uint32_t val) {

  for (auto it = py_e1000e_irq_fire_all_timers.begin();
       it != py_e1000e_irq_fire_all_timers.end(); ++it) {
    boost::python::call(*it,val);  }
}
void cb_e1000e_irq_adding_delayed_causes(uint32_t val,uint32_t icr) {

  for (auto it = py_e1000e_irq_adding_delayed_causes.begin();
       it != py_e1000e_irq_adding_delayed_causes.end(); ++it) {
    boost::python::call(*it,val,icr);  }
}
void cb_e1000e_irq_msix_pending_clearing(uint32_t cause,uint32_t int_cfg,uint32_t vec) {

  for (auto it = py_e1000e_irq_msix_pending_clearing.begin();
       it != py_e1000e_irq_msix_pending_clearing.end(); ++it) {
    boost::python::call(*it,cause,_cfg,vec);  }
}

void cb_e1000e_wrn_msix_vec_wrong(uint32_t cause,uint32_t cfg) {

  for (auto it = py_e1000e_wrn_msix_vec_wrong.begin();
       it != py_e1000e_wrn_msix_vec_wrong.end(); ++it) {
    boost::python::call(*it,cause,cfg);  }
}
void cb_e1000e_wrn_msix_invalid(uint32_t cause,uint32_t cfg) {

  for (auto it = py_e1000e_wrn_msix_invalid.begin();
       it != py_e1000e_wrn_msix_invalid.end(); ++it) {
    boost::python::call(*it,cause,cfg);  }
}

void cb_e1000e_mac_set_sw(uint8_t b0,uint8_t b1,uint8_t b2,uint8_t b3,uint8_t b4,uint8_t b5) {

  for (auto it = py_e1000e_mac_set_sw.begin(); it != py_e1000e_mac_set_sw.end();
       ++it) {
    boost::python::call(*it,b0,b1,b2,b3,b4,b5);  }
}

void cb_e1000e_vm_state_running(void) {

  for (auto it = py_e1000e_vm_state_running.begin();
       it != py_e1000e_vm_state_running.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_vm_state_stopped(void) {

  for (auto it = py_e1000e_vm_state_stopped.begin();
       it != py_e1000e_vm_state_stopped.end(); ++it) {
    boost::python::call(*it,void);  }
}

//#e1000e.c
void cb_e1000e_cb_pci_realize(void) {

  for (auto it = py_e1000e_cb_pci_realize.begin();
       it != py_e1000e_cb_pci_realize.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_cb_pci_uninit(void) {

  for (auto it = py_e1000e_cb_pci_uninit.begin(); it != py_e1000e_cb_pci_uninit.end();
       ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_cb_qdev_reset(void) {

  for (auto it = py_e1000e_cb_qdev_reset.begin(); it != py_e1000e_cb_qdev_reset.end();
       ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_cb_pre_save(void) {

  for (auto it = py_e1000e_cb_pre_save.begin(); it != py_e1000e_cb_pre_save.end();
       ++it) {
    boost::python::call(*it,void);  }
}
void cb_e1000e_cb_post_load(void) {

  for (auto it = py_e1000e_cb_post_load.begin(); it != py_e1000e_cb_post_load.end();
       ++it) {
    boost::python::call(*it,void);  }
}

void cb_e1000e_io_write_addr(uint64_t addr) {

  for (auto it = py_e1000e_io_write_addr.begin(); it != py_e1000e_io_write_addr.end();
       ++it) {
    boost::python::call(*it,addr);  }
}
void cb_e1000e_io_write_data(uint64_t addr,uint64_t val) {

  for (auto it = py_e1000e_io_write_data.begin(); it != py_e1000e_io_write_data.end();
       ++it) {
    boost::python::call(*it,addr,val);  }
}
void cb_e1000e_io_read_addr(uint64_t addr) {

  for (auto it = py_e1000e_io_read_addr.begin(); it != py_e1000e_io_read_addr.end();
       ++it) {
    boost::python::call(*it,addr);  }
}
void cb_e1000e_io_read_data(uint64_t addr,uint64_t val) {

  for (auto it = py_e1000e_io_read_data.begin(); it != py_e1000e_io_read_data.end();
       ++it) {
    boost::python::call(*it,addr,val);  }
}
void cb_e1000e_wrn_io_write_unknown(uint64_t addr) {

  for (auto it = py_e1000e_wrn_io_write_unknown.begin();
       it != py_e1000e_wrn_io_write_unknown.end(); ++it) {
    boost::python::call(*it,addr);  }
}
void cb_e1000e_wrn_io_read_unknown(uint64_t addr) {

  for (auto it = py_e1000e_wrn_io_read_unknown.begin();
       it != py_e1000e_wrn_io_read_unknown.end(); ++it) {
    boost::python::call(*it,addr);  }
}
void cb_e1000e_wrn_io_addr_undefined(uint64_t addr) {

  for (auto it = py_e1000e_wrn_io_addr_undefined.begin();
       it != py_e1000e_wrn_io_addr_undefined.end(); ++it) {
    boost::python::call(*it,addr);  }
}
void cb_e1000e_wrn_io_addr_flash(uint64_t addr) {

  for (auto it = py_e1000e_wrn_io_addr_flash.begin();
       it != py_e1000e_wrn_io_addr_flash.end(); ++it) {
    boost::python::call(*it,addr);  }
}
void cb_e1000e_wrn_io_addr_unknown(uint64_t addr) {

  for (auto it = py_e1000e_wrn_io_addr_unknown.begin();
       it != py_e1000e_wrn_io_addr_unknown.end(); ++it) {
    boost::python::call(*it,addr);  }
}

void cb_e1000e_msi_init_fail(int32_t res) {

  for (auto it = py_e1000e_msi_init_fail.begin(); it != py_e1000e_msi_init_fail.end();
       ++it) {
    boost::python::call(*it,res);  }
}
void cb_e1000e_msix_init_fail(int32_t res) {

  for (auto it = py_e1000e_msix_init_fail.begin();
       it != py_e1000e_msix_init_fail.end(); ++it) {
    boost::python::call(*it,res);  }
}
void cb_e1000e_msix_use_vector_fail(uint32_t vec,int32_t res) {

  for (auto it = py_e1000e_msix_use_vector_fail.begin();
       it != py_e1000e_msix_use_vector_fail.end(); ++it) {
    boost::python::call(*it,vec,res);  }
}

void cb_e1000e_mac_set_permanent(uint8_t b0,uint8_t b1,uint8_t b2,uint8_t b3,uint8_t b4,uint8_t b5) {

  for (auto it = py_e1000e_mac_set_permanent.begin();
       it != py_e1000e_mac_set_permanent.end(); ++it) {
    boost::python::call(*it,b0,b1,b2,b3,b4,b5);  }
}
void cb_e1000e_cfg_support_virtio(bool support) {

  for (auto it = py_e1000e_cfg_support_virtio.begin();
       it != py_e1000e_cfg_support_virtio.end(); ++it) {
    boost::python::call(*it,support);  }
}

//#spapr_llan.c
void cb_spapr_vlan_get_rx_bd_from_pool_found(int pool,int32_t count,uint32_t rx_bufs) {

  for (auto it = py_spapr_vlan_get_rx_bd_from_pool_found.begin();
       it != py_spapr_vlan_get_rx_bd_from_pool_found.end(); ++it) {
    boost::python::call(*it,pool,count,rx_bufs);  }
}
void cb_spapr_vlan_get_rx_bd_from_page(int buf_ptr,uint64_t bd) {

  for (auto it = py_spapr_vlan_get_rx_bd_from_page.begin();
       it != py_spapr_vlan_get_rx_bd_from_page.end(); ++it) {
    boost::python::call(*it,buf_ptr,bd);  }
}
void cb_spapr_vlan_get_rx_bd_from_page_found(uint32_t use_buf_ptr,uint32_t rx_bufs) {

  for (auto it = py_spapr_vlan_get_rx_bd_from_page_found.begin();
       it != py_spapr_vlan_get_rx_bd_from_page_found.end(); ++it) {
    boost::python::call(*it,use_buf_ptr,rx_bufs);  }
}
void cb_spapr_vlan_receive(const char *id,uint32_t rx_bufs) {

  for (auto it = py_spapr_vlan_receive.begin(); it != py_spapr_vlan_receive.end();
       ++it) {
    boost::python::call(*it,*id,rx_bufs);  }
}
void cb_spapr_vlan_receive_dma_completed(void) {

  for (auto it = py_spapr_vlan_receive_dma_completed.begin();
       it != py_spapr_vlan_receive_dma_completed.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_spapr_vlan_receive_wrote(uint64_t ptr,uint64_t hi,uint64_t lo) {

  for (auto it = py_spapr_vlan_receive_wrote.begin();
       it != py_spapr_vlan_receive_wrote.end(); ++it) {
    boost::python::call(*it,ptr,hi,lo);  }
}
void cb_spapr_vlan_add_rxbuf_to_pool_create(int pool,uint64_t len) {

  for (auto it = py_spapr_vlan_add_rxbuf_to_pool_create.begin();
       it != py_spapr_vlan_add_rxbuf_to_pool_create.end(); ++it) {
    boost::python::call(*it,pool,len);  }
}
void cb_spapr_vlan_add_rxbuf_to_pool(int pool,uint64_t len,int32_t count) {

  for (auto it = py_spapr_vlan_add_rxbuf_to_pool.begin();
       it != py_spapr_vlan_add_rxbuf_to_pool.end(); ++it) {
    boost::python::call(*it,pool,len,count);  }
}
void cb_spapr_vlan_add_rxbuf_to_page(uint32_t ptr,uint32_t rx_bufs,uint64_t bd) {

  for (auto it = py_spapr_vlan_add_rxbuf_to_page.begin();
       it != py_spapr_vlan_add_rxbuf_to_page.end(); ++it) {
    boost::python::call(*it,ptr,rx_bufs,bd);  }
}
void cb_spapr_vlan_h_add_logical_lan_buffer(uint64_t reg,uint64_t buf) {

  for (auto it = py_spapr_vlan_h_add_logical_lan_buffer.begin();
       it != py_spapr_vlan_h_add_logical_lan_buffer.end(); ++it) {
    boost::python::call(*it,reg,buf);  }
}
void cb_spapr_vlan_h_send_logical_lan(uint64_t reg,uint64_t continue_token) {

  for (auto it = py_spapr_vlan_h_send_logical_lan.begin();
       it != py_spapr_vlan_h_send_logical_lan.end(); ++it) {
    boost::python::call(*it,reg,continue_token);  }
}
void cb_spapr_vlan_h_send_logical_lan_rxbufs(uint32_t rx_bufs) {

  for (auto it = py_spapr_vlan_h_send_logical_lan_rxbufs.begin();
       it != py_spapr_vlan_h_send_logical_lan_rxbufs.end(); ++it) {
    boost::python::call(*it,rx_bufs);  }
}
void cb_spapr_vlan_h_send_logical_lan_buf_desc(uint64_t buf) {

  for (auto it = py_spapr_vlan_h_send_logical_lan_buf_desc.begin();
       it != py_spapr_vlan_h_send_logical_lan_buf_desc.end(); ++it) {
    boost::python::call(*it,buf);  }
}
void cb_spapr_vlan_h_send_logical_lan_total(int nbufs,unsigned total_len) {

  for (auto it = py_spapr_vlan_h_send_logical_lan_total.begin();
       it != py_spapr_vlan_h_send_logical_lan_total.end(); ++it) {
    boost::python::call(*it,nbufs,total_len);  }
}

//#sungem.c
void cb_sungem_tx_checksum(uint16_t start,uint16_t off) {

  for (auto it = py_sungem_tx_checksum.begin(); it != py_sungem_tx_checksum.end();
       ++it) {
    boost::python::call(*it,start,off);  }
}
void cb_sungem_tx_checksum_oob(void) {

  for (auto it = py_sungem_tx_checksum_oob.begin();
       it != py_sungem_tx_checksum_oob.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_sungem_tx_unfinished(void) {

  for (auto it = py_sungem_tx_unfinished.begin(); it != py_sungem_tx_unfinished.end();
       ++it) {
    boost::python::call(*it,void);  }
}
void cb_sungem_tx_overflow(void) {

  for (auto it = py_sungem_tx_overflow.begin(); it != py_sungem_tx_overflow.end();
       ++it) {
    boost::python::call(*it,void);  }
}
void cb_sungem_tx_finished(uint32_t size) {

  for (auto it = py_sungem_tx_finished.begin(); it != py_sungem_tx_finished.end();
       ++it) {
    boost::python::call(*it,size);  }
}
void cb_sungem_tx_kick(void) {

  for (auto it = py_sungem_tx_kick.begin(); it != py_sungem_tx_kick.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_sungem_tx_disabled(void) {

  for (auto it = py_sungem_tx_disabled.begin(); it != py_sungem_tx_disabled.end();
       ++it) {
    boost::python::call(*it,void);  }
}
void cb_sungem_tx_process(uint32_t comp,uint32_t kick,uint32_t size) {

  for (auto it = py_sungem_tx_process.begin(); it != py_sungem_tx_process.end();
       ++it) {
    boost::python::call(*it,comp,kick,size);  }
}
void cb_sungem_tx_desc(uint32_t comp,uint64_t control,uint64_t buffer) {

  for (auto it = py_sungem_tx_desc.begin(); it != py_sungem_tx_desc.end(); ++it) {
    boost::python::call(*it,comp,control,buffer);  }
}
void cb_sungem_tx_reset(void) {

  for (auto it = py_sungem_tx_reset.begin(); it != py_sungem_tx_reset.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_sungem_rx_mac_disabled(void) {

  for (auto it = py_sungem_rx_mac_disabled.begin();
       it != py_sungem_rx_mac_disabled.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_sungem_rx_txdma_disabled(void) {

  for (auto it = py_sungem_rx_txdma_disabled.begin();
       it != py_sungem_rx_txdma_disabled.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_sungem_rx_check(bool full,uint32_t kick,uint32_t done) {

  for (auto it = py_sungem_rx_check.begin(); it != py_sungem_rx_check.end(); ++it) {
    boost::python::call(*it,full,kick,done);  }
}
void cb_sungem_rx_mac_check(uint32_t mac0,uint32_t mac1,uint32_t mac2) {

  for (auto it = py_sungem_rx_mac_check.begin(); it != py_sungem_rx_mac_check.end();
       ++it) {
    boost::python::call(*it,mac0,mac1,mac2);  }
}
void cb_sungem_rx_mac_multicast(void) {

  for (auto it = py_sungem_rx_mac_multicast.begin();
       it != py_sungem_rx_mac_multicast.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_sungem_rx_mac_compare(uint32_t mac0,uint32_t mac1,uint32_t mac2) {

  for (auto it = py_sungem_rx_mac_compare.begin();
       it != py_sungem_rx_mac_compare.end(); ++it) {
    boost::python::call(*it,mac0,mac1,mac2);  }
}
void cb_sungem_rx_packet(size_t size) {

  for (auto it = py_sungem_rx_packet.begin(); it != py_sungem_rx_packet.end(); ++it) {
    boost::python::call(*it,size);  }
}
void cb_sungem_rx_disabled(void) {

  for (auto it = py_sungem_rx_disabled.begin(); it != py_sungem_rx_disabled.end();
       ++it) {
    boost::python::call(*it,void);  }
}
void cb_sungem_rx_bad_frame_size(size_t size) {

  for (auto it = py_sungem_rx_bad_frame_size.begin();
       it != py_sungem_rx_bad_frame_size.end(); ++it) {
    boost::python::call(*it,size);  }
}
void cb_sungem_rx_unmatched(void) {

  for (auto it = py_sungem_rx_unmatched.begin(); it != py_sungem_rx_unmatched.end();
       ++it) {
    boost::python::call(*it,void);  }
}
void cb_sungem_rx_process(uint32_t done,uint32_t kick,uint32_t size) {

  for (auto it = py_sungem_rx_process.begin(); it != py_sungem_rx_process.end();
       ++it) {
    boost::python::call(*it,done,kick,size);  }
}
void cb_sungem_rx_ringfull(void) {

  for (auto it = py_sungem_rx_ringfull.begin(); it != py_sungem_rx_ringfull.end();
       ++it) {
    boost::python::call(*it,void);  }
}
void cb_sungem_rx_desc(uint64_t control,uint64_t buffer) {

  for (auto it = py_sungem_rx_desc.begin(); it != py_sungem_rx_desc.end(); ++it) {
    boost::python::call(*it,control,buffer);  }
}
void cb_sungem_rx_reset(void) {

  for (auto it = py_sungem_rx_reset.begin(); it != py_sungem_rx_reset.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_sungem_rx_kick(uint64_t val) {

  for (auto it = py_sungem_rx_kick.begin(); it != py_sungem_rx_kick.end(); ++it) {
    boost::python::call(*it,val);  }
}
void cb_sungem_reset(bool pci_reset) {

  for (auto it = py_sungem_reset.begin(); it != py_sungem_reset.end(); ++it) {
    boost::python::call(*it,pci_reset);  }
}
void cb_sungem_mii_write(uint8_t phy_addr,uint8_t reg_addr,uint16_t val) {

  for (auto it = py_sungem_mii_write.begin(); it != py_sungem_mii_write.end(); ++it) {
    boost::python::call(*it,phy_addr,reg_addr,val);  }
}
void cb_sungem_mii_read(uint8_t phy_addr,uint8_t reg_addr,uint16_t val) {

  for (auto it = py_sungem_mii_read.begin(); it != py_sungem_mii_read.end(); ++it) {
    boost::python::call(*it,phy_addr,reg_addr,val);  }
}
void cb_sungem_mii_invalid_sof(uint32_t val) {

  for (auto it = py_sungem_mii_invalid_sof.begin();
       it != py_sungem_mii_invalid_sof.end(); ++it) {
    boost::python::call(*it,val);  }
}
void cb_sungem_mii_invalid_op(uint8_t op) {

  for (auto it = py_sungem_mii_invalid_op.begin();
       it != py_sungem_mii_invalid_op.end(); ++it) {
    boost::python::call(*it,op);  }
}
void cb_sungem_mmio_greg_write(uint64_t addr,uint64_t val) {

  for (auto it = py_sungem_mmio_greg_write.begin();
       it != py_sungem_mmio_greg_write.end(); ++it) {
    boost::python::call(*it,addr,val);  }
}
void cb_sungem_mmio_greg_read(uint64_t addr,uint64_t val) {

  for (auto it = py_sungem_mmio_greg_read.begin();
       it != py_sungem_mmio_greg_read.end(); ++it) {
    boost::python::call(*it,addr,val);  }
}
void cb_sungem_mmio_txdma_write(uint64_t addr,uint64_t val) {

  for (auto it = py_sungem_mmio_txdma_write.begin();
       it != py_sungem_mmio_txdma_write.end(); ++it) {
    boost::python::call(*it,addr,val);  }
}
void cb_sungem_mmio_txdma_read(uint64_t addr,uint64_t val) {

  for (auto it = py_sungem_mmio_txdma_read.begin();
       it != py_sungem_mmio_txdma_read.end(); ++it) {
    boost::python::call(*it,addr,val);  }
}
void cb_sungem_mmio_rxdma_write(uint64_t addr,uint64_t val) {

  for (auto it = py_sungem_mmio_rxdma_write.begin();
       it != py_sungem_mmio_rxdma_write.end(); ++it) {
    boost::python::call(*it,addr,val);  }
}
void cb_sungem_mmio_rxdma_read(uint64_t addr,uint64_t val) {

  for (auto it = py_sungem_mmio_rxdma_read.begin();
       it != py_sungem_mmio_rxdma_read.end(); ++it) {
    boost::python::call(*it,addr,val);  }
}
void cb_sungem_mmio_mac_write(uint64_t addr,uint64_t val) {

  for (auto it = py_sungem_mmio_mac_write.begin();
       it != py_sungem_mmio_mac_write.end(); ++it) {
    boost::python::call(*it,addr,val);  }
}
void cb_sungem_mmio_mac_read(uint64_t addr,uint64_t val) {

  for (auto it = py_sungem_mmio_mac_read.begin(); it != py_sungem_mmio_mac_read.end();
       ++it) {
    boost::python::call(*it,addr,val);  }
}
void cb_sungem_mmio_mif_write(uint64_t addr,uint64_t val) {

  for (auto it = py_sungem_mmio_mif_write.begin();
       it != py_sungem_mmio_mif_write.end(); ++it) {
    boost::python::call(*it,addr,val);  }
}
void cb_sungem_mmio_mif_read(uint64_t addr,uint64_t val) {

  for (auto it = py_sungem_mmio_mif_read.begin(); it != py_sungem_mmio_mif_read.end();
       ++it) {
    boost::python::call(*it,addr,val);  }
}
void cb_sungem_mmio_pcs_write(uint64_t addr,uint64_t val) {

  for (auto it = py_sungem_mmio_pcs_write.begin();
       it != py_sungem_mmio_pcs_write.end(); ++it) {
    boost::python::call(*it,addr,val);  }
}
void cb_sungem_mmio_pcs_read(uint64_t addr,uint64_t val) {

  for (auto it = py_sungem_mmio_pcs_read.begin(); it != py_sungem_mmio_pcs_read.end();
       ++it) {
    boost::python::call(*it,addr,val);  }
}

//#sunhme.c
void cb_sunhme_seb_write(uint64_t addr,uint64_t value) {

  for (auto it = py_sunhme_seb_write.begin(); it != py_sunhme_seb_write.end(); ++it) {
    boost::python::call(*it,addr,value);  }
}
void cb_sunhme_seb_read(uint64_t addr,uint64_t value) {

  for (auto it = py_sunhme_seb_read.begin(); it != py_sunhme_seb_read.end(); ++it) {
    boost::python::call(*it,addr,value);  }
}
void cb_sunhme_etx_write(uint64_t addr,uint64_t value) {

  for (auto it = py_sunhme_etx_write.begin(); it != py_sunhme_etx_write.end(); ++it) {
    boost::python::call(*it,addr,value);  }
}
void cb_sunhme_etx_read(uint64_t addr,uint64_t value) {

  for (auto it = py_sunhme_etx_read.begin(); it != py_sunhme_etx_read.end(); ++it) {
    boost::python::call(*it,addr,value);  }
}
void cb_sunhme_erx_write(uint64_t addr,uint64_t value) {

  for (auto it = py_sunhme_erx_write.begin(); it != py_sunhme_erx_write.end(); ++it) {
    boost::python::call(*it,addr,value);  }
}
void cb_sunhme_erx_read(uint64_t addr,uint64_t value) {

  for (auto it = py_sunhme_erx_read.begin(); it != py_sunhme_erx_read.end(); ++it) {
    boost::python::call(*it,addr,value);  }
}
void cb_sunhme_mac_write(uint64_t addr,uint64_t value) {

  for (auto it = py_sunhme_mac_write.begin(); it != py_sunhme_mac_write.end(); ++it) {
    boost::python::call(*it,addr,value);  }
}
void cb_sunhme_mac_read(uint64_t addr,uint64_t value) {

  for (auto it = py_sunhme_mac_read.begin(); it != py_sunhme_mac_read.end(); ++it) {
    boost::python::call(*it,addr,value);  }
}
void cb_sunhme_mii_write(uint64_t addr,uint64_t value) {

  for (auto it = py_sunhme_mii_write.begin(); it != py_sunhme_mii_write.end(); ++it) {
    boost::python::call(*it,addr,value);  }
}
void cb_sunhme_mii_read(uint8_t addr,uint16_t value) {

  for (auto it = py_sunhme_mii_read.begin(); it != py_sunhme_mii_read.end(); ++it) {
    boost::python::call(*it,addr,value);  }
}
void cb_sunhme_mif_write(uint8_t addr,uint16_t value) {

  for (auto it = py_sunhme_mif_write.begin(); it != py_sunhme_mif_write.end(); ++it) {
    boost::python::call(*it,addr,value);  }
}
void cb_sunhme_mif_read(uint64_t addr,uint64_t value) {

  for (auto it = py_sunhme_mif_read.begin(); it != py_sunhme_mif_read.end(); ++it) {
    boost::python::call(*it,addr,value);  }
}
void cb_sunhme_tx_desc(uint64_t buffer,uint32_t status,int cr,int nr) {

  for (auto it = py_sunhme_tx_desc.begin(); it != py_sunhme_tx_desc.end(); ++it) {
    boost::python::call(*it,buffer,status,cr,nr);  }
}
void cb_sunhme_tx_xsum_add(int offset,int len) {

  for (auto it = py_sunhme_tx_xsum_add.begin(); it != py_sunhme_tx_xsum_add.end();
       ++it) {
    boost::python::call(*it,offset,len);  }
}
void cb_sunhme_tx_xsum_stuff(uint16_t xsum,int offset) {

  for (auto it = py_sunhme_tx_xsum_stuff.begin(); it != py_sunhme_tx_xsum_stuff.end();
       ++it) {
    boost::python::call(*it,xsum,offset);  }
}
void cb_sunhme_tx_done(int len) {

  for (auto it = py_sunhme_tx_done.begin(); it != py_sunhme_tx_done.end(); ++it) {
    boost::python::call(*it,len);  }
}
void cb_sunhme_rx_incoming(size_t len) {

  for (auto it = py_sunhme_rx_incoming.begin(); it != py_sunhme_rx_incoming.end();
       ++it) {
    boost::python::call(*it,len);  }
}
void cb_sunhme_rx_filter_destmac(uint8_t b0,uint8_t b1,uint8_t b2,uint8_t b3,uint8_t b4,uint8_t b5) {

  for (auto it = py_sunhme_rx_filter_destmac.begin();
       it != py_sunhme_rx_filter_destmac.end(); ++it) {
    boost::python::call(*it,b0,b1,b2,b3,b4,b5);  }
}
void cb_sunhme_rx_filter_local_match(void) {

  for (auto it = py_sunhme_rx_filter_local_match.begin();
       it != py_sunhme_rx_filter_local_match.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_sunhme_rx_filter_bcast_match(void) {

  for (auto it = py_sunhme_rx_filter_bcast_match.begin();
       it != py_sunhme_rx_filter_bcast_match.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_sunhme_rx_filter_hash_nomatch(void) {

  for (auto it = py_sunhme_rx_filter_hash_nomatch.begin();
       it != py_sunhme_rx_filter_hash_nomatch.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_sunhme_rx_filter_hash_match(void) {

  for (auto it = py_sunhme_rx_filter_hash_match.begin();
       it != py_sunhme_rx_filter_hash_match.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_sunhme_rx_filter_promisc_match(void) {

  for (auto it = py_sunhme_rx_filter_promisc_match.begin();
       it != py_sunhme_rx_filter_promisc_match.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_sunhme_rx_filter_reject(void) {

  for (auto it = py_sunhme_rx_filter_reject.begin();
       it != py_sunhme_rx_filter_reject.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_sunhme_rx_filter_accept(void) {

  for (auto it = py_sunhme_rx_filter_accept.begin();
       it != py_sunhme_rx_filter_accept.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_sunhme_rx_desc(uint32_t addr,int offset,uint32_t status,int len,int cr,int nr) {

  for (auto it = py_sunhme_rx_desc.begin(); it != py_sunhme_rx_desc.end(); ++it) {
    boost::python::call(*it,addr,offset,status,len,cr,nr);  }
}
void cb_sunhme_rx_xsum_calc(uint16_t xsum) {

  for (auto it = py_sunhme_rx_xsum_calc.begin(); it != py_sunhme_rx_xsum_calc.end();
       ++it) {
    boost::python::call(*it,xsum);  }
}
void cb_sunhme_rx_norxd(void) {

  for (auto it = py_sunhme_rx_norxd.begin(); it != py_sunhme_rx_norxd.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_sunhme_update_irq(uint32_t mifmask,uint32_t mif,uint32_t sebmask,uint32_t seb,int level) {

  for (auto it = py_sunhme_update_irq.begin(); it != py_sunhme_update_irq.end();
       ++it) {
    boost::python::call(*it,mifmask,mif,sebmask,seb,level);  }
}

//#virtio - net.c
void cb_virtio_net_announce_notify(void) {

  for (auto it = py_virtio_net_announce_notify.begin();
       it != py_virtio_net_announce_notify.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_virtio_net_announce_timer(int round) {

  for (auto it = py_virtio_net_announce_timer.begin();
       it != py_virtio_net_announce_timer.end(); ++it) {
    boost::python::call(*it,round);  }
}
void cb_virtio_net_handle_announce(int round) {

  for (auto it = py_virtio_net_handle_announce.begin();
       it != py_virtio_net_handle_announce.end(); ++it) {
    boost::python::call(*it,round);  }
}
virtio_net_post_load_device(void)
    virtio_net_rss_disable(void) void virtio_net_rss_error(const char *msg,uint32_t value) {

  for (auto it = py_virtio_net_rss_error.begin(); it != py_virtio_net_rss_error.end();
       ++it) {
    boost::python::call(*it,*msg,value);  }
}
void cb_virtio_net_rss_enable(uint32_t p1,uint16_t p2,uint8_t p3) {

  for (auto it = py_virtio_net_rss_enable.begin();
       it != py_virtio_net_rss_enable.end(); ++it) {
    boost::python::call(*it,p1,p2,p3);  }
}

//#tulip.c
void cb_tulip_reg_write(uint64_t addr,const char *name,int size,uint64_t val) {

  for (auto it = py_tulip_reg_write.begin(); it != py_tulip_reg_write.end(); ++it) {
    boost::python::call(*it,addr,*name,size,val);  }
}
void cb_tulip_reg_read(uint64_t addr,const char *name,int size,uint64_t val) {

  for (auto it = py_tulip_reg_read.begin(); it != py_tulip_reg_read.end(); ++it) {
    boost::python::call(*it,addr,*name,size,val);  }
}
void cb_tulip_receive(const uint8_t *buf,size_t len) {

  for (auto it = py_tulip_receive.begin(); it != py_tulip_receive.end(); ++it) {
    boost::python::call(*it,*buf,len);  }
}
void cb_tulip_descriptor(const char *prefix,uint32_t addr,uint32_t status,uint32_t control,uint32_t len1,uint32_t len2,uint32_t buf1,uint32_t buf2) {

  for (auto it = py_tulip_descriptor.begin(); it != py_tulip_descriptor.end(); ++it) {
    boost::python::call(*it,*prefix,addr,status,control,len1,len2,buf1,buf2);  }
}
void cb_tulip_rx_state(const char *state) {

  for (auto it = py_tulip_rx_state.begin(); it != py_tulip_rx_state.end(); ++it) {
    boost::python::call(*it,*state);  }
}
void cb_tulip_tx_state(const char *state) {

  for (auto it = py_tulip_tx_state.begin(); it != py_tulip_tx_state.end(); ++it) {
    boost::python::call(*it,*state);  }
}
void cb_tulip_irq(uint32_t mask,uint32_t en,const char *state) {

  for (auto it = py_tulip_irq.begin(); it != py_tulip_irq.end(); ++it) {
    boost::python::call(*it,mask,en,*state);  }
}
void cb_tulip_mii_write(int phy,int reg,uint16_t data) {

  for (auto it = py_tulip_mii_write.begin(); it != py_tulip_mii_write.end(); ++it) {
    boost::python::call(*it,phy,reg,data);  }
}
void cb_tulip_mii_read(int phy,int reg,uint16_t data) {

  for (auto it = py_tulip_mii_read.begin(); it != py_tulip_mii_read.end(); ++it) {
    boost::python::call(*it,phy,reg,data);  }
}
void cb_tulip_reset(void) {

  for (auto it = py_tulip_reset.begin(); it != py_tulip_reset.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_tulip_setup_frame(void) {

  for (auto it = py_tulip_setup_frame.begin(); it != py_tulip_setup_frame.end();
       ++it) {
    boost::python::call(*it,void);  }
}
void cb_tulip_setup_filter(int n,uint8_t a,uint8_t b,uint8_t c,uint8_t d,uint8_t e,uint8_t f) {

  for (auto it = py_tulip_setup_filter.begin(); it != py_tulip_setup_filter.end();
       ++it) {
    boost::python::call(*it,n,a,b,c,d,e,f);  }
}

//#lasi_i82596.c
void cb_lasi_82596_mem_readw(uint64_t addr,uint32_t ret) {

  for (auto it = py_lasi_82596_mem_readw.begin(); it != py_lasi_82596_mem_readw.end();
       ++it) {
    boost::python::call(*it,addr,ret);  }
}
void cb_lasi_82596_mem_writew(uint64_t addr,uint32_t val) {

  for (auto it = py_lasi_82596_mem_writew.begin();
       it != py_lasi_82596_mem_writew.end(); ++it) {
    boost::python::call(*it,addr,val);  }
}

//#i82596.c
void cb_i82596_s_reset(void *s) {

  for (auto it = py_i82596_s_reset.begin(); it != py_i82596_s_reset.end(); ++it) {
    boost::python::call(*it,s);  }
}
void cb_i82596_transmit(uint32_t size,uint32_t addr) {

  for (auto it = py_i82596_transmit.begin(); it != py_i82596_transmit.end(); ++it) {
    boost::python::call(*it,size,addr);  }
}
void cb_i82596_receive_analysis(const char *s) {

  for (auto it = py_i82596_receive_analysis.begin();
       it != py_i82596_receive_analysis.end(); ++it) {
    boost::python::call(*it,*s);  }
}
void cb_i82596_receive_packet(size_t sz) {

  for (auto it = py_i82596_receive_packet.begin();
       it != py_i82596_receive_packet.end(); ++it) {
    boost::python::call(*it,sz);  }
}
void cb_i82596_new_mac(const char *id_with_mac) {

  for (auto it = py_i82596_new_mac.begin(); it != py_i82596_new_mac.end(); ++it) {
    boost::python::call(*it,*id_with_mac);  }
}
void cb_i82596_set_multicast(uint16_t count) {

  for (auto it = py_i82596_set_multicast.begin(); it != py_i82596_set_multicast.end();
       ++it) {
    boost::python::call(*it,count);  }
}
void cb_i82596_channel_attention(void *s) {

  for (auto it = py_i82596_channel_attention.begin();
       it != py_i82596_channel_attention.end(); ++it) {
    boost::python::call(*it,s);  }
}

//#imx_fec.c
void cb_imx_phy_read(uint32_t val,int phy,int reg) {

  for (auto it = py_imx_phy_read.begin(); it != py_imx_phy_read.end(); ++it) {
    boost::python::call(*it,val,phy,reg);  }
}
void cb_imx_phy_write(uint32_t val,int phy,int reg) {

  for (auto it = py_imx_phy_write.begin(); it != py_imx_phy_write.end(); ++it) {
    boost::python::call(*it,val,phy,reg);  }
}
void cb_imx_phy_update_link(const char *s) {

  for (auto it = py_imx_phy_update_link.begin(); it != py_imx_phy_update_link.end();
       ++it) {
    boost::python::call(*it,*s);  }
}
void cb_imx_phy_reset(void) {

  for (auto it = py_imx_phy_reset.begin(); it != py_imx_phy_reset.end(); ++it) {
    boost::python::call(*it,void);  }
}
void cb_imx_fec_read_bd(uint64_t addr,int flags,int len,int data) {

  for (auto it = py_imx_fec_read_bd.begin(); it != py_imx_fec_read_bd.end(); ++it) {
    boost::python::call(*it,addr,flags,len,data);  }
}
void cb_imx_enet_read_bd(uint64_t addr,int flags,int len,int data,int options,int status) {

  for (auto it = py_imx_enet_read_bd.begin(); it != py_imx_enet_read_bd.end(); ++it) {
    boost::python::call(*it,addr,flags,len,data,options,status);  }
}
void cb_imx_eth_tx_bd_busy(void) {

  for (auto it = py_imx_eth_tx_bd_busy.begin(); it != py_imx_eth_tx_bd_busy.end();
       ++it) {
    boost::python::call(*it,void);  }
}
void cb_imx_eth_rx_bd_full(void) {

  for (auto it = py_imx_eth_rx_bd_full.begin(); it != py_imx_eth_rx_bd_full.end();
       ++it) {
    boost::python::call(*it,void);  }
}
void cb_imx_eth_read(int reg,const char *reg_name,uint32_t value) {

  for (auto it = py_imx_eth_read.begin(); it != py_imx_eth_read.end(); ++it) {
    boost::python::call(*it,reg,*reg_name,value);  }
}
void cb_imx_eth_write(int reg,const char *reg_name,uint64_t value) {

  for (auto it = py_imx_eth_write.begin(); it != py_imx_eth_write.end(); ++it) {
    boost::python::call(*it,reg,*reg_name,value);  }
}
void cb_imx_fec_receive(size_t size) {

  for (auto it = py_imx_fec_receive.begin(); it != py_imx_fec_receive.end(); ++it) {
    boost::python::call(*it,size);  }
}
void cb_imx_fec_receive_len(uint64_t addr,int len) {

  for (auto it = py_imx_fec_receive_len.begin(); it != py_imx_fec_receive_len.end();
       ++it) {
    boost::python::call(*it,addr,len);  }
}
void cb_imx_fec_receive_last(int last) {

  for (auto it = py_imx_fec_receive_last.begin(); it != py_imx_fec_receive_last.end();
       ++it) {
    boost::python::call(*it,last);  }
}
void cb_imx_enet_receive(size_t size) {

  for (auto it = py_imx_enet_receive.begin(); it != py_imx_enet_receive.end(); ++it) {
    boost::python::call(*it,size);  }
}
void cb_imx_enet_receive_len(uint64_t addr,int len) {

  for (auto it = py_imx_enet_receive_len.begin(); it != py_imx_enet_receive_len.end();
       ++it) {
    boost::python::call(*it,addr,len);  }
}
void cb_imx_enet_receive_last(int last) {

  for (auto it = py_imx_enet_receive_last.begin();
       it != py_imx_enet_receive_last.end(); ++it) {
    boost::python::call(*it,last);  }
}
