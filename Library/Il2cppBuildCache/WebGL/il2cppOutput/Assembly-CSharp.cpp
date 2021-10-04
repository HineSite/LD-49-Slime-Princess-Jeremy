#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9;
// Bullet
struct Bullet_tF95A945B732B2B929938FB1028878BFBC0081724;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// CameraManager
struct CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// CreditsManager
struct CreditsManager_t9F6DE77AD2D6022368231F729F44ADD04A8E3537;
// DrewHealth
struct DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE;
// EnemyAiming
struct EnemyAiming_tA949C5454CF9B5368CF0684995C70CFD23B84F2E;
// EnemyHealth
struct EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0;
// EnemyManager
struct EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1;
// EnemyProjectile
struct EnemyProjectile_t6B051C244553EDDE433E5342ACD62DE4DBC7C372;
// ErrorScreenTransition
struct ErrorScreenTransition_t806C660950A2F6F42B00F351EE3F4014E505F0C1;
// FinalZone
struct FinalZone_tC6A3D1470C1C4D28807583B42E72A9728D9A34BE;
// FirstZone
struct FirstZone_tE583C78F09832203C5FF61994F727AD15D988DB3;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GlitchEffect
struct GlitchEffect_t55227EC987BF2E45B2722E27C7820F193F28C27A;
// GlitchEffectHeavy
struct GlitchEffectHeavy_tEB28CC95824206EBF88373EB714E1ADED638ADDC;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// MenuManager
struct MenuManager_tD52BB657312ED53913E423A985CACC86F900124C;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// NoahHealth
struct NoahHealth_t7E9CA51C0B8E8148EC410EED3679CDC73D22BFF7;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PlayerHealth
struct PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465;
// PlayerMovement
struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09;
// RealFirstZone
struct RealFirstZone_t74C83DB9842A65A0A01322BF43E65CCD04C71D12;
// RealSecondZone
struct RealSecondZone_t60466AD4FB1505BF3C4125BC8D17FBAD73B5F6CB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// SecondZoneScript
struct SecondZoneScript_tFBD2ED4B5D7AA6023B9EC486C526A2AA6D529430;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// TrueDrewHealth
struct TrueDrewHealth_tC50C7A42EA7AACA7FA51DB9E5AABD1B945F7AE16;
// TrueNoahHealth
struct TrueNoahHealth_t5A7095C28C9C696B55576ECF5AA5D8938980057D;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// WeaponController
struct WeaponController_t4244D8690714C7377B1E91E037B8B3E9FC78D0A0;
// WorldManagerFantasy
struct WorldManagerFantasy_tE74D48A6E0665D5DE9C7A3D61F72706990B6C6B5;
// WorldManagerReal
struct WorldManagerReal_tC5724D1C7996C59F01E600BA1B8416D16AE613A3;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* Bullet_tF95A945B732B2B929938FB1028878BFBC0081724_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NoahHealth_t7E9CA51C0B8E8148EC410EED3679CDC73D22BFF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrueDrewHealth_tC50C7A42EA7AACA7FA51DB9E5AABD1B945F7AE16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrueNoahHealth_t5A7095C28C9C696B55576ECF5AA5D8938980057D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0FFFE1936575F288A250A835BF9B9FE35024AC11;
IL2CPP_EXTERN_C String_t* _stringLiteral226DF4A4DE3E6CC1A30D49B07FCAEF148B8D8DE6;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral26E8E171770486BAAD116FD2A75E03500991BD99;
IL2CPP_EXTERN_C String_t* _stringLiteral33287F105C03C1EEEA6FE0E3FD01FE17D1E27838;
IL2CPP_EXTERN_C String_t* _stringLiteral3402514A6504EAC3116A2358CD364CE6A2409455;
IL2CPP_EXTERN_C String_t* _stringLiteral346A5DC9F5EA6CA8508B3FE32C9B4EDADDA14249;
IL2CPP_EXTERN_C String_t* _stringLiteral3E3AA2D144C34DB6F8864CDB223CC761B59084B9;
IL2CPP_EXTERN_C String_t* _stringLiteral447A063EFA3CD25D6F85DABD675D0B88DFE5F1B2;
IL2CPP_EXTERN_C String_t* _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E;
IL2CPP_EXTERN_C String_t* _stringLiteral5B7172609A94555A8CE815D1094AC8492EA51AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral5C058FE20FD7652D620A17B5F9D6AE4EEFA76795;
IL2CPP_EXTERN_C String_t* _stringLiteral72B58DE8F72FD344433A6CB297B24FE2EEE17AEF;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral80EA192AC016417AAAFE77A894354CD74FD4AA6B;
IL2CPP_EXTERN_C String_t* _stringLiteralAC308BCA9DC8170C2222A99D9CB99ABBC5ACA059;
IL2CPP_EXTERN_C String_t* _stringLiteralAC95869EFEB186FEF612C9FF42F15C1F9DC92842;
IL2CPP_EXTERN_C String_t* _stringLiteralAF051DB9824F616EC2A25A71502C6B4A33275C39;
IL2CPP_EXTERN_C String_t* _stringLiteralBE8C9D41B5E98F547B6B0676888A32E3FB113E61;
IL2CPP_EXTERN_C String_t* _stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD4ECA613717A7CB149AD626352C286B1C7ECBA4B;
IL2CPP_EXTERN_C String_t* _stringLiteralDF57989A4BD66F3A7E13F65822F1C0ACACCDEC1E;
IL2CPP_EXTERN_C String_t* _stringLiteralE4DAD86AE022C6DF2CA3949A3D01CD43055BD6FC;
IL2CPP_EXTERN_C String_t* _stringLiteralE57AFD3E907CD66354C1DD2D25B0A86D1F2ADCD0;
IL2CPP_EXTERN_C String_t* _stringLiteralE923E7B860F429E566CA517673123E8B5E6C9E5F;
IL2CPP_EXTERN_C String_t* _stringLiteralEDA32CF0DB18B08276A5DD4665B2D1B3E408A196;
IL2CPP_EXTERN_C String_t* _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGlitchEffectHeavy_tEB28CC95824206EBF88373EB714E1ADED638ADDC_mB1E3E073B207DF7381565DB2CA357B3134FE3C82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGlitchEffect_t55227EC987BF2E45B2722E27C7820F193F28C27A_m133CF7AD01B77FE10A478FB38201150DF1ECF179_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m9111175A98A389A339114BB2D29BCE719C6B33B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;

struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.ForceMode2D
struct ForceMode2D_tAD695DED33FB7C591354430C88D220D71109ABF4 
{
public:
	// System.Int32 UnityEngine.ForceMode2D::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ForceMode2D_tAD695DED33FB7C591354430C88D220D71109ABF4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// Bullet
struct Bullet_tF95A945B732B2B929938FB1028878BFBC0081724  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Bullet::BulletLifespan
	float ___BulletLifespan_4;

public:
	inline static int32_t get_offset_of_BulletLifespan_4() { return static_cast<int32_t>(offsetof(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724, ___BulletLifespan_4)); }
	inline float get_BulletLifespan_4() const { return ___BulletLifespan_4; }
	inline float* get_address_of_BulletLifespan_4() { return &___BulletLifespan_4; }
	inline void set_BulletLifespan_4(float value)
	{
		___BulletLifespan_4 = value;
	}
};

struct Bullet_tF95A945B732B2B929938FB1028878BFBC0081724_StaticFields
{
public:
	// System.Single Bullet::BulletDamage
	float ___BulletDamage_5;

public:
	inline static int32_t get_offset_of_BulletDamage_5() { return static_cast<int32_t>(offsetof(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724_StaticFields, ___BulletDamage_5)); }
	inline float get_BulletDamage_5() const { return ___BulletDamage_5; }
	inline float* get_address_of_BulletDamage_5() { return &___BulletDamage_5; }
	inline void set_BulletDamage_5(float value)
	{
		___BulletDamage_5 = value;
	}
};


// CameraManager
struct CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// CreditsManager
struct CreditsManager_t9F6DE77AD2D6022368231F729F44ADD04A8E3537  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single CreditsManager::SceneCountdown
	float ___SceneCountdown_4;

public:
	inline static int32_t get_offset_of_SceneCountdown_4() { return static_cast<int32_t>(offsetof(CreditsManager_t9F6DE77AD2D6022368231F729F44ADD04A8E3537, ___SceneCountdown_4)); }
	inline float get_SceneCountdown_4() const { return ___SceneCountdown_4; }
	inline float* get_address_of_SceneCountdown_4() { return &___SceneCountdown_4; }
	inline void set_SceneCountdown_4(float value)
	{
		___SceneCountdown_4 = value;
	}
};


// DrewHealth
struct DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single DrewHealth::StartingHealth
	float ___StartingHealth_4;
	// System.Single DrewHealth::CurrentHealth
	float ___CurrentHealth_5;
	// UnityEngine.Collider2D DrewHealth::EnemyCollider
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___EnemyCollider_6;
	// UnityEngine.AudioSource DrewHealth::EnemyAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___EnemyAudioSource_7;
	// UnityEngine.AudioClip DrewHealth::Deathsound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___Deathsound_8;
	// System.Single DrewHealth::SceneCountdown
	float ___SceneCountdown_10;
	// UnityEngine.SpriteRenderer DrewHealth::EnemySpriteRenderer
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___EnemySpriteRenderer_11;

