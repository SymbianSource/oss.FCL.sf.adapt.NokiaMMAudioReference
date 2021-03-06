// Copyright (c) 2003-2009 Nokia Corporation and/or its subsidiary(-ies).
// All rights reserved.
// This component and the accompanying materials are made available
// under the terms of "Eclipse Public License v1.0"
// which accompanies this distribution, and is available
// at the URL "http://www.eclipse.org/legal/epl-v10.html".
//
// Initial Contributors:
// Nokia Corporation - initial contribution.
//
// Contributors:
//
// Description:
//

#ifndef __MMF_DEVSOUNDINFO_H__
#define __MMF_DEVSOUNDINFO_H__

#include <e32base.h>
#include <mmfbase.h>  


class TMMFDevSoundInfo
/**
*@internalTechnology
*/
	{
public:
	TInt iDevSoundId;
	// More to be added for OMAP server
	};

typedef TPckgBuf<TMMFDevSoundInfo> TMMFDevSoundInfoPckg;


#endif
