/*****************************************************************************
* Copyright Statement:
* --------------------
* This software is protected by Copyright and the information contained
* herein is confidential. The software may not be copied and the information
* contained herein may not be used or disclosed except with the written
* permission of BEIWEI Inc. (C) 2005
*
*****************************************************************************/
/*============================================================================
*
* $CVSHeader: P_U25U26_06B_V30/codes/06BW0712MP_1_U26_06B_V30_gprs_MMI/tools/MinGW/include/oaidl.h,v 1.1 2007/05/17 07:25:31 bw Exp $
*
* $Id: oaidl.h,v 1.1 2007/05/17 07:25:31 bw Exp $
*
* $Date: 2007/05/17 07:25:31 $
*
* $Name: 1.1 $
*
* $Locker$
*
* $Revision: 1.1 $
*
* $State: Exp $
*
* HISTORY
* Below this line, this part is controlled by CVS. DO NOT MODIFY!!
*----------------------------------------------------------------------------
* $Log: oaidl.h,v $
* Revision 1.1  2007/05/17 07:25:31  bw
* UNI@bw_20070517 15:10:01 MTK U25 U26 06B V30 version
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/
/*****************************************************************************
* Copyright Statement:
* --------------------
* This software is protected by Copyright and the information contained
* herein is confidential. The software may not be copied and the information
* contained herein may not be used or disclosed except with the written
* permission of BEIWEI Inc. (C) 2007
*
*****************************************************************************/
/*============================================================================
*
* ~CVSHeader: P_U25U26_06B_V28/codes/06BW0712MP_1_U26_06B_V28_gprs_MMI/tools/MinGW/include/oaidl.h,v 1.1 2007/05/14 09:46:45 bw Exp $
*
* ~Id: oaidl.h,v 1.1 2007/05/14 09:46:45 bw Exp $
*
* ~Date: 2007/05/14 09:46:45 $
*
* ~Name: 1.1 $
*
* ~Locker$
*
* ~Revision: 1.1 $
*
* ~State: Exp $
*
* HISTORY
* Below this line, this part is controlled by CVS. DO NOT MODIFY!!
*----------------------------------------------------------------------------
* ~Log: oaidl.h,v $
* Revision 1.1  2007/05/14 09:46:45  bw
* UNI@bw_20070514 17:21:01 MTK��ʼ�汾.�ϲ�U25V20��U26V28.
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/
/*****************************************************************************
* Copyright Statement:
* --------------------
* This software is protected by Copyright and the information contained
* herein is confidential. The software may not be copied and the information
* contained herein may not be used or disclosed except with the written
* permission of BEIWEI Inc. (C) 2005
*
*****************************************************************************/
/*============================================================================
*
* ~CVSHeader: P_U25U26_06B/codes/U25U26_06B_W07.12_MMI/tools/MinGW/include/oaidl.h,v 1.2 2007/04/04 06:51:32 bw Exp $
*
* ~Id: oaidl.h,v 1.2 2007/04/04 06:51:32 bw Exp $
*
* ~Date: 2007/04/04 06:51:32 $
*
* ~Name: 1.2 $
*
* ~Locker$
*
* ~Revision: 1.2 $
*
* ~State: Exp $
*
* HISTORY
* Below this line, this part is controlled by CVS. DO NOT MODIFY!!
*----------------------------------------------------------------------------
* ~Log: oaidl.h,v $
* Revision 1.2  2007/04/04 06:51:32  bw
* ����.c.h�ļ�ͷģ��
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/

#ifndef _OAIDL_H
#define _OAIDL_H
#if __GNUC__ >=3
#pragma GCC system_header
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifdef NONAMELESSUNION
#define __VARIANT_NAME_1 n1
#define __VARIANT_NAME_2 n2
#define __VARIANT_NAME_3 n3
#define __VARIANT_NAME_4 n4
#else
#define __tagVARIANT
#define __VARIANT_NAME_1
#define __VARIANT_NAME_2
#define __VARIANT_NAME_3
#define __VARIANT_NAME_4
#endif
#define DISPID_UNKNOWN (-1)
#define DISPID_VALUE (0)
#define DISPID_PROPERTYPUT (-3)
#define DISPID_NEWENUM (-4)
#define DISPID_EVALUATE (-5)
#define DISPID_CONSTRUCTOR (-6)
#define DISPID_DESTRUCTOR (-7)
#define DISPID_COLLECT (-8)
#define FADF_AUTO (1)
#define FADF_STATIC (2)
#define FADF_EMBEDDED (4)
#define FADF_FIXEDSIZE (16)
#define FADF_BSTR (256)
#define FADF_UNKNOWN (512)
#define FADF_DISPATCH (1024)
#define FADF_VARIANT (2048)
#define FADF_RESERVED (0xf0e8)
#define PARAMFLAG_NONE (0)
#define PARAMFLAG_FIN (1)
#define PARAMFLAG_FOUT (2)
#define PARAMFLAG_FLCID (4)
#define PARAMFLAG_FRETVAL (8)
#define PARAMFLAG_FOPT (16)
#define PARAMFLAG_FHASDEFAULT (32)
#define IDLFLAG_NONE PARAMFLAG_NONE
#define IDLFLAG_FIN PARAMFLAG_FIN
#define IDLFLAG_FOUT PARAMFLAG_FOUT
#define IDLFLAG_FLCID PARAMFLAG_FLCID
#define IDLFLAG_FRETVAL PARAMFLAG_FRETVAL
#define IMPLTYPEFLAG_FDEFAULT 1
#define IMPLTYPEFLAG_FSOURCE 2
#define IMPLTYPEFLAG_FRESTRICTED 4
#define IMPLTYPEFLAG_FDEFAULTVTABLE 8

typedef interface ITypeLib *LPTYPELIB;
typedef interface ICreateTypeInfo *LPCREATETYPEINFO;
typedef interface ICreateTypeInfo2 *LPCREATETYPEINFO2;
typedef interface ICreateTypeLib *LPCREATETYPELIB;
typedef interface ICreateTypeLib2 *LPCREATETYPELIB2;
typedef interface ITypeComp *LPTYPECOMP;
typedef interface ITypeInfo *LPTYPEINFO;
typedef interface IErrorInfo *LPERRORINFO;
typedef interface IDispatch *LPDISPATCH;
typedef interface IEnumVARIANT *LPENUMVARIANT;
typedef interface ICreateErrorInfo *LPCREATEERRORINFO;
typedef interface ISupportErrorInfo *LPSUPPORTERRORINFO;
typedef interface IRecordInfo *LPRECORDINFO;

extern const IID IID_ITypeLib;
extern const IID IID_ICreateTypeInfo;
extern const IID IID_ICreateTypeInfo2;
extern const IID IID_ICreateTypeLib;
extern const IID IID_ICreateTypeLib2;
extern const IID IID_ITypeInfo;
extern const IID IID_IErrorInfo;
extern const IID IID_IDispatch;
extern const IID IID_IEnumVARIANT;
extern const IID IID_ICreateErrorInfo;
extern const IID IID_ISupportErrorInfo;
extern const IID IID_IRecordInfo;
extern const IID IID_ITypeMarshal;

typedef enum tagSYSKIND {
	SYS_WIN16,SYS_WIN32,SYS_MAC
} SYSKIND;
typedef enum tagLIBFLAGS {
	LIBFLAG_FRESTRICTED=1,LIBFLAG_FCONTROL=2,LIBFLAG_FHIDDEN=4,
	LIBFLAG_FHASDISKIMAGE=8
} LIBFLAGS;
typedef struct tagTLIBATTR {
	GUID guid;
	LCID lcid;
	SYSKIND syskind;
	WORD wMajorVerNum;
	WORD wMinorVerNum;
	WORD wLibFlags;
} TLIBATTR,*LPTLIBATTR;
typedef CY CURRENCY;
typedef struct tagSAFEARRAYBOUND {
	ULONG cElements;
	LONG lLbound;
}SAFEARRAYBOUND,*LPSAFEARRAYBOUND;
typedef struct _wireSAFEARR_BSTR
{
	ULONG Size;
	wireBSTR *aBstr;
}SAFEARR_BSTR;
typedef struct _wireSAFEARR_UNKNOWN {
	ULONG Size;
	IUnknown **apUnknown;
}SAFEARR_UNKNOWN;
typedef struct _wireSAFEARR_DISPATCH {
	ULONG Size;
	LPDISPATCH *apDispatch;
}SAFEARR_DISPATCH;
typedef struct _wireSAFEARR_VARIANT {
	ULONG Size;
	struct _wireVARIANT *aVariant;
}SAFEARR_VARIANT;
typedef enum tagSF_TYPE {
	SF_ERROR=VT_ERROR,
	SF_I1=VT_I1,
	SF_I2=VT_I2,
	SF_I4=VT_I4,
	SF_I8=VT_I8,
	SF_BSTR=VT_BSTR,
	SF_UNKNOWN=VT_UNKNOWN,
	SF_DISPATCH=VT_DISPATCH,
	SF_VARIANT=VT_VARIANT
}SF_TYPE;
typedef struct _wireBRECORD  {
	ULONG fFlags;
	ULONG clSize;
	LPRECORDINFO* pRecInfo;
	byte* pRecord;
} *wireBRECORD;
typedef struct _wireSAFEARR_BRECORD {
    ULONG Size;
    wireBRECORD* aRecord;
    } SAFEARR_BRECORD;
typedef struct _wireSAFEARR_HAVEIID {
	ULONG Size;
	IUnknown** apUnknown;
	IID iid;
	} SAFEARR_HAVEIID;
typedef struct _wireSAFEARRAY_UNION {
	ULONG sfType;
	union {
		SAFEARR_BSTR BstrStr;
		SAFEARR_UNKNOWN UnknownStr;
		SAFEARR_DISPATCH DispatchStr;
		SAFEARR_VARIANT VariantStr;
		SAFEARR_BRECORD RecordStr;
		SAFEARR_HAVEIID HaveIidStr;
		BYTE_SIZEDARR ByteStr;
		WORD_SIZEDARR WordStr;
		DWORD_SIZEDARR LongStr;
		HYPER_SIZEDARR HyperStr;
	}u;
}SAFEARRAYUNION;
typedef struct _wireSAFEARRAY {
	USHORT cDims;
	USHORT fFeatures;
	ULONG cbElements;
	ULONG cLocks;
	SAFEARRAYUNION uArrayStructs;
	SAFEARRAYBOUND rgsabound[1];
}*wireSAFEARRAY;
typedef wireSAFEARRAY *wirePSAFEARRAY;
typedef struct tagSAFEARRAY {
	USHORT cDims;
	USHORT fFeatures;
	ULONG cbElements;
	ULONG cLocks;
	PVOID pvData;
	SAFEARRAYBOUND rgsabound[1];
}SAFEARRAY,*LPSAFEARRAY;
#if defined (__GNUC__) && !defined (NONAMELESSUNION)
__extension__   /* no named members  */
#endif
typedef struct tagVARIANT {
  _ANONYMOUS_UNION union {
	struct __tagVARIANT {
	VARTYPE vt;
	WORD wReserved1;
	WORD wReserved2;
	WORD wReserved3;
	_ANONYMOUS_UNION union {
		long lVal;
		unsigned char bVal;
		short iVal;
		float fltVal;
		double dblVal;
		VARIANT_BOOL  boolVal;
		SCODE scode;
		CY cyVal;
		DATE date;
		BSTR bstrVal;
		IUnknown *punkVal;
		LPDISPATCH pdispVal;
		SAFEARRAY *parray;
		unsigned char *pbVal;
		short *piVal;
		long *plVal;
		float *pfltVal;
		double *pdblVal;
		VARIANT_BOOL *pboolVal;
		_VARIANT_BOOL  *pbool;
		SCODE *pscode;
		CY *pcyVal;
		DATE *pdate;
		BSTR *pbstrVal;
		IUnknown **ppunkVal;
		LPDISPATCH *ppdispVal;
		SAFEARRAY **pparray;
		struct tagVARIANT *pvarVal;
		void *byref;
		CHAR cVal;
		USHORT uiVal;
		ULONG ulVal;
		INT intVal;
		UINT uintVal;
		DECIMAL *pdecVal;
		CHAR  *pcVal;
		USHORT  *puiVal;
		ULONG  *pulVal;
		INT  *pintVal;
		UINT  *puintVal;
		_ANONYMOUS_STRUCT struct {
			PVOID pvRecord;
			struct IRecordInfo *pRecInfo;
		} __VARIANT_NAME_4;
	} __VARIANT_NAME_3;
    } __VARIANT_NAME_2;
    DECIMAL decVal;
  } __VARIANT_NAME_1;
} VARIANT,*LPVARIANT;
typedef VARIANT VARIANTARG;
typedef VARIANT *LPVARIANTARG;
typedef struct _wireVARIANT {
	DWORD clSize;
	DWORD rpcReserved;
	USHORT vt;
	USHORT wReserved1;
	USHORT wReserved2;
	USHORT wReserved3;
	_ANONYMOUS_UNION union {
		LONG lVal;
		BYTE bVal;
		SHORT iVal;
		FLOAT fltVal;
		DOUBLE dblVal;
		VARIANT_BOOL boolVal;
		SCODE scode;
		CY cyVal;
		DATE date;
		wireBSTR bstrVal;
		IUnknown *punkVal;
		LPDISPATCH pdispVal;
		wirePSAFEARRAY parray;
		wireBRECORD brecVal;
		BYTE *pbVal;
		SHORT *piVal;
		LONG *plVal;
		FLOAT *pfltVal;
		DOUBLE *pdblVal;
		VARIANT_BOOL *pboolVal;
		SCODE *pscode;
		CY *pcyVal;
		DATE *pdate;
		wireBSTR *pbstrVal;
		IUnknown **ppunkVal;
		LPDISPATCH *ppdispVal;
		wirePSAFEARRAY *pparray;
		struct _wireVARIANT *pvarVal;
		CHAR cVal;
		USHORT uiVal;
		ULONG ulVal;
		INT intVal;
		UINT uintVal;
		DECIMAL decVal;
		DECIMAL *pdecVal;
		CHAR *pcVal;
		USHORT *puiVal;
		ULONG *pulVal;
		INT *pintVal;
		UINT *puintVal;
	} DUMMYUNIONNAME;
} *wireVARIANT;  
typedef LONG DISPID;
typedef DISPID MEMBERID;
typedef DWORD HREFTYPE;
typedef enum tagTYPEKIND {
	TKIND_ENUM,TKIND_RECORD,TKIND_MODULE,TKIND_INTERFACE,TKIND_DISPATCH,
	TKIND_COCLASS,TKIND_ALIAS,TKIND_UNION,TKIND_MAX
}TYPEKIND;
typedef struct tagTYPEDESC {
	_ANONYMOUS_UNION union {
		struct tagTYPEDESC *lptdesc;
		struct tagARRAYDESC *lpadesc;
		HREFTYPE hreftype;
	} DUMMYUNIONNAME;
	VARTYPE vt;
}TYPEDESC;
typedef struct tagARRAYDESC {
	TYPEDESC tdescElem;
	USHORT cDims;
	SAFEARRAYBOUND rgbounds[1];
}ARRAYDESC;
typedef struct tagPARAMDESCEX {
	ULONG cBytes;
	VARIANTARG varDefaultValue;
}PARAMDESCEX,*LPPARAMDESCEX;
typedef struct tagPARAMDESC {
	LPPARAMDESCEX pparamdescex;
	USHORT wParamFlags;
}PARAMDESC,*LPPARAMDESC;
typedef struct tagIDLDESC {
	ULONG dwReserved;
	USHORT wIDLFlags;
}IDLDESC,*LPIDLDESC;
typedef struct tagELEMDESC {
	TYPEDESC tdesc;
	_ANONYMOUS_UNION union {
		IDLDESC idldesc;
		PARAMDESC paramdesc;
	} DUMMYUNIONNAME;
} ELEMDESC,*LPELEMDESC;
typedef struct tagTYPEATTR {
	GUID guid;
	LCID lcid;
	DWORD dwReserved;
	MEMBERID memidConstructor;
	MEMBERID memidDestructor;
	LPOLESTR lpstrSchema;
	ULONG cbSizeInstance;
	TYPEKIND typekind;
	WORD cFuncs;
	WORD cVars;
	WORD cImplTypes;
	WORD cbSizeVft;
	WORD cbAlignment;
	WORD wTypeFlags;
	WORD wMajorVerNum;
	WORD wMinorVerNum;
	TYPEDESC tdescAlias;
	IDLDESC idldescType;
}TYPEATTR,*LPTYPEATTR;
typedef struct tagDISPPARAMS {
	VARIANTARG *rgvarg;
	DISPID *rgdispidNamedArgs;
	UINT cArgs;
	UINT cNamedArgs;
}DISPPARAMS;
typedef struct tagEXCEPINFO {
	WORD wCode;
	WORD wReserved;
	BSTR bstrSource;
	BSTR bstrDescription;
	BSTR bstrHelpFile;
	DWORD dwHelpContext;
	PVOID pvReserved;
	HRESULT(__stdcall * pfnDeferredFillIn)(struct tagEXCEPINFO*);
	SCODE scode;
} EXCEPINFO,*LPEXCEPINFO;
typedef enum tagCALLCONV {
	CC_FASTCALL,CC_CDECL,CC_MSCPASCAL,CC_PASCAL=CC_MSCPASCAL,
	CC_MACPASCAL,CC_STDCALL,CC_FPFASTCALL,CC_SYSCALL,CC_MPWCDECL,
	CC_MPWPASCAL,CC_MAX=CC_MPWPASCAL
}CALLCONV;
typedef enum tagFUNCKIND {
	FUNC_VIRTUAL,FUNC_PUREVIRTUAL,FUNC_NONVIRTUAL,
	FUNC_STATIC,FUNC_DISPATCH
}FUNCKIND;
typedef enum tagINVOKEKIND {
	INVOKE_FUNC=1,INVOKE_PROPERTYGET,INVOKE_PROPERTYPUT=4,
	INVOKE_PROPERTYPUTREF=8
}INVOKEKIND;
typedef struct tagFUNCDESC {
	MEMBERID memid;
	SCODE *lprgscode;
	ELEMDESC *lprgelemdescParam;
	FUNCKIND funckind;
	INVOKEKIND invkind;
	CALLCONV callconv;
	SHORT cParams;
	SHORT cParamsOpt;
	SHORT oVft;
	SHORT cScodes;
	ELEMDESC elemdescFunc;
	WORD wFuncFlags;
}FUNCDESC,*LPFUNCDESC;
typedef enum tagVARKIND {
	VAR_PERINSTANCE,VAR_STATIC,VAR_CONST,VAR_DISPATCH
} VARKIND;
typedef struct tagVARDESC {
	MEMBERID memid;
	LPOLESTR lpstrSchema;
	_ANONYMOUS_UNION union {
		ULONG oInst;
		VARIANT *lpvarValue;
	} DUMMYUNIONNAME;
	ELEMDESC elemdescVar;
	WORD wVarFlags;
	VARKIND varkind;
} VARDESC,*LPVARDESC;
typedef enum tagTYPEFLAGS {
	TYPEFLAG_FAPPOBJECT=1,TYPEFLAG_FCANCREATE=2,TYPEFLAG_FLICENSED=4,
	TYPEFLAG_FPREDECLID=8,TYPEFLAG_FHIDDEN=16,TYPEFLAG_FCONTROL=32,
	TYPEFLAG_FDUAL=64,TYPEFLAG_FNONEXTENSIBLE=128,
	TYPEFLAG_FOLEAUTOMATION=256,TYPEFLAG_FRESTRICTED=512,
	TYPEFLAG_FAGGREGATABLE=1024,TYPEFLAG_FREPLACEABLE=2048,
	TYPEFLAG_FDISPATCHABLE=4096,TYPEFLAG_FREVERSEBIND=8192
} TYPEFLAGS;
typedef enum tagFUNCFLAGS {
	FUNCFLAG_FRESTRICTED=1,FUNCFLAG_FSOURCE=2,FUNCFLAG_FBINDABLE=4,
	FUNCFLAG_FREQUESTEDIT=8,FUNCFLAG_FDISPLAYBIND=16,FUNCFLAG_FDEFAULTBIND=32,
	FUNCFLAG_FHIDDEN=64,FUNCFLAG_FUSESGETLASTERROR=128,FUNCFLAG_FDEFAULTCOLLELEM=256,
	FUNCFLAG_FUIDEFAULT=512,FUNCFLAG_FNONBROWSABLE=1024,FUNCFLAG_FREPLACEABLE=2048,
	FUNCFLAG_FIMMEDIATEBIND=4096
} FUNCFLAGS;
typedef enum tagVARFLAGS {
	VARFLAG_FREADONLY=1,VARFLAG_FSOURCE=2,VARFLAG_FBINDABLE=4,VARFLAG_FREQUESTEDIT=8,
	VARFLAG_FDISPLAYBIND=16,VARFLAG_FDEFAULTBIND=32,VARFLAG_FHIDDEN=64,VARFLAG_FRESTRICTED=128,
	VARFLAG_FDEFAULTCOLLELEM=256,VARFLAG_FUIDEFAULT=512,VARFLAG_FNONBROWSABLE=1024,
	VARFLAG_FREPLACEABLE=2048,VARFLAG_FIMMEDIATEBIND=4096
} VARFLAGS;
typedef struct tagCLEANLOCALSTORAGE {
	IUnknown *pInterface;
	PVOID pStorage;
	DWORD flags;
} CLEANLOCALSTORAGE;
typedef struct tagCUSTDATAITEM {
	GUID guid;
	VARIANTARG varValue;
} CUSTDATAITEM,*LPCUSTDATAITEM;
typedef struct tagCUSTDATA {
	DWORD cCustData;
	LPCUSTDATAITEM prgCustData;
} CUSTDATA,*LPCUSTDATA;

