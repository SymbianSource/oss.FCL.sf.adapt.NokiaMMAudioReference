// Copyright (c) 2007-2009 Nokia Corporation and/or its subsidiary(-ies).
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

#ifndef UNDERFLOWAUTOSTOPCONTROLTESTDEVICE_H
#define UNDERFLOWAUTOSTOPCONTROLTESTDEVICE_H

#include <mmf/server/mmfswcodecwrapper.h>
#include <mmf/server/devsoundstandardcustominterfaces.h>


class CMMFUnderflowAutoStopControl : public CBase,
									 public MMMFUnderflowAutoStopControl
	{
public:
	//return Pointer to the CMMFUnderflowAutoStopControl class
	static CMMFUnderflowAutoStopControl* NewL();

	//Destructor
	~CMMFUnderflowAutoStopControl();

	// from MMMFUnderflowAutoStopControl
	TInt MmuascTurnOffUnderflowAutoStop();
	};


/*
CUnderflowAutoStopControlTestDevice

Test hw device used by the
TSU_MMF_DEVSOUND_CIU_SUITE unit test harness.
*/
class CUnderflowAutoStopControlTestDevice : public CMMFSwCodecWrapper,
											public MMMFUnderflowAutoStopControl
	{
public:
	static CMMFHwDevice* NewL();
	virtual ~CUnderflowAutoStopControlTestDevice();
	virtual TInt Start(TDeviceFunc aFuncCmd, TDeviceFlow aFlowCmd);
	virtual TInt Stop();
	virtual TInt Pause();
	virtual TInt Init(THwDeviceInitParams& aDevInfo);
	virtual TAny* CustomInterface(TUid aInterfaceId);
	virtual TInt ThisHwBufferFilled(CMMFBuffer& aFillBufferPtr);
	virtual TInt ThisHwBufferEmptied(CMMFBuffer& aEmptyBufferPtr);
	virtual TInt SetConfig(TTaskConfig& aConfig);
	virtual TInt StopAndDeleteCodec();
	virtual TInt DeleteCodec();

	// from CMMFSwCodecWrapper
	virtual CMMFSwCodec& Codec();

	// MMMFUnderflowAutoStopControl
	TInt MmuascTurnOffUnderflowAutoStop();

private:
	CUnderflowAutoStopControlTestDevice();
	void ConstructL();

private:
	CMMFUnderflowAutoStopControl* iUnderflowAutoStopCtrl;
	};

#endif 
