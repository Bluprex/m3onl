#include "pch-cpp.hpp"





struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
struct Dictionary_2_tA1C10CF9D35962FF0289095A43DEE774B7F13C47;
struct List_1_tA389B1109F43128C89C6358C6B56C819460CF5B3;
struct List_1_t0845A5AAFB6B816C6E2719A0588604CE3A080FDC;
struct ReadOnlyCollection_1_t15A54E961DBC027444DA89894B8AD689A38CE9AC;
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ZipArchive_t6469B8DB5F18FB4C7E24F625D0E53EA635D31C41;
struct ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4;
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZipArchive_t6469B8DB5F18FB4C7E24F625D0E53EA635D31C41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral168DFB0223A253D8C177CD2D6A0DBA1B0ECEFB96;
IL2CPP_EXTERN_C String_t* _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5;
IL2CPP_EXTERN_C String_t* _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74;
IL2CPP_EXTERN_C const RuntimeMethod* ZipFileExtensions_ExtractToFile_m2584E3670B741B08409D95BFB8ABC04AA92B49F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipFile_Open_m6F83ACFED32799E052503C5CEAE6DD0D145FCC8D_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t5C9D30A33D5BCEBCEE3B70E895505EE5A827FE73 
{
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	int32_t ___m_codePage;
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem;
	bool ___m_deserializedFromEverett;
	bool ___m_isReadOnly;
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback;
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct ZipFile_t18C9C6BB8ABF9F2AE85A0EB6FF918378A5745CC8  : public RuntimeObject
{
};
struct ZipFileExtensions_t06E75DEE7D8E222C1E0E563C2393652E251FD218  : public RuntimeObject
{
};
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	bool ___hasValue;
	int64_t ___value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask;
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct CompressionLevel_t6077A887918BD6DACDD8D3F0D660D157A604B1E1 
{
	int32_t ___value__;
};
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime;
	int16_t ____offsetMinutes;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct FileAccess_t3992FF4CCC61971B804DD291F06F696C3CF33C30 
{
	int32_t ___value__;
};
struct FileMode_t111B48D5347628AEFCBF9A0EC2833827A302ECBA 
{
	int32_t ___value__;
};
struct FileShare_t0A0E9739F5AB44D6B8026C9D2A2F1CEEE442733A 
{
	int32_t ___value__;
};
struct ZipArchiveMode_tD0AA40EAC5C26DBB24E9F4AA965A0C83AB003BCD 
{
	int32_t ___value__;
};
struct ZipVersionMadeByPlatform_t0188CEF15A70E487DF8FEF967B9C70FE536330BE 
{
	uint8_t ___value__;
};
struct ZipVersionNeededValues_tA5A8C9E6B35A8273F2C0272F71053147EA4F0F5C 
{
	uint16_t ___value__;
};
struct BitFlagValues_tF0EF994D25EEFFA919B1774684312A68792BE372 
{
	uint16_t ___value__;
};
struct CompressionMethodValues_tC8C0E4F84E6CBF8501427A5A0CE2261859636BDC 
{
	uint16_t ___value__;
};
struct Nullable_1_tAC8899D7718BEF36A8590184EFBCA842A1BC9AB1 
{
	bool ___hasValue;
	int32_t ___value;
};
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf;
	String_t* ___name;
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle;
	bool ___isExposed;
	int64_t ___append_startpos;
	int32_t ___access;
	bool ___owner;
	bool ___async;
	bool ___canseek;
	bool ___anonymous;
	bool ___buf_dirty;
	int32_t ___buf_size;
	int32_t ___buf_length;
	int32_t ___buf_offset;
	int64_t ___buf_start;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct ZipArchive_t6469B8DB5F18FB4C7E24F625D0E53EA635D31C41  : public RuntimeObject
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____archiveStream;
	ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4* ____archiveStreamOwner;
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ____archiveReader;
	int32_t ____mode;
	List_1_tA389B1109F43128C89C6358C6B56C819460CF5B3* ____entries;
	ReadOnlyCollection_1_t15A54E961DBC027444DA89894B8AD689A38CE9AC* ____entriesCollection;
	Dictionary_2_tA1C10CF9D35962FF0289095A43DEE774B7F13C47* ____entriesDictionary;
	bool ____readEntries;
	bool ____leaveOpen;
	int64_t ____centralDirectoryStart;
	bool ____isDisposed;
	uint32_t ____numberOfThisDisk;
	int64_t ____expectedNumberOfEntries;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____backingStream;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____archiveComment;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____entryNameEncoding;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4  : public RuntimeObject
{
	ZipArchive_t6469B8DB5F18FB4C7E24F625D0E53EA635D31C41* ____archive;
	bool ____originallyInArchive;
	int32_t ____diskNumberStart;
	uint8_t ____versionMadeByPlatform;
	uint16_t ____versionMadeBySpecification;
	uint16_t ____versionToExtract;
	uint16_t ____generalPurposeBitFlag;
	uint16_t ____storedCompressionMethod;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ____lastModified;
	int64_t ____compressedSize;
	int64_t ____uncompressedSize;
	int64_t ____offsetOfLocalHeader;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ____storedOffsetOfCompressedData;
	uint32_t ____crc32;
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____compressedBytes;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ____storedUncompressedData;
	bool ____currentlyOpenForWrite;
	bool ____everOpenedForWrite;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____outstandingWriteStream;
	uint32_t ____externalFileAttr;
	String_t* ____storedEntryName;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____storedEntryNameBytes;
	List_1_t0845A5AAFB6B816C6E2719A0588604CE3A080FDC* ____cdUnknownExtraFields;
	List_1_t0845A5AAFB6B816C6E2719A0588604CE3A080FDC* ____lhUnknownExtraFields;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____fileComment;
	Nullable_1_tAC8899D7718BEF36A8590184EFBCA842A1BC9AB1 ____compressionLevel;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding;
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings;
	RuntimeObject* ___s_InternalSyncObject;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null;
};
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields
{
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MinValue;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MaxValue;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___UnixEpoch;
};
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle;
	RuntimeObject* ___buf_recycle_lock;
};
struct ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4_StaticFields
{
	bool ___s_allowLargeZipArchiveEntriesInUpdateMode;
	uint8_t ___CurrentZipPlatform;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZipArchive_t6469B8DB5F18FB4C7E24F625D0E53EA635D31C41* ZipFile_Open_m6273C047FE6C596112D88B4D7666268E897C7A0F (String_t* ___0_archiveFileName, int32_t ___1_mode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZipArchive_t6469B8DB5F18FB4C7E24F625D0E53EA635D31C41* ZipFile_Open_m6F83ACFED32799E052503C5CEAE6DD0D145FCC8D (String_t* ___0_archiveFileName, int32_t ___1_mode, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_entryNameEncoding, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_mB51E4FD96A6B396795C835EFD7B0F0018A3A5029 (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___0_path, int32_t ___1_mode, int32_t ___2_access, int32_t ___3_share, int32_t ___4_bufferSize, bool ___5_useAsync, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipArchive__ctor_m2706DA413E897A83057237178CCC8E51C07230B5 (ZipArchive_t6469B8DB5F18FB4C7E24F625D0E53EA635D31C41* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_mode, bool ___2_leaveOpen, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___3_entryNameEncoding, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ZipArchiveEntry_Open_m1D0EFB9AD33BA96AAF0C624EADA3E58CD6CC67FF (ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_CopyTo_m61DC54FF3708C2B8AB5C5D63D300AA57ADA01999 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ZipArchiveEntry_get_LastWriteTime_m98EB193BEB589BE1739A89C6104830F11573AFE9_inline (ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTimeOffset_get_DateTime_mDF6DC57E7A5647D8B964D3FD5B6855E7D66EF324 (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_SetLastWriteTime_mF2647DEE086B5F497E3CB583F544E570790CAFB5 (String_t* ___0_path, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_lastWriteTime, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 73410
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZipArchive_t6469B8DB5F18FB4C7E24F625D0E53EA635D31C41* ZipFile_OpenRead_m82404BAA63D25E027D3D0A472103AA6C20EBCF83 (String_t* ___0_archiveFileName, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_archiveFileName;
		ZipArchive_t6469B8DB5F18FB4C7E24F625D0E53EA635D31C41* L_1;
		L_1 = ZipFile_Open_m6273C047FE6C596112D88B4D7666268E897C7A0F(L_0, 0, NULL);
		return L_1;
	}
}
// Method Definition Index: 73411
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZipArchive_t6469B8DB5F18FB4C7E24F625D0E53EA635D31C41* ZipFile_Open_m6273C047FE6C596112D88B4D7666268E897C7A0F (String_t* ___0_archiveFileName, int32_t ___1_mode, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_archiveFileName;
		int32_t L_1 = ___1_mode;
		ZipArchive_t6469B8DB5F18FB4C7E24F625D0E53EA635D31C41* L_2;
		L_2 = ZipFile_Open_m6F83ACFED32799E052503C5CEAE6DD0D145FCC8D(L_0, L_1, (Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095*)NULL, NULL);
		return L_2;
	}
}
// Method Definition Index: 73412
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZipArchive_t6469B8DB5F18FB4C7E24F625D0E53EA635D31C41* ZipFile_Open_m6F83ACFED32799E052503C5CEAE6DD0D145FCC8D (String_t* ___0_archiveFileName, int32_t ___1_mode, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_entryNameEncoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZipArchive_t6469B8DB5F18FB4C7E24F625D0E53EA635D31C41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_3 = NULL;
	ZipArchive_t6469B8DB5F18FB4C7E24F625D0E53EA635D31C41* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = ___1_mode;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0014;
			}
			case 1:
			{
				goto IL_001c;
			}
			case 2:
			{
				goto IL_0024;
			}
		}
	}
	{
		goto IL_002c;
	}

IL_0014:
	{
		V_0 = 3;
		V_1 = 1;
		V_2 = 1;
		goto IL_0037;
	}

IL_001c:
	{
		V_0 = 1;
		V_1 = 2;
		V_2 = 0;
		goto IL_0037;
	}

IL_0024:
	{
		V_0 = 4;
		V_1 = 3;
		V_2 = 0;
		goto IL_0037;
	}

IL_002c:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipFile_Open_m6F83ACFED32799E052503C5CEAE6DD0D145FCC8D_RuntimeMethod_var)));
	}

IL_0037:
	{
		String_t* L_2 = ___0_archiveFileName;
		int32_t L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = V_2;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_6 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		FileStream__ctor_mB51E4FD96A6B396795C835EFD7B0F0018A3A5029(L_6, L_2, L_3, L_4, L_5, ((int32_t)4096), (bool)0, NULL);
		V_3 = L_6;
	}
	try
	{
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_7 = V_3;
		int32_t L_8 = ___1_mode;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_9 = ___2_entryNameEncoding;
		ZipArchive_t6469B8DB5F18FB4C7E24F625D0E53EA635D31C41* L_10 = (ZipArchive_t6469B8DB5F18FB4C7E24F625D0E53EA635D31C41*)il2cpp_codegen_object_new(ZipArchive_t6469B8DB5F18FB4C7E24F625D0E53EA635D31C41_il2cpp_TypeInfo_var);
		ZipArchive__ctor_m2706DA413E897A83057237178CCC8E51C07230B5(L_10, L_7, L_8, (bool)0, L_9, NULL);
		V_4 = L_10;
		goto IL_005d;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0054;
		}
		throw e;
	}

