/*
   This file has been generated by IDA.
   It contains local type definitions from
   the type library 'sxei_mm_i386'
*/

#define __int8 char
#define __int16 short
#define __int32 int
#define __int64 long long

struct $6ECA53571B8FCC125A3088582131FB6E;
struct DLL_FUNCTIONS;
struct entvars_s;
struct edict_s;
struct enginefuncs_s;
struct TraceResult;
struct cvar_s;
struct $2932F9D9BA1273E7834287D6FC668AD4;

/* 1 */
struct __attribute__((aligned(4))) Elf32_Sym
{
  unsigned int st_name;
  unsigned int st_value;
  unsigned int st_size;
  unsigned __int8 st_info;
  unsigned __int8 st_other;
  unsigned __int16 st_shndx;
};

/* 2 */
struct Elf32_Rel
{
  unsigned int r_offset;
  unsigned int r_info;
};

/* 4 */
union Elf32_Dyn::$A263394DDF3EC2D4B1B8448EDD30E249
{
  unsigned int d_val;
  unsigned int d_ptr;
};

/* 3 */
struct Elf32_Dyn
{
  int d_tag;
  union Elf32_Dyn::$A263394DDF3EC2D4B1B8448EDD30E249 d_un;
};

/* 7 */
typedef unsigned int uint32_t;

/* 6 */
typedef uint32_t in_addr_t;

/* 5 */
struct in_addr
{
  in_addr_t s_addr;
};

/* 9 */
typedef int __time_t;

/* 10 */
typedef int __suseconds_t;

/* 8 */
struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};

/* 11 */
typedef $6ECA53571B8FCC125A3088582131FB6E fd_set;

/* 13 */
typedef int __fd_mask;

/* 12 */
struct $6ECA53571B8FCC125A3088582131FB6E
{
  __fd_mask __fds_bits[32];
};

/* 15 */
enum $8C0238B395BC4DBF7203B79C6B5C086E
{
  ca_dedicated = 0x0,
  ca_disconnected = 0x1,
  ca_connecting = 0x2,
  ca_connected = 0x3,
  ca_uninitialized = 0x4,
  ca_active = 0x5,
};

/* 16 */
typedef enum $8C0238B395BC4DBF7203B79C6B5C086E cactive_t;

/* 17 */
struct engine_api_s
{
  int version;
  int rendertype;
  int size;
  int (*GetEngineState)(void);
  void (__cdecl *Cbuf_AddText)(char *text);
  void (__cdecl *Cbuf_InsertText)(char *text);
  void (__cdecl *Cmd_AddCommand)(char *cmd_name, void (*funcname)(void));
  int (*Cmd_Argc)(void);
  char *(*Cmd_Args)(void);
  char *(__cdecl *Cmd_Argv)(int arg);
  void (*Con_Printf)(char *, ...);
  void (*Con_SafePrintf)(char *, ...);
  void (__cdecl *Cvar_Set)(char *var_name, char *value);
  void (__cdecl *Cvar_SetValue)(char *var_name, float value);
  int (__cdecl *Cvar_VariableInt)(char *var_name);
  char *(__cdecl *Cvar_VariableString)(char *var_name);
  float (__cdecl *Cvar_VariableValue)(char *var_name);
  void (*ForceReloadProfile)(void);
  int (__cdecl *GetGameInfo)(struct GameInfo_s *pGI, char *pszChannel);
  void (__cdecl *GameSetBackground)(int bBack);
  void (__cdecl *GameSetState)(int iState);
  void (__cdecl *GameSetSubState)(int iState);
  int (*GetPauseState)(void);
  int (__cdecl *Host_Frame)(float time, int iState, int *stateInfo);
  void (__cdecl *Host_GetHostInfo)(float *fps, int *nActive, int *nSpectators, int *nMaxPlayers, char *pszMap);
  void (*Host_Shutdown)(void);
  int (__cdecl *Game_Init)(char *lpCmdLine, unsigned __int8 *pMem, int iSize, struct exefuncs_s *pef, void *, int);
  void (*IN_ActivateMouse)(void);
  void (*IN_ClearStates)(void);
  void (*IN_DeactivateMouse)(void);
  void (__cdecl *IN_MouseEvent)(int mstate);
  void (*Keyboard_ReturnToGame)(void);
  void (*Key_ClearStates)(void);
  void (__cdecl *Key_Event)(int key, int down);
  int (__cdecl *LoadGame)(const char *pszSlot);
  void (*S_BlockSound)(void);
  void (*S_ClearBuffer)(void);
  void (__cdecl *S_GetDSPointer)(struct IDirectSound **lpDS, struct IDirectSoundBuffer **lpDSBuf);
  void *(*S_GetWAVPointer)(void);
  void (*S_UnblockSound)(void);
  int (__cdecl *SaveGame)(const char *pszSlot, const char *pszComment);
  void (__cdecl *SetAuth)(void *pobj);
  void (__cdecl *SetMessagePumpDisableMode)(int bMode);
  void (__cdecl *SetPauseState)(int bPause);
  void (__cdecl *SetStartupMode)(int bMode);
  void (*SNDDMA_Shutdown)(void);
  void (*Snd_AcquireBuffer)(void);
  void (*Snd_ReleaseBuffer)(void);
  void (*StoreProfile)(void);
  double (*Sys_FloatTime)(void);
  void (__cdecl *VID_UpdateWindowVars)(void *prc, int x, int y);
  void (__cdecl *VID_UpdateVID)(struct viddef_s *pvid);
  void (__cdecl *VGui_CallEngineSurfaceProc)(void *hwnd, unsigned int msg, unsigned int wparam, int lparam);
  void (*EngineTakingFocus)(void);
  void (*LauncherTakingFocus)(void);
  void (*GL_Init)(void);
  void (*GL_SetMode)(void);
  void (*GL_Shutdown)(void);
  void (*QGL_D3DShared)(void);
  void (*glSwapBuffers)(void);
  void (*DirectorProc)(void);
};