typedef enum tagDESCKIND {
        DESCKIND_NONE=0,DESCKIND_FUNCDESC=DESCKIND_NONE+1,
        DESCKIND_VARDESC=DESCKIND_FUNCDESC+1,DESCKIND_TYPECOMP=DESCKIND_VARDESC+1,
        DESCKIND_IMPLICITAPPOBJ=DESCKIND_TYPECOMP+1,
        DESCKIND_MAX=DESCKIND_IMPLICITAPPOBJ+1
} DESCKIND;

typedef union tagBINDPTR {
        LPFUNCDESC lpfuncdesc;
        LPVARDESC lpvardesc;
        LPTYPECOMP lptcomp;
} BINDPTR,*LPBINDPTR;

#undef INTERFACE
#define INTERFACE IDispatch
DECLARE_INTERFACE_(IDispatch,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetTypeInfoCount)(THIS_ UINT*) PURE;
	STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,LPTYPEINFO*) PURE;
	STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*) PURE;
	STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*) PURE;
};

#undef INTERFACE
#define INTERFACE IEnumVARIANT
DECLARE_INTERFACE_(IEnumVARIANT,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(Next)(THIS_ ULONG,VARIANT*,ULONG*) PURE;
	STDMETHOD(Skip)(THIS_ ULONG) PURE;
	STDMETHOD(Reset)(THIS) PURE;
	STDMETHOD(Clone)(THIS_ IEnumVARIANT**) PURE;
};

