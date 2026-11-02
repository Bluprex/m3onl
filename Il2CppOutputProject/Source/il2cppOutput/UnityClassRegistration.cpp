extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CrashReporting();
	RegisterModule_CrashReporting();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_GraphicsStateCollectionSerializer();
	RegisterModule_GraphicsStateCollectionSerializer();

	void RegisterModule_HierarchyCore();
	RegisterModule_HierarchyCore();

	void RegisterModule_HotReload();
	RegisterModule_HotReload();

	void RegisterModule_AssetBundle();
	RegisterModule_AssetBundle();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_Identifiers();
	RegisterModule_Identifiers();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

	void RegisterModule_Input();
	RegisterModule_Input();

	void RegisterModule_InputLegacy();
	RegisterModule_InputLegacy();

	void RegisterModule_InputForUI();
	RegisterModule_InputForUI();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_Insights();
	RegisterModule_Insights();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_PhysicsBackendPhysX();
	RegisterModule_PhysicsBackendPhysX();

	void RegisterModule_Properties();
	RegisterModule_Properties();

	void RegisterModule_RuntimeInitializeOnLoadManagerInitializer();
	RegisterModule_RuntimeInitializeOnLoadManagerInitializer();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_TextCoreFontEngine();
	RegisterModule_TextCoreFontEngine();

	void RegisterModule_TextCoreTextEngine();
	RegisterModule_TextCoreTextEngine();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UIElements();
	RegisterModule_UIElements();

	void RegisterModule_UnityAnalyticsCommon();
	RegisterModule_UnityAnalyticsCommon();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConsent();
	RegisterModule_UnityConsent();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_UnityWebRequestAudio();
	RegisterModule_UnityWebRequestAudio();

	void RegisterModule_VFX();
	RegisterModule_VFX();

	void RegisterModule_Video();
	RegisterModule_Video();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