/* 18 */
typedef struct engine_api_s engine_api_t;

/* 19 */
enum PLUG_LOADTIME
{
  PT_NEVER = 0x0,
  PT_STARTUP = 0x1,
  PT_CHANGELEVEL = 0x2,
  PT_ANYTIME = 0x3,
  PT_ANYPAUSE = 0x4,
};

/* 20 */
struct plugin_info_s
{
  char ifvers;
  char *name;
  char *version;
  char *date;
  char *author;
  char *url;
  char *logtag;
  PLUG_LOADTIME loadable;
  PLUG_LOADTIME unloadable;
};

/* 37 */
typedef int (__cdecl *GETENTITYAPI_FN)(DLL_FUNCTIONS *pFunctionTable, int interfaceVersion);

/* 38 */
typedef int (__cdecl *GETENTITYAPI2_FN)(DLL_FUNCTIONS *pFunctionTable, int *interfaceVersion);

/* 84 */
typedef struct $2932F9D9BA1273E7834287D6FC668AD4 NEW_DLL_FUNCTIONS;

/* 44 */
typedef int (__cdecl *GETNEWDLLFUNCTIONS_FN)(NEW_DLL_FUNCTIONS *pFunctionTable, int *interfaceVersion);

/* 40 */
typedef struct enginefuncs_s enginefuncs_t;

/* 41 */
typedef int (__cdecl *GET_ENGINE_FUNCTIONS_FN)(enginefuncs_t *pengfuncsFromEngine, int *interfaceVersion);

/* 21 */
struct __attribute__((aligned(4))) META_FUNCTIONS
{
  int (__cdecl *pfnGetEntityAPI)(DLL_FUNCTIONS *pFunctionTable, int interfaceVersion);
  GETENTITYAPI_FN pfnGetEntityAPI_Post;
  GETENTITYAPI2_FN pfnGetEntityAPI2;
  GETENTITYAPI2_FN pfnGetEntityAPI2_Post;
  GETNEWDLLFUNCTIONS_FN pfnGetNewDLLFunctions;
  GETNEWDLLFUNCTIONS_FN pfnGetNewDLLFunctions_Post;
  GET_ENGINE_FUNCTIONS_FN pfnGetEngineFunctions;
  GET_ENGINE_FUNCTIONS_FN pfnGetEngineFunctions_Post;
};

/* 35 */
typedef struct edict_s edict_t;

/* 26 */
struct DLL_FUNCTIONS
{
  void (*pfnGameInit)(void);
  int (__cdecl *pfnSpawn)(edict_t *pent);
};

