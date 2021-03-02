////# See docs/devel/tracing.txt for syntax documentation.

////# 9p.c
void cb_v9fs_rcancel(uint16_t tag, uint8_t id){
	for(auto it = py_v9fs_rcancel.begin(); it != py_v9fs_rcancel.end(); ++it){
		boost::python::call(*it, tag,  id)
	}
}
void cb_v9fs_rerror(uint16_t tag, uint8_t id, int err){
	for(auto it = py_v9fs_rerror.begin(); it != py_v9fs_rerror.end(); ++it){
		boost::python::call(*it, tag,  id,  err)
	}
}
void cb_v9fs_version(uint16_t tag, uint8_t id, int32_t msize, char* version){
	for(auto it = py_v9fs_version.begin(); it != py_v9fs_version.end(); ++it){
		boost::python::call(*it, tag,  id,  msize, * version)
	}
}
void cb_v9fs_version_return(uint16_t tag, uint8_t id, int32_t msize, char* version){
	for(auto it = py_v9fs_version_return.begin(); it != py_v9fs_version_return.end(); ++it){
		boost::python::call(*it, tag,  id,  msize, * version)
	}
}
void cb_v9fs_attach(uint16_t tag, uint8_t id, int32_t fid, int32_t afid, char* uname, char* aname){
	for(auto it = py_v9fs_attach.begin(); it != py_v9fs_attach.end(); ++it){
		boost::python::call(*it, tag,  id,  fid,  afid, * uname, * aname)
	}
}
void cb_v9fs_attach_return(uint16_t tag, uint8_t id, uint8_t type, uint32_t version, uint64_t path){
	for(auto it = py_v9fs_attach_return.begin(); it != py_v9fs_attach_return.end(); ++it){
		boost::python::call(*it, tag,  id,  type,  version,  path)
	}
}
void cb_v9fs_stat(uint16_t tag, uint8_t id, int32_t fid){
	for(auto it = py_v9fs_stat.begin(); it != py_v9fs_stat.end(); ++it){
		boost::python::call(*it, tag,  id,  fid)
	}
}
void cb_v9fs_stat_return(uint16_t tag, uint8_t id, int32_t mode, int32_t atime, int32_t mtime, int64_t length){
	for(auto it = py_v9fs_stat_return.begin(); it != py_v9fs_stat_return.end(); ++it){
		boost::python::call(*it, tag,  id,  mode,  atime,  mtime,  length)
	}
}
void cb_v9fs_getattr(uint16_t tag, uint8_t id, int32_t fid, uint64_t request_mask){
	for(auto it = py_v9fs_getattr.begin(); it != py_v9fs_getattr.end(); ++it){
		boost::python::call(*it, tag,  id,  fid,  request_mask)
	}
}
void cb_v9fs_getattr_return(uint16_t tag, uint8_t id, uint64_t result_mask, uint32_t mode, uint32_t uid, uint32_t gid){
	for(auto it = py_v9fs_getattr_return.begin(); it != py_v9fs_getattr_return.end(); ++it){
		boost::python::call(*it, tag,  id,  result_mask,  mode,  uid,  gid)
	}
}
void cb_v9fs_walk(uint16_t tag, uint8_t id, int32_t fid, int32_t newfid, uint16_t nwnames){
	for(auto it = py_v9fs_walk.begin(); it != py_v9fs_walk.end(); ++it){
		boost::python::call(*it, tag,  id,  fid,  newfid,  nwnames)
	}
}
void cb_v9fs_walk_return(uint16_t tag, uint8_t id, uint16_t nwnames, void* qids){
	for(auto it = py_v9fs_walk_return.begin(); it != py_v9fs_walk_return.end(); ++it){
		boost::python::call(*it, tag,  id,  nwnames, void* qids)
	}
}
void cb_v9fs_open(uint16_t tag, uint8_t id, int32_t fid, int32_t mode){
	for(auto it = py_v9fs_open.begin(); it != py_v9fs_open.end(); ++it){
		boost::python::call(*it, tag,  id,  fid,  mode)
	}
}
void cb_v9fs_open_return(uint16_t tag, uint8_t id, uint8_t type, uint32_t version, uint64_t path, int iounit){
	for(auto it = py_v9fs_open_return.begin(); it != py_v9fs_open_return.end(); ++it){
		boost::python::call(*it, tag,  id,  type,  version,  path,  iounit)
	}
}
void cb_v9fs_lcreate(uint16_t tag, uint8_t id, int32_t dfid, int32_t flags, int32_t mode, uint32_t gid){
	for(auto it = py_v9fs_lcreate.begin(); it != py_v9fs_lcreate.end(); ++it){
		boost::python::call(*it, tag,  id,  dfid,  flags,  mode,  gid)
	}
}
void cb_v9fs_lcreate_return(uint16_t tag, uint8_t id, uint8_t type, uint32_t version, uint64_t path, int32_t iounit){
	for(auto it = py_v9fs_lcreate_return.begin(); it != py_v9fs_lcreate_return.end(); ++it){
		boost::python::call(*it, tag,  id,  type,  version,  path,  iounit)
	}
}
void cb_v9fs_fsync(uint16_t tag, uint8_t id, int32_t fid, int datasync){
	for(auto it = py_v9fs_fsync.begin(); it != py_v9fs_fsync.end(); ++it){
		boost::python::call(*it, tag,  id,  fid,  datasync)
	}
}
void cb_v9fs_clunk(uint16_t tag, uint8_t id, int32_t fid){
	for(auto it = py_v9fs_clunk.begin(); it != py_v9fs_clunk.end(); ++it){
		boost::python::call(*it, tag,  id,  fid)
	}
}
void cb_v9fs_read(uint16_t tag, uint8_t id, int32_t fid, uint64_t off, uint32_t max_count){
	for(auto it = py_v9fs_read.begin(); it != py_v9fs_read.end(); ++it){
		boost::python::call(*it, tag,  id,  fid,  off,  max_count)
	}
}
void cb_v9fs_read_return(uint16_t tag, uint8_t id, int32_t count, ssize_t err){
	for(auto it = py_v9fs_read_return.begin(); it != py_v9fs_read_return.end(); ++it){
		boost::python::call(*it, tag,  id,  count,  err)
	}
}
void cb_v9fs_readdir(uint16_t tag, uint8_t id, int32_t fid, uint64_t offset, uint32_t max_count){
	for(auto it = py_v9fs_readdir.begin(); it != py_v9fs_readdir.end(); ++it){
		boost::python::call(*it, tag,  id,  fid,  offset,  max_count)
	}
}
void cb_v9fs_readdir_return(uint16_t tag, uint8_t id, uint32_t count, ssize_t retval){
	for(auto it = py_v9fs_readdir_return.begin(); it != py_v9fs_readdir_return.end(); ++it){
		boost::python::call(*it, tag,  id,  count,  retval)
	}
}
void cb_v9fs_write(uint16_t tag, uint8_t id, int32_t fid, uint64_t off, uint32_t count, int cnt){
	for(auto it = py_v9fs_write.begin(); it != py_v9fs_write.end(); ++it){
		boost::python::call(*it, tag,  id,  fid,  off,  count,  cnt)
	}
}
void cb_v9fs_write_return(uint16_t tag, uint8_t id, int32_t total, ssize_t err){
	for(auto it = py_v9fs_write_return.begin(); it != py_v9fs_write_return.end(); ++it){
		boost::python::call(*it, tag,  id,  total,  err)
	}
}
void cb_v9fs_create(uint16_t tag, uint8_t id, int32_t fid, char* name, int32_t perm, int8_t mode){
	for(auto it = py_v9fs_create.begin(); it != py_v9fs_create.end(); ++it){
		boost::python::call(*it, tag,  id,  fid, * name,  perm,  mode)
	}
}
void cb_v9fs_create_return(uint16_t tag, uint8_t id, uint8_t type, uint32_t version, uint64_t path, int iounit){
	for(auto it = py_v9fs_create_return.begin(); it != py_v9fs_create_return.end(); ++it){
		boost::python::call(*it, tag,  id,  type,  version,  path,  iounit)
	}
}
void cb_v9fs_symlink(uint16_t tag, uint8_t id, int32_t fid,  char* name, char* symname, uint32_t gid){
	for(auto it = py_v9fs_symlink.begin(); it != py_v9fs_symlink.end(); ++it){
		boost::python::call(*it, tag,  id,  fid,  * name, * symname,  gid)
	}
}
void cb_v9fs_symlink_return(uint16_t tag, uint8_t id, uint8_t type, uint32_t version, uint64_t path){
	for(auto it = py_v9fs_symlink_return.begin(); it != py_v9fs_symlink_return.end(); ++it){
		boost::python::call(*it, tag,  id,  type,  version,  path)
	}
}
void cb_v9fs_flush(uint16_t tag, uint8_t id, int16_t flush_tag){
	for(auto it = py_v9fs_flush.begin(); it != py_v9fs_flush.end(); ++it){
		boost::python::call(*it, tag,  id,  flush_tag)
	}
}
void cb_v9fs_link(uint16_t tag, uint8_t id, int32_t dfid, int32_t oldfid, char* name){
	for(auto it = py_v9fs_link.begin(); it != py_v9fs_link.end(); ++it){
		boost::python::call(*it, tag,  id,  dfid,  oldfid, * name)
	}
}
void cb_v9fs_remove(uint16_t tag, uint8_t id, int32_t fid){
	for(auto it = py_v9fs_remove.begin(); it != py_v9fs_remove.end(); ++it){
		boost::python::call(*it, tag,  id,  fid)
	}
}
void cb_v9fs_wstat(uint16_t tag, uint8_t id, int32_t fid, int32_t mode, int32_t atime, int32_t mtime){
	for(auto it = py_v9fs_wstat.begin(); it != py_v9fs_wstat.end(); ++it){
		boost::python::call(*it, tag,  id,  fid,  mode,  atime,  mtime)
	}
}
void cb_v9fs_mknod(uint16_t tag, uint8_t id, int32_t fid, int mode, int major, int minor){
	for(auto it = py_v9fs_mknod.begin(); it != py_v9fs_mknod.end(); ++it){
		boost::python::call(*it, tag,  id,  fid,  mode,  major,  minor)
	}
}
void cb_v9fs_mknod_return(uint16_t tag, uint8_t id, uint8_t type, uint32_t version, uint64_t path){
	for(auto it = py_v9fs_mknod_return.begin(); it != py_v9fs_mknod_return.end(); ++it){
		boost::python::call(*it, tag,  id,  type,  version,  path)
	}
}
void cb_v9fs_lock(uint16_t tag, uint8_t id, int32_t fid, uint8_t type, uint64_t start, uint64_t length){
	for(auto it = py_v9fs_lock.begin(); it != py_v9fs_lock.end(); ++it){
		boost::python::call(*it, tag,  id,  fid,  type,  start,  length)
	}
}
void cb_v9fs_lock_return(uint16_t tag, uint8_t id, int8_t status){
	for(auto it = py_v9fs_lock_return.begin(); it != py_v9fs_lock_return.end(); ++it){
		boost::python::call(*it, tag,  id,  status)
	}
}
void cb_v9fs_getlock(uint16_t tag, uint8_t id, int32_t fid, uint8_t type, uint64_t start, uint64_t length){
	for(auto it = py_v9fs_getlock.begin(); it != py_v9fs_getlock.end(); ++it){
		boost::python::call(*it, tag,  id,  fid,  type,  start,  length)
	}
}
void cb_v9fs_getlock_return(uint16_t tag, uint8_t id, uint8_t type, uint64_t start, uint64_t length, uint32_t proc_id){
	for(auto it = py_v9fs_getlock_return.begin(); it != py_v9fs_getlock_return.end(); ++it){
		boost::python::call(*it, tag,  id,  type,  start,  length,  proc_id)
	}
}
void cb_v9fs_mkdir(uint16_t tag, uint8_t id, int32_t fid, char* name, int mode, uint32_t gid){
	for(auto it = py_v9fs_mkdir.begin(); it != py_v9fs_mkdir.end(); ++it){
		boost::python::call(*it, tag,  id,  fid, * name,  mode,  gid)
	}
}
void cb_v9fs_mkdir_return(uint16_t tag, uint8_t id, uint8_t type, uint32_t version, uint64_t path, int err){
	for(auto it = py_v9fs_mkdir_return.begin(); it != py_v9fs_mkdir_return.end(); ++it){
		boost::python::call(*it, tag,  id,  type,  version,  path,  err)
	}
}
void cb_v9fs_xattrwalk(uint16_t tag, uint8_t id, int32_t fid, int32_t newfid, char* name){
	for(auto it = py_v9fs_xattrwalk.begin(); it != py_v9fs_xattrwalk.end(); ++it){
		boost::python::call(*it, tag,  id,  fid,  newfid, * name)
	}
}
void cb_v9fs_xattrwalk_return(uint16_t tag, uint8_t id, int64_t size){
	for(auto it = py_v9fs_xattrwalk_return.begin(); it != py_v9fs_xattrwalk_return.end(); ++it){
		boost::python::call(*it, tag,  id,  size)
	}
}
void cb_v9fs_xattrcreate(uint16_t tag, uint8_t id, int32_t fid, char* name, uint64_t size, int flags){
	for(auto it = py_v9fs_xattrcreate.begin(); it != py_v9fs_xattrcreate.end(); ++it){
		boost::python::call(*it, tag,  id,  fid, * name,  size,  flags)
	}
}
void cb_v9fs_readlink(uint16_t tag, uint8_t id, int32_t fid){
	for(auto it = py_v9fs_readlink.begin(); it != py_v9fs_readlink.end(); ++it){
		boost::python::call(*it, tag,  id,  fid)
	}
}
void cb_v9fs_readlink_return(uint16_t tag, uint8_t id, char* target){
	for(auto it = py_v9fs_readlink_return.begin(); it != py_v9fs_readlink_return.end(); ++it){
		boost::python::call(*it, tag,  id, * target)
	}
}
void cb_v9fs_setattr(uint16_t tag, uint8_t id, int32_t fid, int32_t valid, int32_t mode, int32_t uid, int32_t gid, int64_t size, int64_t atime_sec, int64_t mtime_sec){
	for(auto it = py_v9fs_setattr.begin(); it != py_v9fs_setattr.end(); ++it){
		boost::python::call(*it, tag,  id,  fid,  valid,  mode,  uid,  gid,  size,  atime_sec,  mtime_sec)
	}
}
void cb_v9fs_setattr_return(uint16_t tag, uint8_t id){
	for(auto it = py_v9fs_setattr_return.begin(); it != py_v9fs_setattr_return.end(); ++it){
		boost::python::call(*it, tag,  id)
	}
}