#undef INTERFACE
#define INTERFACE ITypeComp
DECLARE_INTERFACE_(ITypeComp,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(Bind)(THIS_ LPOLESTR,ULONG,WORD,LPTYPEINFO*,DESCKIND*,LPBINDPTR) PURE;
	STDMETHOD(BindType)(THIS_ LPOLESTR,ULONG,LPTYPEINFO*,LPTYPECOMP*) PURE;
};

#undef INTERFACE
#define INTERFACE ITypeInfo
DECLARE_INTERFACE_(ITypeInfo,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetTypeAttr)(THIS_ LPTYPEATTR*) PURE;
	STDMETHOD(GetTypeComp)(THIS_ LPTYPECOMP*) PURE;
	STDMETHOD(GetFuncDesc)(THIS_ UINT,LPFUNCDESC*) PURE;
	STDMETHOD(GetVarDesc)(THIS_ UINT,LPVARDESC*) PURE;
	STDMETHOD(GetNames)(THIS_ MEMBERID,BSTR*,UINT,UINT*) PURE;
	STDMETHOD(GetRefTypeOfImplType)(THIS_ UINT,HREFTYPE*) PURE;
	STDMETHOD(GetImplTypeFlags)(THIS_ UINT,INT*) PURE;
	STDMETHOD(GetIDsOfNames)(THIS_ LPOLESTR*,UINT,MEMBERID*) PURE;
	STDMETHOD(Invoke)(THIS_ PVOID,MEMBERID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*) PURE;
	STDMETHOD(GetDocumentation)(THIS_ MEMBERID,BSTR*,BSTR*,DWORD*,BSTR*) PURE;
	STDMETHOD(GetDllEntry)(THIS_ MEMBERID,INVOKEKIND,BSTR*,BSTR*,WORD*) PURE;
	STDMETHOD(GetRefTypeInfo)(THIS_ HREFTYPE,LPTYPEINFO*) PURE;
	STDMETHOD(AddressOfMember)(THIS_ MEMBERID,INVOKEKIND,PVOID*) PURE;
	STDMETHOD(CreateInstance)(THIS_ LPUNKNOWN,REFIID,PVOID*) PURE;
	STDMETHOD(GetMops)(THIS_ MEMBERID,BSTR*) PURE;
	STDMETHOD(GetContainingTypeLib)(THIS_ LPTYPELIB*,UINT*) PURE;
	STDMETHOD_(void,ReleaseTypeAttr)(THIS_ LPTYPEATTR) PURE;
	STDMETHOD_(void,ReleaseFuncDesc)(THIS_ LPFUNCDESC) PURE;
	STDMETHOD_(void,ReleaseVarDesc)(THIS_ LPVARDESC) PURE;
};

