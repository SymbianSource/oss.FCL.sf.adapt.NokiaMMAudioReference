// Copyright (c) 2002-2010 Nokia Corporation and/or its subsidiary(-ies).
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

//This file  is assumed to be  identical to the original file: sf\os\mmaudio\mmlibs\mmfw\codecs\Inc\Gsm610CodecCommon\types.h

#ifndef GSM610_TYPES_H
#define GSM610_TYPES_H

#include <e32std.h>

typedef TInt16  int2;     /* 16 bit */
typedef TInt32  int4;     /* 32 bit */

/* Struct for LTP parameters */

/* Struct for storing encoded speech parameters of one subframe */

struct sfcodes 
	{
	int2 Nc; /* LTP lag */
	int2 bc; /* LTP gain */
	int2 Mc; /* grid */
	int2 xmaxc; /* block max */
	int2 xMc[13]; /* quantized pulses */
	};

/* Struct for storing encoded speech parameters of one frame */

struct codes 
	{
	int2 LARc[8]; /* quantized LARs */
	struct sfcodes sfc[4]; /* subframe specific codes */
	};

#endif