/* 83 */
struct $2932F9D9BA1273E7834287D6FC668AD4
{
  void (__cdecl *pfnOnFreeEntPrivateData)(edict_t *pEnt);
  void (*pfnGameShutdown)(void);
  int (__cdecl *pfnShouldCollide)(edict_t *pentTouched, edict_t *pentOther);
};

/* 69 */
typedef struct cvar_s cvar_t;

/* 72 */
enum $4DDBB57CA07F9C38201069F7DC739F1A
{
  at_notice = 0x0,
  at_console = 0x1,
  at_aiconsole = 0x2,
  at_warning = 0x3,
  at_error = 0x4,
  at_logged = 0x5,
};

/* 73 */
typedef enum $4DDBB57CA07F9C38201069F7DC739F1A ALERT_TYPE;

/* 74 */
typedef __int32 int32;

/* 75 */
typedef unsigned __int32 uint32;

/* 76 */
enum $8807429A126EDE9FD2AEA5AD358F40CA
{
  print_console = 0x0,
  print_center = 0x1,
  print_chat = 0x2,
};

/* 77 */
typedef enum $8807429A126EDE9FD2AEA5AD358F40CA PRINT_TYPE;

/* 78 */
typedef uint32 CRC32_t;

/* 49 */
typedef unsigned __int8 byte;

/* 79 */
enum $C60CBCD49ED2BDB83D73A5E96D5F0EC0
{
  force_exactfile = 0x0,
  force_model_samebounds = 0x1,
  force_model_specifybounds = 0x2,
  force_model_specifybounds_if_avail = 0x3,
};

/* 80 */
typedef enum $C60CBCD49ED2BDB83D73A5E96D5F0EC0 FORCE_TYPE;

/* 27 */
typedef int qboolean;