#undef INTERFACE
#define INTERFACE ITypeLib
DECLARE_INTERFACE_(ITypeLib,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD_(UINT,GetTypeInfoCount)(THIS) PURE;
	STDMETHOD(GetTypeInfo)(THIS_ UINT,ITypeInfo**) PURE;
	STDMETHOD(GetTypeInfoType)(THIS_ UINT,TYPEKIND*) PURE;
	STDMETHOD(GetTypeInfoOfGuid)(THIS_ REFGUID,ITypeInfo**) PURE;
	STDMETHOD(GetLibAttr)(THIS_ TLIBATTR**) PURE;
	STDMETHOD(GetTypeComp)(THIS_ ITypeComp*) PURE;
	STDMETHOD(GetDocumentation)(THIS_ INT,BSTR*,BSTR*,DWORD*,BSTR*) PURE;
	STDMETHOD(IsName)(THIS_ LPOLESTR,ULONG,BOOL*) PURE;
	STDMETHOD(FindName)(THIS_ LPOLESTR,ULONG,ITypeInfo**,MEMBERID*,USHORT*) PURE;
	STDMETHOD_(void,ReleaseTLibAttr)(THIS_ TLIBATTR*) PURE;
};

EXTERN_C const IID IID_IErrorInfo;
#undef INTERFACE
#define INTERFACE IErrorInfo
DECLARE_INTERFACE_(IErrorInfo, IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetGUID)(THIS_ GUID*) PURE;
	STDMETHOD(GetSource)(THIS_ BSTR*) PURE;
	STDMETHOD(GetDescription)(THIS_ BSTR*) PURE;
	STDMETHOD(GetHelpFile)(THIS_ BSTR*) PURE;
	STDMETHOD(GetHelpContext)(THIS_ DWORD*) PURE;
};

