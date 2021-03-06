// Generated by Apple Swift version 3.1 (swiftlang-802.0.51 clang-802.0.41)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
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

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if defined(__has_attribute) && __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
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
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
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
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
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
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import MapKit;
@import MessageUI;
@import Foundation;
@import ObjectiveC;
@import CoreLocation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class MKMapView;
@protocol MKAnnotation;
@class MKAnnotationView;
@protocol MKOverlay;
@class MKOverlayRenderer;
@class MKUserLocation;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC16TQGeolocationSDK22DebugMapViewController")
@interface DebugMapViewController : UIViewController <MKMapViewDelegate>
- (void)viewDidLoad;
- (MKAnnotationView * _Nullable)mapView:(MKMapView * _Nonnull)mapView viewForAnnotation:(id <MKAnnotation> _Nonnull)annotation SWIFT_WARN_UNUSED_RESULT;
- (MKOverlayRenderer * _Nonnull)mapView:(MKMapView * _Nonnull)mapView rendererForOverlay:(id <MKOverlay> _Nonnull)overlay SWIFT_WARN_UNUSED_RESULT;
- (void)mapView:(MKMapView * _Nonnull)mapView didUpdateUserLocation:(MKUserLocation * _Nonnull)userLocation;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class MFMailComposeViewController;
@class UIPickerView;

SWIFT_CLASS("_TtC16TQGeolocationSDK23LogViewerViewController")
@interface LogViewerViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate, MFMailComposeViewControllerDelegate>
- (void)viewDidLoad;
- (void)mailComposeController:(MFMailComposeViewController * _Nonnull)controller didFinishWithResult:(MFMailComposeResult)result error:(NSError * _Nullable)error;
- (NSInteger)pickerView:(UIPickerView * _Nonnull)pickerView numberOfRowsInComponent:(NSInteger)component SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)numberOfComponentsInPickerView:(UIPickerView * _Nonnull)pickerView SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)pickerView:(UIPickerView * _Nonnull)pickerView titleForRow:(NSInteger)row forComponent:(NSInteger)component SWIFT_WARN_UNUSED_RESULT;
- (void)pickerView:(UIPickerView * _Nonnull)pickerView didSelectRow:(NSInteger)row inComponent:(NSInteger)component;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface NSNumber (SWIFT_EXTENSION(TQGeolocationSDK))
@end


SWIFT_CLASS("_TtC16TQGeolocationSDK14TQEnvironments")
@interface TQEnvironments : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger Production;)
+ (NSInteger)Production SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger Staging;)
+ (NSInteger)Staging SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger QA;)
+ (NSInteger)QA SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger Development;)
+ (NSInteger)Development SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16TQGeolocationSDK12TQErrorCodes")
@interface TQErrorCodes : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger kErrorResetDatabaseAlreadyExists;)
+ (NSInteger)kErrorResetDatabaseAlreadyExists SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger kErrorResetDatabaseNameMandatory;)
+ (NSInteger)kErrorResetDatabaseNameMandatory SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSString;
@class NSDictionary;
@protocol TQGeoTrackerDelegate;
@class NSError;
@class TQTrigger;

SWIFT_CLASS("_TtC16TQGeolocationSDK12TQGeoTracker")
@interface TQGeoTracker : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) TQGeoTracker * _Nonnull sharedInstance;)
+ (TQGeoTracker * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
- (void)configure:(NSString * _Nonnull)appId triggerMode:(NSInteger)triggerMode environment:(NSInteger)environment;
- (void)configure:(NSDictionary * _Nonnull)parameters;
- (void)setParameters:(CLLocationAccuracy)accuracy distanceFilter:(CLLocationDistance)distanceFilter cacheExpiration:(NSInteger)cacheExpiration zoneInterval:(NSNumber * _Nonnull)zoneInterval lingerTime:(NSInteger)lingerTime maxLingerTime:(NSInteger)maxLingerTime requestRetryInterval:(NSTimeInterval)requestRetryInterval;
- (void)start;
- (void)stop;
- (void)setTriggerDelegate:(id <TQGeoTrackerDelegate> _Nonnull)delegate;
- (NSString * _Nonnull)getDeviceId SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getAppId SWIFT_WARN_UNUSED_RESULT;
- (void)log:(NSString * _Nonnull)message;
- (void)reset:(NSString * _Nonnull)newDatabaseName success:(SWIFT_NOESCAPE void (^ _Nonnull)(void))success failure:(SWIFT_NOESCAPE void (^ _Nonnull)(NSError * _Nonnull))failure;
- (NSArray<TQTrigger *> * _Nonnull)listTriggers SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_PROTOCOL("_TtP16TQGeolocationSDK20TQGeoTrackerDelegate_")
@protocol TQGeoTrackerDelegate
- (void)TQGeoTrackerOnFenceTriggered:(TQGeoTracker * _Nonnull)tqGeoTracker trigger:(TQTrigger * _Nonnull)trigger;
@end


SWIFT_CLASS("_TtC16TQGeolocationSDK9TQTrigger")
@interface TQTrigger : NSObject
- (NSString * _Nonnull)getDeviceId SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getEvent SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)getTimestamp SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getFenceId SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getFenceName SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC16TQGeolocationSDK12TriggerModes")
@interface TriggerModes : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger Both;)
+ (NSInteger)Both SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger LocalOnly;)
+ (NSInteger)LocalOnly SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger RemoteOnly;)
+ (NSInteger)RemoteOnly SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
