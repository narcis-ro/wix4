#pragma once
// Copyright (c) .NET Foundation and contributors. All rights reserved. Licensed under the Microsoft Reciprocal License. See LICENSE.TXT file in the project root for full license information.


#include <windows.h>

#pragma warning(push)
#pragma warning(disable:4458) // declaration of 'xxx' hides class member
#include <gdiplus.h>
#pragma warning(pop)

#include <msiquery.h>
#include <objbase.h>
#include <shlobj.h>
#include <shlwapi.h>
#include <stdlib.h>
#include <strsafe.h>
#include <CommCtrl.h>

// Standard WiX header files, include as required
#include "dutil.h"
//#include "memutil.h"
#include "dictutil.h"
//#include "dirutil.h"
#include "fileutil.h"
//#include "locutil.h"
//#include "logutil.h"
#include "pathutil.h"
//#include "resrutil.h"
//#include "shelutil.h"
#include "strutil.h"
//#include "thmutil.h"
//#include "uriutil.h"
//#include "xmlutil.h"
#include "regutil.h"

//#include "IBootstrapperEngine.h"
//#include "IBootstrapperApplication.h"

#include "BalBaseBootstrapperApplication.h"
//#include "balinfo.h"
//#include "balcondition.h"
#include "balutil.h"

#include "BAFunctions.h"
#include "IBAFunctions.h"

HRESULT WINAPI CreateBAFunctions(
    __in HMODULE hModule,
    __in const BA_FUNCTIONS_CREATE_ARGS* pArgs,
    __inout BA_FUNCTIONS_CREATE_RESULTS* pResults
    );