EXTERN_C const IID IID_ICreateErrorInfo;
#undef INTERFACE
#define INTERFACE ICreateErrorInfo
DECLARE_INTERFACE_(ICreateErrorInfo, IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*)PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(SetGUID)(THIS_ REFGUID) PURE;
	STDMETHOD(SetSource)(THIS_ LPOLESTR) PURE;
	STDMETHOD(SetDescription)(THIS_ LPOLESTR) PURE;
	STDMETHOD(SetHelpFile)(THIS_ LPOLESTR) PURE;
	STDMETHOD(SetHelpContext)(THIS_ DWORD) PURE;
};

EXTERN_C const IID IID_ISupportErrorInfo;
#undef INTERFACE
#define INTERFACE ISupportErrorInfo
DECLARE_INTERFACE_(ISupportErrorInfo, IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(InterfaceSupportsErrorInfo)(THIS_ REFIID) PURE;
};

EXTERN_C const IID IID_IRecordInfo;
#undef INTERFACE
#define INTERFACE IRecordInfo
DECLARE_INTERFACE_(IRecordInfo, IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(RecordInit)(THIS_ PVOID) PURE;
	STDMETHOD(RecordClear)(THIS_ PVOID) PURE;
	STDMETHOD(RecordCopy)(THIS_ PVOID, PVOID) PURE;
	STDMETHOD(GetGuid)(THIS_ GUID*) PURE;
	STDMETHOD(GetName)(THIS_ BSTR*) PURE;
	STDMETHOD(GetSize)(THIS_ ULONG*) PURE;
	STDMETHOD(GetTypeInfo)(THIS_ ITypeInfo**) PURE;
	STDMETHOD(GetField)(THIS_ PVOID,LPCOLESTR,VARIANT*) PURE;
	STDMETHOD(GetFieldNoCopy)(THIS_ PVOID,LPCOLESTR,VARIANT*,PVOID*) PURE;
	STDMETHOD(PutField )(THIS_ ULONG,PVOID,LPCOLESTR, VARIANT*) PURE;
	STDMETHOD(PutFieldNoCopy)(THIS_ ULONG,PVOID,LPCOLESTR,VARIANT*) PURE;
	STDMETHOD(GetFieldNames)(THIS_ ULONG*,BSTR*) PURE;
	STDMETHOD_(BOOL,IsMatchingType)(THIS_ THIS) PURE;
	STDMETHOD_(PVOID,RecordCreate)(THIS) PURE;
	STDMETHOD(RecordCreateCopy)(THIS_ PVOID,PVOID*) PURE;
	STDMETHOD(RecordDestroy )(THIS_ PVOID) PURE;
};

EXTERN_C const IID IID_ITypeMarshal;
#undef INTERFACE
#define INTERFACE ITypeMarshal
DECLARE_INTERFACE_(ITypeMarshal, IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(Size)(THIS_ PVOID,DWORD,PVOID,ULONG*) PURE;
	STDMETHOD(Marshal)(THIS_ PVOID,DWORD,PVOID,ULONG,BYTE*,ULONG*) PURE;
	STDMETHOD(Unmarshal)(THIS_ PVOID,DWORD,ULONG,BYTE*,ULONG*) PURE;
	STDMETHOD(Free)(THIS_ PVOID) PURE;
};

#ifdef __cplusplus
}
#endif
#endif