CATCH_0054:
	{
		RuntimeObject* L_11 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_12 = V_3;
		NullCheck(L_12);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_12, NULL);
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
	}

IL_005d:
	{
		ZipArchive_t6469B8DB5F18FB4C7E24F625D0E53EA635D31C41* L_13 = V_4;
		return L_13;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 73413
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFileExtensions_ExtractToFile_m2584E3670B741B08409D95BFB8ABC04AA92B49F2 (ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4* ___0_source, String_t* ___1_destinationFileName, bool ___2_overwrite, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_1 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_2 = NULL;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B7_0 = 0;
	{
		ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipFileExtensions_ExtractToFile_m2584E3670B741B08409D95BFB8ABC04AA92B49F2_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___1_destinationFileName;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral168DFB0223A253D8C177CD2D6A0DBA1B0ECEFB96)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipFileExtensions_ExtractToFile_m2584E3670B741B08409D95BFB8ABC04AA92B49F2_RuntimeMethod_var)));
	}

IL_001c:
	{
		bool L_4 = ___2_overwrite;
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		G_B7_0 = 1;
		goto IL_0023;
	}

IL_0022:
	{
		G_B7_0 = 2;
	}

IL_0023:
	{
		V_0 = G_B7_0;
		String_t* L_5 = ___1_destinationFileName;
		int32_t L_6 = V_0;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_7 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		FileStream__ctor_mB51E4FD96A6B396795C835EFD7B0F0018A3A5029(L_7, L_5, L_6, 2, 0, ((int32_t)4096), (bool)0, NULL);
		V_1 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004e:
			{
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = V_1;
					if (!L_8)
					{
						goto IL_0057;
					}
				}
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9 = V_1;
					NullCheck(L_9);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
				}