/* 39 */
struct enginefuncs_s
{
  int (__cdecl *pfnPrecacheModel)(char *s);
  int (__cdecl *pfnPrecacheSound)(char *s);
  void (__cdecl *pfnSetModel)(edict_t *e, const char *m);
  int (__cdecl *pfnModelIndex)(const char *m);
  int (__cdecl *pfnModelFrames)(int modelIndex);
  void (__cdecl *pfnSetSize)(edict_t *e, const float *rgflMin, const float *rgflMax);
  void (__cdecl *pfnChangeLevel)(char *s1, char *s2);
  void (__cdecl *pfnGetSpawnParms)(edict_t *ent);
  void (__cdecl *pfnSaveSpawnParms)(edict_t *ent);
  float (__cdecl *pfnVecToYaw)(const float *rgflVector);
  void (__cdecl *pfnVecToAngles)(const float *rgflVectorIn, float *rgflVectorOut);
  void (__cdecl *pfnMoveToOrigin)(edict_t *ent, const float *pflGoal, float dist, int iMoveType);
  void (__cdecl *pfnChangeYaw)(edict_t *ent);
  void (__cdecl *pfnChangePitch)(edict_t *ent);
  edict_t *(__cdecl *pfnFindEntityByString)(edict_t *pEdictStartSearchAfter, const char *pszField, const char *pszValue);
  int (__cdecl *pfnGetEntityIllum)(edict_t *pEnt);
  edict_t *(__cdecl *pfnFindEntityInSphere)(edict_t *pEdictStartSearchAfter, const float *org, float rad);
  edict_t *(__cdecl *pfnFindClientInPVS)(edict_t *pEdict);
  edict_t *(__cdecl *pfnEntitiesInPVS)(edict_t *pplayer);
  void (__cdecl *pfnMakeVectors)(const float *rgflVector);
  void (__cdecl *pfnAngleVectors)(const float *rgflVector, float *forward, float *right, float *up);
  edict_t *(*pfnCreateEntity)(void);
  void (__cdecl *pfnRemoveEntity)(edict_t *e);
  edict_t *(__cdecl *pfnCreateNamedEntity)(int className);
  void (__cdecl *pfnMakeStatic)(edict_t *ent);
  int (__cdecl *pfnEntIsOnFloor)(edict_t *e);
  int (__cdecl *pfnDropToFloor)(edict_t *e);
  int (__cdecl *pfnWalkMove)(edict_t *ent, float yaw, float dist, int iMode);
  void (__cdecl *pfnSetOrigin)(edict_t *e, const float *rgflOrigin);
  void (__cdecl *pfnEmitSound)(edict_t *entity, int channel, const char *sample, float volume, float attenuation, int fFlags, int pitch);
  void (__cdecl *pfnEmitAmbientSound)(edict_t *entity, float *pos, const char *samp, float vol, float attenuation, int fFlags, int pitch);
  void (__cdecl *pfnTraceLine)(const float *v1, const float *v2, int fNoMonsters, edict_t *pentToSkip, TraceResult *ptr);
  void (__cdecl *pfnTraceToss)(edict_t *pent, edict_t *pentToIgnore, TraceResult *ptr);
  int (__cdecl *pfnTraceMonsterHull)(edict_t *pEdict, const float *v1, const float *v2, int fNoMonsters, edict_t *pentToSkip, TraceResult *ptr);
  void (__cdecl *pfnTraceHull)(const float *v1, const float *v2, int fNoMonsters, int hullNumber, edict_t *pentToSkip, TraceResult *ptr);
  void (__cdecl *pfnTraceModel)(const float *v1, const float *v2, int hullNumber, edict_t *pent, TraceResult *ptr);
  const char *(__cdecl *pfnTraceTexture)(edict_t *pTextureEntity, const float *v1, const float *v2);
  void (__cdecl *pfnTraceSphere)(const float *v1, const float *v2, int fNoMonsters, float radius, edict_t *pentToSkip, TraceResult *ptr);
  void (__cdecl *pfnGetAimVector)(edict_t *ent, float speed, float *rgflReturn);
  void (__cdecl *pfnServerCommand)(char *str);
  void (*pfnServerExecute)(void);
  void (*pfnClientCommand)(edict_t *pEdict, char *szFmt, ...);
  void (__cdecl *pfnParticleEffect)(const float *org, const float *dir, float color, float count);
  void (__cdecl *pfnLightStyle)(int style, char *val);
  int (__cdecl *pfnDecalIndex)(const char *name);
  int (__cdecl *pfnPointContents)(const float *rgflVector);
  void (__cdecl *pfnMessageBegin)(int msg_dest, int msg_type, const float *pOrigin, edict_t *ed);
  void (*pfnMessageEnd)(void);
  void (__cdecl *pfnWriteByte)(int iValue);
  void (__cdecl *pfnWriteChar)(int iValue);
  void (__cdecl *pfnWriteShort)(int iValue);
  void (__cdecl *pfnWriteLong)(int iValue);
  void (__cdecl *pfnWriteAngle)(float flValue);
  void (__cdecl *pfnWriteCoord)(float flValue);
  void (__cdecl *pfnWriteString)(const char *sz);
  void (__cdecl *pfnWriteEntity)(int iValue);
  void (__cdecl *pfnCVarRegister)(cvar_t *pCvar);
  float (__cdecl *pfnCVarGetFloat)(const char *szVarName);
  const char *(__cdecl *pfnCVarGetString)(const char *szVarName);
  void (__cdecl *pfnCVarSetFloat)(const char *szVarName, float flValue);
  void (__cdecl *pfnCVarSetString)(const char *szVarName, const char *szValue);
  void (*pfnAlertMessage)(ALERT_TYPE atype, char *szFmt, ...);
  void (*pfnEngineFprintf)(void *pfile, char *szFmt, ...);
  void *(__cdecl *pfnPvAllocEntPrivateData)(edict_t *pEdict, int32 cb);
  void *(__cdecl *pfnPvEntPrivateData)(edict_t *pEdict);
  void (__cdecl *pfnFreeEntPrivateData)(edict_t *pEdict);
  const char *(__cdecl *pfnSzFromIndex)(int iString);
  int (__cdecl *pfnAllocString)(const char *szValue);
  struct entvars_s *(__cdecl *pfnGetVarsOfEnt)(edict_t *pEdict);
  edict_t *(__cdecl *pfnPEntityOfEntOffset)(int iEntOffset);
  int (__cdecl *pfnEntOffsetOfPEntity)(const edict_t *pEdict);
  int (__cdecl *pfnIndexOfEdict)(const edict_t *pEdict);
  edict_t *(__cdecl *pfnPEntityOfEntIndex)(int iEntIndex);
  edict_t *(__cdecl *pfnFindEntityByVars)(struct entvars_s *pvars);
  void *(__cdecl *pfnGetModelPtr)(edict_t *pEdict);
  int (__cdecl *pfnRegUserMsg)(const char *pszName, int iSize);
  void (__cdecl *pfnAnimationAutomove)(const edict_t *pEdict, float flTime);
  void (__cdecl *pfnGetBonePosition)(const edict_t *pEdict, int iBone, float *rgflOrigin, float *rgflAngles);
  uint32 (__cdecl *pfnFunctionFromName)(const char *pName);
  const char *(__cdecl *pfnNameForFunction)(uint32 function);
  void (__cdecl *pfnClientPrintf)(edict_t *pEdict, PRINT_TYPE ptype, const char *szMsg);
  void (__cdecl *pfnServerPrint)(const char *szMsg);
  const char *(*pfnCmd_Args)(void);
  const char *(__cdecl *pfnCmd_Argv)(int argc);
  int (*pfnCmd_Argc)(void);
  void (__cdecl *pfnGetAttachment)(const edict_t *pEdict, int iAttachment, float *rgflOrigin, float *rgflAngles);
  void (__cdecl *pfnCRC32_Init)(CRC32_t *pulCRC);
  void (__cdecl *pfnCRC32_ProcessBuffer)(CRC32_t *pulCRC, void *p, int len);
  void (__cdecl *pfnCRC32_ProcessByte)(CRC32_t *pulCRC, unsigned __int8 ch);
  CRC32_t (__cdecl *pfnCRC32_Final)(CRC32_t pulCRC);
  int32 (__cdecl *pfnRandomLong)(int32 lLow, int32 lHigh);
  float (__cdecl *pfnRandomFloat)(float flLow, float flHigh);
  void (__cdecl *pfnSetView)(const edict_t *pClient, const edict_t *pViewent);
  float (*pfnTime)(void);
  void (__cdecl *pfnCrosshairAngle)(const edict_t *pClient, float pitch, float yaw);
  byte *(__cdecl *pfnLoadFileForMe)(char *filename, int *pLength);
  void (__cdecl *pfnFreeFile)(void *buffer);
  void (__cdecl *pfnEndSection)(const char *pszSectionName);
  int (__cdecl *pfnCompareFileTime)(char *filename1, char *filename2, int *iCompare);
  void (__cdecl *pfnGetGameDir)(char *szGetGameDir);
  void (__cdecl *pfnCvar_RegisterVariable)(cvar_t *variable);
  void (__cdecl *pfnFadeClientVolume)(const edict_t *pEdict, int fadePercent, int fadeOutSeconds, int holdTime, int fadeInSeconds);
  void (__cdecl *pfnSetClientMaxspeed)(const edict_t *pEdict, float fNewMaxspeed);
  edict_t *(__cdecl *pfnCreateFakeClient)(const char *netname);
  void (__cdecl *pfnRunPlayerMove)(edict_t *fakeclient, const float *viewangles, float forwardmove, float sidemove, float upmove, unsigned __int16 buttons, byte impulse, byte msec);
  int (*pfnNumberOfEntities)(void);
  char *(__cdecl *pfnGetInfoKeyBuffer)(edict_t *e);
  char *(__cdecl *pfnInfoKeyValue)(char *infobuffer, char *key);
  void (__cdecl *pfnSetKeyValue)(char *infobuffer, char *key, char *value);
  void (__cdecl *pfnSetClientKeyValue)(int clientIndex, char *infobuffer, char *key, char *value);
  int (__cdecl *pfnIsMapValid)(char *filename);
  void (__cdecl *pfnStaticDecal)(const float *origin, int decalIndex, int entityIndex, int modelIndex);
  int (__cdecl *pfnPrecacheGeneric)(char *s);
  int (__cdecl *pfnGetPlayerUserId)(edict_t *e);
  void (__cdecl *pfnBuildSoundMsg)(edict_t *entity, int channel, const char *sample, float volume, float attenuation, int fFlags, int pitch, int msg_dest, int msg_type, const float *pOrigin, edict_t *ed);
  int (*pfnIsDedicatedServer)(void);
  cvar_t *(__cdecl *pfnCVarGetPointer)(const char *szVarName);
  unsigned int (__cdecl *pfnGetPlayerWONId)(edict_t *e);
  void (__cdecl *pfnInfo_RemoveKey)(char *s, const char *key);
  const char *(__cdecl *pfnGetPhysicsKeyValue)(const edict_t *pClient, const char *key);
  void (__cdecl *pfnSetPhysicsKeyValue)(const edict_t *pClient, const char *key, const char *value);
  const char *(__cdecl *pfnGetPhysicsInfoString)(const edict_t *pClient);
  unsigned __int16 (__cdecl *pfnPrecacheEvent)(int type, const char *psz);
  void (__cdecl *pfnPlaybackEvent)(int flags, const edict_t *pInvoker, unsigned __int16 eventindex, float delay, float *origin, float *angles, float fparam1, float fparam2, int iparam1, int iparam2, int bparam1, int bparam2);
  unsigned __int8 *(__cdecl *pfnSetFatPVS)(float *org);
  unsigned __int8 *(__cdecl *pfnSetFatPAS)(float *org);
  int (__cdecl *pfnCheckVisibility)(const edict_t *entity, unsigned __int8 *pset);
  void (__cdecl *pfnDeltaSetField)(struct delta_s *pFields, const char *fieldname);
  void (__cdecl *pfnDeltaUnsetField)(struct delta_s *pFields, const char *fieldname);
  void (__cdecl *pfnDeltaAddEncoder)(char *name, void (__cdecl *conditionalencode)(struct delta_s *pFields, const unsigned __int8 *from, const unsigned __int8 *to));
  int (*pfnGetCurrentPlayer)(void);
  int (__cdecl *pfnCanSkipPlayer)(const edict_t *player);
  int (__cdecl *pfnDeltaFindField)(struct delta_s *pFields, const char *fieldname);
  void (__cdecl *pfnDeltaSetFieldByIndex)(struct delta_s *pFields, int fieldNumber);
  void (__cdecl *pfnDeltaUnsetFieldByIndex)(struct delta_s *pFields, int fieldNumber);
  void (__cdecl *pfnSetGroupMask)(int mask, int op);
  int (__cdecl *pfnCreateInstancedBaseline)(int classname, struct entity_state_s *baseline);
  void (__cdecl *pfnCvar_DirectSet)(struct cvar_s *var, char *value);
  void (__cdecl *pfnForceUnmodified)(FORCE_TYPE type, float *mins, float *maxs, const char *filename);
  void (__cdecl *pfnGetPlayerStats)(const edict_t *pClient, int *ping, int *packet_loss);
  void (__cdecl *pfnAddServerCommand)(char *cmd_name, void (*function)(void));
  qboolean (__cdecl *pfnVoice_GetClientListening)(int iReceiver, int iSender);
  qboolean (__cdecl *pfnVoice_SetClientListening)(int iReceiver, int iSender, qboolean bListen);
  const char *(__cdecl *pfnGetPlayerAuthId)(edict_t *e);
  int *(__cdecl *pfnSequenceGet)(const char *fileName, const char *entryName);
  int *(__cdecl *pfnSequencePickSentence)(const char *groupName, int pickMethod, int *picked);
  int (__cdecl *pfnGetFileSize)(char *filename);
  unsigned int (__cdecl *pfnGetApproxWavePlayLen)(const char *filepath);
  int (*pfnIsCareerMatch)(void);
  int (__cdecl *pfnGetLocalizedStringLength)(const char *label);
  void (__cdecl *pfnRegisterTutorMessageShown)(int mid);
  int (__cdecl *pfnGetTimesTutorMessageShown)(int mid);
  void (__cdecl *ProcessTutorMessageDecayBuffer)(int *buffer, int bufferLength);
  void (__cdecl *ConstructTutorMessageDecayBuffer)(int *buffer, int bufferLength);
  void (*ResetTutorMessageDecayData)(void);
  void (__cdecl *pfnQueryClientCvarValue)(const edict_t *player, const char *cvarName);
  void (__cdecl *pfnQueryClientCvarValue2)(const edict_t *player, const char *cvarName, int requestID);
  int (__cdecl *pfnCheckParm)(const char *pchCmdLineToken, char **ppnext);
};

