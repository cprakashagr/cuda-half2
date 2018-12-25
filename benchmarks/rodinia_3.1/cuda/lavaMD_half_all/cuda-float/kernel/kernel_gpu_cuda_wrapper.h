#ifdef __cplusplus
extern "C" {
#endif
//~ #include "/usr/local/cuda/include/cuda_fp16.h"

//========================================================================================================================================================================================================200
//	KERNEL_GPU_CUDA_WRAPPER HEADER
//========================================================================================================================================================================================================200

void kernel_gpu_cuda_wrapper(	par_str parms_cpu,
								dim_str dim_cpu,
								box_str* box_cpu,
								FOUR_VECTOR* rv_cpu,
								fp* qv_cpu,
								FOUR_VECTOR* fv_cpu);

#ifdef __cplusplus
}
#endif