IL_0057:
				{
					return;
				}
			}
		});
		try
		{
			{
				ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4* L_10 = ___0_source;
				NullCheck(L_10);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_11;
				L_11 = ZipArchiveEntry_Open_m1D0EFB9AD33BA96AAF0C624EADA3E58CD6CC67FF(L_10, NULL);
				V_2 = L_11;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0044_1:
					{
						{
							Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_12 = V_2;
							if (!L_12)
							{
								goto IL_004d_1;
							}
						}
						{
							Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_13 = V_2;
							NullCheck(L_13);
							InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
						}

IL_004d_1:
						{
							return;
						}
					}
				});
				try
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_14 = V_2;
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_15 = V_1;
					NullCheck(L_14);
					Stream_CopyTo_m61DC54FF3708C2B8AB5C5D63D300AA57ADA01999(L_14, L_15, NULL);
					goto IL_0058;
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0058:
	{
		String_t* L_16 = ___1_destinationFileName;
		ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4* L_17 = ___0_source;
		NullCheck(L_17);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_18;
		L_18 = ZipArchiveEntry_get_LastWriteTime_m98EB193BEB589BE1739A89C6104830F11573AFE9_inline(L_17, NULL);
		V_3 = L_18;
		il2cpp_codegen_runtime_class_init_inline(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_19;
		L_19 = DateTimeOffset_get_DateTime_mDF6DC57E7A5647D8B964D3FD5B6855E7D66EF324((&V_3), NULL);
		File_SetLastWriteTime_mF2647DEE086B5F497E3CB583F544E570790CAFB5(L_16, L_19, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 70603
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ZipArchiveEntry_get_LastWriteTime_m98EB193BEB589BE1739A89C6104830F11573AFE9_inline (ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4* __this, const RuntimeMethod* method) 
{
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_0 = __this->____lastModified;
		return L_0;
	}
}
