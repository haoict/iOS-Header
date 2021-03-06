//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSSecureCoding-Protocol.h>

@interface WKBrowsingContextHandle : NSObject <NSSecureCoding>
{
    ObjectIdentifier_b2f7915a _pageProxyID;
    ObjectIdentifier_8136369e _webPageID;
}

+ (_Bool)supportsSecureCoding;
- (id).cxx_construct;
@property(readonly, nonatomic, getter=_webPageID) ObjectIdentifier_8136369e webPageID; // @synthesize webPageID=_webPageID;
@property(readonly, nonatomic, getter=_pageProxyID) ObjectIdentifier_b2f7915a pageProxyID; // @synthesize pageProxyID=_pageProxyID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithPageProxyID:(ObjectIdentifier_b2f7915a)arg1 andWebPageID:(ObjectIdentifier_8136369e)arg2;
- (id)_initWithPage:(struct WebPage *)arg1;
- (id)_initWithPageProxy:(struct WebPageProxy *)arg1;

@end

