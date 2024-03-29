#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.8.1 (swiftlang-5.8.0.124.5 clang-1403.0.22.11.100)
#ifndef HPWEBKIT_SWIFT_H
#define HPWEBKIT_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="HPWebKit",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

@class NSString;

SWIFT_CLASS("_TtC8HPWebKit19HPAttributesBuilder")
@interface HPAttributesBuilder : NSObject
@property (nonatomic, copy) NSString * _Nullable authID;
@property (nonatomic, copy) NSString * _Nullable authCode;
@property (nonatomic, copy) NSString * _Nullable userName;
@property (nonatomic, copy) NSString * _Nullable mobile;
@property (nonatomic, copy) NSString * _Nullable email;
@property (nonatomic, copy) NSString * _Nonnull signupType;
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nullable customData;
+ (nonnull instancetype)buildWithData:(void (^ _Nonnull)(HPAttributesBuilder * _Nonnull))builderData SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8HPWebKit15HPCustomBuilder")
@interface HPCustomBuilder : NSObject
@property (nonatomic, copy) NSString * _Nonnull primaryColor;
@property (nonatomic, copy) NSString * _Nonnull fontSize;
@property (nonatomic, copy) NSString * _Nonnull typography;
@property (nonatomic) BOOL enableTypingSuggestions;
@property (nonatomic) BOOL hideComposer;
@property (nonatomic) BOOL noHeader;
@property (nonatomic, copy) NSString * _Nonnull privacyPolicyUrl;
@property (nonatomic, copy) NSString * _Nonnull customCss;
@property (nonatomic, copy) NSString * _Nonnull headerText;
@property (nonatomic, copy) NSString * _Nullable initializeLanguage;
@property (nonatomic, copy) NSString * _Nonnull composerPlaceholder;
@property (nonatomic, copy) NSString * _Nonnull uniqueChatIdentifier;
@property (nonatomic, copy) NSString * _Nonnull tabletBgColor;
@property (nonatomic) BOOL handleLink;
@property (nonatomic) BOOL hidesTabBar;
@property (nonatomic) BOOL skipSignupChatHistory;
@property (nonatomic) BOOL loaderEnable;
@property (nonatomic, copy) NSString * _Nonnull loaderMessage;
@property (nonatomic) BOOL loaderAnimate;
@property (nonatomic, copy) NSString * _Nullable loaderColorHex;
@property (nonatomic) BOOL ignoreStorage;
+ (nonnull instancetype)buildWithData:(void (^ _Nonnull)(HPCustomBuilder * _Nonnull))builderData SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class HPResponse;
enum HPLoadingState : NSInteger;
@class UIView;

SWIFT_PROTOCOL("_TtP8HPWebKit15HPExternalEvent_")
@protocol HPExternalEvent
/// Called when exception occurs
/// \param error <code>Error</code> object explaining reason and recovery suggestion
///
- (void)HPKitDidLoad;
- (void)HPUserSignupUpdateWithResult:(HPResponse * _Nonnull)result;
- (void)HPKitLoadingStateWithState:(enum HPLoadingState)state view:(UIView * _Nonnull)view;
- (void)HPKitEventWithData:(id _Nonnull)data;
@end

@class UIViewController;
@class NSData;
enum HPstate : NSInteger;
@class UINavigationController;

SWIFT_CLASS("_TtC8HPWebKit5HPKit")
@interface HPKit : NSObject
/// Returns the HaptikLib singleton object
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) HPKit * _Nonnull sharedSDK;)
+ (HPKit * _Nonnull)sharedSDK SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) BOOL isActive;
@property (nonatomic, strong) id <HPExternalEvent> _Nullable delegate;
@property (nonatomic, copy) NSString * _Nonnull title;
@property (nonatomic, readonly, strong) HPCustomBuilder * _Nonnull currentSettings;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)setup;
- (void)setBusinessCSSWithUrl:(NSString * _Nonnull)url SWIFT_UNAVAILABLE_MSG("From Version 1.5.0 and onward, this method is unsupported. It is recommended to use the customCss parameter within the HPCustomBuilder.");
/// Load guest chats
/// \param launchController UIViewController
///
///
/// throws:
/// HaptikValidation Error
- (BOOL)loadGuestConversationWithLaunchController:(UIViewController * _Nonnull)launchController customData:(NSDictionary<NSString *, NSString *> * _Nullable)customData error:(NSError * _Nullable * _Nullable)error;
/// Loac custom auth chats
/// \param launchController UIViewController
///
/// \param attributes auth params
///
- (BOOL)loadConversationWithLaunchController:(UIViewController * _Nonnull)launchController attributes:(HPAttributesBuilder * _Nonnull)attributes customData:(NSDictionary<NSString *, NSString *> * _Nullable)customData customSettings:(HPCustomBuilder * _Nonnull)customSettings error:(NSError * _Nullable * _Nullable)error;
- (void)setDeviceTokenWithDeviceToken:(NSData * _Nonnull)deviceToken;
- (void)changeLanguageWithLanguageCode:(NSString * _Nonnull)languageCode hidden:(BOOL)hidden;
- (void)renewSignupTokenWithToken:(NSString * _Nonnull)token;
- (void)setCustomSettingsWithSettings:(HPCustomBuilder * _Nonnull)settings;
- (void)updateUserDataWithData:(NSDictionary<NSString *, id> * _Nonnull)data;
- (void)setLaunchMessageWithMessage:(NSString * _Nonnull)message hidden:(BOOL)hidden skipMessage:(BOOL)skipMessage hideWelcomeMessage:(BOOL)hideWelcomeMessage;
- (void)clearLaunchMessage;
- (enum HPstate)getHPKitStatus SWIFT_WARN_UNUSED_RESULT;
- (BOOL)canHandleNotificationWithUserInfo:(NSDictionary * _Nonnull)userInfo SWIFT_WARN_UNUSED_RESULT;
- (void)clearConversation SWIFT_UNAVAILABLE_MSG("'clearConversation' has been renamed to 'logout'");
- (void)logout;
- (void)cleanWithNavController:(UINavigationController * _Nullable)navController;
- (void)details;
@end

typedef SWIFT_ENUM(NSInteger, HPLoadingState, open) {
  HPLoadingStateStart = 0,
  HPLoadingStateComplete = 1,
  HPLoadingStateFailed = 2,
  HPLoadingStateClosed = 3,
};


/// Generic external response object
SWIFT_CLASS("_TtC8HPWebKit10HPResponse")
@interface HPResponse : NSObject
/// Status of response positive = true, negative = false
@property (nonatomic, readonly) BOOL status;
/// Error message explaining error details (Optional)
@property (nonatomic, readonly, copy) NSString * _Nullable message;
/// Additional data (Optional)
@property (nonatomic, readonly, copy) NSDictionary<NSString *, id> * _Nullable data;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class UIEvent;
@class UITouch;
@class NSCoder;

SWIFT_CLASS("_TtC8HPWebKit9HPSpinner")
@interface HPSpinner : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (UIView * _Nullable)hitTest:(CGPoint)point withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic) CGRect frame;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)updateFrame;
- (void)layoutSubviews;
@end

typedef SWIFT_ENUM(NSInteger, HPstate, open) {
  HPstateUnavailable = 0,
  HPstateUnready = 1,
  HPstateReady = 2,
};



#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
