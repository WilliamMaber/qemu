void cb_alpha_pci_iack_write(void){
		for(auto it = py_alpha_pci_iack_write.begin(); it != py_alpha_pci_iack_write.end(); ++it){
			boost::python::call(*it)
		}
}
