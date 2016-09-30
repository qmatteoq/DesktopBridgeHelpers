#pragma once
#define _UNICODE 1
#define UNICODE 1

#include <Windows.h>
#include <appmodel.h>
#include <malloc.h>
#include <stdio.h>


using namespace System;

namespace DesktopBridge {

	public ref class Helpers
	{
	public:
		bool IsRunningAsUwp();


	};
}
