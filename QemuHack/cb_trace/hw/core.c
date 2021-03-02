//# loader.c
void cb_loader_write_rom(const char *name,uint64_t gpa,uint64_t size,bool isrom) {
		for(auto it = py_loader_write_rom.begin(); it != py_loader_write_rom.end(); ++it){
			boost::python::call(*it,*name,gpa,size,isrom);
		}
}

//# qdev.c
void cb_qdev_reset(void *obj,const char *objtype) {
		for(auto it = py_qdev_reset.begin(); it != py_qdev_reset.end(); ++it){
			boost::python::call(*it,obj,*objtype);
		}
}
void cb_qdev_reset_all(void *obj,const char *objtype) {
		for(auto it = py_qdev_reset_all.begin(); it != py_qdev_reset_all.end(); ++it){
			boost::python::call(*it,obj,*objtype);
		}
}
void cb_qdev_reset_tree(void *obj,const char *objtype) {
		for(auto it = py_qdev_reset_tree.begin(); it != py_qdev_reset_tree.end(); ++it){
			boost::python::call(*it,obj,*objtype);
		}
}
void cb_qbus_reset(void *obj,const char *objtype) {
		for(auto it = py_qbus_reset.begin(); it != py_qbus_reset.end(); ++it){
			boost::python::call(*it,obj,*objtype);
		}
}
void cb_qbus_reset_all(void *obj,const char *objtype) {
		for(auto it = py_qbus_reset_all.begin(); it != py_qbus_reset_all.end(); ++it){
			boost::python::call(*it,obj,*objtype);
		}
}
void cb_qbus_reset_tree(void *obj,const char *objtype) {
		for(auto it = py_qbus_reset_tree.begin(); it != py_qbus_reset_tree.end(); ++it){
			boost::python::call(*it,obj,*objtype);
		}
}
void cb_qdev_update_parent_bus(void *obj,const char *objtype,void *oldp,const char *oldptype,void *newp,const char *newptype) {
		for(auto it = py_qdev_update_parent_bus.begin(); it != py_qdev_update_parent_bus.end(); ++it){
			boost::python::call(*it,obj,*objtype,oldp,*oldptype,newp,*newptype);
		}
}

//# resettable.c
void cb_resettable_reset(void *obj,int cold) {
		for(auto it = py_resettable_reset.begin(); it != py_resettable_reset.end(); ++it){
			boost::python::call(*it,obj,cold);
		}
}
void cb_resettable_reset_assert_begin(void *obj,int cold) {
		for(auto it = py_resettable_reset_assert_begin.begin(); it != py_resettable_reset_assert_begin.end(); ++it){
			boost::python::call(*it,obj,cold);
		}
}
void cb_resettable_reset_assert_end(void *obj) {
		for(auto it = py_resettable_reset_assert_end.begin(); it != py_resettable_reset_assert_end.end(); ++it){
			boost::python::call(*it,obj);
		}
}
void cb_resettable_reset_release_begin(void *obj,int cold) {
		for(auto it = py_resettable_reset_release_begin.begin(); it != py_resettable_reset_release_begin.end(); ++it){
			boost::python::call(*it,obj,cold);
		}
}
void cb_resettable_reset_release_end(void *obj) {
		for(auto it = py_resettable_reset_release_end.begin(); it != py_resettable_reset_release_end.end(); ++it){
			boost::python::call(*it,obj);
		}
}
void cb_resettable_change_parent(void *obj,void *o,unsigned oc,void *n,unsigned nc) {
		for(auto it = py_resettable_change_parent.begin(); it != py_resettable_change_parent.end(); ++it){
			boost::python::call(*it,obj,o,oc,n,nc);
		}
}
void cb_resettable_phase_enter_begin(void *obj,const char *objtype,unsigned count,int type) {
		for(auto it = py_resettable_phase_enter_begin.begin(); it != py_resettable_phase_enter_begin.end(); ++it){
			boost::python::call(*it,obj,*objtype,count,type);
		}
}
void cb_resettable_phase_enter_exec(void *obj,const char *objtype,int type,int has_method) {
		for(auto it = py_resettable_phase_enter_exec.begin(); it != py_resettable_phase_enter_exec.end(); ++it){
			boost::python::call(*it,obj,*objtype,type,has_method);
		}
}
void cb_resettable_phase_enter_end(void *obj,const char *objtype,unsigned count) {
		for(auto it = py_resettable_phase_enter_end.begin(); it != py_resettable_phase_enter_end.end(); ++it){
			boost::python::call(*it,obj,*objtype,count);
		}
}
void cb_resettable_phase_hold_begin(void *obj,const char *objtype,unsigned count,int type) {
		for(auto it = py_resettable_phase_hold_begin.begin(); it != py_resettable_phase_hold_begin.end(); ++it){
			boost::python::call(*it,obj,*objtype,count,type);
		}
}
void cb_resettable_phase_hold_exec(void *obj,const char *objtype,int has_method) {
		for(auto it = py_resettable_phase_hold_exec.begin(); it != py_resettable_phase_hold_exec.end(); ++it){
			boost::python::call(*it,obj,*objtype,has_method);
		}
}
void cb_resettable_phase_hold_end(void *obj,const char *objtype,unsigned count) {
		for(auto it = py_resettable_phase_hold_end.begin(); it != py_resettable_phase_hold_end.end(); ++it){
			boost::python::call(*it,obj,*objtype,count);
		}
}
void cb_resettable_phase_exit_begin(void *obj,const char *objtype,unsigned count,int type) {
		for(auto it = py_resettable_phase_exit_begin.begin(); it != py_resettable_phase_exit_begin.end(); ++it){
			boost::python::call(*it,obj,*objtype,count,type);
		}
}
void cb_resettable_phase_exit_exec(void *obj,const char *objtype,int has_method) {
		for(auto it = py_resettable_phase_exit_exec.begin(); it != py_resettable_phase_exit_exec.end(); ++it){
			boost::python::call(*it,obj,*objtype,has_method);
		}
}
void cb_resettable_phase_exit_end(void *obj,const char *objtype,unsigned count) {
		for(auto it = py_resettable_phase_exit_end.begin(); it != py_resettable_phase_exit_end.end(); ++it){
			boost::python::call(*it,obj,*objtype,count);
		}
}
void cb_resettable_transitional_function(void *obj,const char *objtype) {
		for(auto it = py_resettable_transitional_function.begin(); it != py_resettable_transitional_function.end(); ++it){
			boost::python::call(*it,obj,*objtype);
		}
}

//# clock.c
void cb_clock_set_source(const char *clk,const char *src) {
		for(auto it = py_clock_set_source.begin(); it != py_clock_set_source.end(); ++it){
			boost::python::call(*it,*clk,*src);
		}
}
void cb_clock_disconnect(const char *clk) {
		for(auto it = py_clock_disconnect.begin(); it != py_clock_disconnect.end(); ++it){
			boost::python::call(*it,*clk);
		}
}
void cb_clock_set(const char *clk,uint64_t old,uint64_t new) {
		for(auto it = py_clock_set.begin(); it != py_clock_set.end(); ++it){
			boost::python::call(*it,*clk,old,new);
		}
}
void cb_clock_propagate(const char *clk) {
		for(auto it = py_clock_propagate.begin(); it != py_clock_propagate.end(); ++it){
			boost::python::call(*it,*clk);
		}
}
void cb_clock_update(const char *clk,const char *src,uint64_t hz,int cb) {
		for(auto it = py_clock_update.begin(); it != py_clock_update.end(); ++it){
			boost::python::call(*it,*clk,*src,hz,cb);
		}
}