/* 29 */
struct link_s
{
  struct link_s *prev;
  struct link_s *next;
};

/* 30 */
typedef struct link_s link_t;

/* 33 */
struct edict_s
{
  qboolean free;
  int serialnumber;
  link_t area;
  int headnode;
  int num_leafs;
  __int16 leafnums[48];
  float freetime;
  void *pvPrivateData;
  int entvars_t_v;
};

/* 57 */
struct vec3_s
{
  float x;
  float y;
  float z;
};

/* 58 */
typedef struct vec3_s vec3_t;

/* 67 */
struct TraceResult
{
  int fAllSolid;
  int fStartSolid;
  int fInOpen;
  int fInWater;
  float flFraction;
  vec3_t vecEndPos;
  float flPlaneDist;
  vec3_t vecPlaneNormal;
  edict_t *pHit;
  int iHitgroup;
};

/* 68 */
struct cvar_s
{
  char *name;
  char *string;
  int flags;
  float value;
  struct cvar_s *next;
};

/* 60 */
typedef int string_t;

/* 31 */
struct entvars_s
{
  string_t classname;
  string_t globalname;
  vec3_t origin;
  vec3_t oldorigin;
  vec3_t velocity;
  vec3_t basevelocity;
  vec3_t clbasevelocity;
  vec3_t movedir;
  vec3_t angles;
  vec3_t avelocity;
  vec3_t punchangle;
  vec3_t v_angle;
  vec3_t endpos;
  vec3_t startpos;
  float impacttime;
  float starttime;
  int fixangle;
  float idealpitch;
  float pitch_speed;
  float ideal_yaw;
  float yaw_speed;
  int modelindex;
  string_t model;
  int viewmodel;
  int weaponmodel;
  vec3_t absmin;
  vec3_t absmax;
  vec3_t mins;
  vec3_t maxs;
  vec3_t size;
  float ltime;
  float nextthink;
  int movetype;
  int solid;
  int skin;
  int body;
  int effects;
  float gravity;
  float friction;
  int light_level;
  int sequence;
  int gaitsequence;
  float frame;
  float animtime;
  float framerate;
  byte controller[4];
  byte blending[2];
  float scale;
  int rendermode;
  float renderamt;
  vec3_t rendercolor;
  int renderfx;
  float health;
  float frags;
  int weapons;
  float takedamage;
  int deadflag;
  vec3_t view_ofs;
  int button;
  int impulse;
  edict_t *chain;
  edict_t *dmg_inflictor;
  edict_t *enemy;
  edict_t *aiment;
  edict_t *owner;
  edict_t *groundentity;
  int spawnflags;
  int flags;
  int colormap;
  int team;
  float max_health;
  float teleport_time;
  float armortype;
  float armorvalue;
  int waterlevel;
  int watertype;
  string_t target;
  string_t targetname;
  string_t netname;
  string_t message;
  float dmg_take;
  float dmg_save;
  float dmg;
  float dmgtime;
  string_t noise;
  string_t noise1;
  string_t noise2;
  string_t noise3;
  float speed;
  float air_finished;
  float pain_finished;
  float radsuit_finished;
  edict_t *pContainingEntity;
  int playerclass;
  float maxspeed;
  float fov;
  int weaponanim;
  int pushmsec;
  int bInDuck;
  int flTimeStepSound;
  int flSwimTime;
  int flDuckTime;
  int iStepLeft;
  float flFallVelocity;
  int gamestate;
  int oldbuttons;
  int groupinfo;
  int iuser1;
  int iuser2;
  int iuser3;
  int iuser4;
  float fuser1;
  float fuser2;
  float fuser3;
  float fuser4;
  vec3_t vuser1;
  vec3_t vuser2;
  vec3_t vuser3;
  vec3_t vuser4;
  edict_t *euser1;
  edict_t *euser2;
  edict_t *euser3;
  edict_t *euser4;
};

