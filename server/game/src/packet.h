Search:

typedef struct packet_target
{
	BYTE	header;
	DWORD	dwVID;
	BYTE	bHPPercent;
#ifdef __VIEW_TARGET_DECIMAL_HP__
	int		iMinHP;
	int		iMaxHP;
#endif

} TPacketGCTarget;

Change to:

typedef struct packet_target
{
	BYTE	header;
	DWORD	dwVID;
	BYTE	bHPPercent;
#ifdef __VIEW_TARGET_DECIMAL_HP__
	int		iMinHP;
	int		iMaxHP;
#endif
#ifdef ENABLE_TARGET_LEVEL_PACK
	int		bLevel;
#endif

} TPacketGCTarget;
