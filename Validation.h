/******************************************************************************							P R O J E C T   I N F O*******************************************************************************      Project Name:	Simon       File Name:	Validation.h       Description:	Header include for Validation.c    						Copyright � 1992 Apple Computer, Inc.  						All rights reserved.  *******************************************************************************  						A U T H O R   I D E N T I T Y*******************************************************************************    	Initials	Name  	--------	-----------------------------------------------  	CH			Craig Hotchkiss  *******************************************************************************  						R E V I S I O N   H I S T O R Y*******************************************************************************	Change History (most recent first):		 <0>	  5/8/92	CH		Creation date******************************************************************************/#ifndef __VALIDATION__	#define __VALIDATION__#ifdef __cplusplus	extern "C" {#endif/*************************************************************************************								PROTOTYPEs************************************************************************************/OSErr			DoToolDefault( Ptr* configPtr, Boolean allocateIt, short toolRefNum );OSErr			DoToolValidate( FTHandle toolHandle );#ifdef __cplusplus	}#endif#endif __VALIDATION__