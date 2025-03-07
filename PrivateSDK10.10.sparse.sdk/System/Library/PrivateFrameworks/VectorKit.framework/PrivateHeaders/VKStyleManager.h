/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, VKGenericShieldDrawStyle, VKPGlobalProperties, VKSharedResources, VKStylesheet;

// Not exported
@interface VKStyleManager : NSObject
{
    unsigned int _updateStamp;
    unsigned long long _mapDisplayStyle;
    unsigned long long _mapDisplayStyleVariant;
    VKSharedResources *_sharedResources;
    VKStylesheet *_stylesheet;
    long long _mapMode;
    BOOL _canSelectIcons;
    float _blendingFactor;
    unsigned long long _connectedVariant;
    VKGenericShieldDrawStyle *_defaultGenericShieldStyle;
    struct unordered_map<StyleKey, std::__1::weak_ptr<md::StyleQuery>, std::__1::hash<StyleKey>, std::__1::equal_to<StyleKey>, std::__1::allocator<std::__1::pair<const StyleKey, std::__1::weak_ptr<md::StyleQuery>>>> _styleQueries;
    struct _opaque_pthread_rwlock_t {
        long long __sig;
        char __opaque[192];
    } _styleQueryCreationLock;
    long long _targetDisplay;
}

@property(nonatomic) BOOL canSelectIcons; // @synthesize canSelectIcons=_canSelectIcons;
@property(readonly, nonatomic) long long targetDisplay; // @synthesize targetDisplay=_targetDisplay;
@property(readonly) unsigned int updateStamp; // @synthesize updateStamp=_updateStamp;
@property(nonatomic) unsigned long long mapDisplayStyleVariant; // @synthesize mapDisplayStyleVariant=_mapDisplayStyleVariant;
@property(nonatomic) unsigned long long mapDisplayStyle; // @synthesize mapDisplayStyle=_mapDisplayStyle;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearCaches;
@property(nonatomic) long long mapMode;
@property(readonly, nonatomic) unsigned long long activeMapDisplayStyle;
- (void)prepareStyleVariantsForMapDisplayStyle:(unsigned long long)arg1;
@property(readonly, nonatomic) VKGenericShieldDrawStyle *defaultGenericShieldStyle;
@property(nonatomic) float blendingFactor;
- (float *)blendingFactorPointer;
- (long long)rasterPolygonChangeoverZ;
- (float)shieldBrightnessForDisplayStyle:(unsigned long long)arg1;
- (float)shieldBrightnessForVectorType:(long long)arg1;
- (float)_nightShieldBrightnessForVectorType:(long long)arg1;
- (shared_ptr_6e6219d6)styleQueryForFeatureAttributes:(id)arg1 vectorType:(const long long *)arg2 locale:(id)arg3 selectionState:(BOOL)arg4;
- (shared_ptr_6e6219d6)styleQueryForFeatureAttributes:(id)arg1 vectorType:(long long)arg2;
- (shared_ptr_6e6219d6)styleQueryForFeatureAttributes:(id)arg1;
@property(readonly, nonatomic) BOOL isDevResource;
@property(readonly, nonatomic) NSString *sheetName;
- (id)stylesheet;
- (void)dealloc;
- (BOOL)supportsMapDisplayStyle:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL supportsNightMode;
- (id)initWithName:(id)arg1 scale:(float)arg2 ppi:(float)arg3 targetDisplay:(long long)arg4 sharedResources:(id)arg5;
- (id)init;
@property(readonly, nonatomic) VKPGlobalProperties *styleGlobalProperties;

@end

