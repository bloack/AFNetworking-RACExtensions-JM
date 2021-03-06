#import <CoreGraphics/CoreGraphics.h>
#import <Expecta/Expecta.h>
#import "ExpectaObject+FBSnapshotTest.h"

@interface EXPExpectFBSnapshotTest : NSObject
@end

/// Set the default folder for image tests to run in
extern void setGlobalReferenceImageDir(char *reference);

EXPMatcherInterface(haveValidSnapshot, (void));
EXPMatcherInterface(recordSnapshot, (void));

EXPMatcherInterface(haveValidSnapshotNamed, (NSString *snapshot));
EXPMatcherInterface(recordSnapshotNamed, (NSString *snapshot));

EXPMatcherInterface(haveValidSnapshotNamedWithTolerance, (NSString *snapshot, CGFloat tolerance));
EXPMatcherInterface(haveValidSnapshotWithTolerance, (CGFloat tolerance));