public:
	inline static int32_t get_offset_of_StartingHealth_4() { return static_cast<int32_t>(offsetof(DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE, ___StartingHealth_4)); }
	inline float get_StartingHealth_4() const { return ___StartingHealth_4; }
	inline float* get_address_of_StartingHealth_4() { return &___StartingHealth_4; }
	inline void set_StartingHealth_4(float value)
	{
		___StartingHealth_4 = value;
	}

	inline static int32_t get_offset_of_CurrentHealth_5() { return static_cast<int32_t>(offsetof(DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE, ___CurrentHealth_5)); }
	inline float get_CurrentHealth_5() const { return ___CurrentHealth_5; }
	inline float* get_address_of_CurrentHealth_5() { return &___CurrentHealth_5; }
	inline void set_CurrentHealth_5(float value)
	{
		___CurrentHealth_5 = value;
	}

	inline static int32_t get_offset_of_EnemyCollider_6() { return static_cast<int32_t>(offsetof(DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE, ___EnemyCollider_6)); }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * get_EnemyCollider_6() const { return ___EnemyCollider_6; }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** get_address_of_EnemyCollider_6() { return &___EnemyCollider_6; }
	inline void set_EnemyCollider_6(Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		___EnemyCollider_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnemyCollider_6), (void*)value);
	}

	inline static int32_t get_offset_of_EnemyAudioSource_7() { return static_cast<int32_t>(offsetof(DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE, ___EnemyAudioSource_7)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_EnemyAudioSource_7() const { return ___EnemyAudioSource_7; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_EnemyAudioSource_7() { return &___EnemyAudioSource_7; }
	inline void set_EnemyAudioSource_7(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___EnemyAudioSource_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnemyAudioSource_7), (void*)value);
	}

	inline static int32_t get_offset_of_Deathsound_8() { return static_cast<int32_t>(offsetof(DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE, ___Deathsound_8)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_Deathsound_8() const { return ___Deathsound_8; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_Deathsound_8() { return &___Deathsound_8; }
	inline void set_Deathsound_8(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___Deathsound_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Deathsound_8), (void*)value);
	}

	inline static int32_t get_offset_of_SceneCountdown_10() { return static_cast<int32_t>(offsetof(DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE, ___SceneCountdown_10)); }
	inline float get_SceneCountdown_10() const { return ___SceneCountdown_10; }
	inline float* get_address_of_SceneCountdown_10() { return &___SceneCountdown_10; }
	inline void set_SceneCountdown_10(float value)
	{
		___SceneCountdown_10 = value;
	}

	inline static int32_t get_offset_of_EnemySpriteRenderer_11() { return static_cast<int32_t>(offsetof(DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE, ___EnemySpriteRenderer_11)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_EnemySpriteRenderer_11() const { return ___EnemySpriteRenderer_11; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_EnemySpriteRenderer_11() { return &___EnemySpriteRenderer_11; }
	inline void set_EnemySpriteRenderer_11(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___EnemySpriteRenderer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnemySpriteRenderer_11), (void*)value);
	}
};

struct DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE_StaticFields
{
public:
	// System.Boolean DrewHealth::DrewDead
	bool ___DrewDead_9;

public:
	inline static int32_t get_offset_of_DrewDead_9() { return static_cast<int32_t>(offsetof(DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE_StaticFields, ___DrewDead_9)); }
	inline bool get_DrewDead_9() const { return ___DrewDead_9; }
	inline bool* get_address_of_DrewDead_9() { return &___DrewDead_9; }
	inline void set_DrewDead_9(bool value)
	{
		___DrewDead_9 = value;
	}
};


// EnemyAiming
struct EnemyAiming_tA949C5454CF9B5368CF0684995C70CFD23B84F2E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject EnemyAiming::arrow
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___arrow_4;
	// System.Single EnemyAiming::fireRate
	float ___fireRate_5;
	// System.Single EnemyAiming::nextFire
	float ___nextFire_6;
	// UnityEngine.AudioSource EnemyAiming::DrewAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___DrewAudioSource_7;
	// UnityEngine.AudioClip EnemyAiming::BowFire
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___BowFire_8;

public:
	inline static int32_t get_offset_of_arrow_4() { return static_cast<int32_t>(offsetof(EnemyAiming_tA949C5454CF9B5368CF0684995C70CFD23B84F2E, ___arrow_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_arrow_4() const { return ___arrow_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_arrow_4() { return &___arrow_4; }
	inline void set_arrow_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___arrow_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arrow_4), (void*)value);
	}

	inline static int32_t get_offset_of_fireRate_5() { return static_cast<int32_t>(offsetof(EnemyAiming_tA949C5454CF9B5368CF0684995C70CFD23B84F2E, ___fireRate_5)); }
	inline float get_fireRate_5() const { return ___fireRate_5; }
	inline float* get_address_of_fireRate_5() { return &___fireRate_5; }
	inline void set_fireRate_5(float value)
	{
		___fireRate_5 = value;
	}

	inline static int32_t get_offset_of_nextFire_6() { return static_cast<int32_t>(offsetof(EnemyAiming_tA949C5454CF9B5368CF0684995C70CFD23B84F2E, ___nextFire_6)); }
	inline float get_nextFire_6() const { return ___nextFire_6; }
	inline float* get_address_of_nextFire_6() { return &___nextFire_6; }
	inline void set_nextFire_6(float value)
	{
		___nextFire_6 = value;
	}

	inline static int32_t get_offset_of_DrewAudioSource_7() { return static_cast<int32_t>(offsetof(EnemyAiming_tA949C5454CF9B5368CF0684995C70CFD23B84F2E, ___DrewAudioSource_7)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_DrewAudioSource_7() const { return ___DrewAudioSource_7; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_DrewAudioSource_7() { return &___DrewAudioSource_7; }
	inline void set_DrewAudioSource_7(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___DrewAudioSource_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DrewAudioSource_7), (void*)value);
	}

	inline static int32_t get_offset_of_BowFire_8() { return static_cast<int32_t>(offsetof(EnemyAiming_tA949C5454CF9B5368CF0684995C70CFD23B84F2E, ___BowFire_8)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_BowFire_8() const { return ___BowFire_8; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_BowFire_8() { return &___BowFire_8; }
	inline void set_BowFire_8(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___BowFire_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BowFire_8), (void*)value);
	}
};


// EnemyHealth
struct EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single EnemyHealth::StartingHealth
	float ___StartingHealth_4;
	// System.Single EnemyHealth::CurrentHealth
	float ___CurrentHealth_5;
	// UnityEngine.Collider2D EnemyHealth::EnemyCollider
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___EnemyCollider_6;
	// UnityEngine.AudioSource EnemyHealth::EnemyAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___EnemyAudioSource_7;
	// UnityEngine.AudioClip EnemyHealth::Deathsound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___Deathsound_8;
	// System.Single EnemyHealth::SceneCountdown
	float ___SceneCountdown_10;
	// UnityEngine.SpriteRenderer EnemyHealth::EnemySpriteRenderer
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___EnemySpriteRenderer_11;

public:
	inline static int32_t get_offset_of_StartingHealth_4() { return static_cast<int32_t>(offsetof(EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0, ___StartingHealth_4)); }
	inline float get_StartingHealth_4() const { return ___StartingHealth_4; }
	inline float* get_address_of_StartingHealth_4() { return &___StartingHealth_4; }
	inline void set_StartingHealth_4(float value)
	{
		___StartingHealth_4 = value;
	}

	inline static int32_t get_offset_of_CurrentHealth_5() { return static_cast<int32_t>(offsetof(EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0, ___CurrentHealth_5)); }
	inline float get_CurrentHealth_5() const { return ___CurrentHealth_5; }
	inline float* get_address_of_CurrentHealth_5() { return &___CurrentHealth_5; }
	inline void set_CurrentHealth_5(float value)
	{
		___CurrentHealth_5 = value;
	}

	inline static int32_t get_offset_of_EnemyCollider_6() { return static_cast<int32_t>(offsetof(EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0, ___EnemyCollider_6)); }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * get_EnemyCollider_6() const { return ___EnemyCollider_6; }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** get_address_of_EnemyCollider_6() { return &___EnemyCollider_6; }
	inline void set_EnemyCollider_6(Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		___EnemyCollider_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnemyCollider_6), (void*)value);
	}

	inline static int32_t get_offset_of_EnemyAudioSource_7() { return static_cast<int32_t>(offsetof(EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0, ___EnemyAudioSource_7)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_EnemyAudioSource_7() const { return ___EnemyAudioSource_7; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_EnemyAudioSource_7() { return &___EnemyAudioSource_7; }
	inline void set_EnemyAudioSource_7(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___EnemyAudioSource_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnemyAudioSource_7), (void*)value);
	}

	inline static int32_t get_offset_of_Deathsound_8() { return static_cast<int32_t>(offsetof(EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0, ___Deathsound_8)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_Deathsound_8() const { return ___Deathsound_8; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_Deathsound_8() { return &___Deathsound_8; }
	inline void set_Deathsound_8(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___Deathsound_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Deathsound_8), (void*)value);
	}

	inline static int32_t get_offset_of_SceneCountdown_10() { return static_cast<int32_t>(offsetof(EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0, ___SceneCountdown_10)); }
	inline float get_SceneCountdown_10() const { return ___SceneCountdown_10; }
	inline float* get_address_of_SceneCountdown_10() { return &___SceneCountdown_10; }
	inline void set_SceneCountdown_10(float value)
	{
		___SceneCountdown_10 = value;
	}

	inline static int32_t get_offset_of_EnemySpriteRenderer_11() { return static_cast<int32_t>(offsetof(EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0, ___EnemySpriteRenderer_11)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_EnemySpriteRenderer_11() const { return ___EnemySpriteRenderer_11; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_EnemySpriteRenderer_11() { return &___EnemySpriteRenderer_11; }
	inline void set_EnemySpriteRenderer_11(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___EnemySpriteRenderer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnemySpriteRenderer_11), (void*)value);
	}
};

struct EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0_StaticFields
{
public:
	// System.Boolean EnemyHealth::Dead
	bool ___Dead_9;

public:
	inline static int32_t get_offset_of_Dead_9() { return static_cast<int32_t>(offsetof(EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0_StaticFields, ___Dead_9)); }
	inline bool get_Dead_9() const { return ___Dead_9; }
	inline bool* get_address_of_Dead_9() { return &___Dead_9; }
	inline void set_Dead_9(bool value)
	{
		___Dead_9 = value;
	}
};


// EnemyManager
struct EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject EnemyManager::enemy
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemy_4;
	// System.Single EnemyManager::spawnTime
	float ___spawnTime_5;
	// UnityEngine.Transform[] EnemyManager::spawnPoints
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___spawnPoints_6;

public:
	inline static int32_t get_offset_of_enemy_4() { return static_cast<int32_t>(offsetof(EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1, ___enemy_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemy_4() const { return ___enemy_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemy_4() { return &___enemy_4; }
	inline void set_enemy_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemy_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemy_4), (void*)value);
	}

	inline static int32_t get_offset_of_spawnTime_5() { return static_cast<int32_t>(offsetof(EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1, ___spawnTime_5)); }
	inline float get_spawnTime_5() const { return ___spawnTime_5; }
	inline float* get_address_of_spawnTime_5() { return &___spawnTime_5; }
	inline void set_spawnTime_5(float value)
	{
		___spawnTime_5 = value;
	}

	inline static int32_t get_offset_of_spawnPoints_6() { return static_cast<int32_t>(offsetof(EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1, ___spawnPoints_6)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_spawnPoints_6() const { return ___spawnPoints_6; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_spawnPoints_6() { return &___spawnPoints_6; }
	inline void set_spawnPoints_6(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___spawnPoints_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnPoints_6), (void*)value);
	}
};


// EnemyProjectile
struct EnemyProjectile_t6B051C244553EDDE433E5342ACD62DE4DBC7C372  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single EnemyProjectile::moveSpeed
	float ___moveSpeed_4;
	// UnityEngine.Rigidbody2D EnemyProjectile::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_5;
	// PlayerMovement EnemyProjectile::target
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * ___target_6;
	// UnityEngine.Vector2 EnemyProjectile::moveDirection
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___moveDirection_7;

public:
	inline static int32_t get_offset_of_moveSpeed_4() { return static_cast<int32_t>(offsetof(EnemyProjectile_t6B051C244553EDDE433E5342ACD62DE4DBC7C372, ___moveSpeed_4)); }
	inline float get_moveSpeed_4() const { return ___moveSpeed_4; }
	inline float* get_address_of_moveSpeed_4() { return &___moveSpeed_4; }
	inline void set_moveSpeed_4(float value)
	{
		___moveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_rb_5() { return static_cast<int32_t>(offsetof(EnemyProjectile_t6B051C244553EDDE433E5342ACD62DE4DBC7C372, ___rb_5)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_5() const { return ___rb_5; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_5() { return &___rb_5; }
	inline void set_rb_5(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_5), (void*)value);
	}

	inline static int32_t get_offset_of_target_6() { return static_cast<int32_t>(offsetof(EnemyProjectile_t6B051C244553EDDE433E5342ACD62DE4DBC7C372, ___target_6)); }
	inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * get_target_6() const { return ___target_6; }
	inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 ** get_address_of_target_6() { return &___target_6; }
	inline void set_target_6(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * value)
	{
		___target_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_6), (void*)value);
	}

	inline static int32_t get_offset_of_moveDirection_7() { return static_cast<int32_t>(offsetof(EnemyProjectile_t6B051C244553EDDE433E5342ACD62DE4DBC7C372, ___moveDirection_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_moveDirection_7() const { return ___moveDirection_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_moveDirection_7() { return &___moveDirection_7; }
	inline void set_moveDirection_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___moveDirection_7 = value;
	}
};


// ErrorScreenTransition
struct ErrorScreenTransition_t806C660950A2F6F42B00F351EE3F4014E505F0C1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// FinalZone
struct FinalZone_tC6A3D1470C1C4D28807583B42E72A9728D9A34BE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// FirstZone
struct FirstZone_tE583C78F09832203C5FF61994F727AD15D988DB3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// GlitchEffect
struct GlitchEffect_t55227EC987BF2E45B2722E27C7820F193F28C27A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Texture2D GlitchEffect::displacementMap
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___displacementMap_4;
	// UnityEngine.Shader GlitchEffect::Shader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___Shader_5;
	// System.Single GlitchEffect::intensity
	float ___intensity_6;
	// System.Single GlitchEffect::flipIntensity
	float ___flipIntensity_7;
	// System.Single GlitchEffect::colorIntensity
	float ___colorIntensity_8;
	// System.Single GlitchEffect::_glitchup
	float ____glitchup_9;
	// System.Single GlitchEffect::_glitchdown
	float ____glitchdown_10;
	// System.Single GlitchEffect::flicker
	float ___flicker_11;
	// System.Single GlitchEffect::_glitchupTime
	float ____glitchupTime_12;
	// System.Single GlitchEffect::_glitchdownTime
	float ____glitchdownTime_13;
	// System.Single GlitchEffect::_flickerTime
	float ____flickerTime_14;
	// UnityEngine.Material GlitchEffect::_material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ____material_15;

public:
	inline static int32_t get_offset_of_displacementMap_4() { return static_cast<int32_t>(offsetof(GlitchEffect_t55227EC987BF2E45B2722E27C7820F193F28C27A, ___displacementMap_4)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_displacementMap_4() const { return ___displacementMap_4; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_displacementMap_4() { return &___displacementMap_4; }
	inline void set_displacementMap_4(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___displacementMap_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displacementMap_4), (void*)value);
	}

	inline static int32_t get_offset_of_Shader_5() { return static_cast<int32_t>(offsetof(GlitchEffect_t55227EC987BF2E45B2722E27C7820F193F28C27A, ___Shader_5)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_Shader_5() const { return ___Shader_5; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_Shader_5() { return &___Shader_5; }
	inline void set_Shader_5(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___Shader_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Shader_5), (void*)value);
	}

	inline static int32_t get_offset_of_intensity_6() { return static_cast<int32_t>(offsetof(GlitchEffect_t55227EC987BF2E45B2722E27C7820F193F28C27A, ___intensity_6)); }
	inline float get_intensity_6() const { return ___intensity_6; }
	inline float* get_address_of_intensity_6() { return &___intensity_6; }
	inline void set_intensity_6(float value)
	{
		___intensity_6 = value;
	}

	inline static int32_t get_offset_of_flipIntensity_7() { return static_cast<int32_t>(offsetof(GlitchEffect_t55227EC987BF2E45B2722E27C7820F193F28C27A, ___flipIntensity_7)); }
	inline float get_flipIntensity_7() const { return ___flipIntensity_7; }
	inline float* get_address_of_flipIntensity_7() { return &___flipIntensity_7; }
	inline void set_flipIntensity_7(float value)
	{
		___flipIntensity_7 = value;
	}

	inline static int32_t get_offset_of_colorIntensity_8() { return static_cast<int32_t>(offsetof(GlitchEffect_t55227EC987BF2E45B2722E27C7820F193F28C27A, ___colorIntensity_8)); }
	inline float get_colorIntensity_8() const { return ___colorIntensity_8; }
	inline float* get_address_of_colorIntensity_8() { return &___colorIntensity_8; }
	inline void set_colorIntensity_8(float value)
	{
		___colorIntensity_8 = value;
	}

	inline static int32_t get_offset_of__glitchup_9() { return static_cast<int32_t>(offsetof(GlitchEffect_t55227EC987BF2E45B2722E27C7820F193F28C27A, ____glitchup_9)); }
	inline float get__glitchup_9() const { return ____glitchup_9; }
	inline float* get_address_of__glitchup_9() { return &____glitchup_9; }
	inline void set__glitchup_9(float value)
	{
		____glitchup_9 = value;
	}

	inline static int32_t get_offset_of__glitchdown_10() { return static_cast<int32_t>(offsetof(GlitchEffect_t55227EC987BF2E45B2722E27C7820F193F28C27A, ____glitchdown_10)); }
	inline float get__glitchdown_10() const { return ____glitchdown_10; }
	inline float* get_address_of__glitchdown_10() { return &____glitchdown_10; }
	inline void set__glitchdown_10(float value)
	{
		____glitchdown_10 = value;
	}

	inline static int32_t get_offset_of_flicker_11() { return static_cast<int32_t>(offsetof(GlitchEffect_t55227EC987BF2E45B2722E27C7820F193F28C27A, ___flicker_11)); }
	inline float get_flicker_11() const { return ___flicker_11; }
	inline float* get_address_of_flicker_11() { return &___flicker_11; }
	inline void set_flicker_11(float value)
	{
		___flicker_11 = value;
	}

	inline static int32_t get_offset_of__glitchupTime_12() { return static_cast<int32_t>(offsetof(GlitchEffect_t55227EC987BF2E45B2722E27C7820F193F28C27A, ____glitchupTime_12)); }
	inline float get__glitchupTime_12() const { return ____glitchupTime_12; }
	inline float* get_address_of__glitchupTime_12() { return &____glitchupTime_12; }
	inline void set__glitchupTime_12(float value)
	{
		____glitchupTime_12 = value;
	}

	inline static int32_t get_offset_of__glitchdownTime_13() { return static_cast<int32_t>(offsetof(GlitchEffect_t55227EC987BF2E45B2722E27C7820F193F28C27A, ____glitchdownTime_13)); }
	inline float get__glitchdownTime_13() const { return ____glitchdownTime_13; }
	inline float* get_address_of__glitchdownTime_13() { return &____glitchdownTime_13; }
	inline void set__glitchdownTime_13(float value)
	{
		____glitchdownTime_13 = value;
	}

	inline static int32_t get_offset_of__flickerTime_14() { return static_cast<int32_t>(offsetof(GlitchEffect_t55227EC987BF2E45B2722E27C7820F193F28C27A, ____flickerTime_14)); }
	inline float get__flickerTime_14() const { return ____flickerTime_14; }
	inline float* get_address_of__flickerTime_14() { return &____flickerTime_14; }
	inline void set__flickerTime_14(float value)
	{
		____flickerTime_14 = value;
	}

	inline static int32_t get_offset_of__material_15() { return static_cast<int32_t>(offsetof(GlitchEffect_t55227EC987BF2E45B2722E27C7820F193F28C27A, ____material_15)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get__material_15() const { return ____material_15; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of__material_15() { return &____material_15; }
	inline void set__material_15(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		____material_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____material_15), (void*)value);
	}
};


// GlitchEffectHeavy
struct GlitchEffectHeavy_tEB28CC95824206EBF88373EB714E1ADED638ADDC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Texture2D GlitchEffectHeavy::displacementMap
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___displacementMap_4;
	// UnityEngine.Shader GlitchEffectHeavy::Shader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___Shader_5;
	// System.Single GlitchEffectHeavy::intensity
	float ___intensity_6;
	// System.Single GlitchEffectHeavy::flipIntensity
	float ___flipIntensity_7;
	// System.Single GlitchEffectHeavy::colorIntensity
	float ___colorIntensity_8;
	// System.Single GlitchEffectHeavy::_glitchup
	float ____glitchup_9;
	// System.Single GlitchEffectHeavy::_glitchdown
	float ____glitchdown_10;
	// System.Single GlitchEffectHeavy::flicker
	float ___flicker_11;
	// System.Single GlitchEffectHeavy::_glitchupTime
	float ____glitchupTime_12;
	// System.Single GlitchEffectHeavy::_glitchdownTime
	float ____glitchdownTime_13;
	// System.Single GlitchEffectHeavy::_flickerTime
	float ____flickerTime_14;
	// UnityEngine.Material GlitchEffectHeavy::_material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ____material_15;

public:
	inline static int32_t get_offset_of_displacementMap_4() { return static_cast<int32_t>(offsetof(GlitchEffectHeavy_tEB28CC95824206EBF88373EB714E1ADED638ADDC, ___displacementMap_4)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_displacementMap_4() const { return ___displacementMap_4; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_displacementMap_4() { return &___displacementMap_4; }
	inline void set_displacementMap_4(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___displacementMap_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displacementMap_4), (void*)value);
	}

	inline static int32_t get_offset_of_Shader_5() { return static_cast<int32_t>(offsetof(GlitchEffectHeavy_tEB28CC95824206EBF88373EB714E1ADED638ADDC, ___Shader_5)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_Shader_5() const { return ___Shader_5; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_Shader_5() { return &___Shader_5; }
	inline void set_Shader_5(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___Shader_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Shader_5), (void*)value);
	}

	inline static int32_t get_offset_of_intensity_6() { return static_cast<int32_t>(offsetof(GlitchEffectHeavy_tEB28CC95824206EBF88373EB714E1ADED638ADDC, ___intensity_6)); }
	inline float get_intensity_6() const { return ___intensity_6; }
	inline float* get_address_of_intensity_6() { return &___intensity_6; }
	inline void set_intensity_6(float value)
	{
		___intensity_6 = value;
	}

	inline static int32_t get_offset_of_flipIntensity_7() { return static_cast<int32_t>(offsetof(GlitchEffectHeavy_tEB28CC95824206EBF88373EB714E1ADED638ADDC, ___flipIntensity_7)); }
	inline float get_flipIntensity_7() const { return ___flipIntensity_7; }
	inline float* get_address_of_flipIntensity_7() { return &___flipIntensity_7; }
	inline void set_flipIntensity_7(float value)
	{
		___flipIntensity_7 = value;
	}

	inline static int32_t get_offset_of_colorIntensity_8() { return static_cast<int32_t>(offsetof(GlitchEffectHeavy_tEB28CC95824206EBF88373EB714E1ADED638ADDC, ___colorIntensity_8)); }
	inline float get_colorIntensity_8() const { return ___colorIntensity_8; }
	inline float* get_address_of_colorIntensity_8() { return &___colorIntensity_8; }
	inline void set_colorIntensity_8(float value)
	{
		___colorIntensity_8 = value;
	}

	inline static int32_t get_offset_of__glitchup_9() { return static_cast<int32_t>(offsetof(GlitchEffectHeavy_tEB28CC95824206EBF88373EB714E1ADED638ADDC, ____glitchup_9)); }
	inline float get__glitchup_9() const { return ____glitchup_9; }
	inline float* get_address_of__glitchup_9() { return &____glitchup_9; }
	inline void set__glitchup_9(float value)
	{
		____glitchup_9 = value;
	}

	inline static int32_t get_offset_of__glitchdown_10() { return static_cast<int32_t>(offsetof(GlitchEffectHeavy_tEB28CC95824206EBF88373EB714E1ADED638ADDC, ____glitchdown_10)); }
	inline float get__glitchdown_10() const { return ____glitchdown_10; }
	inline float* get_address_of__glitchdown_10() { return &____glitchdown_10; }
	inline void set__glitchdown_10(float value)
	{
		____glitchdown_10 = value;
	}

	inline static int32_t get_offset_of_flicker_11() { return static_cast<int32_t>(offsetof(GlitchEffectHeavy_tEB28CC95824206EBF88373EB714E1ADED638ADDC, ___flicker_11)); }
	inline float get_flicker_11() const { return ___flicker_11; }
	inline float* get_address_of_flicker_11() { return &___flicker_11; }
	inline void set_flicker_11(float value)
	{
		___flicker_11 = value;
	}

	inline static int32_t get_offset_of__glitchupTime_12() { return static_cast<int32_t>(offsetof(GlitchEffectHeavy_tEB28CC95824206EBF88373EB714E1ADED638ADDC, ____glitchupTime_12)); }
	inline float get__glitchupTime_12() const { return ____glitchupTime_12; }
	inline float* get_address_of__glitchupTime_12() { return &____glitchupTime_12; }
	inline void set__glitchupTime_12(float value)
	{
		____glitchupTime_12 = value;
	}

	inline static int32_t get_offset_of__glitchdownTime_13() { return static_cast<int32_t>(offsetof(GlitchEffectHeavy_tEB28CC95824206EBF88373EB714E1ADED638ADDC, ____glitchdownTime_13)); }
	inline float get__glitchdownTime_13() const { return ____glitchdownTime_13; }
	inline float* get_address_of__glitchdownTime_13() { return &____glitchdownTime_13; }
	inline void set__glitchdownTime_13(float value)
	{
		____glitchdownTime_13 = value;
	}

	inline static int32_t get_offset_of__flickerTime_14() { return static_cast<int32_t>(offsetof(GlitchEffectHeavy_tEB28CC95824206EBF88373EB714E1ADED638ADDC, ____flickerTime_14)); }
	inline float get__flickerTime_14() const { return ____flickerTime_14; }
	inline float* get_address_of__flickerTime_14() { return &____flickerTime_14; }
	inline void set__flickerTime_14(float value)
	{
		____flickerTime_14 = value;
	}

	inline static int32_t get_offset_of__material_15() { return static_cast<int32_t>(offsetof(GlitchEffectHeavy_tEB28CC95824206EBF88373EB714E1ADED638ADDC, ____material_15)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get__material_15() const { return ____material_15; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of__material_15() { return &____material_15; }
	inline void set__material_15(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		____material_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____material_15), (void*)value);
	}
};


// MenuManager
struct MenuManager_tD52BB657312ED53913E423A985CACC86F900124C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject MenuManager::MainMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___MainMenu_4;
	// UnityEngine.GameObject MenuManager::InstructionsPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___InstructionsPanel_5;

public:
	inline static int32_t get_offset_of_MainMenu_4() { return static_cast<int32_t>(offsetof(MenuManager_tD52BB657312ED53913E423A985CACC86F900124C, ___MainMenu_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_MainMenu_4() const { return ___MainMenu_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_MainMenu_4() { return &___MainMenu_4; }
	inline void set_MainMenu_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___MainMenu_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MainMenu_4), (void*)value);
	}

	inline static int32_t get_offset_of_InstructionsPanel_5() { return static_cast<int32_t>(offsetof(MenuManager_tD52BB657312ED53913E423A985CACC86F900124C, ___InstructionsPanel_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_InstructionsPanel_5() const { return ___InstructionsPanel_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_InstructionsPanel_5() { return &___InstructionsPanel_5; }
	inline void set_InstructionsPanel_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___InstructionsPanel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InstructionsPanel_5), (void*)value);
	}
};


// NoahHealth
struct NoahHealth_t7E9CA51C0B8E8148EC410EED3679CDC73D22BFF7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single NoahHealth::StartingHealth
	float ___StartingHealth_4;
	// System.Single NoahHealth::CurrentHealth
	float ___CurrentHealth_5;
	// UnityEngine.Collider2D NoahHealth::EnemyCollider
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___EnemyCollider_6;
	// UnityEngine.AudioSource NoahHealth::EnemyAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___EnemyAudioSource_7;
	// UnityEngine.AudioClip NoahHealth::Deathsound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___Deathsound_8;
	// UnityEngine.SpriteRenderer NoahHealth::EnemySpriteRenderer
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___EnemySpriteRenderer_10;
	// System.Single NoahHealth::SceneCountdown
	float ___SceneCountdown_11;

public:
	inline static int32_t get_offset_of_StartingHealth_4() { return static_cast<int32_t>(offsetof(NoahHealth_t7E9CA51C0B8E8148EC410EED3679CDC73D22BFF7, ___StartingHealth_4)); }
	inline float get_StartingHealth_4() const { return ___StartingHealth_4; }
	inline float* get_address_of_StartingHealth_4() { return &___StartingHealth_4; }
	inline void set_StartingHealth_4(float value)
	{
		___StartingHealth_4 = value;
	}

	inline static int32_t get_offset_of_CurrentHealth_5() { return static_cast<int32_t>(offsetof(NoahHealth_t7E9CA51C0B8E8148EC410EED3679CDC73D22BFF7, ___CurrentHealth_5)); }
	inline float get_CurrentHealth_5() const { return ___CurrentHealth_5; }
	inline float* get_address_of_CurrentHealth_5() { return &___CurrentHealth_5; }
	inline void set_CurrentHealth_5(float value)
	{
		___CurrentHealth_5 = value;
	}

	inline static int32_t get_offset_of_EnemyCollider_6() { return static_cast<int32_t>(offsetof(NoahHealth_t7E9CA51C0B8E8148EC410EED3679CDC73D22BFF7, ___EnemyCollider_6)); }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * get_EnemyCollider_6() const { return ___EnemyCollider_6; }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** get_address_of_EnemyCollider_6() { return &___EnemyCollider_6; }
	inline void set_EnemyCollider_6(Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		___EnemyCollider_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnemyCollider_6), (void*)value);
	}

	inline static int32_t get_offset_of_EnemyAudioSource_7() { return static_cast<int32_t>(offsetof(NoahHealth_t7E9CA51C0B8E8148EC410EED3679CDC73D22BFF7, ___EnemyAudioSource_7)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_EnemyAudioSource_7() const { return ___EnemyAudioSource_7; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_EnemyAudioSource_7() { return &___EnemyAudioSource_7; }
	inline void set_EnemyAudioSource_7(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___EnemyAudioSource_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnemyAudioSource_7), (void*)value);
	}

	inline static int32_t get_offset_of_Deathsound_8() { return static_cast<int32_t>(offsetof(NoahHealth_t7E9CA51C0B8E8148EC410EED3679CDC73D22BFF7, ___Deathsound_8)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_Deathsound_8() const { return ___Deathsound_8; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_Deathsound_8() { return &___Deathsound_8; }
	inline void set_Deathsound_8(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___Deathsound_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Deathsound_8), (void*)value);
	}

	inline static int32_t get_offset_of_EnemySpriteRenderer_10() { return static_cast<int32_t>(offsetof(NoahHealth_t7E9CA51C0B8E8148EC410EED3679CDC73D22BFF7, ___EnemySpriteRenderer_10)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_EnemySpriteRenderer_10() const { return ___EnemySpriteRenderer_10; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_EnemySpriteRenderer_10() { return &___EnemySpriteRenderer_10; }
	inline void set_EnemySpriteRenderer_10(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___EnemySpriteRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnemySpriteRenderer_10), (void*)value);
	}

	inline static int32_t get_offset_of_SceneCountdown_11() { return static_cast<int32_t>(offsetof(NoahHealth_t7E9CA51C0B8E8148EC410EED3679CDC73D22BFF7, ___SceneCountdown_11)); }
	inline float get_SceneCountdown_11() const { return ___SceneCountdown_11; }
	inline float* get_address_of_SceneCountdown_11() { return &___SceneCountdown_11; }
	inline void set_SceneCountdown_11(float value)
	{
		___SceneCountdown_11 = value;
	}
};

struct NoahHealth_t7E9CA51C0B8E8148EC410EED3679CDC73D22BFF7_StaticFields
{
public:
	// System.Boolean NoahHealth::NoahDead
	bool ___NoahDead_9;

public:
	inline static int32_t get_offset_of_NoahDead_9() { return static_cast<int32_t>(offsetof(NoahHealth_t7E9CA51C0B8E8148EC410EED3679CDC73D22BFF7_StaticFields, ___NoahDead_9)); }
	inline bool get_NoahDead_9() const { return ___NoahDead_9; }
	inline bool* get_address_of_NoahDead_9() { return &___NoahDead_9; }
	inline void set_NoahDead_9(bool value)
	{
		___NoahDead_9 = value;
	}
};


// PlayerHealth
struct PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] PlayerHealth::HitPoints
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___HitPoints_4;
	// UnityEngine.UI.Image PlayerHealth::OverlayImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___OverlayImage_6;
	// UnityEngine.Color PlayerHealth::hurtColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___hurtColor_7;
	// UnityEngine.Color PlayerHealth::healColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___healColor_8;
	// System.Single PlayerHealth::flashSpeed
	float ___flashSpeed_9;
	// System.Single PlayerHealth::RespawnTime
	float ___RespawnTime_10;
	// UnityEngine.Collider2D PlayerHealth::PlayerBoxCollider
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___PlayerBoxCollider_11;
	// System.Int32 PlayerHealth::MaxLife
	int32_t ___MaxLife_12;
	// System.Int32 PlayerHealth::MinLife
	int32_t ___MinLife_13;
	// System.Boolean PlayerHealth::damaged
	bool ___damaged_14;
	// System.Boolean PlayerHealth::healed
	bool ___healed_15;
	// System.Boolean PlayerHealth::dead
	bool ___dead_16;
	// UnityEngine.AudioClip PlayerHealth::DeathClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___DeathClip_17;
	// UnityEngine.AudioSource PlayerHealth::PlayerAudio
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___PlayerAudio_18;

public:
	inline static int32_t get_offset_of_HitPoints_4() { return static_cast<int32_t>(offsetof(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465, ___HitPoints_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_HitPoints_4() const { return ___HitPoints_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_HitPoints_4() { return &___HitPoints_4; }
	inline void set_HitPoints_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___HitPoints_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HitPoints_4), (void*)value);
	}

	inline static int32_t get_offset_of_OverlayImage_6() { return static_cast<int32_t>(offsetof(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465, ___OverlayImage_6)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_OverlayImage_6() const { return ___OverlayImage_6; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_OverlayImage_6() { return &___OverlayImage_6; }
	inline void set_OverlayImage_6(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___OverlayImage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OverlayImage_6), (void*)value);
	}

	inline static int32_t get_offset_of_hurtColor_7() { return static_cast<int32_t>(offsetof(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465, ___hurtColor_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_hurtColor_7() const { return ___hurtColor_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_hurtColor_7() { return &___hurtColor_7; }
	inline void set_hurtColor_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___hurtColor_7 = value;
	}

	inline static int32_t get_offset_of_healColor_8() { return static_cast<int32_t>(offsetof(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465, ___healColor_8)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_healColor_8() const { return ___healColor_8; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_healColor_8() { return &___healColor_8; }
	inline void set_healColor_8(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___healColor_8 = value;
	}

	inline static int32_t get_offset_of_flashSpeed_9() { return static_cast<int32_t>(offsetof(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465, ___flashSpeed_9)); }
	inline float get_flashSpeed_9() const { return ___flashSpeed_9; }
	inline float* get_address_of_flashSpeed_9() { return &___flashSpeed_9; }
	inline void set_flashSpeed_9(float value)
	{
		___flashSpeed_9 = value;
	}

	inline static int32_t get_offset_of_RespawnTime_10() { return static_cast<int32_t>(offsetof(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465, ___RespawnTime_10)); }
	inline float get_RespawnTime_10() const { return ___RespawnTime_10; }
	inline float* get_address_of_RespawnTime_10() { return &___RespawnTime_10; }
	inline void set_RespawnTime_10(float value)
	{
		___RespawnTime_10 = value;
	}

	inline static int32_t get_offset_of_PlayerBoxCollider_11() { return static_cast<int32_t>(offsetof(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465, ___PlayerBoxCollider_11)); }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * get_PlayerBoxCollider_11() const { return ___PlayerBoxCollider_11; }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** get_address_of_PlayerBoxCollider_11() { return &___PlayerBoxCollider_11; }
	inline void set_PlayerBoxCollider_11(Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		___PlayerBoxCollider_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerBoxCollider_11), (void*)value);
	}

	inline static int32_t get_offset_of_MaxLife_12() { return static_cast<int32_t>(offsetof(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465, ___MaxLife_12)); }
	inline int32_t get_MaxLife_12() const { return ___MaxLife_12; }
	inline int32_t* get_address_of_MaxLife_12() { return &___MaxLife_12; }
	inline void set_MaxLife_12(int32_t value)
	{
		___MaxLife_12 = value;
	}

	inline static int32_t get_offset_of_MinLife_13() { return static_cast<int32_t>(offsetof(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465, ___MinLife_13)); }
	inline int32_t get_MinLife_13() const { return ___MinLife_13; }
	inline int32_t* get_address_of_MinLife_13() { return &___MinLife_13; }
	inline void set_MinLife_13(int32_t value)
	{
		___MinLife_13 = value;
	}

	inline static int32_t get_offset_of_damaged_14() { return static_cast<int32_t>(offsetof(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465, ___damaged_14)); }
	inline bool get_damaged_14() const { return ___damaged_14; }
	inline bool* get_address_of_damaged_14() { return &___damaged_14; }
	inline void set_damaged_14(bool value)
	{
		___damaged_14 = value;
	}

	inline static int32_t get_offset_of_healed_15() { return static_cast<int32_t>(offsetof(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465, ___healed_15)); }
	inline bool get_healed_15() const { return ___healed_15; }
	inline bool* get_address_of_healed_15() { return &___healed_15; }
	inline void set_healed_15(bool value)
	{
		___healed_15 = value;
	}

	inline static int32_t get_offset_of_dead_16() { return static_cast<int32_t>(offsetof(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465, ___dead_16)); }
	inline bool get_dead_16() const { return ___dead_16; }
	inline bool* get_address_of_dead_16() { return &___dead_16; }
	inline void set_dead_16(bool value)
	{
		___dead_16 = value;
	}

	inline static int32_t get_offset_of_DeathClip_17() { return static_cast<int32_t>(offsetof(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465, ___DeathClip_17)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_DeathClip_17() const { return ___DeathClip_17; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_DeathClip_17() { return &___DeathClip_17; }
	inline void set_DeathClip_17(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___DeathClip_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DeathClip_17), (void*)value);
	}

	inline static int32_t get_offset_of_PlayerAudio_18() { return static_cast<int32_t>(offsetof(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465, ___PlayerAudio_18)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_PlayerAudio_18() const { return ___PlayerAudio_18; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_PlayerAudio_18() { return &___PlayerAudio_18; }
	inline void set_PlayerAudio_18(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___PlayerAudio_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerAudio_18), (void*)value);
	}
};

struct PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields
{
public:
	// System.Int32 PlayerHealth::Life
	int32_t ___Life_5;

public:
	inline static int32_t get_offset_of_Life_5() { return static_cast<int32_t>(offsetof(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields, ___Life_5)); }
	inline int32_t get_Life_5() const { return ___Life_5; }
	inline int32_t* get_address_of_Life_5() { return &___Life_5; }
	inline void set_Life_5(int32_t value)
	{
		___Life_5 = value;
	}
};


// PlayerMovement
struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single PlayerMovement::MovementSpeed
	float ___MovementSpeed_4;
	// UnityEngine.Rigidbody2D PlayerMovement::PlayerRB
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___PlayerRB_5;
	// System.Boolean PlayerMovement::IsFlipped
	bool ___IsFlipped_6;
	// UnityEngine.SpriteRenderer PlayerMovement::PlayerSpriteRenderer
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___PlayerSpriteRenderer_7;
	// UnityEngine.Vector2 PlayerMovement::MovementDirection
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___MovementDirection_8;

public:
	inline static int32_t get_offset_of_MovementSpeed_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___MovementSpeed_4)); }
	inline float get_MovementSpeed_4() const { return ___MovementSpeed_4; }
	inline float* get_address_of_MovementSpeed_4() { return &___MovementSpeed_4; }
	inline void set_MovementSpeed_4(float value)
	{
		___MovementSpeed_4 = value;
	}

	inline static int32_t get_offset_of_PlayerRB_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___PlayerRB_5)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_PlayerRB_5() const { return ___PlayerRB_5; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_PlayerRB_5() { return &___PlayerRB_5; }
	inline void set_PlayerRB_5(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___PlayerRB_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerRB_5), (void*)value);
	}

	inline static int32_t get_offset_of_IsFlipped_6() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___IsFlipped_6)); }
	inline bool get_IsFlipped_6() const { return ___IsFlipped_6; }
	inline bool* get_address_of_IsFlipped_6() { return &___IsFlipped_6; }
	inline void set_IsFlipped_6(bool value)
	{
		___IsFlipped_6 = value;
	}

	inline static int32_t get_offset_of_PlayerSpriteRenderer_7() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___PlayerSpriteRenderer_7)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_PlayerSpriteRenderer_7() const { return ___PlayerSpriteRenderer_7; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_PlayerSpriteRenderer_7() { return &___PlayerSpriteRenderer_7; }
	inline void set_PlayerSpriteRenderer_7(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___PlayerSpriteRenderer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerSpriteRenderer_7), (void*)value);
	}

	inline static int32_t get_offset_of_MovementDirection_8() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___MovementDirection_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_MovementDirection_8() const { return ___MovementDirection_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_MovementDirection_8() { return &___MovementDirection_8; }
	inline void set_MovementDirection_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___MovementDirection_8 = value;
	}
};


// RealFirstZone
struct RealFirstZone_t74C83DB9842A65A0A01322BF43E65CCD04C71D12  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// RealSecondZone
struct RealSecondZone_t60466AD4FB1505BF3C4125BC8D17FBAD73B5F6CB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// SecondZoneScript
struct SecondZoneScript_tFBD2ED4B5D7AA6023B9EC486C526A2AA6D529430  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// TrueDrewHealth
struct TrueDrewHealth_tC50C7A42EA7AACA7FA51DB9E5AABD1B945F7AE16  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single TrueDrewHealth::StartingHealth
	float ___StartingHealth_4;
	// System.Single TrueDrewHealth::CurrentHealth
	float ___CurrentHealth_5;
	// UnityEngine.Collider2D TrueDrewHealth::EnemyCollider
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___EnemyCollider_6;
	// UnityEngine.AudioSource TrueDrewHealth::EnemyAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___EnemyAudioSource_7;
	// UnityEngine.AudioClip TrueDrewHealth::Deathsound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___Deathsound_8;
	// System.Single TrueDrewHealth::SceneCountdown
	float ___SceneCountdown_10;
	// UnityEngine.SpriteRenderer TrueDrewHealth::EnemySpriteRenderer
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___EnemySpriteRenderer_11;

public:
	inline static int32_t get_offset_of_StartingHealth_4() { return static_cast<int32_t>(offsetof(TrueDrewHealth_tC50C7A42EA7AACA7FA51DB9E5AABD1B945F7AE16, ___StartingHealth_4)); }
	inline float get_StartingHealth_4() const { return ___StartingHealth_4; }
	inline float* get_address_of_StartingHealth_4() { return &___StartingHealth_4; }
	inline void set_StartingHealth_4(float value)
	{
		___StartingHealth_4 = value;
	}

	inline static int32_t get_offset_of_CurrentHealth_5() { return static_cast<int32_t>(offsetof(TrueDrewHealth_tC50C7A42EA7AACA7FA51DB9E5AABD1B945F7AE16, ___CurrentHealth_5)); }
	inline float get_CurrentHealth_5() const { return ___CurrentHealth_5; }
	inline float* get_address_of_CurrentHealth_5() { return &___CurrentHealth_5; }
	inline void set_CurrentHealth_5(float value)
	{
		___CurrentHealth_5 = value;
	}

	inline static int32_t get_offset_of_EnemyCollider_6() { return static_cast<int32_t>(offsetof(TrueDrewHealth_tC50C7A42EA7AACA7FA51DB9E5AABD1B945F7AE16, ___EnemyCollider_6)); }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * get_EnemyCollider_6() const { return ___EnemyCollider_6; }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** get_address_of_EnemyCollider_6() { return &___EnemyCollider_6; }
	inline void set_EnemyCollider_6(Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		___EnemyCollider_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnemyCollider_6), (void*)value);
	}

	inline static int32_t get_offset_of_EnemyAudioSource_7() { return static_cast<int32_t>(offsetof(TrueDrewHealth_tC50C7A42EA7AACA7FA51DB9E5AABD1B945F7AE16, ___EnemyAudioSource_7)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_EnemyAudioSource_7() const { return ___EnemyAudioSource_7; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_EnemyAudioSource_7() { return &___EnemyAudioSource_7; }
	inline void set_EnemyAudioSource_7(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___EnemyAudioSource_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnemyAudioSource_7), (void*)value);
	}

	inline static int32_t get_offset_of_Deathsound_8() { return static_cast<int32_t>(offsetof(TrueDrewHealth_tC50C7A42EA7AACA7FA51DB9E5AABD1B945F7AE16, ___Deathsound_8)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_Deathsound_8() const { return ___Deathsound_8; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_Deathsound_8() { return &___Deathsound_8; }
	inline void set_Deathsound_8(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___Deathsound_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Deathsound_8), (void*)value);
	}

	inline static int32_t get_offset_of_SceneCountdown_10() { return static_cast<int32_t>(offsetof(TrueDrewHealth_tC50C7A42EA7AACA7FA51DB9E5AABD1B945F7AE16, ___SceneCountdown_10)); }
	inline float get_SceneCountdown_10() const { return ___SceneCountdown_10; }
	inline float* get_address_of_SceneCountdown_10() { return &___SceneCountdown_10; }
	inline void set_SceneCountdown_10(float value)
	{
		___SceneCountdown_10 = value;
	}

	inline static int32_t get_offset_of_EnemySpriteRenderer_11() { return static_cast<int32_t>(offsetof(TrueDrewHealth_tC50C7A42EA7AACA7FA51DB9E5AABD1B945F7AE16, ___EnemySpriteRenderer_11)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_EnemySpriteRenderer_11() const { return ___EnemySpriteRenderer_11; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_EnemySpriteRenderer_11() { return &___EnemySpriteRenderer_11; }
	inline void set_EnemySpriteRenderer_11(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___EnemySpriteRenderer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnemySpriteRenderer_11), (void*)value);
	}
};

struct TrueDrewHealth_tC50C7A42EA7AACA7FA51DB9E5AABD1B945F7AE16_StaticFields
{
public:
	// System.Boolean TrueDrewHealth::RealDrewDead
	bool ___RealDrewDead_9;

public:
	inline static int32_t get_offset_of_RealDrewDead_9() { return static_cast<int32_t>(offsetof(TrueDrewHealth_tC50C7A42EA7AACA7FA51DB9E5AABD1B945F7AE16_StaticFields, ___RealDrewDead_9)); }
	inline bool get_RealDrewDead_9() const { return ___RealDrewDead_9; }
	inline bool* get_address_of_RealDrewDead_9() { return &___RealDrewDead_9; }
	inline void set_RealDrewDead_9(bool value)
	{
		___RealDrewDead_9 = value;
	}
};


// TrueNoahHealth
struct TrueNoahHealth_t5A7095C28C9C696B55576ECF5AA5D8938980057D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single TrueNoahHealth::StartingHealth
	float ___StartingHealth_4;
	// System.Single TrueNoahHealth::CurrentHealth
	float ___CurrentHealth_5;
	// UnityEngine.Collider2D TrueNoahHealth::EnemyCollider
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___EnemyCollider_6;
	// UnityEngine.AudioSource TrueNoahHealth::EnemyAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___EnemyAudioSource_7;
	// UnityEngine.AudioClip TrueNoahHealth::Deathsound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___Deathsound_8;
	// UnityEngine.SpriteRenderer TrueNoahHealth::EnemySpriteRenderer
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___EnemySpriteRenderer_10;
	// System.Single TrueNoahHealth::SceneCountdown
	float ___SceneCountdown_11;

public:
	inline static int32_t get_offset_of_StartingHealth_4() { return static_cast<int32_t>(offsetof(TrueNoahHealth_t5A7095C28C9C696B55576ECF5AA5D8938980057D, ___StartingHealth_4)); }
	inline float get_StartingHealth_4() const { return ___StartingHealth_4; }
	inline float* get_address_of_StartingHealth_4() { return &___StartingHealth_4; }
	inline void set_StartingHealth_4(float value)
	{
		___StartingHealth_4 = value;
	}

	inline static int32_t get_offset_of_CurrentHealth_5() { return static_cast<int32_t>(offsetof(TrueNoahHealth_t5A7095C28C9C696B55576ECF5AA5D8938980057D, ___CurrentHealth_5)); }
	inline float get_CurrentHealth_5() const { return ___CurrentHealth_5; }
	inline float* get_address_of_CurrentHealth_5() { return &___CurrentHealth_5; }
	inline void set_CurrentHealth_5(float value)
	{
		___CurrentHealth_5 = value;
	}

	inline static int32_t get_offset_of_EnemyCollider_6() { return static_cast<int32_t>(offsetof(TrueNoahHealth_t5A7095C28C9C696B55576ECF5AA5D8938980057D, ___EnemyCollider_6)); }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * get_EnemyCollider_6() const { return ___EnemyCollider_6; }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** get_address_of_EnemyCollider_6() { return &___EnemyCollider_6; }
	inline void set_EnemyCollider_6(Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		___EnemyCollider_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnemyCollider_6), (void*)value);
	}

	inline static int32_t get_offset_of_EnemyAudioSource_7() { return static_cast<int32_t>(offsetof(TrueNoahHealth_t5A7095C28C9C696B55576ECF5AA5D8938980057D, ___EnemyAudioSource_7)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_EnemyAudioSource_7() const { return ___EnemyAudioSource_7; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_EnemyAudioSource_7() { return &___EnemyAudioSource_7; }
	inline void set_EnemyAudioSource_7(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___EnemyAudioSource_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnemyAudioSource_7), (void*)value);
	}

	inline static int32_t get_offset_of_Deathsound_8() { return static_cast<int32_t>(offsetof(TrueNoahHealth_t5A7095C28C9C696B55576ECF5AA5D8938980057D, ___Deathsound_8)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_Deathsound_8() const { return ___Deathsound_8; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_Deathsound_8() { return &___Deathsound_8; }
	inline void set_Deathsound_8(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___Deathsound_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Deathsound_8), (void*)value);
	}

	inline static int32_t get_offset_of_EnemySpriteRenderer_10() { return static_cast<int32_t>(offsetof(TrueNoahHealth_t5A7095C28C9C696B55576ECF5AA5D8938980057D, ___EnemySpriteRenderer_10)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_EnemySpriteRenderer_10() const { return ___EnemySpriteRenderer_10; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_EnemySpriteRenderer_10() { return &___EnemySpriteRenderer_10; }
	inline void set_EnemySpriteRenderer_10(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___EnemySpriteRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnemySpriteRenderer_10), (void*)value);
	}

	inline static int32_t get_offset_of_SceneCountdown_11() { return static_cast<int32_t>(offsetof(TrueNoahHealth_t5A7095C28C9C696B55576ECF5AA5D8938980057D, ___SceneCountdown_11)); }
	inline float get_SceneCountdown_11() const { return ___SceneCountdown_11; }
	inline float* get_address_of_SceneCountdown_11() { return &___SceneCountdown_11; }
	inline void set_SceneCountdown_11(float value)
	{
		___SceneCountdown_11 = value;
	}
};

struct TrueNoahHealth_t5A7095C28C9C696B55576ECF5AA5D8938980057D_StaticFields
{
public:
	// System.Boolean TrueNoahHealth::RealNoahDead
	bool ___RealNoahDead_9;

public:
	inline static int32_t get_offset_of_RealNoahDead_9() { return static_cast<int32_t>(offsetof(TrueNoahHealth_t5A7095C28C9C696B55576ECF5AA5D8938980057D_StaticFields, ___RealNoahDead_9)); }
	inline bool get_RealNoahDead_9() const { return ___RealNoahDead_9; }
	inline bool* get_address_of_RealNoahDead_9() { return &___RealNoahDead_9; }
	inline void set_RealNoahDead_9(bool value)
	{
		___RealNoahDead_9 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// WeaponController
struct WeaponController_t4244D8690714C7377B1E91E037B8B3E9FC78D0A0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single WeaponController::speed
	float ___speed_4;
	// UnityEngine.Transform WeaponController::firePoint
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___firePoint_5;
	// UnityEngine.GameObject WeaponController::bulletPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bulletPrefab_6;
	// System.Single WeaponController::GuitarCooldown
	float ___GuitarCooldown_7;
	// UnityEngine.AudioSource WeaponController::HeroWeapon
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___HeroWeapon_8;
	// UnityEngine.AudioClip[] WeaponController::WeaponSound
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___WeaponSound_9;
	// System.Single WeaponController::BulletForce
	float ___BulletForce_10;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(WeaponController_t4244D8690714C7377B1E91E037B8B3E9FC78D0A0, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_firePoint_5() { return static_cast<int32_t>(offsetof(WeaponController_t4244D8690714C7377B1E91E037B8B3E9FC78D0A0, ___firePoint_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_firePoint_5() const { return ___firePoint_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_firePoint_5() { return &___firePoint_5; }
	inline void set_firePoint_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___firePoint_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firePoint_5), (void*)value);
	}

	inline static int32_t get_offset_of_bulletPrefab_6() { return static_cast<int32_t>(offsetof(WeaponController_t4244D8690714C7377B1E91E037B8B3E9FC78D0A0, ___bulletPrefab_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bulletPrefab_6() const { return ___bulletPrefab_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bulletPrefab_6() { return &___bulletPrefab_6; }
	inline void set_bulletPrefab_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bulletPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_GuitarCooldown_7() { return static_cast<int32_t>(offsetof(WeaponController_t4244D8690714C7377B1E91E037B8B3E9FC78D0A0, ___GuitarCooldown_7)); }
	inline float get_GuitarCooldown_7() const { return ___GuitarCooldown_7; }
	inline float* get_address_of_GuitarCooldown_7() { return &___GuitarCooldown_7; }
	inline void set_GuitarCooldown_7(float value)
	{
		___GuitarCooldown_7 = value;
	}

	inline static int32_t get_offset_of_HeroWeapon_8() { return static_cast<int32_t>(offsetof(WeaponController_t4244D8690714C7377B1E91E037B8B3E9FC78D0A0, ___HeroWeapon_8)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_HeroWeapon_8() const { return ___HeroWeapon_8; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_HeroWeapon_8() { return &___HeroWeapon_8; }
	inline void set_HeroWeapon_8(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___HeroWeapon_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HeroWeapon_8), (void*)value);
	}

	inline static int32_t get_offset_of_WeaponSound_9() { return static_cast<int32_t>(offsetof(WeaponController_t4244D8690714C7377B1E91E037B8B3E9FC78D0A0, ___WeaponSound_9)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get_WeaponSound_9() const { return ___WeaponSound_9; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of_WeaponSound_9() { return &___WeaponSound_9; }
	inline void set_WeaponSound_9(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		___WeaponSound_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WeaponSound_9), (void*)value);
	}

	inline static int32_t get_offset_of_BulletForce_10() { return static_cast<int32_t>(offsetof(WeaponController_t4244D8690714C7377B1E91E037B8B3E9FC78D0A0, ___BulletForce_10)); }
	inline float get_BulletForce_10() const { return ___BulletForce_10; }
	inline float* get_address_of_BulletForce_10() { return &___BulletForce_10; }
	inline void set_BulletForce_10(float value)
	{
		___BulletForce_10 = value;
	}
};


// WorldManagerFantasy
struct WorldManagerFantasy_tE74D48A6E0665D5DE9C7A3D61F72706990B6C6B5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject WorldManagerFantasy::PlayerObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___PlayerObject_4;
	// UnityEngine.GameObject WorldManagerFantasy::FirstZone
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___FirstZone_5;
	// UnityEngine.GameObject WorldManagerFantasy::SecondZone
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SecondZone_6;
	// UnityEngine.Transform WorldManagerFantasy::TargetSpawnPoint1
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___TargetSpawnPoint1_7;
	// UnityEngine.Transform WorldManagerFantasy::TargetSpawnPoint2
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___TargetSpawnPoint2_8;

public:
	inline static int32_t get_offset_of_PlayerObject_4() { return static_cast<int32_t>(offsetof(WorldManagerFantasy_tE74D48A6E0665D5DE9C7A3D61F72706990B6C6B5, ___PlayerObject_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_PlayerObject_4() const { return ___PlayerObject_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_PlayerObject_4() { return &___PlayerObject_4; }
	inline void set_PlayerObject_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___PlayerObject_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerObject_4), (void*)value);
	}

	inline static int32_t get_offset_of_FirstZone_5() { return static_cast<int32_t>(offsetof(WorldManagerFantasy_tE74D48A6E0665D5DE9C7A3D61F72706990B6C6B5, ___FirstZone_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_FirstZone_5() const { return ___FirstZone_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_FirstZone_5() { return &___FirstZone_5; }
	inline void set_FirstZone_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___FirstZone_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FirstZone_5), (void*)value);
	}

	inline static int32_t get_offset_of_SecondZone_6() { return static_cast<int32_t>(offsetof(WorldManagerFantasy_tE74D48A6E0665D5DE9C7A3D61F72706990B6C6B5, ___SecondZone_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SecondZone_6() const { return ___SecondZone_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SecondZone_6() { return &___SecondZone_6; }
	inline void set_SecondZone_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SecondZone_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SecondZone_6), (void*)value);
	}

	inline static int32_t get_offset_of_TargetSpawnPoint1_7() { return static_cast<int32_t>(offsetof(WorldManagerFantasy_tE74D48A6E0665D5DE9C7A3D61F72706990B6C6B5, ___TargetSpawnPoint1_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_TargetSpawnPoint1_7() const { return ___TargetSpawnPoint1_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_TargetSpawnPoint1_7() { return &___TargetSpawnPoint1_7; }
	inline void set_TargetSpawnPoint1_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___TargetSpawnPoint1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetSpawnPoint1_7), (void*)value);
	}

	inline static int32_t get_offset_of_TargetSpawnPoint2_8() { return static_cast<int32_t>(offsetof(WorldManagerFantasy_tE74D48A6E0665D5DE9C7A3D61F72706990B6C6B5, ___TargetSpawnPoint2_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_TargetSpawnPoint2_8() const { return ___TargetSpawnPoint2_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_TargetSpawnPoint2_8() { return &___TargetSpawnPoint2_8; }
	inline void set_TargetSpawnPoint2_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___TargetSpawnPoint2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetSpawnPoint2_8), (void*)value);
	}
};


// WorldManagerReal
struct WorldManagerReal_tC5724D1C7996C59F01E600BA1B8416D16AE613A3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject WorldManagerReal::PlayerObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___PlayerObject_4;
	// UnityEngine.GameObject WorldManagerReal::FirstZone
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___FirstZone_5;
	// UnityEngine.GameObject WorldManagerReal::SecondZone
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SecondZone_6;
	// UnityEngine.Transform WorldManagerReal::TargetSpawnPoint1
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___TargetSpawnPoint1_7;
	// UnityEngine.Transform WorldManagerReal::TargetSpawnPoint2
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___TargetSpawnPoint2_8;

public:
	inline static int32_t get_offset_of_PlayerObject_4() { return static_cast<int32_t>(offsetof(WorldManagerReal_tC5724D1C7996C59F01E600BA1B8416D16AE613A3, ___PlayerObject_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_PlayerObject_4() const { return ___PlayerObject_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_PlayerObject_4() { return &___PlayerObject_4; }
	inline void set_PlayerObject_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___PlayerObject_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerObject_4), (void*)value);
	}

	inline static int32_t get_offset_of_FirstZone_5() { return static_cast<int32_t>(offsetof(WorldManagerReal_tC5724D1C7996C59F01E600BA1B8416D16AE613A3, ___FirstZone_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_FirstZone_5() const { return ___FirstZone_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_FirstZone_5() { return &___FirstZone_5; }
	inline void set_FirstZone_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___FirstZone_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FirstZone_5), (void*)value);
	}

	inline static int32_t get_offset_of_SecondZone_6() { return static_cast<int32_t>(offsetof(WorldManagerReal_tC5724D1C7996C59F01E600BA1B8416D16AE613A3, ___SecondZone_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SecondZone_6() const { return ___SecondZone_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SecondZone_6() { return &___SecondZone_6; }
	inline void set_SecondZone_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SecondZone_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SecondZone_6), (void*)value);
	}

	inline static int32_t get_offset_of_TargetSpawnPoint1_7() { return static_cast<int32_t>(offsetof(WorldManagerReal_tC5724D1C7996C59F01E600BA1B8416D16AE613A3, ___TargetSpawnPoint1_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_TargetSpawnPoint1_7() const { return ___TargetSpawnPoint1_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_TargetSpawnPoint1_7() { return &___TargetSpawnPoint1_7; }
	inline void set_TargetSpawnPoint1_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___TargetSpawnPoint1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetSpawnPoint1_7), (void*)value);
	}

	inline static int32_t get_offset_of_TargetSpawnPoint2_8() { return static_cast<int32_t>(offsetof(WorldManagerReal_tC5724D1C7996C59F01E600BA1B8416D16AE613A3, ___TargetSpawnPoint2_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_TargetSpawnPoint2_8() const { return ___TargetSpawnPoint2_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_TargetSpawnPoint2_8() { return &___TargetSpawnPoint2_8; }
	inline void set_TargetSpawnPoint2_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___TargetSpawnPoint2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetSpawnPoint2_8), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * m_Items[1];

public:
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<GlitchEffect>()
inline GlitchEffect_t55227EC987BF2E45B2722E27C7820F193F28C27A * Component_GetComponent_TisGlitchEffect_t55227EC987BF2E45B2722E27C7820F193F28C27A_m133CF7AD01B77FE10A478FB38201150DF1ECF179 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  GlitchEffect_t55227EC987BF2E45B2722E27C7820F193F28C27A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<GlitchEffectHeavy>()
inline GlitchEffectHeavy_tEB28CC95824206EBF88373EB714E1ADED638ADDC * Component_GetComponent_TisGlitchEffectHeavy_tEB28CC95824206EBF88373EB714E1ADED638ADDC_mB1E3E073B207DF7381565DB2CA357B3134FE3C82 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  GlitchEffectHeavy_tEB28CC95824206EBF88373EB714E1ADED638ADDC * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Void EnemyAiming::CheckIfTimeToFire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAiming_CheckIfTimeToFire_m31B67BEBD581BAE94BAFDC1372E85DDF7454EC2D (EnemyAiming_tA949C5454CF9B5368CF0684995C70CFD23B84F2E * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Object::FindObjectOfType<PlayerMovement>()
inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * Object_FindObjectOfType_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m9111175A98A389A339114BB2D29BCE719C6B33B3 (const RuntimeMethod* method)
{
	return ((  PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shader0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value1, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398 (float ___angle0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_get_one_m59B707729B52E58A045A6DE2ACDDE1D1600F48A4 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value1, const RuntimeMethod* method);
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872 (const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m5E0E60EA4A4D351DCC314AB2C49C7DC5B8863D05 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___dest1, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___mat2, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_clear_m9F8076CEFE7B8119A9903212DCBF2BFED114E97F (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void PlayerHealth::ReloadLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth_ReloadLevel_m34F341F7DE64183661155CB66AEF2F3D269EB6FC (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, const RuntimeMethod* method);
// System.Void PlayerHealth::Death()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth_Death_m61D4C1DCE50D79778005D6CE45290F9D6A54E123 (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, const RuntimeMethod* method);
// System.Void PlayerHealth::TakeDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth_TakeDamage_m4CD8DFCFE558D2C5D7B3EF29743B66B8C24EB53D (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, const RuntimeMethod* method);
// System.Void PlayerHealth::Heal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth_Heal_mD2B425144BC05208AAA523D9DD7AD6D344B3C96D (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void PlayerMovement::ProcessInputs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_ProcessInputs_m5DD18B0073E0B8159A0437D9ACCBE0490DAF3AAA (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_flipY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipY_m7DFB2D1118142BE6C76470474F2ECAED234B0A01 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, bool ___value0, const RuntimeMethod* method);
// System.Void PlayerMovement::Movement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Movement_m429843BB8B4AC7152E1FBD70D59D217BA170F047 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B (String_t* ___axisName0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_flipX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipX_mD3AB83CC6D742A69F1B52376D1636CAA2E44B67E (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_m95EE8314087068F3AA9CEF3C3F6A246D55C4734C (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Void WeaponController::<Update>g__Shoot|8_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponController_U3CUpdateU3Eg__ShootU7C8_0_m4CA804CE20CEEDFC4B017A36B49B88CBA86D55AB (WeaponController_t4244D8690714C7377B1E91E037B8B3E9FC78D0A0 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___force0, int32_t ___mode1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
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
// System.Void Bullet::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Awake_m2D77C2A3CF11F66E86FF074B8C4397C0E3DE2004 (Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject, BulletLifespan);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_BulletLifespan_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Bullet::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_OnTriggerEnter2D_m9D34F5DCB36704FBF573BD78A9181790DD6C3B86 (Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80EA192AC016417AAAFE77A894354CD74FD4AA6B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Hazard")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral80EA192AC016417AAAFE77A894354CD74FD4AA6B, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Bullet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet__ctor_mC7D931FE508342F413FBA79525A4819D4114B3EC (Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Bullet::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet__cctor_m7A2A51C5707C35F92B076D22168CE1BBCDB4A799 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bullet_tF95A945B732B2B929938FB1028878BFBC0081724_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float BulletDamage = 5;
		((Bullet_tF95A945B732B2B929938FB1028878BFBC0081724_StaticFields*)il2cpp_codegen_static_fields_for(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724_il2cpp_TypeInfo_var))->set_BulletDamage_5((5.0f));
		return;
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
// System.Void CameraManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraManager_Update_m911D2029A80BF20148CD94D496452F232343FF60 (CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGlitchEffectHeavy_tEB28CC95824206EBF88373EB714E1ADED638ADDC_mB1E3E073B207DF7381565DB2CA357B3134FE3C82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGlitchEffect_t55227EC987BF2E45B2722E27C7820F193F28C27A_m133CF7AD01B77FE10A478FB38201150DF1ECF179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoahHealth_t7E9CA51C0B8E8148EC410EED3679CDC73D22BFF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (DrewHealth.DrewDead)
		bool L_0 = ((DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE_StaticFields*)il2cpp_codegen_static_fields_for(DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE_il2cpp_TypeInfo_var))->get_DrewDead_9();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// this.GetComponent<GlitchEffect>().enabled = true;
		GlitchEffect_t55227EC987BF2E45B2722E27C7820F193F28C27A * L_1;
		L_1 = Component_GetComponent_TisGlitchEffect_t55227EC987BF2E45B2722E27C7820F193F28C27A_m133CF7AD01B77FE10A478FB38201150DF1ECF179(__this, /*hidden argument*/Component_GetComponent_TisGlitchEffect_t55227EC987BF2E45B2722E27C7820F193F28C27A_m133CF7AD01B77FE10A478FB38201150DF1ECF179_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_1, (bool)1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// if(DrewHealth.DrewDead && NoahHealth.NoahDead)
		bool L_2 = ((DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE_StaticFields*)il2cpp_codegen_static_fields_for(DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE_il2cpp_TypeInfo_var))->get_DrewDead_9();
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		bool L_3 = ((NoahHealth_t7E9CA51C0B8E8148EC410EED3679CDC73D22BFF7_StaticFields*)il2cpp_codegen_static_fields_for(NoahHealth_t7E9CA51C0B8E8148EC410EED3679CDC73D22BFF7_il2cpp_TypeInfo_var))->get_NoahDead_9();
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// this.GetComponent<GlitchEffect>().enabled = false;
		GlitchEffect_t55227EC987BF2E45B2722E27C7820F193F28C27A * L_4;
		L_4 = Component_GetComponent_TisGlitchEffect_t55227EC987BF2E45B2722E27C7820F193F28C27A_m133CF7AD01B77FE10A478FB38201150DF1ECF179(__this, /*hidden argument*/Component_GetComponent_TisGlitchEffect_t55227EC987BF2E45B2722E27C7820F193F28C27A_m133CF7AD01B77FE10A478FB38201150DF1ECF179_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_4, (bool)0, /*hidden argument*/NULL);
		// this.GetComponent<GlitchEffectHeavy>().enabled = true;
		GlitchEffectHeavy_tEB28CC95824206EBF88373EB714E1ADED638ADDC * L_5;
		L_5 = Component_GetComponent_TisGlitchEffectHeavy_tEB28CC95824206EBF88373EB714E1ADED638ADDC_mB1E3E073B207DF7381565DB2CA357B3134FE3C82(__this, /*hidden argument*/Component_GetComponent_TisGlitchEffectHeavy_tEB28CC95824206EBF88373EB714E1ADED638ADDC_mB1E3E073B207DF7381565DB2CA357B3134FE3C82_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_5, (bool)1, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void CameraManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraManager__ctor_m932EDBCBAE89115380AA929ED5BC9823B9371185 (CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
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
// System.Void CreditsManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreditsManager_Update_m00170DED3D44AE20BFB78227AA973CA83FCF2ECD (CreditsManager_t9F6DE77AD2D6022368231F729F44ADD04A8E3537 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDA32CF0DB18B08276A5DD4665B2D1B3E408A196);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(SceneCountdown >= 0)
		float L_0 = __this->get_SceneCountdown_4();
		if ((!(((float)L_0) >= ((float)(0.0f)))))
		{
			goto IL_001f;
		}
	}
	{
		// SceneCountdown = SceneCountdown - Time.deltaTime;
		float L_1 = __this->get_SceneCountdown_4();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_SceneCountdown_4(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
	}

IL_001f:
	{
		// if(SceneCountdown <= 0)
		float L_3 = __this->get_SceneCountdown_4();
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_0036;
		}
	}
	{
		// SceneManager.LoadScene("MenuScreen");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralEDA32CF0DB18B08276A5DD4665B2D1B3E408A196, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void CreditsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreditsManager__ctor_mA1F239B287AF1DE3F3775DA455772B21B5132ABE (CreditsManager_t9F6DE77AD2D6022368231F729F44ADD04A8E3537 * __this, const RuntimeMethod* method)
{
	{
		// public float SceneCountdown = 55f;
		__this->set_SceneCountdown_4((55.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
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
// System.Void DrewHealth::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrewHealth_Awake_mD90889BEB9E9838B789126B1E26F665E425CF621 (DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CurrentHealth = StartingHealth;
		float L_0 = __this->get_StartingHealth_4();
		__this->set_CurrentHealth_5(L_0);
		// EnemyCollider = GetComponent<BoxCollider2D>();
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_1;
		L_1 = Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		__this->set_EnemyCollider_6(L_1);
		// EnemyAudioSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2;
		L_2 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_EnemyAudioSource_7(L_2);
		// EnemySpriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_3;
		L_3 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_EnemySpriteRenderer_11(L_3);
		// }
		return;
	}
}
// System.Void DrewHealth::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrewHealth_OnTriggerEnter2D_m230A909C8F3AB56A8CA39988FD4670BF23D032B9 (DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bullet_tF95A945B732B2B929938FB1028878BFBC0081724_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CurrentHealth <= 0)
		float L_0 = __this->get_CurrentHealth_5();
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_0013;
		}
	}
	{
		// DrewDead = true;
		((DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE_StaticFields*)il2cpp_codegen_static_fields_for(DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE_il2cpp_TypeInfo_var))->set_DrewDead_9((bool)1);
	}

IL_0013:
	{
		// if (DrewDead)
		bool L_1 = ((DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE_StaticFields*)il2cpp_codegen_static_fields_for(DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE_il2cpp_TypeInfo_var))->get_DrewDead_9();
		if (!L_1)
		{
			goto IL_0076;
		}
	}
	{
		// EnemyCollider.enabled = false;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_2 = __this->get_EnemyCollider_6();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_2, (bool)0, /*hidden argument*/NULL);
		// EnemyAudioSource.clip = Deathsound;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3 = __this->get_EnemyAudioSource_7();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_4 = __this->get_Deathsound_8();
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_3, L_4, /*hidden argument*/NULL);
		// EnemyAudioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5 = __this->get_EnemyAudioSource_7();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_5, /*hidden argument*/NULL);
		// Destroy(gameObject, 5f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_6, (5.0f), /*hidden argument*/NULL);
		// EnemySpriteRenderer.color = new Color(1f, 0f, 0f, 1f);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_7 = __this->get_EnemySpriteRenderer_11();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_8), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_7, L_8, /*hidden argument*/NULL);
	}

IL_0076:
	{
		// if (collision.gameObject.tag == "Projectile")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_9 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_009f;
		}
	}
	{
		// CurrentHealth = CurrentHealth - Bullet.BulletDamage;
		float L_13 = __this->get_CurrentHealth_5();
		IL2CPP_RUNTIME_CLASS_INIT(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724_il2cpp_TypeInfo_var);
		float L_14 = ((Bullet_tF95A945B732B2B929938FB1028878BFBC0081724_StaticFields*)il2cpp_codegen_static_fields_for(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724_il2cpp_TypeInfo_var))->get_BulletDamage_5();
		__this->set_CurrentHealth_5(((float)il2cpp_codegen_subtract((float)L_13, (float)L_14)));
	}

IL_009f:
	{
		// }
		return;
	}
}
// System.Void DrewHealth::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrewHealth_Update_mA7F89BB3F119253A0722D929E0B72778BAD3C715 (DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26E8E171770486BAAD116FD2A75E03500991BD99);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (DrewDead)
		bool L_0 = ((DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE_StaticFields*)il2cpp_codegen_static_fields_for(DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE_il2cpp_TypeInfo_var))->get_DrewDead_9();
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		// if (SceneCountdown >= 0)
		float L_1 = __this->get_SceneCountdown_10();
		if ((!(((float)L_1) >= ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		// SceneCountdown = SceneCountdown - Time.deltaTime;
		float L_2 = __this->get_SceneCountdown_10();
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_SceneCountdown_10(((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)));
		// }
		return;
	}

IL_0027:
	{
		// else if (SceneCountdown <= 0)
		float L_4 = __this->get_SceneCountdown_10();
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_003e;
		}
	}
	{
		// SceneManager.LoadScene("FantasyOverworld");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral26E8E171770486BAAD116FD2A75E03500991BD99, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void DrewHealth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrewHealth__ctor_m2A2B1E3383965B75ED38BB0BFB6F16E757D4269E (DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE * __this, const RuntimeMethod* method)
{
	{
		// public float StartingHealth = 20;
		__this->set_StartingHealth_4((20.0f));
		// public float SceneCountdown = 4f;
		__this->set_SceneCountdown_10((4.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
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
// System.Void EnemyAiming::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAiming_Awake_mBC3591B95A6404FF37904DB80F55E8DEF8FEA5F2 (EnemyAiming_tA949C5454CF9B5368CF0684995C70CFD23B84F2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DrewAudioSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_DrewAudioSource_7(L_0);
		// }
		return;
	}
}
// System.Void EnemyAiming::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAiming_Start_m006EF1F7BF26627C2F29E223631F4732F901FA51 (EnemyAiming_tA949C5454CF9B5368CF0684995C70CFD23B84F2E * __this, const RuntimeMethod* method)
{
	{
		// nextFire = Time.time;
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_nextFire_6(L_0);
		// }
		return;
	}
}
// System.Void EnemyAiming::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAiming_Update_m6DFCB4A44176368E07F797CE2BB157C0636B2CBB (EnemyAiming_tA949C5454CF9B5368CF0684995C70CFD23B84F2E * __this, const RuntimeMethod* method)
{
	{
		// CheckIfTimeToFire();
		EnemyAiming_CheckIfTimeToFire_m31B67BEBD581BAE94BAFDC1372E85DDF7454EC2D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyAiming::CheckIfTimeToFire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAiming_CheckIfTimeToFire_m31B67BEBD581BAE94BAFDC1372E85DDF7454EC2D (EnemyAiming_tA949C5454CF9B5368CF0684995C70CFD23B84F2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!EnemyHealth.Dead)
		bool L_0 = ((EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0_StaticFields*)il2cpp_codegen_static_fields_for(EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0_il2cpp_TypeInfo_var))->get_Dead_9();
		if (L_0)
		{
			goto IL_0066;
		}
	}
	{
		// if (Time.time > nextFire)
		float L_1;
		L_1 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_2 = __this->get_nextFire_6();
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_0066;
		}
	}
	{
		// if (!(PlayerHealth.Life < 1))
		int32_t L_3 = ((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->get_Life_5();
		if ((((int32_t)L_3) < ((int32_t)1)))
		{
			goto IL_0066;
		}
	}
	{
		// DrewAudioSource.clip = BowFire;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4 = __this->get_DrewAudioSource_7();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_5 = __this->get_BowFire_8();
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_4, L_5, /*hidden argument*/NULL);
		// DrewAudioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_6 = __this->get_DrewAudioSource_7();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_6, /*hidden argument*/NULL);
		// Instantiate(arrow, transform.position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_arrow_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_7, L_9, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// nextFire = Time.time + fireRate;
		float L_12;
		L_12 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_13 = __this->get_fireRate_5();
		__this->set_nextFire_6(((float)il2cpp_codegen_add((float)L_12, (float)L_13)));
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void EnemyAiming::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAiming__ctor_mAC76DFF27E9C2D6FCE853A5ECC880EFE4F19754F (EnemyAiming_tA949C5454CF9B5368CF0684995C70CFD23B84F2E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
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
// System.Void EnemyHealth::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHealth_Awake_m037865C39B0CB92C39F72E1B25CBD9E5677601A5 (EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneCountdown = 4f;
		__this->set_SceneCountdown_10((4.0f));
		// CurrentHealth = StartingHealth;
		float L_0 = __this->get_StartingHealth_4();
		__this->set_CurrentHealth_5(L_0);
		// EnemyCollider = GetComponent<BoxCollider2D>();
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_1;
		L_1 = Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		__this->set_EnemyCollider_6(L_1);
		// EnemyAudioSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2;
		L_2 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_EnemyAudioSource_7(L_2);
		// EnemySpriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_3;
		L_3 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_EnemySpriteRenderer_11(L_3);
		// }
		return;
	}
}
// System.Void EnemyHealth::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHealth_OnTriggerEnter2D_m45FFDDDA7EC0302585A893F234DDDB4A94342BCA (EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bullet_tF95A945B732B2B929938FB1028878BFBC0081724_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CurrentHealth <= 0)
		float L_0 = __this->get_CurrentHealth_5();
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_0013;
		}
	}
	{
		// Dead = true;
		((EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0_StaticFields*)il2cpp_codegen_static_fields_for(EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0_il2cpp_TypeInfo_var))->set_Dead_9((bool)1);
	}

IL_0013:
	{
		// if (Dead)
		bool L_1 = ((EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0_StaticFields*)il2cpp_codegen_static_fields_for(EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0_il2cpp_TypeInfo_var))->get_Dead_9();
		if (!L_1)
		{
			goto IL_0076;
		}
	}
	{
		// EnemyCollider.enabled = false;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_2 = __this->get_EnemyCollider_6();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_2, (bool)0, /*hidden argument*/NULL);
		// EnemyAudioSource.clip = Deathsound;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3 = __this->get_EnemyAudioSource_7();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_4 = __this->get_Deathsound_8();
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_3, L_4, /*hidden argument*/NULL);
		// EnemyAudioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5 = __this->get_EnemyAudioSource_7();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_5, /*hidden argument*/NULL);
		// Destroy(gameObject, 5f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_6, (5.0f), /*hidden argument*/NULL);
		// EnemySpriteRenderer.color = new Color(1f, 0f, 0f, 1f);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_7 = __this->get_EnemySpriteRenderer_11();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_8), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_7, L_8, /*hidden argument*/NULL);
	}

IL_0076:
	{
		// if (collision.gameObject.tag == "Projectile")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_9 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_009f;
		}
	}
	{
		// CurrentHealth = CurrentHealth - Bullet.BulletDamage;
		float L_13 = __this->get_CurrentHealth_5();
		IL2CPP_RUNTIME_CLASS_INIT(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724_il2cpp_TypeInfo_var);
		float L_14 = ((Bullet_tF95A945B732B2B929938FB1028878BFBC0081724_StaticFields*)il2cpp_codegen_static_fields_for(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724_il2cpp_TypeInfo_var))->get_BulletDamage_5();
		__this->set_CurrentHealth_5(((float)il2cpp_codegen_subtract((float)L_13, (float)L_14)));
	}

IL_009f:
	{
		// }
		return;
	}
}
// System.Void EnemyHealth::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHealth_Update_mBCBBEB935216A5E61B4F9A5F6833A09301C0E8DF (EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C058FE20FD7652D620A17B5F9D6AE4EEFA76795);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Dead)
		bool L_0 = ((EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0_StaticFields*)il2cpp_codegen_static_fields_for(EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0_il2cpp_TypeInfo_var))->get_Dead_9();
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		// if (SceneCountdown >= 0)
		float L_1 = __this->get_SceneCountdown_10();
		if ((!(((float)L_1) >= ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		// SceneCountdown = SceneCountdown - Time.deltaTime;
		float L_2 = __this->get_SceneCountdown_10();
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_SceneCountdown_10(((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)));
		// }
		return;
	}

IL_0027:
	{
		// else if (SceneCountdown <= 0)
		float L_4 = __this->get_SceneCountdown_10();
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_003e;
		}
	}
	{
		// SceneManager.LoadScene("Credits");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral5C058FE20FD7652D620A17B5F9D6AE4EEFA76795, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void EnemyHealth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHealth__ctor_mF9FFC7A91A2AB12182655557BC05309E64E17AFE (EnemyHealth_tCE899729F13DE9E2D589DB582CE4B74DECF5BAB0 * __this, const RuntimeMethod* method)
{
	{
		// public float StartingHealth = 20;
		__this->set_StartingHealth_4((20.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
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
// System.Void EnemyManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyManager_Start_mD96A0F716F2B65C324A986F7169CE3239D770EE5 (EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72B58DE8F72FD344433A6CB297B24FE2EEE17AEF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InvokeRepeating("Spawn", spawnTime, spawnTime);
		float L_0 = __this->get_spawnTime_5();
		float L_1 = __this->get_spawnTime_5();
		MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70(__this, _stringLiteral72B58DE8F72FD344433A6CB297B24FE2EEE17AEF, L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyManager::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyManager_Spawn_m39C48F53BAB9D7FAF8E0E4A762E5265198366A57 (EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int spawnPointIndex = Random.Range(0, spawnPoints.Length);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_0 = __this->get_spawnPoints_6();
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), /*hidden argument*/NULL);
		V_0 = L_1;
		// Instantiate(enemy, spawnPoints[spawnPointIndex].position, spawnPoints[spawnPointIndex].rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_enemy_4();
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_3 = __this->get_spawnPoints_6();
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_8 = __this->get_spawnPoints_6();
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		L_12 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_2, L_7, L_12, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void EnemyManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyManager__ctor_mBDFE0474595BA9BB75EA8A31AD431DD91E7EB250 (EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1 * __this, const RuntimeMethod* method)
{
	{
		// public float spawnTime = 3f;
		__this->set_spawnTime_5((3.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
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
// System.Void EnemyProjectile::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyProjectile_Start_mBF819ABB342BF8C14D74F19BD6598B79FB45D6A6 (EnemyProjectile_t6B051C244553EDDE433E5342ACD62DE4DBC7C372 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m9111175A98A389A339114BB2D29BCE719C6B33B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// rb = GetComponent<Rigidbody2D> ();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rb_5(L_0);
		// target = GameObject.FindObjectOfType<PlayerMovement>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_1;
		L_1 = Object_FindObjectOfType_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m9111175A98A389A339114BB2D29BCE719C6B33B3(/*hidden argument*/Object_FindObjectOfType_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m9111175A98A389A339114BB2D29BCE719C6B33B3_RuntimeMethod_var);
		__this->set_target_6(L_1);
		// moveDirection = (target.transform.position - transform.position).normalized * moveSpeed;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_2 = __this->get_target_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_4, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		float L_9 = __this->get_moveSpeed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_8, L_9, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_10, /*hidden argument*/NULL);
		__this->set_moveDirection_7(L_11);
		// rb.velocity = new Vector2 (moveDirection.x, moveDirection.y);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_12 = __this->get_rb_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_13 = __this->get_address_of_moveDirection_7();
		float L_14 = L_13->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_15 = __this->get_address_of_moveDirection_7();
		float L_16 = L_15->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_17), L_14, L_16, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_12, L_17, /*hidden argument*/NULL);
		// Destroy (gameObject, 3f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_18, (3.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyProjectile::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyProjectile_OnTriggerEnter2D_m5FF8ABF0448DB0E81D46A667DB6B03496CB4F00E (EnemyProjectile_t6B051C244553EDDE433E5342ACD62DE4DBC7C372 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3402514A6504EAC3116A2358CD364CE6A2409455);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (col.gameObject.name.Equals ("Player")) {
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___col0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// Debug.Log ("Hit!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral3402514A6504EAC3116A2358CD364CE6A2409455, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void EnemyProjectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyProjectile__ctor_m59D6626052C43253D04D9F9659DE9DDB4294C97C (EnemyProjectile_t6B051C244553EDDE433E5342ACD62DE4DBC7C372 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
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
// System.Void ErrorScreenTransition::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorScreenTransition_Update_mCF0F1FF528265225E3AA1A0273967180DB2463CC (ErrorScreenTransition_t806C660950A2F6F42B00F351EE3F4014E505F0C1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE8C9D41B5E98F547B6B0676888A32E3FB113E61);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Return))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)13), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// SceneManager.LoadScene("RealOverworld");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralBE8C9D41B5E98F547B6B0676888A32E3FB113E61, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void ErrorScreenTransition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorScreenTransition__ctor_m2B0C2937A8028A5FA2F5DBBB983F90F55B510A40 (ErrorScreenTransition_t806C660950A2F6F42B00F351EE3F4014E505F0C1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
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
// System.Void FinalZone::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinalZone_OnTriggerEnter2D_m8BEEDE00C890A4DCC1900469E79ED6CC3B862596 (FinalZone_tC6A3D1470C1C4D28807583B42E72A9728D9A34BE * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4ECA613717A7CB149AD626352C286B1C7ECBA4B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Player")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// SceneManager.LoadScene("GoblinKingBossFight");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralD4ECA613717A7CB149AD626352C286B1C7ECBA4B, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void FinalZone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinalZone__ctor_m9CE977A08D85E310C418271A4495220C8A922BDC (FinalZone_tC6A3D1470C1C4D28807583B42E72A9728D9A34BE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
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
// System.Void FirstZone::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstZone_OnTriggerEnter2D_mB5CCE85DA85E55B31BE2EA94CC595D345B2857EB (FirstZone_tE583C78F09832203C5FF61994F727AD15D988DB3 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF57989A4BD66F3A7E13F65822F1C0ACACCDEC1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Player")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// SceneManager.LoadScene("DarkElfDrewBossFight");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralDF57989A4BD66F3A7E13F65822F1C0ACACCDEC1E, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void FirstZone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstZone__ctor_mAED90E2B618E271362C6C1DC08467BAFFFBCF4D7 (FirstZone_tE583C78F09832203C5FF61994F727AD15D988DB3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
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
// System.Void GlitchEffect::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlitchEffect_Start_mAE039EE061D9A20B55B9074187D1F9CEA3B8C02F (GlitchEffect_t55227EC987BF2E45B2722E27C7820F193F28C27A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _material = new Material(Shader);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = __this->get_Shader_5();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_1, L_0, /*hidden argument*/NULL);
		__this->set__material_15(L_1);
		// }
		return;
	}
}
// System.Void GlitchEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlitchEffect_OnRenderImage_mFF4F0A081334761455620ABBD9E49F81056D7C13 (GlitchEffect_t55227EC987BF2E45B2722E27C7820F193F28C27A * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___destination1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FFFE1936575F288A250A835BF9B9FE35024AC11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral226DF4A4DE3E6CC1A30D49B07FCAEF148B8D8DE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33287F105C03C1EEEA6FE0E3FD01FE17D1E27838);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E3AA2D144C34DB6F8864CDB223CC761B59084B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B7172609A94555A8CE815D1094AC8492EA51AA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC95869EFEB186FEF612C9FF42F15C1F9DC92842);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF051DB9824F616EC2A25A71502C6B4A33275C39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _material.SetFloat("_Intensity", intensity);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get__material_15();
		float L_1 = __this->get_intensity_6();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_0, _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E, L_1, /*hidden argument*/NULL);
		// _material.SetFloat("_ColorIntensity", colorIntensity);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get__material_15();
		float L_3 = __this->get_colorIntensity_8();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_2, _stringLiteral3E3AA2D144C34DB6F8864CDB223CC761B59084B9, L_3, /*hidden argument*/NULL);
		// _material.SetTexture("_DispTex", displacementMap);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get__material_15();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = __this->get_displacementMap_4();
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_4, _stringLiteralAF051DB9824F616EC2A25A71502C6B4A33275C39, L_5, /*hidden argument*/NULL);
		// flicker += Time.deltaTime * colorIntensity;
		float L_6 = __this->get_flicker_11();
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_8 = __this->get_colorIntensity_8();
		__this->set_flicker_11(((float)il2cpp_codegen_add((float)L_6, (float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)))));
		// if (flicker > _flickerTime)
		float L_9 = __this->get_flicker_11();
		float L_10 = __this->get__flickerTime_14();
		if ((!(((float)L_9) > ((float)L_10))))
		{
			goto IL_00e6;
		}
	}
	{
		// _material.SetFloat("filterRadius", Random.Range(-3f, 3f) * colorIntensity);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = __this->get__material_15();
		float L_12;
		L_12 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-3.0f), (3.0f), /*hidden argument*/NULL);
		float L_13 = __this->get_colorIntensity_8();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_11, _stringLiteral226DF4A4DE3E6CC1A30D49B07FCAEF148B8D8DE6, ((float)il2cpp_codegen_multiply((float)L_12, (float)L_13)), /*hidden argument*/NULL);
		// _material.SetVector("direction", Quaternion.AngleAxis(Random.Range(0, 360) * colorIntensity, Vector3.forward) * Vector4.one);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14 = __this->get__material_15();
		int32_t L_15;
		L_15 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)360), /*hidden argument*/NULL);
		float L_16 = __this->get_colorIntensity_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18;
		L_18 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398(((float)il2cpp_codegen_multiply((float)((float)((float)L_15)), (float)L_16)), L_17, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_19;
		L_19 = Vector4_get_one_m59B707729B52E58A045A6DE2ACDDE1D1600F48A4(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B(L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_18, L_20, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_22;
		L_22 = Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB(L_21, /*hidden argument*/NULL);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_14, _stringLiteral33287F105C03C1EEEA6FE0E3FD01FE17D1E27838, L_22, /*hidden argument*/NULL);
		// flicker = 0;
		__this->set_flicker_11((0.0f));
		// _flickerTime = Random.value;
		float L_23;
		L_23 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		__this->set__flickerTime_14(L_23);
	}

IL_00e6:
	{
		// if (colorIntensity == 0)
		float L_24 = __this->get_colorIntensity_8();
		if ((!(((float)L_24) == ((float)(0.0f)))))
		{
			goto IL_0108;
		}
	}
	{
		// _material.SetFloat("filterRadius", 0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_25 = __this->get__material_15();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_25, _stringLiteral226DF4A4DE3E6CC1A30D49B07FCAEF148B8D8DE6, (0.0f), /*hidden argument*/NULL);
	}

IL_0108:
	{
		// _glitchup += Time.deltaTime * flipIntensity;
		float L_26 = __this->get__glitchup_9();
		float L_27;
		L_27 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_28 = __this->get_flipIntensity_7();
		__this->set__glitchup_9(((float)il2cpp_codegen_add((float)L_26, (float)((float)il2cpp_codegen_multiply((float)L_27, (float)L_28)))));
		// if (_glitchup > _glitchupTime)
		float L_29 = __this->get__glitchup_9();
		float L_30 = __this->get__glitchupTime_12();
		if ((!(((float)L_29) > ((float)L_30))))
		{
			goto IL_019b;
		}
	}
	{
		// if (Random.value < 0.1f * flipIntensity)
		float L_31;
		L_31 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		float L_32 = __this->get_flipIntensity_7();
		if ((!(((float)L_31) < ((float)((float)il2cpp_codegen_multiply((float)(0.100000001f), (float)L_32))))))
		{
			goto IL_016a;
		}
	}
	{
		// _material.SetFloat("flip_up", Random.Range(0, 1f) * flipIntensity);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = __this->get__material_15();
		float L_34;
		L_34 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.0f), (1.0f), /*hidden argument*/NULL);
		float L_35 = __this->get_flipIntensity_7();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_33, _stringLiteral0FFFE1936575F288A250A835BF9B9FE35024AC11, ((float)il2cpp_codegen_multiply((float)L_34, (float)L_35)), /*hidden argument*/NULL);
		goto IL_017f;
	}

IL_016a:
	{
		// _material.SetFloat("flip_up", 0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36 = __this->get__material_15();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_36, _stringLiteral0FFFE1936575F288A250A835BF9B9FE35024AC11, (0.0f), /*hidden argument*/NULL);
	}

IL_017f:
	{
		// _glitchup = 0;
		__this->set__glitchup_9((0.0f));
		// _glitchupTime = Random.value / 10f;
		float L_37;
		L_37 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		__this->set__glitchupTime_12(((float)((float)L_37/(float)(10.0f))));
	}

IL_019b:
	{
		// if (flipIntensity == 0)
		float L_38 = __this->get_flipIntensity_7();
		if ((!(((float)L_38) == ((float)(0.0f)))))
		{
			goto IL_01bd;
		}
	}
	{
		// _material.SetFloat("flip_up", 0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_39 = __this->get__material_15();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_39, _stringLiteral0FFFE1936575F288A250A835BF9B9FE35024AC11, (0.0f), /*hidden argument*/NULL);
	}

IL_01bd:
	{
		// _glitchdown += Time.deltaTime * flipIntensity;
		float L_40 = __this->get__glitchdown_10();
		float L_41;
		L_41 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_42 = __this->get_flipIntensity_7();
		__this->set__glitchdown_10(((float)il2cpp_codegen_add((float)L_40, (float)((float)il2cpp_codegen_multiply((float)L_41, (float)L_42)))));
		// if (_glitchdown > _glitchdownTime)
		float L_43 = __this->get__glitchdown_10();
		float L_44 = __this->get__glitchdownTime_13();
		if ((!(((float)L_43) > ((float)L_44))))
		{
			goto IL_0256;
		}
	}
	{
		// if (Random.value < 0.1f * flipIntensity)
		float L_45;
		L_45 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		float L_46 = __this->get_flipIntensity_7();
		if ((!(((float)L_45) < ((float)((float)il2cpp_codegen_multiply((float)(0.100000001f), (float)L_46))))))
		{
			goto IL_0225;
		}
	}
	{
		// _material.SetFloat("flip_down", 1 - Random.Range(0, 1f) * flipIntensity);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_47 = __this->get__material_15();
		float L_48;
		L_48 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.0f), (1.0f), /*hidden argument*/NULL);
		float L_49 = __this->get_flipIntensity_7();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_47, _stringLiteral5B7172609A94555A8CE815D1094AC8492EA51AA1, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)L_48, (float)L_49)))), /*hidden argument*/NULL);
		goto IL_023a;
	}

IL_0225:
	{
		// _material.SetFloat("flip_down", 1);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_50 = __this->get__material_15();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_50, _stringLiteral5B7172609A94555A8CE815D1094AC8492EA51AA1, (1.0f), /*hidden argument*/NULL);
	}

IL_023a:
	{
		// _glitchdown = 0;
		__this->set__glitchdown_10((0.0f));
		// _glitchdownTime = Random.value / 10f;
		float L_51;
		L_51 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		__this->set__glitchdownTime_13(((float)((float)L_51/(float)(10.0f))));
	}

IL_0256:
	{
		// if (flipIntensity == 0)
		float L_52 = __this->get_flipIntensity_7();
		if ((!(((float)L_52) == ((float)(0.0f)))))
		{
			goto IL_0278;
		}
	}
	{
		// _material.SetFloat("flip_down", 1);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_53 = __this->get__material_15();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_53, _stringLiteral5B7172609A94555A8CE815D1094AC8492EA51AA1, (1.0f), /*hidden argument*/NULL);
	}

IL_0278:
	{
		// if (Random.value < 0.05 * intensity)
		float L_54;
		L_54 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		float L_55 = __this->get_intensity_6();
		if ((!(((double)((double)((double)L_54))) < ((double)((double)il2cpp_codegen_multiply((double)(0.050000000000000003), (double)((double)((double)L_55))))))))
		{
			goto IL_02d1;
		}
	}
	{
		// _material.SetFloat("displace", Random.value * intensity);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_56 = __this->get__material_15();
		float L_57;
		L_57 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		float L_58 = __this->get_intensity_6();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_56, _stringLiteralAC95869EFEB186FEF612C9FF42F15C1F9DC92842, ((float)il2cpp_codegen_multiply((float)L_57, (float)L_58)), /*hidden argument*/NULL);
		// _material.SetFloat("scale", 1 - Random.value * intensity);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_59 = __this->get__material_15();
		float L_60;
		L_60 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		float L_61 = __this->get_intensity_6();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_59, _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)L_60, (float)L_61)))), /*hidden argument*/NULL);
		// }
		goto IL_02e6;
	}

IL_02d1:
	{
		// _material.SetFloat("displace", 0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_62 = __this->get__material_15();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_62, _stringLiteralAC95869EFEB186FEF612C9FF42F15C1F9DC92842, (0.0f), /*hidden argument*/NULL);
	}

IL_02e6:
	{
		// Graphics.Blit(source, destination, _material);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_63 = ___source0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_64 = ___destination1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_65 = __this->get__material_15();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m5E0E60EA4A4D351DCC314AB2C49C7DC5B8863D05(L_63, L_64, L_65, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GlitchEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlitchEffect__ctor_m2C0CB478D40B44CA4766191698C0F5FC3CCF3F95 (GlitchEffect_t55227EC987BF2E45B2722E27C7820F193F28C27A * __this, const RuntimeMethod* method)
{
	{
		// private float _glitchupTime = 0.05f;
		__this->set__glitchupTime_12((0.0500000007f));
		// private float _glitchdownTime = 0.05f;
		__this->set__glitchdownTime_13((0.0500000007f));
		// private float _flickerTime = 0.5f;
		__this->set__flickerTime_14((0.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
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
// System.Void GlitchEffectHeavy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlitchEffectHeavy_Start_mB8FC0411044E87D0D0C6EE439C7DBB344E247049 (GlitchEffectHeavy_tEB28CC95824206EBF88373EB714E1ADED638ADDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _material = new Material(Shader);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = __this->get_Shader_5();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_1, L_0, /*hidden argument*/NULL);
		__this->set__material_15(L_1);
		// }
		return;
	}
}
// System.Void GlitchEffectHeavy::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlitchEffectHeavy_OnRenderImage_m06D940024A12DAB782E9A0A91BFFE9B8DA6B943B (GlitchEffectHeavy_tEB28CC95824206EBF88373EB714E1ADED638ADDC * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___destination1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FFFE1936575F288A250A835BF9B9FE35024AC11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral226DF4A4DE3E6CC1A30D49B07FCAEF148B8D8DE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33287F105C03C1EEEA6FE0E3FD01FE17D1E27838);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E3AA2D144C34DB6F8864CDB223CC761B59084B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B7172609A94555A8CE815D1094AC8492EA51AA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC95869EFEB186FEF612C9FF42F15C1F9DC92842);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF051DB9824F616EC2A25A71502C6B4A33275C39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _material.SetFloat("_Intensity", intensity);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get__material_15();
		float L_1 = __this->get_intensity_6();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_0, _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E, L_1, /*hidden argument*/NULL);
		// _material.SetFloat("_ColorIntensity", colorIntensity);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get__material_15();
		float L_3 = __this->get_colorIntensity_8();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_2, _stringLiteral3E3AA2D144C34DB6F8864CDB223CC761B59084B9, L_3, /*hidden argument*/NULL);
		// _material.SetTexture("_DispTex", displacementMap);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get__material_15();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = __this->get_displacementMap_4();
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_4, _stringLiteralAF051DB9824F616EC2A25A71502C6B4A33275C39, L_5, /*hidden argument*/NULL);
		// flicker += Time.deltaTime * colorIntensity;
		float L_6 = __this->get_flicker_11();
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_8 = __this->get_colorIntensity_8();
		__this->set_flicker_11(((float)il2cpp_codegen_add((float)L_6, (float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)))));
		// if (flicker > _flickerTime)
		float L_9 = __this->get_flicker_11();
		float L_10 = __this->get__flickerTime_14();
		if ((!(((float)L_9) > ((float)L_10))))
		{
			goto IL_00e6;
		}
	}
	{
		// _material.SetFloat("filterRadius", Random.Range(-3f, 3f) * colorIntensity);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = __this->get__material_15();
		float L_12;
		L_12 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-3.0f), (3.0f), /*hidden argument*/NULL);
		float L_13 = __this->get_colorIntensity_8();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_11, _stringLiteral226DF4A4DE3E6CC1A30D49B07FCAEF148B8D8DE6, ((float)il2cpp_codegen_multiply((float)L_12, (float)L_13)), /*hidden argument*/NULL);
		// _material.SetVector("direction", Quaternion.AngleAxis(Random.Range(0, 360) * colorIntensity, Vector3.forward) * Vector4.one);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14 = __this->get__material_15();
		int32_t L_15;
		L_15 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)360), /*hidden argument*/NULL);
		float L_16 = __this->get_colorIntensity_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18;
		L_18 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398(((float)il2cpp_codegen_multiply((float)((float)((float)L_15)), (float)L_16)), L_17, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_19;
		L_19 = Vector4_get_one_m59B707729B52E58A045A6DE2ACDDE1D1600F48A4(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B(L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_18, L_20, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_22;
		L_22 = Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB(L_21, /*hidden argument*/NULL);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_14, _stringLiteral33287F105C03C1EEEA6FE0E3FD01FE17D1E27838, L_22, /*hidden argument*/NULL);
		// flicker = 0;
		__this->set_flicker_11((0.0f));
		// _flickerTime = Random.value;
		float L_23;
		L_23 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		__this->set__flickerTime_14(L_23);
	}

IL_00e6:
	{
		// if (colorIntensity == 0)
		float L_24 = __this->get_colorIntensity_8();
		if ((!(((float)L_24) == ((float)(0.0f)))))
		{
			goto IL_0108;
		}
	}
	{
		// _material.SetFloat("filterRadius", 0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_25 = __this->get__material_15();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_25, _stringLiteral226DF4A4DE3E6CC1A30D49B07FCAEF148B8D8DE6, (0.0f), /*hidden argument*/NULL);
	}

IL_0108:
	{
		// _glitchup += Time.deltaTime * flipIntensity;
		float L_26 = __this->get__glitchup_9();
		float L_27;
		L_27 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_28 = __this->get_flipIntensity_7();
		__this->set__glitchup_9(((float)il2cpp_codegen_add((float)L_26, (float)((float)il2cpp_codegen_multiply((float)L_27, (float)L_28)))));
		// if (_glitchup > _glitchupTime)
		float L_29 = __this->get__glitchup_9();
		float L_30 = __this->get__glitchupTime_12();
		if ((!(((float)L_29) > ((float)L_30))))
		{
			goto IL_019b;
		}
	}
	{
		// if (Random.value < 0.1f * flipIntensity)
		float L_31;
		L_31 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		float L_32 = __this->get_flipIntensity_7();
		if ((!(((float)L_31) < ((float)((float)il2cpp_codegen_multiply((float)(0.100000001f), (float)L_32))))))
		{
			goto IL_016a;
		}
	}
	{
		// _material.SetFloat("flip_up", Random.Range(0, 1f) * flipIntensity);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = __this->get__material_15();
		float L_34;
		L_34 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.0f), (1.0f), /*hidden argument*/NULL);
		float L_35 = __this->get_flipIntensity_7();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_33, _stringLiteral0FFFE1936575F288A250A835BF9B9FE35024AC11, ((float)il2cpp_codegen_multiply((float)L_34, (float)L_35)), /*hidden argument*/NULL);
		goto IL_017f;
	}

IL_016a:
	{
		// _material.SetFloat("flip_up", 0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36 = __this->get__material_15();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_36, _stringLiteral0FFFE1936575F288A250A835BF9B9FE35024AC11, (0.0f), /*hidden argument*/NULL);
	}

IL_017f:
	{
		// _glitchup = 0;
		__this->set__glitchup_9((0.0f));
		// _glitchupTime = Random.value / 10f;
		float L_37;
		L_37 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		__this->set__glitchupTime_12(((float)((float)L_37/(float)(10.0f))));
	}

IL_019b:
	{
		// if (flipIntensity == 0)
		float L_38 = __this->get_flipIntensity_7();
		if ((!(((float)L_38) == ((float)(0.0f)))))
		{
			goto IL_01bd;
		}
	}
	{
		// _material.SetFloat("flip_up", 0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_39 = __this->get__material_15();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_39, _stringLiteral0FFFE1936575F288A250A835BF9B9FE35024AC11, (0.0f), /*hidden argument*/NULL);
	}

IL_01bd:
	{
		// _glitchdown += Time.deltaTime * flipIntensity;
		float L_40 = __this->get__glitchdown_10();
		float L_41;
		L_41 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_42 = __this->get_flipIntensity_7();
		__this->set__glitchdown_10(((float)il2cpp_codegen_add((float)L_40, (float)((float)il2cpp_codegen_multiply((float)L_41, (float)L_42)))));
		// if (_glitchdown > _glitchdownTime)
		float L_43 = __this->get__glitchdown_10();
		float L_44 = __this->get__glitchdownTime_13();
		if ((!(((float)L_43) > ((float)L_44))))
		{
			goto IL_0256;
		}
	}
	{
		// if (Random.value < 0.1f * flipIntensity)
		float L_45;
		L_45 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		float L_46 = __this->get_flipIntensity_7();
		if ((!(((float)L_45) < ((float)((float)il2cpp_codegen_multiply((float)(0.100000001f), (float)L_46))))))
		{
			goto IL_0225;
		}
	}
	{
		// _material.SetFloat("flip_down", 1 - Random.Range(0, 1f) * flipIntensity);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_47 = __this->get__material_15();
		float L_48;
		L_48 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.0f), (1.0f), /*hidden argument*/NULL);
		float L_49 = __this->get_flipIntensity_7();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_47, _stringLiteral5B7172609A94555A8CE815D1094AC8492EA51AA1, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)L_48, (float)L_49)))), /*hidden argument*/NULL);
		goto IL_023a;
	}

