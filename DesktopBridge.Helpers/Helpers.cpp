// This is the main DLL file.

#include "stdafx.h"
#include "Helpers.h"

#define _UNICODE 1
#define UNICODE 1

#include <Windows.h>
#include <appmodel.h>
#include <malloc.h>
#include <stdio.h>

bool DesktopBridge::Helpers::IsRunningAsUwp()
{
	UINT32 length = 0;
	LONG rc = GetCurrentPackageFullName(&length, NULL);
	if (rc != ERROR_INSUFFICIENT_BUFFER)
	{
		if (rc == APPMODEL_ERROR_NO_PACKAGE)
			wprintf(L"Process has no package identity\n");
		else
			wprintf(L"Error %d in GetCurrentPackageFullName\n", rc);
		return false;
	}
	
	return true;
}
