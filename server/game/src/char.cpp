Search:

	GetDesc()->Packet(&p, sizeof(TPacketGCTarget));
}

Change in:

#ifdef ENABLE_TARGET_REAL_LEVEL
	if (m_pkChrTarget->IsMonster() || m_pkChrTarget->IsStone())
	{
		p.bLevel	= m_pkChrTarget->GetLevel();
	}
	else
	{
		p.bLevel = 0;
	}
#endif
	
	GetDesc()->Packet(&p, sizeof(TPacketGCTarget));
}

