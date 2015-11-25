/************************************************************************************  								P R O J E C T   I N F O*************************************************************************************      Project Name:	Simon       File Name:	Globals.h       Description:	Common typedefs and other definitions that are common to all	 				C code.  This does not mean globals in the A5 sense.    						Copyright � 1992 Apple Computer, Inc.  						All rights reserved.  *************************************************************************************  							A U T H O R   I D E N T I T Y*************************************************************************************    	Initials	Name  	--------	-----------------------------------------------  	CH			Craig Hotchkiss  *************************************************************************************  							R E V I S I O N   H I S T O R Y*************************************************************************************	Change History (most recent first):		 <0>	  5/8/92	CH		Creation date************************************************************************************/#ifndef __GLOBALS__	#define __GLOBALS__/************************************************************************************									Constants************************************************************************************//************************************************************************************									Callback Types************************************************************************************/typedef pascal void (*ClientListProcPtr)();/************************************************************************************										Types************************************************************************************/typedef struct		ConfigGlobals { 	short					fToolVersion;	Boolean					fPersistentPackets;	Boolean					fOKToContinue;} ConfigGlobalRec;typedef	ConfigGlobalRec *ConfigGlobalPtr;typedef struct		SetupGlobals { 	short					fLastItemHit;} SetupGlobalRec;typedef	SetupGlobalRec *SetupGlobalPtr;typedef struct		DefaultStruct { 	short					fDefaultVersion;	short					fDefaultLanguage;	Boolean					fDefaultPersistentPackets;	Boolean					fDefaultOKToContinue;} DefaultRec;typedef	DefaultRec *DefaultPtr;	/* global structure for the tool */typedef struct		ToolGlobals { 	SetupGlobalRec			fSetupRecord;	DefaultRec				fDefaultRecord;	ConfigGlobalPtr			fConfigPtr;} ToolGlobalRec;typedef	ToolGlobalRec *ToolGlobalPtr;#ifdef __cplusplus	extern "C" {#endif/************************************************************************************								Global PROTOTYPEs here************************************************************************************/#ifdef __cplusplus	}#endif#endif __GLOBALS__