IL_0225:
	{
		// _material.SetFloat("flip_down", 1);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_50 = __this->get__material_15();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_50, _stringLiteral5B7172609A94555A8CE815D1094AC8492EA51AA1, (1.0f), /*hidden argument*/NULL);
	}

IL_023a:
	{
		// _glitchdown = 0;
		__this->set__glitchdown_10((0.0f));
		// _glitchdownTime = Random.value / 10f;
		float L_51;
		L_51 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		__this->set__glitchdownTime_13(((float)((float)L_51/(float)(10.0f))));
	}

IL_0256:
	{
		// if (flipIntensity == 0)
		float L_52 = __this->get_flipIntensity_7();
		if ((!(((float)L_52) == ((float)(0.0f)))))
		{
			goto IL_0278;
		}
	}
	{
		// _material.SetFloat("flip_down", 1);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_53 = __this->get__material_15();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_53, _stringLiteral5B7172609A94555A8CE815D1094AC8492EA51AA1, (1.0f), /*hidden argument*/NULL);
	}

IL_0278:
	{
		// if (Random.value < 0.05 * intensity)
		float L_54;
		L_54 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		float L_55 = __this->get_intensity_6();
		if ((!(((double)((double)((double)L_54))) < ((double)((double)il2cpp_codegen_multiply((double)(0.050000000000000003), (double)((double)((double)L_55))))))))
		{
			goto IL_02d1;
		}
	}
	{
		// _material.SetFloat("displace", Random.value * intensity);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_56 = __this->get__material_15();
		float L_57;
		L_57 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		float L_58 = __this->get_intensity_6();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_56, _stringLiteralAC95869EFEB186FEF612C9FF42F15C1F9DC92842, ((float)il2cpp_codegen_multiply((float)L_57, (float)L_58)), /*hidden argument*/NULL);
		// _material.SetFloat("scale", 1 - Random.value * intensity);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_59 = __this->get__material_15();
		float L_60;
		L_60 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		float L_61 = __this->get_intensity_6();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_59, _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)L_60, (float)L_61)))), /*hidden argument*/NULL);
		// }
		goto IL_02e6;
	}