/* 22 */
enum META_RES
{
  MRES_UNSET = 0x0,
  MRES_IGNORED = 0x1,
  MRES_HANDLED = 0x2,
  MRES_OVERRIDE = 0x3,
  MRES_SUPERCEDE = 0x4,
};

/* 23 */
struct meta_globals_t
{
  META_RES mres;
  META_RES prev_mres;
  META_RES status;
  void *orig_ret;
  void *override_ret;
};

/* 32 */
typedef struct entvars_s entvars_t;

/* 36 */
typedef struct plugin_info_s plugin_info_t;

/* 42 */
struct NEW_DLL_FUNCTIONS_s
{
  void (__cdecl *pfnOnFreeEntPrivateData)(edict_t *pEnt);
  void (*pfnGameShutdown)(void);
  int (__cdecl *pfnShouldCollide)(edict_t *pentTouched, edict_t *pentOther);
  void (__cdecl *pfnCvarValue)(const edict_t *pEnt, const char *value);
  void (__cdecl *pfnCvarValue2)(const edict_t *pEnt, int requestID, const char *cvarName, const char *value);
};

/* 47 */
typedef plugin_info_t *plid_t;

/* 48 */
struct hudtextparms_s
{
  float x;
  float y;
  int effect;
  byte r1;
  byte g1;
  byte b1;
  byte a1;
  byte r2;
  byte g2;
  byte b2;
  byte a2;
  float fadeinTime;
  float fadeoutTime;
  float holdTime;
  float fxTime;
  int channel;
};

