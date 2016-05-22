#include <Windows.h>
#include <iostream>
#include <fstream>
#include <string>

extern "C" __declspec(dllexport) void _stdcall TestA(char** stringArray)
{
	/*std::wfstream wfn;
	wfn.open("test.txt", std::wofstream::out);
	if (wfn)
	{
		wfn << *(stringArray) << L"\r\n" << *(stringArray + 1);
	}*/

	//int MLen_t = ::WideCharToMultiByte(CP_UTF8, 0, (wchar_t*)(*(stringArray)), -1, NULL, 0, NULL, NULL);

	//char* MultiBte_t = new char[MLen_t + 1];

	//int RetLen_t = ::WideCharToMultiByte(CP_UTF8, 0, (wchar_t*)(*(stringArray)), -1, MultiBte_t, MLen_t, NULL, NULL);

	//MultiBte_t[MLen_t] = '\0';

	////
	//int MLen = ::WideCharToMultiByte(CP_UTF8, 0, (wchar_t*)(*(stringArray + 1)), -1, NULL, 0, NULL, NULL);

	//char* MultiBte = new char[MLen + 1];

	//int RetLen = ::WideCharToMultiByte(CP_UTF8, 0, (wchar_t*)(*(stringArray + 1)), -1, MultiBte, MLen, NULL, NULL);

	//MultiBte[MLen] = '\0';

	//std::fstream fn;
	//fn.open("test.txt", std::ofstream::out);
	//if (fn)
	//{
	//	fn << MultiBte_t << "\r\n" << MultiBte;
	//}

	std::fstream fn;
	fn.open("test.txt", std::ofstream::out);
	if (fn)
	{
		fn << *(stringArray) << "\r\n" << *(stringArray + 1);
	}
}

//extern "C" __declspec(dllexport) void _stdcall TestA(char** stringArray)
//{
//	/*std::wfstream wfn;
//	wfn.open("test.txt", std::wofstream::out);
//	if (wfn)
//	{
//	wfn << *(stringArray) << L"\r\n" << *(stringArray + 1);
//	}*/
//
//	int MLen_t = ::WideCharToMultiByte(CP_UTF8, 0, (wchar_t*)(*(stringArray)), -1, NULL, 0, NULL, NULL);
//
//	char* MultiBte_t = new char[MLen_t + 1];
//
//	int RetLen_t = ::WideCharToMultiByte(CP_UTF8, 0, (wchar_t*)(*(stringArray)), -1, MultiBte_t, MLen_t, NULL, NULL);
//
//	MultiBte_t[MLen_t] = '\0';
//
//	//
//	int MLen = ::WideCharToMultiByte(CP_UTF8, 0, (wchar_t*)(*(stringArray + 1)), -1, NULL, 0, NULL, NULL);
//
//	char* MultiBte = new char[MLen + 1];
//
//	int RetLen = ::WideCharToMultiByte(CP_UTF8, 0, (wchar_t*)(*(stringArray + 1)), -1, MultiBte, MLen, NULL, NULL);
//
//	MultiBte[MLen] = '\0';
//
//	std::fstream fn;
//	fn.open("test.txt", std::ofstream::out);
//	if (fn)
//	{
//		fn << MultiBte_t << "\r\n" << MultiBte;
//	}
//}