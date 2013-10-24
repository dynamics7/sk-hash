// sk-hash.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "..\..\common\dynamics\SearchKey.hpp"

int _tmain(int argc, _TCHAR* argv[])
{
	DWORD hash = Dynamics::SearchKey::MakeHash();
	wchar_t str[50];
	swprintf(str, L"%X\n", hash);
	MessageBox(NULL, str, L"SK-hash:", 0);
	return 0;
}