class NavMeshData; template <> void RegisterUnityClass<NavMeshData>(const char*);
class NavMeshProjectSettings; template <> void RegisterUnityClass<NavMeshProjectSettings>(const char*);
class NavMeshSettings; template <> void RegisterUnityClass<NavMeshSettings>(const char*);
class Animation; template <> void RegisterUnityClass<Animation>(const char*);
class AnimationClip; template <> void RegisterUnityClass<AnimationClip>(const char*);
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
class AnimatorController; template <> void RegisterUnityClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class Avatar; template <> void RegisterUnityClass<Avatar>(const char*);
class Motion; template <> void RegisterUnityClass<Motion>(const char*);
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AssetBundle; template <> void RegisterUnityClass<AssetBundle>(const char*);
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class AudioResource; template <> void RegisterUnityClass<AudioResource>(const char*);
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class LODGroup; template <> void RegisterUnityClass<LODGroup>(const char*);
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbeProxyVolume; template <> void RegisterUnityClass<LightProbeProxyVolume>(const char*);
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LightingSettings; template <> void RegisterUnityClass<LightingSettings>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class LineRenderer; template <> void RegisterUnityClass<LineRenderer>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class Material; template <> void RegisterUnityClass<Material>(const char*);
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class Object; template <> void RegisterUnityClass<Object>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
class RayTracingShader; template <> void RegisterUnityClass<RayTracingShader>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderNameRegistry; template <> void RegisterUnityClass<ShaderNameRegistry>(const char*);
class SkinnedMeshRenderer; template <> void RegisterUnityClass<SkinnedMeshRenderer>(const char*);
class Skybox; template <> void RegisterUnityClass<Skybox>(const char*);
class SortingGroup; template <> void RegisterUnityClass<SortingGroup>(const char*);
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SpriteRenderer; template <> void RegisterUnityClass<SpriteRenderer>(const char*);
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class TrailRenderer; template <> void RegisterUnityClass<TrailRenderer>(const char*);
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class BoxCollider; template <> void RegisterUnityClass<BoxCollider>(const char*);
class CapsuleCollider; template <> void RegisterUnityClass<CapsuleCollider>(const char*);
class CharacterController; template <> void RegisterUnityClass<CharacterController>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class MeshCollider; template <> void RegisterUnityClass<MeshCollider>(const char*);
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class SphereCollider; template <> void RegisterUnityClass<SphereCollider>(const char*);
class Physics2DSettings; template <> void RegisterUnityClass<Physics2DSettings>(const char*);
class Terrain; template <> void RegisterUnityClass<Terrain>(const char*);
class TerrainData; template <> void RegisterUnityClass<TerrainData>(const char*);
class TerrainLayer; template <> void RegisterUnityClass<TerrainLayer>(const char*);
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
namespace TextRenderingPrivate { class TextMesh; } template <> void RegisterUnityClass<TextRenderingPrivate::TextMesh>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);
class UIRenderer; template <> void RegisterUnityClass<UIRenderer>(const char*);
class UnityConnectSettings; template <> void RegisterUnityClass<UnityConnectSettings>(const char*);
class VFXManager; template <> void RegisterUnityClass<VFXManager>(const char*);
class VFXRenderer; template <> void RegisterUnityClass<VFXRenderer>(const char*);
class VisualEffect; template <> void RegisterUnityClass<VisualEffect>(const char*);
class VisualEffectAsset; template <> void RegisterUnityClass<VisualEffectAsset>(const char*);
class VisualEffectObject; template <> void RegisterUnityClass<VisualEffectObject>(const char*);
class VideoClip; template <> void RegisterUnityClass<VideoClip>(const char*);
class VideoPlayer; template <> void RegisterUnityClass<VideoPlayer>(const char*);

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 107 non stripped classes
	//0. NavMeshData
	RegisterUnityClass<NavMeshData>("AI");
	//1. NavMeshProjectSettings
	RegisterUnityClass<NavMeshProjectSettings>("AI");
	//2. NavMeshSettings
	RegisterUnityClass<NavMeshSettings>("AI");
	//3. Animation
	RegisterUnityClass<Animation>("Animation");
	//4. AnimationClip
	RegisterUnityClass<AnimationClip>("Animation");
	//5. Animator
	RegisterUnityClass<Animator>("Animation");
	//6. AnimatorController
	RegisterUnityClass<AnimatorController>("Animation");
	//7. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//8. Avatar
	RegisterUnityClass<Avatar>("Animation");
	//9. Motion
	RegisterUnityClass<Motion>("Animation");
	//10. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//11. AssetBundle
	RegisterUnityClass<AssetBundle>("AssetBundle");
	//12. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//13. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//14. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//15. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//16. AudioResource
	RegisterUnityClass<AudioResource>("Audio");
	//17. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//18. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//19. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//20. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//21. Camera
	RegisterUnityClass<Camera>("Core");
	//22. Component
	RegisterUnityClass<Unity::Component>("Core");
	//23. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//24. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//25. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//26. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//27. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//28. GameManager
	RegisterUnityClass<GameManager>("Core");
	//29. GameObject
	RegisterUnityClass<GameObject>("Core");
	//30. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//31. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//32. InputManager
	RegisterUnityClass<InputManager>("Core");
	//33. LODGroup
	RegisterUnityClass<LODGroup>("Core");
	//34. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//35. Light
	RegisterUnityClass<Light>("Core");
	//36. LightProbeProxyVolume
	RegisterUnityClass<LightProbeProxyVolume>("Core");
	//37. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//38. LightingSettings
	RegisterUnityClass<LightingSettings>("Core");
	//39. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//40. LineRenderer
	RegisterUnityClass<LineRenderer>("Core");
	//41. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//42. Material
	RegisterUnityClass<Material>("Core");
	//43. Mesh
	RegisterUnityClass<Mesh>("Core");
	//44. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//45. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//46. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//47. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//48. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//49. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//50. Object
	//Skipping Object
	//51. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//52. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//53. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//54. RayTracingShader
	RegisterUnityClass<RayTracingShader>("Core");
	//55. RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//56. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//57. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//58. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//59. Renderer
	RegisterUnityClass<Renderer>("Core");
	//60. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//61. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//62. Shader
	RegisterUnityClass<Shader>("Core");
	//63. ShaderNameRegistry
	RegisterUnityClass<ShaderNameRegistry>("Core");
	//64. SkinnedMeshRenderer
	RegisterUnityClass<SkinnedMeshRenderer>("Core");
	//65. Skybox
	RegisterUnityClass<Skybox>("Core");
	//66. SortingGroup
	RegisterUnityClass<SortingGroup>("Core");
	//67. Sprite
	RegisterUnityClass<Sprite>("Core");
	//68. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//69. SpriteRenderer
	RegisterUnityClass<SpriteRenderer>("Core");
	//70. TagManager
	RegisterUnityClass<TagManager>("Core");
	//71. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//72. Texture
	RegisterUnityClass<Texture>("Core");
	//73. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//74. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//75. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//76. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//77. TrailRenderer
	RegisterUnityClass<TrailRenderer>("Core");
	//78. Transform
	RegisterUnityClass<Transform>("Core");
	//79. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//80. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//81. BoxCollider
	RegisterUnityClass<BoxCollider>("Physics");
	//82. CapsuleCollider
	RegisterUnityClass<CapsuleCollider>("Physics");
	//83. CharacterController
	RegisterUnityClass<CharacterController>("Physics");
	//84. Collider
	RegisterUnityClass<Collider>("Physics");
	//85. MeshCollider
	RegisterUnityClass<MeshCollider>("Physics");
	//86. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//87. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//88. SphereCollider
	RegisterUnityClass<SphereCollider>("Physics");
	//89. Physics2DSettings
	RegisterUnityClass<Physics2DSettings>("Physics2D");
	//90. Terrain
	RegisterUnityClass<Terrain>("Terrain");
	//91. TerrainData
	RegisterUnityClass<TerrainData>("Terrain");
	//92. TerrainLayer
	RegisterUnityClass<TerrainLayer>("Terrain");
	//93. Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//94. TextMesh
	RegisterUnityClass<TextRenderingPrivate::TextMesh>("TextRendering");
	//95. Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//96. CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//97. CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");
	//98. UIRenderer
	RegisterUnityClass<UIRenderer>("UIElements");
	//99. UnityConnectSettings
	RegisterUnityClass<UnityConnectSettings>("UnityConnect");
	//100. VFXManager
	RegisterUnityClass<VFXManager>("VFX");
	//101. VFXRenderer
	RegisterUnityClass<VFXRenderer>("VFX");
	//102. VisualEffect
	RegisterUnityClass<VisualEffect>("VFX");
	//103. VisualEffectAsset
	RegisterUnityClass<VisualEffectAsset>("VFX");
	//104. VisualEffectObject
	RegisterUnityClass<VisualEffectObject>("VFX");
	//105. VideoClip
	RegisterUnityClass<VideoClip>("Video");
	//106. VideoPlayer
	RegisterUnityClass<VideoPlayer>("Video");

}