IL_02d1:
	{
		// _material.SetFloat("displace", 0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_62 = __this->get__material_15();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_62, _stringLiteralAC95869EFEB186FEF612C9FF42F15C1F9DC92842, (0.0f), /*hidden argument*/NULL);
	}

IL_02e6:
	{
		// Graphics.Blit(source, destination, _material);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_63 = ___source0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_64 = ___destination1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_65 = __this->get__material_15();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m5E0E60EA4A4D351DCC314AB2C49C7DC5B8863D05(L_63, L_64, L_65, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GlitchEffectHeavy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlitchEffectHeavy__ctor_mAF74660608FE00C8504208D9C425DC469C2B7FDB (GlitchEffectHeavy_tEB28CC95824206EBF88373EB714E1ADED638ADDC * __this, const RuntimeMethod* method)
{
	{
		// private float _glitchupTime = 0.05f;
		__this->set__glitchupTime_12((0.0500000007f));
		// private float _glitchdownTime = 0.05f;
		__this->set__glitchdownTime_13((0.0500000007f));
		// private float _flickerTime = 0.5f;
		__this->set__flickerTime_14((0.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
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
// System.Void MenuManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_Awake_mEFBAF3F8CBDEF5A033B3BAD9CA897801135B6463 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	{
		// MainMenu.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_MainMenu_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// InstructionsPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_InstructionsPanel_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_StartGame_mAAAE37B8FA23E525511FB82B78A599DE1407E84C (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26E8E171770486BAAD116FD2A75E03500991BD99);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("FantasyOverworld");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral26E8E171770486BAAD116FD2A75E03500991BD99, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::TitleScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_TitleScreen_mA7252EB120C95B137DB1061AB1A4933B0B346B80 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	{
		// MainMenu.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_MainMenu_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// InstructionsPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_InstructionsPanel_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::Instructions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_Instructions_m97998B138FA3B0277603926CE6E712D4616CFF0F (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	{
		// MainMenu.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_MainMenu_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// InstructionsPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_InstructionsPanel_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager__ctor_m8F61CC885B72291B54C1C6EC368AE303EA856529 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
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
// System.Void NoahHealth::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoahHealth_Awake_m1CE19976084E60F2B3BFE3882DA26639AAC16B29 (NoahHealth_t7E9CA51C0B8E8148EC410EED3679CDC73D22BFF7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CurrentHealth = StartingHealth;
		float L_0 = __this->get_StartingHealth_4();
		__this->set_CurrentHealth_5(L_0);
		// EnemyCollider = GetComponent<BoxCollider2D>();
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_1;
		L_1 = Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		__this->set_EnemyCollider_6(L_1);
		// EnemyAudioSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2;
		L_2 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_EnemyAudioSource_7(L_2);
		// EnemySpriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_3;
		L_3 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_EnemySpriteRenderer_10(L_3);
		// }
		return;
	}
}
// System.Void NoahHealth::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoahHealth_OnTriggerEnter2D_m2414D37396F53B8800BB58FB62B8BACA18D97249 (NoahHealth_t7E9CA51C0B8E8148EC410EED3679CDC73D22BFF7 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bullet_tF95A945B732B2B929938FB1028878BFBC0081724_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoahHealth_t7E9CA51C0B8E8148EC410EED3679CDC73D22BFF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CurrentHealth <= 0)
		float L_0 = __this->get_CurrentHealth_5();
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_0013;
		}
	}
	{
		// NoahDead = true;
		((NoahHealth_t7E9CA51C0B8E8148EC410EED3679CDC73D22BFF7_StaticFields*)il2cpp_codegen_static_fields_for(NoahHealth_t7E9CA51C0B8E8148EC410EED3679CDC73D22BFF7_il2cpp_TypeInfo_var))->set_NoahDead_9((bool)1);
	}

IL_0013:
	{
		// if (NoahDead)
		bool L_1 = ((NoahHealth_t7E9CA51C0B8E8148EC410EED3679CDC73D22BFF7_StaticFields*)il2cpp_codegen_static_fields_for(NoahHealth_t7E9CA51C0B8E8148EC410EED3679CDC73D22BFF7_il2cpp_TypeInfo_var))->get_NoahDead_9();
		if (!L_1)
		{
			goto IL_0076;
		}
	}
	{
		// EnemyCollider.enabled = false;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_2 = __this->get_EnemyCollider_6();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_2, (bool)0, /*hidden argument*/NULL);
		// EnemyAudioSource.clip = Deathsound;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3 = __this->get_EnemyAudioSource_7();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_4 = __this->get_Deathsound_8();
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_3, L_4, /*hidden argument*/NULL);
		// EnemyAudioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5 = __this->get_EnemyAudioSource_7();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_5, /*hidden argument*/NULL);
		// Destroy(gameObject, 5f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_6, (5.0f), /*hidden argument*/NULL);
		// EnemySpriteRenderer.color = new Color(1f, 0f, 0f, 1f);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_7 = __this->get_EnemySpriteRenderer_10();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_8), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_7, L_8, /*hidden argument*/NULL);
	}

