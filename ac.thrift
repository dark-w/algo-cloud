namespace cpp algo_cloud_base

service acb_heap_manager {
	bool heap_init(1: i32 config_heap_size)
    i64 malloc(1: i32 size)
    oneway void free(1: i64 addr)
}