/* 50 */
typedef struct hudtextparms_s hudtextparms_t;

/* 45 */
struct __attribute__((aligned(4))) meta_util_funcs_s
{
  void (*pfnLogConsole)(plid_t plid, const char *fmt, ...);
  void (*pfnLogMessage)(plid_t plid, const char *fmt, ...);
  void (*pfnLogError)(plid_t plid, const char *fmt, ...);
  void (*pfnLogDeveloper)(plid_t plid, const char *fmt, ...);
  void (*pfnCenterSay)(plid_t plid, const char *fmt, ...);
  void (*pfnCenterSayParms)(plid_t plid, hudtextparms_t tparms, const char *fmt, ...);
  void (__cdecl *pfnCenterSayVarargs)(plid_t plid, hudtextparms_t tparms, const char *fmt, va_list ap);
  qboolean (__cdecl *pfnCallGameEntity)(plid_t plid, const char *entStr, entvars_t *pev);
  int (__cdecl *pfnGetUserMsgID)(plid_t plid, const char *msgname, int *size);
  const char *(__cdecl *pfnGetUserMsgName)(plid_t plid, int msgid, int *size);
  const char *(__cdecl *pfnGetPluginPath)(plid_t plid);
};

/* 51 */
typedef struct meta_util_funcs_s mutil_funcs_t;

