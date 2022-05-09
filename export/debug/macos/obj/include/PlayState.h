#ifndef INCLUDED_PlayState
#define INCLUDED_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(BackgroundGirls)
HX_DECLARE_CLASS0(Boyfriend)
HX_DECLARE_CLASS0(Character)
HX_DECLARE_CLASS0(DialogueBox)
HX_DECLARE_CLASS0(HealthIcon)
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS0(Note)
HX_DECLARE_CLASS0(Options)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS0(WiggleEffect)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxBar)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)



class HXCPP_CLASS_ATTRIBUTES PlayState_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();

	public:
		enum { _hx_ClassId = 0x0a05f89d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="PlayState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"PlayState"); }
		static ::hx::ObjectPtr< PlayState_obj > __new();
		static ::hx::ObjectPtr< PlayState_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PlayState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PlayState",5d,83,c2,46); }

		static void __boot();
		static ::String curStage;
		static  ::Dynamic SONG;
		static bool isStoryMode;
		static int storyWeek;
		static ::Array< ::String > storyPlaylist;
		static int storyDifficulty;
		static  ::flixel::FlxObject prevCamFollow;
		static int campaignScore;
		static Float daPixelZoom;
		bool halloweenLevel;
		 ::flixel::_hx_system::FlxSound vocals;
		 ::Character dad;
		 ::Character gf;
		 ::Boyfriend boyfriend;
		 ::flixel::group::FlxTypedGroup notes;
		::Array< ::Dynamic> unspawnNotes;
		 ::flixel::FlxSprite strumLine;
		int curSection;
		 ::flixel::FlxObject camFollow;
		 ::flixel::group::FlxTypedGroup strumLineNotes;
		 ::flixel::group::FlxTypedGroup playerStrums;
		bool camZooming;
		::String curSong;
		int gfSpeed;
		Float health;
		int combo;
		 ::flixel::FlxSprite healthBarBG;
		 ::flixel::ui::FlxBar healthBar;
		bool generatedMusic;
		bool startingSong;
		 ::HealthIcon iconP1;
		 ::HealthIcon iconP2;
		 ::flixel::FlxCamera camHUD;
		 ::flixel::FlxCamera camGame;
		::Array< ::String > dialogue;
		 ::flixel::FlxSprite halloweenBG;
		bool isHalloween;
		 ::flixel::group::FlxTypedGroup phillyCityLights;
		 ::flixel::FlxSprite phillyTrain;
		 ::flixel::_hx_system::FlxSound trainSound;
		 ::flixel::FlxSprite limo;
		 ::flixel::group::FlxTypedGroup grpLimoDancers;
		 ::flixel::FlxSprite fastCar;
		 ::flixel::FlxSprite upperBoppers;
		 ::flixel::FlxSprite bottomBoppers;
		 ::flixel::FlxSprite santa;
		 ::BackgroundGirls bgGirls;
		 ::WiggleEffect wiggleShit;
		bool talking;
		int songScore;
		 ::flixel::text::FlxText scoreTxt;
		Float defaultCamZoom;
		bool inCutscene;
		 ::Options curOptions;
		::Array< bool > keysPressed;
		 ::haxe::ds::StringMap actionsPressed;
		::String storyDifficultyText;
		::String iconRPC;
		Float songLength;
		::String detailsText;
		::String detailsPausedText;
		void create();

		void schoolIntro( ::DialogueBox dialogueBox);
		::Dynamic schoolIntro_dyn();

		 ::flixel::util::FlxTimer startTimer;
		bool perfectMode;
		void startCountdown();
		::Dynamic startCountdown_dyn();

		int previousFrameTime;
		int lastReportedPlayheadPosition;
		Float songTime;
		void startSong();
		::Dynamic startSong_dyn();

		int debugNum;
		void generateSong(::String dataPath);
		::Dynamic generateSong_dyn();

		int sortByShit( ::Note Obj1, ::Note Obj2);
		::Dynamic sortByShit_dyn();

		void generateStaticArrows(int player);
		::Dynamic generateStaticArrows_dyn();

		void tweenCamIn();
		::Dynamic tweenCamIn_dyn();

		void openSubState( ::flixel::FlxSubState SubState);

		void closeSubState();

		void onFocus();

		void onFocusLost();

		void resyncVocals();
		::Dynamic resyncVocals_dyn();

		bool paused;
		bool startedCountdown;
		bool canPause;
		void update(Float elapsed);

		void endSong();
		::Dynamic endSong_dyn();

		bool endingSong;
		void popUpScore(Float strumtime);
		::Dynamic popUpScore_dyn();

		bool switchTo( ::flixel::FlxState state);

		int getDirectionFromKey(int key);
		::Dynamic getDirectionFromKey_dyn();

		::String getStringFromKey(int key);
		::Dynamic getStringFromKey_dyn();

		void onKeyDown(int key,int modifier);
		::Dynamic onKeyDown_dyn();

		void onKeyRelease(int key,int modifier);
		::Dynamic onKeyRelease_dyn();

		void updatePlayerStrums();
		::Dynamic updatePlayerStrums_dyn();

		void handleNotes(int dir);
		::Dynamic handleNotes_dyn();

		void handleExtras(::String action);
		::Dynamic handleExtras_dyn();

		::Array< ::Dynamic> getHittableNotes(::hx::Null< int >  dir);
		::Dynamic getHittableNotes_dyn();

		void keyShit();
		::Dynamic keyShit_dyn();

		void noteMiss(::hx::Null< int >  direction);
		::Dynamic noteMiss_dyn();

		void badNoteCheck();
		::Dynamic badNoteCheck_dyn();

		void noteCheck(bool keyP, ::Note note);
		::Dynamic noteCheck_dyn();

		void goodNoteHit( ::Note note);
		::Dynamic goodNoteHit_dyn();

		bool fastCarCanDrive;
		void resetFastCar();
		::Dynamic resetFastCar_dyn();

		void fastCarDrive();
		::Dynamic fastCarDrive_dyn();

		bool trainMoving;
		Float trainFrameTiming;
		int trainCars;
		bool trainFinishing;
		int trainCooldown;
		void trainStart();
		::Dynamic trainStart_dyn();

		bool startedMoving;
		void updateTrainPos();
		::Dynamic updateTrainPos_dyn();

		void trainReset();
		::Dynamic trainReset_dyn();

		void lightningStrikeShit();
		::Dynamic lightningStrikeShit_dyn();

		void stepHit();

		int lightningStrikeBeat;
		int lightningOffset;
		void beatHit();

		int curLight;
};


#endif /* INCLUDED_PlayState */ 
