/*** Copyright (c), The Regents of the University of California            ***
 *** For more information please refer to files in the COPYRIGHT directory ***/
/* rcGlobalExtern.h - Extern global declaration for client API */

#ifndef RC_GLOBAL_EXTERN_HPP
#define RC_GLOBAL_EXTERN_HPP

#include "rods.hpp"
#include "packStruct.hpp"
#include "objInfo.hpp"
#include "msParam.hpp"
#include "guiProgressCallback.hpp"

extern packConstantArray_t PackConstantTable[];
extern const packInstructArray_t RodsPackTable[];
extern int ProcessType;
extern packType_t packTypeTable[];
extern int NumOfPackTypes;
extern int NumOfApi;
extern char *dataObjCond[];
extern char *compareOperator[];
extern char *rescCond[];
extern char *userCond[];
extern char *collCond[];
extern int NumRescTypeDef;
// JMC - legacy resource - extern rescClass_t RescClass[];
// JMC - legacy resource - extern int NumRescClass;
extern structFileTypeDef_t StructFileTypeDef[];
extern int NumStructFileType;
extern validKeyWd_t DataObjInpKeyWd[];
extern int NumDataObjInpKeyWd;
extern validKeyWd_t CollInpKeyWd[];
extern int NumCollInpKeyWd;
extern validKeyWd_t StructFileExtAndRegInpKeyWd[];
extern int NumStructFileExtAndRegInpKeyWd;
extern struct timeval SysTimingVal;

#ifdef __cplusplus
extern "C" {
#endif
    extern guiProgressCallback gGuiProgressCB;

#ifdef __cplusplus
}
#endif

#endif	/* RC_GLOBAL_EXTERN_H */
