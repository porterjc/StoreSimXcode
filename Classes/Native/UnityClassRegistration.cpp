template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
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

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_PerformanceReporting();
	RegisterModule_PerformanceReporting();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_Wind();
	RegisterModule_Wind();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

}

class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class Animation; template <> void RegisterUnityClass<Animation>(const char*);
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace Unity { class Cloth; } 
class Collider2D; 
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterUnityClass<FlareLayer>(const char*);
class GUIElement; template <> void RegisterUnityClass<GUIElement>(const char*);
namespace TextRenderingPrivate { class GUIText; } template <> void RegisterUnityClass<TextRenderingPrivate::GUIText>(const char*);
class GUITexture; 
class GUILayer; template <> void RegisterUnityClass<GUILayer>(const char*);
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class IConstraint; 
class AimConstraint; 
class LookAtConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class NavMeshAgent; template <> void RegisterUnityClass<NavMeshAgent>(const char*);
class NavMeshObstacle; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Skybox; 
class SortingGroup; 
class StreamingController; 
class Terrain; 
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class BoxCollider; template <> void RegisterUnityClass<BoxCollider>(const char*);
class CapsuleCollider; template <> void RegisterUnityClass<CapsuleCollider>(const char*);
class CharacterController; template <> void RegisterUnityClass<CharacterController>(const char*);
class MeshCollider; template <> void RegisterUnityClass<MeshCollider>(const char*);
class SphereCollider; template <> void RegisterUnityClass<SphereCollider>(const char*);
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } template <> void RegisterUnityClass<Unity::Joint>(const char*);
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } template <> void RegisterUnityClass<Unity::SpringJoint>(const char*);
class LODGroup; template <> void RegisterUnityClass<LODGroup>(const char*);
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class BillboardRenderer; 
class LineRenderer; template <> void RegisterUnityClass<LineRenderer>(const char*);
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class ParticleRenderer; 
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class SkinnedMeshRenderer; template <> void RegisterUnityClass<SkinnedMeshRenderer>(const char*);
class SpriteMask; 
class SpriteRenderer; 
class SpriteShapeRenderer; 
class TilemapRenderer; 
class TrailRenderer; 
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } template <> void RegisterUnityClass<TextRenderingPrivate::TextMesh>(const char*);
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class AssetImporterLog; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterUnityClass<Avatar>(const char*);
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
class GameObjectRecorder; 
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LocalizationAsset; 
class Material; template <> void RegisterUnityClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class Motion; template <> void RegisterUnityClass<Motion>(const char*);
class AnimationClip; template <> void RegisterUnityClass<AnimationClip>(const char*);
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; template <> void RegisterUnityClass<PhysicMaterial>(const char*);
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AnimatorController; template <> void RegisterUnityClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class CGProgram; template <> void RegisterUnityClass<CGProgram>(const char*);
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class BaseVideoTexture; 
class MovieTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class ProceduralTexture; 
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class VideoClip; 
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class CloudWebServicesManager; template <> void RegisterUnityClass<CloudWebServicesManager>(const char*);
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class NavMeshProjectSettings; template <> void RegisterUnityClass<NavMeshProjectSettings>(const char*);
class PerformanceReportingManager; template <> void RegisterUnityClass<PerformanceReportingManager>(const char*);
class Physics2DSettings; 
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class ScriptMapper; template <> void RegisterUnityClass<ScriptMapper>(const char*);
class StreamingManager; 
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class UnityAnalyticsManager; template <> void RegisterUnityClass<UnityAnalyticsManager>(const char*);
class UnityConnectSettings; template <> void RegisterUnityClass<UnityConnectSettings>(const char*);
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class NavMeshSettings; template <> void RegisterUnityClass<NavMeshSettings>(const char*);
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class RenderPassAttachment; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 95 non stripped classes
	//0. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//1. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//2. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//3. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//4. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//5. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//6. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//7. Unity::Component
	RegisterUnityClass<Unity::Component>("Core");
	//8. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//9. Camera
	RegisterUnityClass<Camera>("Core");
	//10. Light
	RegisterUnityClass<Light>("Core");
	//11. Material
	RegisterUnityClass<Material>("Core");
	//12. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//13. Texture
	RegisterUnityClass<Texture>("Core");
	//14. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//15. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//16. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//17. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//18. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//19. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//20. GameObject
	RegisterUnityClass<GameObject>("Core");
	//21. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//22. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//23. GameManager
	RegisterUnityClass<GameManager>("Core");
	//24. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//25. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//26. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//27. LineRenderer
	RegisterUnityClass<LineRenderer>("Core");
	//28. Renderer
	RegisterUnityClass<Renderer>("Core");
	//29. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//30. Shader
	RegisterUnityClass<Shader>("Core");
	//31. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//32. SkinnedMeshRenderer
	RegisterUnityClass<SkinnedMeshRenderer>("Core");
	//33. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//34. GUIElement
	RegisterUnityClass<GUIElement>("Core");
	//35. GUILayer
	RegisterUnityClass<GUILayer>("Core");
	//36. Mesh
	RegisterUnityClass<Mesh>("Core");
	//37. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//38. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//39. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//40. UI::RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//41. Transform
	RegisterUnityClass<Transform>("Core");
	//42. Sprite
	RegisterUnityClass<Sprite>("Core");
	//43. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//44. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//45. Collider
	RegisterUnityClass<Collider>("Physics");
	//46. CharacterController
	RegisterUnityClass<CharacterController>("Physics");
	//47. CapsuleCollider
	RegisterUnityClass<CapsuleCollider>("Physics");
	//48. Unity::Joint
	RegisterUnityClass<Unity::Joint>("Physics");
	//49. Unity::SpringJoint
	RegisterUnityClass<Unity::SpringJoint>("Physics");
	//50. NavMeshAgent
	RegisterUnityClass<NavMeshAgent>("AI");
	//51. Animation
	RegisterUnityClass<Animation>("Animation");
	//52. Animator
	RegisterUnityClass<Animator>("Animation");
	//53. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//54. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//55. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//56. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//57. UI::Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//58. UI::CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//59. UI::CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");
	//60. TextRenderingPrivate::GUIText
	RegisterUnityClass<TextRenderingPrivate::GUIText>("TextRendering");
	//61. TextRenderingPrivate::TextMesh
	RegisterUnityClass<TextRenderingPrivate::TextMesh>("TextRendering");
	//62. TextRendering::Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//63. MeshCollider
	RegisterUnityClass<MeshCollider>("Physics");
	//64. TagManager
	RegisterUnityClass<TagManager>("Core");
	//65. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//66. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//67. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//68. InputManager
	RegisterUnityClass<InputManager>("Core");
	//69. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//70. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//71. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//72. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//73. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//74. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//75. ScriptMapper
	RegisterUnityClass<ScriptMapper>("Core");
	//76. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//77. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//78. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//79. UnityConnectSettings
	RegisterUnityClass<UnityConnectSettings>("UnityConnect");
	//80. NavMeshProjectSettings
	RegisterUnityClass<NavMeshProjectSettings>("AI");
	//81. CloudWebServicesManager
	RegisterUnityClass<CloudWebServicesManager>("CloudWebServices");
	//82. PerformanceReportingManager
	RegisterUnityClass<PerformanceReportingManager>("PerformanceReporting");
	//83. UnityAnalyticsManager
	RegisterUnityClass<UnityAnalyticsManager>("UnityAnalytics");
	//84. Motion
	RegisterUnityClass<Motion>("Animation");
	//85. AnimationClip
	RegisterUnityClass<AnimationClip>("Animation");
	//86. AnimatorController
	RegisterUnityClass<AnimatorController>("Animation");
	//87. Avatar
	RegisterUnityClass<Avatar>("Animation");
	//88. BoxCollider
	RegisterUnityClass<BoxCollider>("Physics");
	//89. FlareLayer
	RegisterUnityClass<FlareLayer>("Core");
	//90. LODGroup
	RegisterUnityClass<LODGroup>("Core");
	//91. SphereCollider
	RegisterUnityClass<SphereCollider>("Physics");
	//92. CGProgram
	RegisterUnityClass<CGProgram>("Core");
	//93. PhysicMaterial
	RegisterUnityClass<PhysicMaterial>("Physics");
	//94. NavMeshSettings
	RegisterUnityClass<NavMeshSettings>("AI");

}
