/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This code is generated, do not edit by hand. **/

#include "ti.notifications.TiNotificationsModule.h"

#include "AndroidUtil.h"
#include "EventEmitter.h"
#include "JNIUtil.h"
#include "JSException.h"
#include "Proxy.h"
#include "ProxyFactory.h"
#include "TypeConverter.h"
#include "V8Util.h"




#include "org.appcelerator.kroll.KrollModule.h"

#define TAG "TiNotificationsModule"

using namespace v8;

		namespace ti {
		namespace notifications {


Persistent<FunctionTemplate> TiNotificationsModule::proxyTemplate = Persistent<FunctionTemplate>();
jclass TiNotificationsModule::javaClass = NULL;

TiNotificationsModule::TiNotificationsModule(jobject javaObject) : titanium::Proxy(javaObject)
{
}

void TiNotificationsModule::bindProxy(Handle<Object> exports)
{
	if (proxyTemplate.IsEmpty()) {
		getProxyTemplate();
	}

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("TiNotifications");

	Local<Function> proxyConstructor = proxyTemplate->GetFunction();
	Local<Object> moduleInstance = proxyConstructor->NewInstance();
	exports->Set(nameSymbol, moduleInstance);
}

void TiNotificationsModule::dispose()
{
	LOGD(TAG, "dispose()");
	if (!proxyTemplate.IsEmpty()) {
		proxyTemplate.Dispose();
		proxyTemplate = Persistent<FunctionTemplate>();
	}

	titanium::KrollModule::dispose();
}

Handle<FunctionTemplate> TiNotificationsModule::getProxyTemplate()
{
	if (!proxyTemplate.IsEmpty()) {
		return proxyTemplate;
	}

	LOGD(TAG, "GetProxyTemplate");

	javaClass = titanium::JNIUtil::findClass("ti/notifications/TiNotificationsModule");
	HandleScope scope;

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("TiNotifications");

	Handle<FunctionTemplate> t = titanium::Proxy::inheritProxyTemplate(
		titanium::KrollModule::getProxyTemplate()
, javaClass, nameSymbol);

	proxyTemplate = Persistent<FunctionTemplate>::New(t);
	proxyTemplate->Set(titanium::Proxy::inheritSymbol,
		FunctionTemplate::New(titanium::Proxy::inherit<TiNotificationsModule>)->GetFunction());

	titanium::ProxyFactory::registerProxyPair(javaClass, *proxyTemplate);

	// Method bindings --------------------------------------------------------
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "addActionUrl", TiNotificationsModule::addActionUrl);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "addActionReport", TiNotificationsModule::addActionReport);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "example", TiNotificationsModule::example);

	Local<ObjectTemplate> prototypeTemplate = proxyTemplate->PrototypeTemplate();
	Local<ObjectTemplate> instanceTemplate = proxyTemplate->InstanceTemplate();

	// Delegate indexed property get and set to the Java proxy.
	instanceTemplate->SetIndexedPropertyHandler(titanium::Proxy::getIndexedProperty,
		titanium::Proxy::setIndexedProperty);

	// Constants --------------------------------------------------------------

	// Dynamic properties -----------------------------------------------------
	instanceTemplate->SetAccessor(String::NewSymbol("exampleProp"),
			TiNotificationsModule::getter_exampleProp
			, TiNotificationsModule::setter_exampleProp
, Handle<Value>(), DEFAULT);

	// Accessors --------------------------------------------------------------

	return proxyTemplate;
}