/* 52 */
struct gamedll_s
{
  char name[256];
  char *desc;
  char gamedir[260];
  char pathname[260];
  const char *file;
  char real_pathname[260];
};

/* 53 */
typedef struct gamedll_s gamedll_t;

/* 54 */
struct gamedll_funcs_s
{
  DLL_FUNCTIONS *dllapi_table;
  NEW_DLL_FUNCTIONS *newapi_table;
};

/* 56 */
typedef struct gamedll_funcs_s gamedll_funcs_t;

/* 59 */
struct globalvars_s
{
  float time;
  float frametime;
  float force_retouch;
  string_t mapname;
  string_t startspot;
  float deathmatch;
  float coop;
  float teamplay;
  float serverflags;
  float found_secrets;
  vec3_t v_forward;
  vec3_t v_up;
  vec3_t v_right;
  float trace_allsolid;
  float trace_startsolid;
  float trace_fraction;
  vec3_t trace_endpos;
  vec3_t trace_plane_normal;
  float trace_plane_dist;
  edict_t *trace_ent;
  float trace_inopen;
  float trace_inwater;
  int trace_hitgroup;
  int trace_flags;
  int msg_entity;
  int cdAudioTrack;
  int maxClients;
  int maxEntities;
  const char *pStringBase;
  void *pSaveData;
  vec3_t vecLandmarkOffset;
};

/* 61 */
typedef struct globalvars_s globalvars_t;

/* 63 */
typedef int RC4_INT;

/* 62 */
struct rc4_key_st
{
  RC4_INT x;
  RC4_INT y;
  RC4_INT data[256];
};

/* 64 */
typedef struct rc4_key_st RC4_KEY;

/* 81 */
struct sequenceEntry_;

/* 82 */
typedef struct sequenceEntry_ sequenceEntry_s;
