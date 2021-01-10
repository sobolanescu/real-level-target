Search:

typedef struct packet_target
{
    BYTE        header;
    DWORD       dwVID;
    BYTE        bHPPercent;
#ifdef ENABLE_VIEW_TARGET_DECIMAL_HP
	int		iMinHP;
	int		iMaxHP;
#endif
} TPacketGCTarget;

Change in:

typedef struct packet_target
{
    BYTE        header;
    DWORD       dwVID;
    BYTE        bHPPercent;
#ifdef ENABLE_VIEW_TARGET_DECIMAL_HP
	int		iMinHP;
	int		iMaxHP;
#endif
#ifdef ENABLE_TARGET_REAL_LEVEL
	int		bLevel;
#endif
} TPacketGCTarget;