// Methods --------------------------------------------------------------------
Handle<Value> TiNotificationsModule::addActionUrl(const Arguments& args)
{
	LOGD(TAG, "addActionUrl()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(TiNotificationsModule::javaClass, "addActionUrl", "(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'addActionUrl' with signature '(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	if (args.Length() < 7) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "addActionUrl: Invalid number of arguments. Expected 7 but got %d", args.Length());
		return ThrowException(Exception::Error(String::New(errorStringBuffer)));
	}

	jvalue jArguments[7];




	
	
		if ((titanium::V8Util::isNaN(args[0]) && !args[0]->IsUndefined()) || args[0]->ToString()->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			return titanium::JSException::Error(error);
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber();
		jArguments[0].i =
			titanium::TypeConverter::jsNumberToJavaInt(env, arg_0);
	} else {
		jArguments[0].i = NULL;
	}

	
	
		if ((titanium::V8Util::isNaN(args[1]) && !args[1]->IsUndefined()) || args[1]->ToString()->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			return titanium::JSException::Error(error);
		}
	if (!args[1]->IsNull()) {
		Local<Number> arg_1 = args[1]->ToNumber();
		jArguments[1].i =
			titanium::TypeConverter::jsNumberToJavaInt(env, arg_1);
	} else {
		jArguments[1].i = NULL;
	}

	
	
	if (!args[2]->IsNull()) {
		Local<Value> arg_2 = args[2];
		jArguments[2].l =
			titanium::TypeConverter::jsValueToJavaString(env, arg_2);
	} else {
		jArguments[2].l = NULL;
	}

	
	
	if (!args[3]->IsNull()) {
		Local<Value> arg_3 = args[3];
		jArguments[3].l =
			titanium::TypeConverter::jsValueToJavaString(env, arg_3);
	} else {
		jArguments[3].l = NULL;
	}

	
	
	if (!args[4]->IsNull()) {
		Local<Value> arg_4 = args[4];
		jArguments[4].l =
			titanium::TypeConverter::jsValueToJavaString(env, arg_4);
	} else {
		jArguments[4].l = NULL;
	}

	
	
		if ((titanium::V8Util::isNaN(args[5]) && !args[5]->IsUndefined()) || args[5]->ToString()->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			return titanium::JSException::Error(error);
		}
	if (!args[5]->IsNull()) {
		Local<Number> arg_5 = args[5]->ToNumber();
		jArguments[5].i =
			titanium::TypeConverter::jsNumberToJavaInt(env, arg_5);
	} else {
		jArguments[5].i = NULL;
	}

	
	
	if (!args[6]->IsNull()) {
		Local<Value> arg_6 = args[6];
		jArguments[6].l =
			titanium::TypeConverter::jsValueToJavaString(env, arg_6);
	} else {
		jArguments[6].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



				env->DeleteLocalRef(jArguments[2].l);


				env->DeleteLocalRef(jArguments[3].l);


				env->DeleteLocalRef(jArguments[4].l);


				env->DeleteLocalRef(jArguments[6].l);


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}
Handle<Value> TiNotificationsModule::addActionReport(const Arguments& args)
{
	LOGD(TAG, "addActionReport()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(TiNotificationsModule::javaClass, "addActionReport", "(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'addActionReport' with signature '(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	if (args.Length() < 9) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "addActionReport: Invalid number of arguments. Expected 9 but got %d", args.Length());
		return ThrowException(Exception::Error(String::New(errorStringBuffer)));
	}

	jvalue jArguments[9];




	
	
		if ((titanium::V8Util::isNaN(args[0]) && !args[0]->IsUndefined()) || args[0]->ToString()->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			return titanium::JSException::Error(error);
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber();
		jArguments[0].i =
			titanium::TypeConverter::jsNumberToJavaInt(env, arg_0);
	} else {
		jArguments[0].i = NULL;
	}

	
	
		if ((titanium::V8Util::isNaN(args[1]) && !args[1]->IsUndefined()) || args[1]->ToString()->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			return titanium::JSException::Error(error);
		}
	if (!args[1]->IsNull()) {
		Local<Number> arg_1 = args[1]->ToNumber();
		jArguments[1].i =
			titanium::TypeConverter::jsNumberToJavaInt(env, arg_1);
	} else {
		jArguments[1].i = NULL;
	}

	
	
	if (!args[2]->IsNull()) {
		Local<Value> arg_2 = args[2];
		jArguments[2].l =
			titanium::TypeConverter::jsValueToJavaString(env, arg_2);
	} else {
		jArguments[2].l = NULL;
	}

	
	
	if (!args[3]->IsNull()) {
		Local<Value> arg_3 = args[3];
		jArguments[3].l =
			titanium::TypeConverter::jsValueToJavaString(env, arg_3);
	} else {
		jArguments[3].l = NULL;
	}

	
	
	if (!args[4]->IsNull()) {
		Local<Value> arg_4 = args[4];
		jArguments[4].l =
			titanium::TypeConverter::jsValueToJavaString(env, arg_4);
	} else {
		jArguments[4].l = NULL;
	}

	
	
		if ((titanium::V8Util::isNaN(args[5]) && !args[5]->IsUndefined()) || args[5]->ToString()->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			return titanium::JSException::Error(error);
		}
	if (!args[5]->IsNull()) {
		Local<Number> arg_5 = args[5]->ToNumber();
		jArguments[5].i =
			titanium::TypeConverter::jsNumberToJavaInt(env, arg_5);
	} else {
		jArguments[5].i = NULL;
	}

	
	
	if (!args[6]->IsNull()) {
		Local<Value> arg_6 = args[6];
		jArguments[6].l =
			titanium::TypeConverter::jsValueToJavaString(env, arg_6);
	} else {
		jArguments[6].l = NULL;
	}

	
	
	if (!args[7]->IsNull()) {
		Local<Value> arg_7 = args[7];
		jArguments[7].l =
			titanium::TypeConverter::jsValueToJavaString(env, arg_7);
	} else {
		jArguments[7].l = NULL;
	}

	
	
	if (!args[8]->IsNull()) {
		Local<Value> arg_8 = args[8];
		jArguments[8].l =
			titanium::TypeConverter::jsValueToJavaString(env, arg_8);
	} else {
		jArguments[8].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



				env->DeleteLocalRef(jArguments[2].l);


				env->DeleteLocalRef(jArguments[3].l);


				env->DeleteLocalRef(jArguments[4].l);


				env->DeleteLocalRef(jArguments[6].l);


				env->DeleteLocalRef(jArguments[7].l);


				env->DeleteLocalRef(jArguments[8].l);


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}
Handle<Value> TiNotificationsModule::example(const Arguments& args)
{
	LOGD(TAG, "example()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(TiNotificationsModule::javaClass, "example", "()Ljava/lang/String;");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'example' with signature '()Ljava/lang/String;'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jstring jResult = (jstring)env->CallObjectMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Handle<Value> jsException = titanium::JSException::fromJavaException();
		env->ExceptionClear();
		return jsException;
	}

	if (jResult == NULL) {
		return Null();
	}

	Handle<Value> v8Result = titanium::TypeConverter::javaStringToJsString(env, jResult);

	env->DeleteLocalRef(jResult);


	return v8Result;

}

// Dynamic property accessors -------------------------------------------------

Handle<Value> TiNotificationsModule::getter_exampleProp(Local<String> property, const AccessorInfo& info)
{
	LOGD(TAG, "get exampleProp");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(TiNotificationsModule::javaClass, "getExampleProp", "()Ljava/lang/String;");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getExampleProp' with signature '()Ljava/lang/String;'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(info.Holder());

	if (!proxy) {
		return Undefined();
	}

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jstring jResult = (jstring)env->CallObjectMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Handle<Value> jsException = titanium::JSException::fromJavaException();
		env->ExceptionClear();
		return jsException;
	}

	if (jResult == NULL) {
		return Null();
	}

	Handle<Value> v8Result = titanium::TypeConverter::javaStringToJsString(env, jResult);

	env->DeleteLocalRef(jResult);


	return v8Result;

}

void TiNotificationsModule::setter_exampleProp(Local<String> property, Local<Value> value, const AccessorInfo& info)
{
	LOGD(TAG, "set exampleProp");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment, exampleProp wasn't set");
		return;
	}

	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(TiNotificationsModule::javaClass, "setExampleProp", "(Ljava/lang/String;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setExampleProp' with signature '(Ljava/lang/String;)V'";
			LOGE(TAG, error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(info.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	
	
	if (!value->IsNull()) {
		Local<Value> arg_0 = value;
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaString(env, arg_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



				env->DeleteLocalRef(jArguments[0].l);


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




}



		} // notifications
		} // ti
