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

#ifndef TESTSTEPCISETDRMPROTECTED_H
#define TESTSTEPCISETDRMPROTECTED_H

#include <testframework.h>

// Custom interface definitions
#include <mmf/server/devsoundstandardcustominterfaces.h>
#include <mmf/plugin/mmfdevsoundcustominterface.hrh>

#include "devsoundciutestdevices.hrh"

// Test system includes
#include "tsu_mmf_devsound_ciu_step.h"
#include "tsu_mmf_devsound_ciu_suite.h"


class CTestStepCICreateSetDRMProtected : public CTestStepCustominterfaceUnificationUnit
	{
public:
	CTestStepCICreateSetDRMProtected();
	TVerdict DoTestStepL();
	};

class CTestStepCISetDRMProtected : public CTestStepCustominterfaceUnificationUnit
	{
public:
	CTestStepCISetDRMProtected();
	TVerdict DoTestStepL();
private:
	void DoReadFromFileL(TBool& aFlag);
	};

#endif