IL_0076:
	{
		// if (collision.gameObject.tag == "Projectile")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_9 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_009f;
		}
	}
	{
		// CurrentHealth = CurrentHealth - Bullet.BulletDamage;
		float L_13 = __this->get_CurrentHealth_5();
		IL2CPP_RUNTIME_CLASS_INIT(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724_il2cpp_TypeInfo_var);
		float L_14 = ((Bullet_tF95A945B732B2B929938FB1028878BFBC0081724_StaticFields*)il2cpp_codegen_static_fields_for(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724_il2cpp_TypeInfo_var))->get_BulletDamage_5();
		__this->set_CurrentHealth_5(((float)il2cpp_codegen_subtract((float)L_13, (float)L_14)));
	}

IL_009f:
	{
		// }
		return;
	}
}
// System.Void NoahHealth::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoahHealth_Update_m142E5B5790EA8E86DFC813C57A45AD430AC539D7 (NoahHealth_t7E9CA51C0B8E8148EC410EED3679CDC73D22BFF7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoahHealth_t7E9CA51C0B8E8148EC410EED3679CDC73D22BFF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE57AFD3E907CD66354C1DD2D25B0A86D1F2ADCD0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (NoahDead)
		bool L_0 = ((NoahHealth_t7E9CA51C0B8E8148EC410EED3679CDC73D22BFF7_StaticFields*)il2cpp_codegen_static_fields_for(NoahHealth_t7E9CA51C0B8E8148EC410EED3679CDC73D22BFF7_il2cpp_TypeInfo_var))->get_NoahDead_9();
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		// if (SceneCountdown >= 0)
		float L_1 = __this->get_SceneCountdown_11();
		if ((!(((float)L_1) >= ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		// SceneCountdown = SceneCountdown - Time.deltaTime;
		float L_2 = __this->get_SceneCountdown_11();
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_SceneCountdown_11(((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)));
		// }
		return;
	}

IL_0027:
	{
		// else if (SceneCountdown <= 0)
		float L_4 = __this->get_SceneCountdown_11();
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_003e;
		}
	}
	{
		// SceneManager.LoadScene("ErrorScreen");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralE57AFD3E907CD66354C1DD2D25B0A86D1F2ADCD0, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void NoahHealth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoahHealth__ctor_m71C820D284F390FD1DA6D682983F27EB18844CF0 (NoahHealth_t7E9CA51C0B8E8148EC410EED3679CDC73D22BFF7 * __this, const RuntimeMethod* method)
{
	{
		// public float StartingHealth = 20;
		__this->set_StartingHealth_4((20.0f));
		// public float SceneCountdown = 4f;
		__this->set_SceneCountdown_11((4.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
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
// System.Void PlayerHealth::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth_Awake_mAAE46D81BDF15DAB42978340A0043F55CCD4BF38 (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Life = MaxLife;
		int32_t L_0 = __this->get_MaxLife_12();
		((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->set_Life_5(L_0);
		// RespawnTime = 5f;
		__this->set_RespawnTime_10((5.0f));
		// PlayerAudio = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1;
		L_1 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_PlayerAudio_18(L_1);
		// PlayerBoxCollider = GetComponent<BoxCollider2D>();
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_2;
		L_2 = Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		__this->set_PlayerBoxCollider_11(L_2);
		// }
		return;
	}
}
// System.Void PlayerHealth::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth_Update_m4ACD2FDDEBE8DC21C71BB853A975D03DD65061B3 (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Life < 1)
		int32_t L_0 = ((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->get_Life_5();
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_001f;
		}
	}
	{
		// HitPoints[0].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_HitPoints_4();
		int32_t L_2 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// dead = true;
		__this->set_dead_16((bool)1);
		// }
		goto IL_002d;
	}

IL_001f:
	{
		// HitPoints[0].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = __this->get_HitPoints_4();
		int32_t L_5 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// if (Life < 2)
		int32_t L_7 = ((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->get_Life_5();
		if ((((int32_t)L_7) >= ((int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		// HitPoints[1].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_8 = __this->get_HitPoints_4();
		int32_t L_9 = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_0061;
	}

IL_0045:
	{
		// HitPoints[0].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = __this->get_HitPoints_4();
		int32_t L_12 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)1, /*hidden argument*/NULL);
		// HitPoints[1].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = __this->get_HitPoints_4();
		int32_t L_15 = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, (bool)1, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// if (Life < 3)
		int32_t L_17 = ((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->get_Life_5();
		if ((((int32_t)L_17) >= ((int32_t)3)))
		{
			goto IL_0079;
		}
	}
	{
		// HitPoints[2].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_18 = __this->get_HitPoints_4();
		int32_t L_19 = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_20, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_00a3;
	}

IL_0079:
	{
		// HitPoints[0].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_21 = __this->get_HitPoints_4();
		int32_t L_22 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_23, (bool)1, /*hidden argument*/NULL);
		// HitPoints[1].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_24 = __this->get_HitPoints_4();
		int32_t L_25 = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_26, (bool)1, /*hidden argument*/NULL);
		// HitPoints[2].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_27 = __this->get_HitPoints_4();
		int32_t L_28 = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_29, (bool)1, /*hidden argument*/NULL);
	}

IL_00a3:
	{
		// if (damaged)
		bool L_30 = __this->get_damaged_14();
		if (!L_30)
		{
			goto IL_00be;
		}
	}
	{
		// OverlayImage.color = hurtColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_31 = __this->get_OverlayImage_6();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_32 = __this->get_hurtColor_7();
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_31, L_32);
		// }
		goto IL_00ea;
	}

IL_00be:
	{
		// OverlayImage.color = Color.Lerp(OverlayImage.color, Color.clear, flashSpeed * Time.deltaTime);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_33 = __this->get_OverlayImage_6();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_34 = __this->get_OverlayImage_6();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_35;
		L_35 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_34);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_36;
		L_36 = Color_get_clear_m9F8076CEFE7B8119A9903212DCBF2BFED114E97F(/*hidden argument*/NULL);
		float L_37 = __this->get_flashSpeed_9();
		float L_38;
		L_38 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_39;
		L_39 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_35, L_36, ((float)il2cpp_codegen_multiply((float)L_37, (float)L_38)), /*hidden argument*/NULL);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_33, L_39);
	}

IL_00ea:
	{
		// damaged = false;
		__this->set_damaged_14((bool)0);
		// if (healed)
		bool L_40 = __this->get_healed_15();
		if (!L_40)
		{
			goto IL_010c;
		}
	}
	{
		// OverlayImage.color = healColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_41 = __this->get_OverlayImage_6();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_42 = __this->get_healColor_8();
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_41, L_42);
		// }
		goto IL_0138;
	}

IL_010c:
	{
		// OverlayImage.color = Color.Lerp(OverlayImage.color, Color.clear, flashSpeed * Time.deltaTime);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_43 = __this->get_OverlayImage_6();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_44 = __this->get_OverlayImage_6();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_45;
		L_45 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_44);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_46;
		L_46 = Color_get_clear_m9F8076CEFE7B8119A9903212DCBF2BFED114E97F(/*hidden argument*/NULL);
		float L_47 = __this->get_flashSpeed_9();
		float L_48;
		L_48 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_49;
		L_49 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_45, L_46, ((float)il2cpp_codegen_multiply((float)L_47, (float)L_48)), /*hidden argument*/NULL);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_43, L_49);
	}

IL_0138:
	{
		// if (dead)
		bool L_50 = __this->get_dead_16();
		if (!L_50)
		{
			goto IL_0174;
		}
	}
	{
		// if (RespawnTime >= 0)
		float L_51 = __this->get_RespawnTime_10();
		if ((!(((float)L_51) >= ((float)(0.0f)))))
		{
			goto IL_0161;
		}
	}
	{
		// RespawnTime = RespawnTime - Time.deltaTime;
		float L_52 = __this->get_RespawnTime_10();
		float L_53;
		L_53 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_RespawnTime_10(((float)il2cpp_codegen_subtract((float)L_52, (float)L_53)));
		// }
		goto IL_0174;
	}

IL_0161:
	{
		// else if (RespawnTime <= 0)
		float L_54 = __this->get_RespawnTime_10();
		if ((!(((float)L_54) <= ((float)(0.0f)))))
		{
			goto IL_0174;
		}
	}
	{
		// ReloadLevel();
		PlayerHealth_ReloadLevel_m34F341F7DE64183661155CB66AEF2F3D269EB6FC(__this, /*hidden argument*/NULL);
	}

IL_0174:
	{
		// healed = false;
		__this->set_healed_15((bool)0);
		// }
		return;
	}
}
// System.Void PlayerHealth::TakeDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth_TakeDamage_m4CD8DFCFE558D2C5D7B3EF29743B66B8C24EB53D (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Life = Life - 1;
		int32_t L_0 = ((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->get_Life_5();
		((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->set_Life_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// if (Life < MinLife)
		int32_t L_1 = ((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->get_Life_5();
		int32_t L_2 = __this->get_MinLife_13();
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0024;
		}
	}
	{
		// Life = MinLife;
		int32_t L_3 = __this->get_MinLife_13();
		((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->set_Life_5(L_3);
	}

IL_0024:
	{
		// damaged = true;
		__this->set_damaged_14((bool)1);
		// if (Life < 1)
		int32_t L_4 = ((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->get_Life_5();
		if ((((int32_t)L_4) >= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		// Death();
		PlayerHealth_Death_m61D4C1DCE50D79778005D6CE45290F9D6A54E123(__this, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void PlayerHealth::Heal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth_Heal_mD2B425144BC05208AAA523D9DD7AD6D344B3C96D (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Life = Life + 1;
		int32_t L_0 = ((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->get_Life_5();
		((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->set_Life_5(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// if (Life > MaxLife)
		int32_t L_1 = ((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->get_Life_5();
		int32_t L_2 = __this->get_MaxLife_12();
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0024;
		}
	}
	{
		// Life = MaxLife;
		int32_t L_3 = __this->get_MaxLife_12();
		((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->set_Life_5(L_3);
	}

IL_0024:
	{
		// healed = true;
		__this->set_healed_15((bool)1);
		// }
		return;
	}
}
// System.Void PlayerHealth::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth_OnTriggerEnter2D_m5D21A0886DDA60146BA4B5ED0C2A0C4EE0D20766 (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral447A063EFA3CD25D6F85DABD675D0B88DFE5F1B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80EA192AC016417AAAFE77A894354CD74FD4AA6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4DAD86AE022C6DF2CA3949A3D01CD43055BD6FC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (col.gameObject.tag == "Hazard") {
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___col0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral80EA192AC016417AAAFE77A894354CD74FD4AA6B, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// TakeDamage();
		PlayerHealth_TakeDamage_m4CD8DFCFE558D2C5D7B3EF29743B66B8C24EB53D(__this, /*hidden argument*/NULL);
		// Debug.Log("Collision Detected");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralE4DAD86AE022C6DF2CA3949A3D01CD43055BD6FC, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// if (col.gameObject.tag == "HealthItem")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4 = ___col0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteral447A063EFA3CD25D6F85DABD675D0B88DFE5F1B2, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		// if (Life < MaxLife)
		int32_t L_8 = ((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->get_Life_5();
		int32_t L_9 = __this->get_MaxLife_12();
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0066;
		}
	}
	{
		// Heal();
		PlayerHealth_Heal_mD2B425144BC05208AAA523D9DD7AD6D344B3C96D(__this, /*hidden argument*/NULL);
		// Debug.Log("Collision Detected");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralE4DAD86AE022C6DF2CA3949A3D01CD43055BD6FC, /*hidden argument*/NULL);
		// Destroy(col.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_10 = ___col0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_11, /*hidden argument*/NULL);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void PlayerHealth::Death()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth_Death_m61D4C1DCE50D79778005D6CE45290F9D6A54E123 (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, const RuntimeMethod* method)
{
	{
		// PlayerAudio.clip = DeathClip;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_PlayerAudio_18();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = __this->get_DeathClip_17();
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_0, L_1, /*hidden argument*/NULL);
		// PlayerAudio.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = __this->get_PlayerAudio_18();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_2, /*hidden argument*/NULL);
		// PlayerBoxCollider.enabled = false;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = __this->get_PlayerBoxCollider_11();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_3, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerHealth::ReloadLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth_ReloadLevel_m34F341F7DE64183661155CB66AEF2F3D269EB6FC (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerHealth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth__ctor_mE9AF3CA69205909E44287664BEAE503EC43875F1 (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, const RuntimeMethod* method)
{
	{
		// public Color hurtColor = new Color(1f, 0f, 0f, 1f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_hurtColor_7(L_0);
		// public Color healColor = new Color(0f, 0f, 1f, 1f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_1), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_healColor_8(L_1);
		// public float flashSpeed = 10f;
		__this->set_flashSpeed_9((10.0f));
		// public float RespawnTime = 5f;
		__this->set_RespawnTime_10((5.0f));
		// public int MaxLife = 3;
		__this->set_MaxLife_12(3);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
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
// System.Void PlayerMovement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Awake_m441E25AABE54B8C5068808DB8025B67B9A7EA87E (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerSpriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_PlayerSpriteRenderer_7(L_0);
		// }
		return;
	}
}
// System.Void PlayerMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Update_mC3491BD6CDFF1FA543B16969144C939B2298052F (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ProcessInputs();
		PlayerMovement_ProcessInputs_m5DD18B0073E0B8159A0437D9ACCBE0490DAF3AAA(__this, /*hidden argument*/NULL);
		// if (PlayerHealth.Life < 1)
		int32_t L_0 = ((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->get_Life_5();
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		// MovementSpeed = 0;
		__this->set_MovementSpeed_4((0.0f));
		// PlayerSpriteRenderer.flipY = true;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1 = __this->get_PlayerSpriteRenderer_7();
		SpriteRenderer_set_flipY_m7DFB2D1118142BE6C76470474F2ECAED234B0A01(L_1, (bool)1, /*hidden argument*/NULL);
		// PlayerSpriteRenderer.color = new Color(1f, 0f, 0f, 1f);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2 = __this->get_PlayerSpriteRenderer_7();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_3), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void PlayerMovement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_FixedUpdate_m774280268A537B6ED9D9171CEAE67E9A0C3A9499 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		// Movement();
		PlayerMovement_Movement_m429843BB8B4AC7152E1FBD70D59D217BA170F047(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::ProcessInputs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_ProcessInputs_m5DD18B0073E0B8159A0437D9ACCBE0490DAF3AAA (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float moveX = Input.GetAxisRaw("Horizontal");
		float L_0;
		L_0 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		V_0 = L_0;
		// float moveY = Input.GetAxisRaw("Vertical");
		float L_1;
		L_1 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		V_1 = L_1;
		// MovementDirection = new Vector2(moveX, moveY).normalized;
		float L_2 = V_0;
		float L_3 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), /*hidden argument*/NULL);
		__this->set_MovementDirection_8(L_5);
		// if (Input.GetKeyDown(KeyCode.D) || Input.GetKeyDown(KeyCode.LeftArrow))
		bool L_6;
		L_6 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)100), /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0040;
		}
	}
	{
		bool L_7;
		L_7 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)276), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0055;
		}
	}

IL_0040:
	{
		// if (!(PlayerHealth.Life < 1))
		int32_t L_8 = ((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->get_Life_5();
		if ((((int32_t)L_8) < ((int32_t)1)))
		{
			goto IL_007e;
		}
	}
	{
		// PlayerSpriteRenderer.flipX = true;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_9 = __this->get_PlayerSpriteRenderer_7();
		SpriteRenderer_set_flipX_mD3AB83CC6D742A69F1B52376D1636CAA2E44B67E(L_9, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0055:
	{
		// else if (Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.RightArrow))
		bool L_10;
		L_10 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)97), /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_006a;
		}
	}
	{
		bool L_11;
		L_11 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)275), /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_007e;
		}
	}

IL_006a:
	{
		// if (!(PlayerHealth.Life < 1))
		int32_t L_12 = ((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->get_Life_5();
		if ((((int32_t)L_12) < ((int32_t)1)))
		{
			goto IL_007e;
		}
	}
	{
		// PlayerSpriteRenderer.flipX = false;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_13 = __this->get_PlayerSpriteRenderer_7();
		SpriteRenderer_set_flipX_mD3AB83CC6D742A69F1B52376D1636CAA2E44B67E(L_13, (bool)0, /*hidden argument*/NULL);
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void PlayerMovement::Movement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Movement_m429843BB8B4AC7152E1FBD70D59D217BA170F047 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		// PlayerRB.velocity = new Vector2(MovementDirection.x * MovementSpeed, MovementDirection.y * MovementSpeed);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_PlayerRB_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_1 = __this->get_address_of_MovementDirection_8();
		float L_2 = L_1->get_x_0();
		float L_3 = __this->get_MovementSpeed_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_4 = __this->get_address_of_MovementDirection_8();
		float L_5 = L_4->get_y_1();
		float L_6 = __this->get_MovementSpeed_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_7), ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), ((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_0, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_mBF9F632DD9929DD6FF092A968649A4406BFE397F (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
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
// System.Void RealFirstZone::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealFirstZone_OnTriggerEnter2D_mA3E5F6E29AB5D2E863AF9C506ED0DE7FD247990C (RealFirstZone_t74C83DB9842A65A0A01322BF43E65CCD04C71D12 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral346A5DC9F5EA6CA8508B3FE32C9B4EDADDA14249);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Player")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// SceneManager.LoadScene("TrueDrewBossFight");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral346A5DC9F5EA6CA8508B3FE32C9B4EDADDA14249, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void RealFirstZone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealFirstZone__ctor_m6BCFB29E186498A2B8D58E71EE698B6E127FFE9D (RealFirstZone_t74C83DB9842A65A0A01322BF43E65CCD04C71D12 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
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
// System.Void RealSecondZone::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealSecondZone_OnTriggerEnter2D_mBD4CEDB0FEA1E38C0A32243AECB11463F417BD50 (RealSecondZone_t60466AD4FB1505BF3C4125BC8D17FBAD73B5F6CB * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE923E7B860F429E566CA517673123E8B5E6C9E5F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Player")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// SceneManager.LoadScene("TrueNoahBossFight");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralE923E7B860F429E566CA517673123E8B5E6C9E5F, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void RealSecondZone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealSecondZone__ctor_mBE001CC01728B4DB596E057B5DB685B2EBE48047 (RealSecondZone_t60466AD4FB1505BF3C4125BC8D17FBAD73B5F6CB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
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
// System.Void SecondZoneScript::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondZoneScript_OnTriggerEnter2D_mDAD731720A7B67B13B9E2B95F32CAC52A6A3496C (SecondZoneScript_tFBD2ED4B5D7AA6023B9EC486C526A2AA6D529430 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC308BCA9DC8170C2222A99D9CB99ABBC5ACA059);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Player")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// SceneManager.LoadScene("WyvernNoahBossFight");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralAC308BCA9DC8170C2222A99D9CB99ABBC5ACA059, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void SecondZoneScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondZoneScript__ctor_m15E59392FB9CC2A97329E68AC2530DED10B195CB (SecondZoneScript_tFBD2ED4B5D7AA6023B9EC486C526A2AA6D529430 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
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
// System.Void TrueDrewHealth::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrueDrewHealth_Awake_m0F274CE5DA9E8486162D391ACF0561D79E2AC93D (TrueDrewHealth_tC50C7A42EA7AACA7FA51DB9E5AABD1B945F7AE16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CurrentHealth = StartingHealth;
		float L_0 = __this->get_StartingHealth_4();
		__this->set_CurrentHealth_5(L_0);
		// EnemyCollider = GetComponent<BoxCollider2D>();
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_1;
		L_1 = Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		__this->set_EnemyCollider_6(L_1);
		// EnemyAudioSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2;
		L_2 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_EnemyAudioSource_7(L_2);
		// EnemySpriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_3;
		L_3 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_EnemySpriteRenderer_11(L_3);
		// }
		return;
	}
}
// System.Void TrueDrewHealth::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrueDrewHealth_OnTriggerEnter2D_m17316C3002D32BF0638C81ADE1B18F0443C62BF2 (TrueDrewHealth_tC50C7A42EA7AACA7FA51DB9E5AABD1B945F7AE16 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bullet_tF95A945B732B2B929938FB1028878BFBC0081724_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueDrewHealth_tC50C7A42EA7AACA7FA51DB9E5AABD1B945F7AE16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CurrentHealth <= 0)
		float L_0 = __this->get_CurrentHealth_5();
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_0013;
		}
	}
	{
		// RealDrewDead = true;
		((TrueDrewHealth_tC50C7A42EA7AACA7FA51DB9E5AABD1B945F7AE16_StaticFields*)il2cpp_codegen_static_fields_for(TrueDrewHealth_tC50C7A42EA7AACA7FA51DB9E5AABD1B945F7AE16_il2cpp_TypeInfo_var))->set_RealDrewDead_9((bool)1);
	}

IL_0013:
	{
		// if (RealDrewDead)
		bool L_1 = ((TrueDrewHealth_tC50C7A42EA7AACA7FA51DB9E5AABD1B945F7AE16_StaticFields*)il2cpp_codegen_static_fields_for(TrueDrewHealth_tC50C7A42EA7AACA7FA51DB9E5AABD1B945F7AE16_il2cpp_TypeInfo_var))->get_RealDrewDead_9();
		if (!L_1)
		{
			goto IL_0076;
		}
	}
	{
		// EnemyCollider.enabled = false;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_2 = __this->get_EnemyCollider_6();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_2, (bool)0, /*hidden argument*/NULL);
		// EnemyAudioSource.clip = Deathsound;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3 = __this->get_EnemyAudioSource_7();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_4 = __this->get_Deathsound_8();
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_3, L_4, /*hidden argument*/NULL);
		// EnemyAudioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5 = __this->get_EnemyAudioSource_7();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_5, /*hidden argument*/NULL);
		// Destroy(gameObject, 5f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_6, (5.0f), /*hidden argument*/NULL);
		// EnemySpriteRenderer.color = new Color(1f, 0f, 0f, 1f);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_7 = __this->get_EnemySpriteRenderer_11();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_8), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_7, L_8, /*hidden argument*/NULL);
	}

IL_0076:
	{
		// if (collision.gameObject.tag == "Projectile")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_9 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_009f;
		}
	}
	{
		// CurrentHealth = CurrentHealth - Bullet.BulletDamage;
		float L_13 = __this->get_CurrentHealth_5();
		IL2CPP_RUNTIME_CLASS_INIT(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724_il2cpp_TypeInfo_var);
		float L_14 = ((Bullet_tF95A945B732B2B929938FB1028878BFBC0081724_StaticFields*)il2cpp_codegen_static_fields_for(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724_il2cpp_TypeInfo_var))->get_BulletDamage_5();
		__this->set_CurrentHealth_5(((float)il2cpp_codegen_subtract((float)L_13, (float)L_14)));
	}

IL_009f:
	{
		// }
		return;
	}
}
// System.Void TrueDrewHealth::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrueDrewHealth_Update_m6F1159F1B1148E0E77030DAD71EEE4BF6F48D644 (TrueDrewHealth_tC50C7A42EA7AACA7FA51DB9E5AABD1B945F7AE16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueDrewHealth_tC50C7A42EA7AACA7FA51DB9E5AABD1B945F7AE16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE8C9D41B5E98F547B6B0676888A32E3FB113E61);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (RealDrewDead)
		bool L_0 = ((TrueDrewHealth_tC50C7A42EA7AACA7FA51DB9E5AABD1B945F7AE16_StaticFields*)il2cpp_codegen_static_fields_for(TrueDrewHealth_tC50C7A42EA7AACA7FA51DB9E5AABD1B945F7AE16_il2cpp_TypeInfo_var))->get_RealDrewDead_9();
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		// if (SceneCountdown >= 0)
		float L_1 = __this->get_SceneCountdown_10();
		if ((!(((float)L_1) >= ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		// SceneCountdown = SceneCountdown - Time.deltaTime;
		float L_2 = __this->get_SceneCountdown_10();
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_SceneCountdown_10(((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)));
		// }
		return;
	}

IL_0027:
	{
		// else if (SceneCountdown <= 0)
		float L_4 = __this->get_SceneCountdown_10();
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_003e;
		}
	}
	{
		// SceneManager.LoadScene("RealOverworld");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralBE8C9D41B5E98F547B6B0676888A32E3FB113E61, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void TrueDrewHealth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrueDrewHealth__ctor_mF9F8BC286078C3E939266FC46C0B9C71D987C414 (TrueDrewHealth_tC50C7A42EA7AACA7FA51DB9E5AABD1B945F7AE16 * __this, const RuntimeMethod* method)
{
	{
		// public float StartingHealth = 20;
		__this->set_StartingHealth_4((20.0f));
		// public float SceneCountdown = 4f;
		__this->set_SceneCountdown_10((4.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
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
// System.Void TrueNoahHealth::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrueNoahHealth_Awake_m1E8676DD692621F5FA86154AC765DC070CA23837 (TrueNoahHealth_t5A7095C28C9C696B55576ECF5AA5D8938980057D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CurrentHealth = StartingHealth;
		float L_0 = __this->get_StartingHealth_4();
		__this->set_CurrentHealth_5(L_0);
		// EnemyCollider = GetComponent<BoxCollider2D>();
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_1;
		L_1 = Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		__this->set_EnemyCollider_6(L_1);
		// EnemyAudioSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2;
		L_2 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_EnemyAudioSource_7(L_2);
		// EnemySpriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_3;
		L_3 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_EnemySpriteRenderer_10(L_3);
		// }
		return;
	}
}
// System.Void TrueNoahHealth::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrueNoahHealth_OnTriggerEnter2D_m9BC40B318CF050BD612DF722B4E8F632A1E049DD (TrueNoahHealth_t5A7095C28C9C696B55576ECF5AA5D8938980057D * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bullet_tF95A945B732B2B929938FB1028878BFBC0081724_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueNoahHealth_t5A7095C28C9C696B55576ECF5AA5D8938980057D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CurrentHealth <= 0)
		float L_0 = __this->get_CurrentHealth_5();
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_0013;
		}
	}
	{
		// RealNoahDead = true;
		((TrueNoahHealth_t5A7095C28C9C696B55576ECF5AA5D8938980057D_StaticFields*)il2cpp_codegen_static_fields_for(TrueNoahHealth_t5A7095C28C9C696B55576ECF5AA5D8938980057D_il2cpp_TypeInfo_var))->set_RealNoahDead_9((bool)1);
	}

IL_0013:
	{
		// if (RealNoahDead)
		bool L_1 = ((TrueNoahHealth_t5A7095C28C9C696B55576ECF5AA5D8938980057D_StaticFields*)il2cpp_codegen_static_fields_for(TrueNoahHealth_t5A7095C28C9C696B55576ECF5AA5D8938980057D_il2cpp_TypeInfo_var))->get_RealNoahDead_9();
		if (!L_1)
		{
			goto IL_0076;
		}
	}
	{
		// EnemyCollider.enabled = false;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_2 = __this->get_EnemyCollider_6();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_2, (bool)0, /*hidden argument*/NULL);
		// EnemyAudioSource.clip = Deathsound;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3 = __this->get_EnemyAudioSource_7();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_4 = __this->get_Deathsound_8();
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_3, L_4, /*hidden argument*/NULL);
		// EnemyAudioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5 = __this->get_EnemyAudioSource_7();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_5, /*hidden argument*/NULL);
		// Destroy(gameObject, 5f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_6, (5.0f), /*hidden argument*/NULL);
		// EnemySpriteRenderer.color = new Color(1f, 0f, 0f, 1f);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_7 = __this->get_EnemySpriteRenderer_10();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_8), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_7, L_8, /*hidden argument*/NULL);
	}

IL_0076:
	{
		// if (collision.gameObject.tag == "Projectile")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_9 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_009f;
		}
	}
	{
		// CurrentHealth = CurrentHealth - Bullet.BulletDamage;
		float L_13 = __this->get_CurrentHealth_5();
		IL2CPP_RUNTIME_CLASS_INIT(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724_il2cpp_TypeInfo_var);
		float L_14 = ((Bullet_tF95A945B732B2B929938FB1028878BFBC0081724_StaticFields*)il2cpp_codegen_static_fields_for(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724_il2cpp_TypeInfo_var))->get_BulletDamage_5();
		__this->set_CurrentHealth_5(((float)il2cpp_codegen_subtract((float)L_13, (float)L_14)));
	}

IL_009f:
	{
		// }
		return;
	}
}
// System.Void TrueNoahHealth::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrueNoahHealth_Update_m5E3CC3135A16B4225E076DDF949F748835AD16A8 (TrueNoahHealth_t5A7095C28C9C696B55576ECF5AA5D8938980057D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueNoahHealth_t5A7095C28C9C696B55576ECF5AA5D8938980057D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE8C9D41B5E98F547B6B0676888A32E3FB113E61);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (RealNoahDead)
		bool L_0 = ((TrueNoahHealth_t5A7095C28C9C696B55576ECF5AA5D8938980057D_StaticFields*)il2cpp_codegen_static_fields_for(TrueNoahHealth_t5A7095C28C9C696B55576ECF5AA5D8938980057D_il2cpp_TypeInfo_var))->get_RealNoahDead_9();
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		// if (SceneCountdown >= 0)
		float L_1 = __this->get_SceneCountdown_11();
		if ((!(((float)L_1) >= ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		// SceneCountdown = SceneCountdown - Time.deltaTime;
		float L_2 = __this->get_SceneCountdown_11();
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_SceneCountdown_11(((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)));
		// }
		return;
	}

IL_0027:
	{
		// else if (SceneCountdown <= 0)
		float L_4 = __this->get_SceneCountdown_11();
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_003e;
		}
	}
	{
		// SceneManager.LoadScene("RealOverworld");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralBE8C9D41B5E98F547B6B0676888A32E3FB113E61, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void TrueNoahHealth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrueNoahHealth__ctor_mEB8654E7D83E3B60955C44F768D92176A23B6DAC (TrueNoahHealth_t5A7095C28C9C696B55576ECF5AA5D8938980057D * __this, const RuntimeMethod* method)
{
	{
		// public float StartingHealth = 20;
		__this->set_StartingHealth_4((20.0f));
		// public float SceneCountdown = 4f;
		__this->set_SceneCountdown_11((4.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
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
// System.Void WeaponController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponController_Awake_m90E9610EF86832CE827F92A83C6AAAF657A881B3 (WeaponController_t4244D8690714C7377B1E91E037B8B3E9FC78D0A0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HeroWeapon = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_HeroWeapon_8(L_0);
		// }
		return;
	}
}
// System.Void WeaponController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponController_Update_m4B64803DC5F3E765F688C99EF723A4B4DD7AD543 (WeaponController_t4244D8690714C7377B1E91E037B8B3E9FC78D0A0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!(PlayerHealth.Life < 1))
		int32_t L_0 = ((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->get_Life_5();
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0095;
		}
	}
	{
		// Vector2 dir = Camera.main.ScreenToWorldPoint(Input.mousePosition) - transform.position;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_1, L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_3, L_5, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// float angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = V_0;
		float L_9 = L_8.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = V_0;
		float L_11 = L_10.get_x_0();
		float L_12;
		L_12 = atan2f(L_9, L_11);
		// Quaternion rotation = Quaternion.AngleAxis(angle - 90, Vector3.forward);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_12, (float)(57.2957802f))), (float)(90.0f))), L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		// transform.rotation = rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16 = V_1;
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_15, L_16, /*hidden argument*/NULL);
		// if(GuitarCooldown >=0)
		float L_17 = __this->get_GuitarCooldown_7();
		if ((!(((float)L_17) >= ((float)(0.0f)))))
		{
			goto IL_0083;
		}
	}
	{
		// GuitarCooldown = GuitarCooldown - Time.deltaTime;
		float L_18 = __this->get_GuitarCooldown_7();
		float L_19;
		L_19 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_GuitarCooldown_7(((float)il2cpp_codegen_subtract((float)L_18, (float)L_19)));
	}

IL_0083:
	{
		// if (Input.GetButton("Fire1"))
		bool L_20;
		L_20 = Input_GetButton_m95EE8314087068F3AA9CEF3C3F6A246D55C4734C(_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0095;
		}
	}
	{
		// Shoot();
		WeaponController_U3CUpdateU3Eg__ShootU7C8_0_m4CA804CE20CEEDFC4B017A36B49B88CBA86D55AB(__this, /*hidden argument*/NULL);
	}

IL_0095:
	{
		// }
		return;
	}
}
// System.Void WeaponController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponController__ctor_mD69BC0388C5B1B1333A6E3820859D7633C6915B7 (WeaponController_t4244D8690714C7377B1E91E037B8B3E9FC78D0A0 * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 5f;
		__this->set_speed_4((5.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WeaponController::<Update>g__Shoot|8_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponController_U3CUpdateU3Eg__ShootU7C8_0_m4CA804CE20CEEDFC4B017A36B49B88CBA86D55AB (WeaponController_t4244D8690714C7377B1E91E037B8B3E9FC78D0A0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GuitarCooldown <= 0)
		float L_0 = __this->get_GuitarCooldown_7();
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_008a;
		}
	}
	{
		// HeroWeapon.clip = WeaponSound[Random.Range(0, WeaponSound.Length)];
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_HeroWeapon_8();
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_2 = __this->get_WeaponSound_9();
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_3 = __this->get_WeaponSound_9();
		int32_t L_4;
		L_4 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))), /*hidden argument*/NULL);
		int32_t L_5 = L_4;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_6 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_1, L_6, /*hidden argument*/NULL);
		// HeroWeapon.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7 = __this->get_HeroWeapon_8();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_7, /*hidden argument*/NULL);
		// GameObject bullet = Instantiate(bulletPrefab, firePoint.position, firePoint.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_bulletPrefab_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = __this->get_firePoint_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = __this->get_firePoint_5();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		L_12 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_8, L_10, L_12, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_14;
		L_14 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_13, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// rb.AddForce(firePoint.up * BulletForce, ForceMode2D.Impulse);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = __this->get_firePoint_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_15, /*hidden argument*/NULL);
		float L_17 = __this->get_BulletForce_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_16, L_17, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_18, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_14, L_19, 1, /*hidden argument*/NULL);
		// GuitarCooldown = 2.5f;
		__this->set_GuitarCooldown_7((2.5f));
	}

IL_008a:
	{
		// }
		return;
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
// System.Void WorldManagerFantasy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldManagerFantasy_Start_m68F2C633599278D7852F84EBB7F404E866380D9F (WorldManagerFantasy_tE74D48A6E0665D5DE9C7A3D61F72706990B6C6B5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoahHealth_t7E9CA51C0B8E8148EC410EED3679CDC73D22BFF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (DrewHealth.DrewDead && !NoahHealth.NoahDead)
		bool L_0 = ((DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE_StaticFields*)il2cpp_codegen_static_fields_for(DrewHealth_tF7FED8381096A8F2F48AE70BDAF82F67A34F48FE_il2cpp_TypeInfo_var))->get_DrewDead_9();
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		bool L_1 = ((NoahHealth_t7E9CA51C0B8E8148EC410EED3679CDC73D22BFF7_StaticFields*)il2cpp_codegen_static_fields_for(NoahHealth_t7E9CA51C0B8E8148EC410EED3679CDC73D22BFF7_il2cpp_TypeInfo_var))->get_NoahDead_9();
		if (L_1)
		{
			goto IL_003a;
		}
	}
	{
		// PlayerObject.transform.position = TargetSpawnPoint1.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_PlayerObject_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_TargetSpawnPoint1_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_6, /*hidden argument*/NULL);
		// FirstZone.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_FirstZone_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void WorldManagerFantasy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldManagerFantasy__ctor_m16076828E644DD1D52F97ABA61DC6FD5654C8958 (WorldManagerFantasy_tE74D48A6E0665D5DE9C7A3D61F72706990B6C6B5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
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
// System.Void WorldManagerReal::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldManagerReal_Start_mB075F0748D550D9680676AD199F21AE93E1C05B6 (WorldManagerReal_tC5724D1C7996C59F01E600BA1B8416D16AE613A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueDrewHealth_tC50C7A42EA7AACA7FA51DB9E5AABD1B945F7AE16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueNoahHealth_t5A7095C28C9C696B55576ECF5AA5D8938980057D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (TrueDrewHealth.RealDrewDead && !TrueNoahHealth.RealNoahDead)
		bool L_0 = ((TrueDrewHealth_tC50C7A42EA7AACA7FA51DB9E5AABD1B945F7AE16_StaticFields*)il2cpp_codegen_static_fields_for(TrueDrewHealth_tC50C7A42EA7AACA7FA51DB9E5AABD1B945F7AE16_il2cpp_TypeInfo_var))->get_RealDrewDead_9();
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		bool L_1 = ((TrueNoahHealth_t5A7095C28C9C696B55576ECF5AA5D8938980057D_StaticFields*)il2cpp_codegen_static_fields_for(TrueNoahHealth_t5A7095C28C9C696B55576ECF5AA5D8938980057D_il2cpp_TypeInfo_var))->get_RealNoahDead_9();
		if (L_1)
		{
			goto IL_003a;
		}
	}
	{
		// PlayerObject.transform.position = TargetSpawnPoint1.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_PlayerObject_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_TargetSpawnPoint1_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_6, /*hidden argument*/NULL);
		// FirstZone.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_FirstZone_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// if (TrueDrewHealth.RealDrewDead && TrueNoahHealth.RealNoahDead)
		bool L_8 = ((TrueDrewHealth_tC50C7A42EA7AACA7FA51DB9E5AABD1B945F7AE16_StaticFields*)il2cpp_codegen_static_fields_for(TrueDrewHealth_tC50C7A42EA7AACA7FA51DB9E5AABD1B945F7AE16_il2cpp_TypeInfo_var))->get_RealDrewDead_9();
		if (!L_8)
		{
			goto IL_0074;
		}
	}
	{
		bool L_9 = ((TrueNoahHealth_t5A7095C28C9C696B55576ECF5AA5D8938980057D_StaticFields*)il2cpp_codegen_static_fields_for(TrueNoahHealth_t5A7095C28C9C696B55576ECF5AA5D8938980057D_il2cpp_TypeInfo_var))->get_RealNoahDead_9();
		if (!L_9)
		{
			goto IL_0074;
		}
	}
	{
		// PlayerObject.transform.position = TargetSpawnPoint2.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_PlayerObject_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = __this->get_TargetSpawnPoint2_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_11, L_14, /*hidden argument*/NULL);
		// SecondZone.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_SecondZone_6();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_15, (bool)0, /*hidden argument*/NULL);
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void WorldManagerReal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldManagerReal__ctor_mA540C4B1503BF0285008A1FCE8254134CB7A1FD5 (WorldManagerReal_tC5724D1C7996C59F01E600BA1B8416D16AE613A3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
