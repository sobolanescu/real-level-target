In function:

void CHARACTER::ClearTarget()
	
Search:

	TPacketGCTarget p;
	p.header = HEADER_GC_TARGET;
	p.dwVID = 0;
	p.bHPPercent = 0;
#ifdef __VIEW_TARGET_DECIMAL_HP__
	p.iMinHP = 0;
	p.iMaxHP = 0;
#endif

Add:

#ifdef ENABLE_TARGET_REAL_LEVEL
	p.bLevel = 0;
#endif


In function:

void CHARACTER::SetTarget(LPCHARACTER pkChrTarget)
	
Search:


	if (m_pkChrTarget)
	{
		m_pkChrTarget->m_set_pkChrTargetedBy.insert(this);
		p.dwVID	= m_pkChrTarget->GetVID();
		
Add:
		
#ifdef ENABLE_TARGET_REAL_LEVEL
		if ((m_pkChrTarget->GetLevel() <= 0))
		{
			p.bLevel = 0;
		}
		else
		{
			p.bLevel = m_pkChrTarget->GetLevel();
		]
#endif


