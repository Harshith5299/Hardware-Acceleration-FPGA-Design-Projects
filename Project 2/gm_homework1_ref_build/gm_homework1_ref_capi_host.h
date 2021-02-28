#ifndef RTW_HEADER_gm_homework1_ref_cap_host_h_
#define RTW_HEADER_gm_homework1_ref_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"

typedef struct {
  rtwCAPI_ModelMappingInfo mmi;
} gm_homework1_ref_host_DataMapInfo_T;

#ifdef __cplusplus

extern "C" {

#endif

  void gm_homework1_ref_host_InitializeDataMapInfo
    (gm_homework1_ref_host_DataMapInfo_T *dataMap, const char *path);

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */
#endif                             /* RTW_HEADER_gm_homework1_ref_cap_host_h_ */

/* EOF: gm_homework1_ref_capi_host.h */
