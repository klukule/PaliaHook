#pragma once

// Dumped with Dumper-7!

#include "SDK.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UWebBrowser::OnUrlChanged__DelegateSignature(class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebBrowser", "OnUrlChanged__DelegateSignature");

	Params::UWebBrowser_OnUrlChanged__DelegateSignature_Params Parms{};

	Parms.Text = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction WebBrowserWidget.WebBrowser.OnConsoleMessage__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Source                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Line                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebBrowser::OnConsoleMessage__DelegateSignature(const class FString& InMessage, const class FString& InSource, int32 InLine)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebBrowser", "OnConsoleMessage__DelegateSignature");

	Params::UWebBrowser_OnConsoleMessage__DelegateSignature_Params Parms{};

	Parms.Message = InMessage;
	Parms.Source = InSource;
	Parms.Line = InLine;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Frame                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebBrowser::OnBeforePopup__DelegateSignature(const class FString& InURL, const class FString& InFrame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebBrowser", "OnBeforePopup__DelegateSignature");

	Params::UWebBrowser_OnBeforePopup__DelegateSignature_Params Parms{};

	Parms.URL = InURL;
	Parms.Frame = InFrame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WebBrowserWidget.WebBrowser.LoadURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      NewURL                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebBrowser::LoadURL(const class FString& InNewURL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebBrowser", "LoadURL");

	Params::UWebBrowser_LoadURL_Params Parms{};

	Parms.NewURL = InNewURL;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function WebBrowserWidget.WebBrowser.LoadString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Contents                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DummyURL                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebBrowser::LoadString(const class FString& InContents, const class FString& InDummyURL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebBrowser", "LoadString");

	Params::UWebBrowser_LoadString_Params Parms{};

	Parms.Contents = InContents;
	Parms.DummyURL = InDummyURL;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function WebBrowserWidget.WebBrowser.GetUrl
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UWebBrowser::GetUrl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebBrowser", "GetUrl");

	Params::UWebBrowser_GetUrl_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function WebBrowserWidget.WebBrowser.GetTitleText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UWebBrowser::GetTitleText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebBrowser", "GetTitleText");

	Params::UWebBrowser_GetTitleText_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function WebBrowserWidget.WebBrowser.ExecuteJavascript
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ScriptText                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebBrowser::ExecuteJavascript(const class FString& InScriptText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebBrowser", "ExecuteJavascript");

	Params::UWebBrowser_ExecuteJavascript_Params Parms{};

	Parms.ScriptText = InScriptText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
