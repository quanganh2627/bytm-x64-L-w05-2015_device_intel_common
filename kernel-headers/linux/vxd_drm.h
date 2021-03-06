/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _VXD_DRM_H_
#define _VXD_DRM_H_

#include "drm.h"

#ifdef __linux__
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <stdint.h>
#include <linux/types.h>
#include "drm_mode.h"
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include "psb_ttm_fence_user.h"
#include "psb_ttm_placement_user.h"
#define DRM_PSB_EXTENSION 0x50
#define DRM_PSB_GETPAGEADDRS 0x51
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DRM_PSB_CMDBUF 0x52
#define DRM_PSB_TTM_PL_CREATE 0x53
#define DRM_PSB_TTM_PL_REFERENCE 0x54
#define DRM_PSB_TTM_PL_UNREF 0x55
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DRM_PSB_TTM_PL_SYNCCPU 0x56
#define DRM_PSB_TTM_PL_WAITIDLE 0x57
#define DRM_PSB_TTM_PL_SETSTATUS 0x58
#define DRM_PSB_TTM_PL_CREATE_UB 0x59
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DRM_PSB_TTM_FENCE_SIGNALED 0x5a
#define DRM_PSB_TTM_FENCE_FINISH 0x5b
#define DRM_PSB_TTM_FENCE_UNREF 0x5c
#define DRM_PSB_VIDEO_GETPARAM 0x5d
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DRM_COMMAND_VXD_OFFSET 0x50
#define DRM_COMMAND_VXD_BASE 0x90
#define DRM_PSB_PLACEMENT_OFFSET 0x53
#define DRM_PSB_FENCE_OFFSET 0x5a
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PSB_RELOC_MAGIC 0x67676767
#define PSB_RELOC_SHIFT_MASK 0x0000FFFF
#define PSB_RELOC_SHIFT_SHIFT 0
#define PSB_RELOC_ALSHIFT_MASK 0xFFFF0000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PSB_RELOC_ALSHIFT_SHIFT 16
#define PSB_RELOC_OP_OFFSET 0
struct drm_psb_reloc {
 uint32_t reloc_op;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t where;
 uint32_t buffer;
 uint32_t mask;
 uint32_t shift;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t pre_add;
 uint32_t background;
 uint32_t dst_buffer;
 uint32_t arg0;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t arg1;
};
#define PSB_GPU_ACCESS_READ (1ULL << 32)
#define PSB_GPU_ACCESS_WRITE (1ULL << 33)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PSB_GPU_ACCESS_MASK (PSB_GPU_ACCESS_READ | PSB_GPU_ACCESS_WRITE)
#define PSB_BO_FLAG_COMMAND (1ULL << 52)
#define PSB_ENGINE_2D 2
#define PSB_ENGINE_DECODE 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PSB_ENGINE_VIDEO 0
#define LNC_ENGINE_ENCODE 1
#define VSP_ENGINE_VPP 6
#define _PSB_FENCE_EXE_SHIFT 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define _PSB_FENCE_FEEDBACK_SHIFT 4
#define _PSB_FENCE_TYPE_EXE (1 << _PSB_FENCE_EXE_SHIFT)
#define _PSB_FENCE_TYPE_FEEDBACK (1 << _PSB_FENCE_FEEDBACK_SHIFT)
#define PSB_NUM_ENGINES 7
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PSB_FEEDBACK_OP_VISTEST (1 << 0)
struct drm_psb_extension_rep {
 int32_t exists;
 uint32_t driver_ioctl_offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t sarea_offset;
 uint32_t major;
 uint32_t minor;
 uint32_t pl;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define DRM_PSB_EXT_NAME_LEN 128
union drm_psb_extension_arg {
 char extension[DRM_PSB_EXT_NAME_LEN];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct __user drm_psb_extension_rep rep;
};
struct psb_validate_req {
 uint64_t set_flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint64_t clear_flags;
 uint64_t next;
 uint64_t presumed_gpu_offset;
 uint32_t buffer_handle;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t presumed_flags;
 uint32_t group;
 uint32_t pad64;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct psb_validate_rep {
 uint64_t gpu_offset;
 uint32_t placement;
 uint32_t fence_type_mask;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define PSB_USE_PRESUMED (1 << 0)
struct psb_validate_arg {
 uint64_t handled;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint64_t ret;
 union {
 struct psb_validate_req req;
 struct psb_validate_rep rep;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } d;
};
#define DRM_PSB_FENCE_NO_USER (1 << 0)
struct psb_ttm_fence_rep {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t handle;
 uint32_t fence_class;
 uint32_t fence_type;
 uint32_t signaled_types;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t error;
};
typedef struct drm_psb_cmdbuf_arg {
 uint64_t buffer_list;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint64_t fence_arg;
 uint32_t cmdbuf_handle;
 uint32_t cmdbuf_offset;
 uint32_t cmdbuf_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t reloc_handle;
 uint32_t reloc_offset;
 uint32_t num_relocs;
 uint32_t fence_flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t engine;
} drm_psb_cmdbuf_arg_t;
struct drm_psb_pageflip_arg_t {
 uint32_t flip_offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t stride;
};
enum lnc_getparam_key {
 LNC_VIDEO_DEVICE_INFO,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 LNC_VIDEO_GETPARAM_RAR_INFO,
 LNC_VIDEO_GETPARAM_CI_INFO,
 LNC_VIDEO_FRAME_SKIP,
 IMG_VIDEO_DECODE_STATUS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IMG_VIDEO_NEW_CONTEXT,
 IMG_VIDEO_RM_CONTEXT,
 IMG_VIDEO_UPDATE_CONTEXT,
 IMG_VIDEO_MB_ERROR,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IMG_VIDEO_SET_DISPLAYING_FRAME,
 IMG_VIDEO_GET_DISPLAYING_FRAME,
 IMG_VIDEO_GET_HDMI_STATE,
 IMG_VIDEO_SET_HDMI_STATE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PNW_VIDEO_QUERY_ENTRY,
 IMG_DISPLAY_SET_WIDI_EXT_STATE,
 IMG_VIDEO_IED_STATE
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct drm_lnc_video_getparam_arg {
 uint64_t key;
 uint64_t arg;
 uint64_t value;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct drm_video_displaying_frameinfo {
 uint32_t buf_handle;
 uint32_t width;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t height;
 uint32_t size;
 uint32_t format;
 uint32_t luma_stride;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t chroma_u_stride;
 uint32_t chroma_v_stride;
 uint32_t luma_offset;
 uint32_t chroma_u_offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t chroma_v_offset;
 uint32_t reserved;
};
struct drm_psb_dev_info_arg {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t num_use_attribute_registers;
};
#define DRM_PSB_DEVINFO 0x01
struct drm_psb_sizes_arg {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t ta_mem_size;
 uint32_t mmu_size;
 uint32_t pds_size;
 uint32_t rastgeom_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t tt_size;
 uint32_t vram_size;
};
#define DRM_PSB_MEM_MMU TTM_PL_PRIV1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DRM_PSB_FLAG_MEM_MMU TTM_PL_FLAG_PRIV1
#define TTM_PL_CI TTM_PL_PRIV0
#define TTM_PL_FLAG_CI TTM_PL_FLAG_PRIV0
#define TTM_PL_RAR TTM_PL_PRIV2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TTM_PL_FLAG_RAR TTM_PL_FLAG_PRIV2
#define DRM_PSB_MEM_MMU_TILING TTM_PL_PRIV3
#define DRM_PSB_FLAG_MEM_MMU_TILING TTM_PL_FLAG_PRIV3
#define MAX_SLICES_PER_PICTURE 72
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct psb_msvdx_mb_region {
 uint32_t start;
 uint32_t end;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef struct drm_psb_msvdx_decode_status {
 uint32_t num_region;
 struct psb_msvdx_mb_region mb_regions[MAX_SLICES_PER_PICTURE];
} drm_psb_msvdx_decode_status_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum drm_cmd_status {
 DRM_CMD_SUCCESS,
 DRM_CMD_FAILED,
 DRM_CMD_HANG
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct drm_psb_getpageaddrs_arg {
 uint64_t handle;
 uint64_t page_addrs;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint64_t gtt_offset;
};
#endif

