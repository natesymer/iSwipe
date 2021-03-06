export TARGET=iphone:7.1
export ARCHS=armv7 arm64 armv7s

ADDITIONAL_OBJCFLAGS = -fobjc-arc

include $(THEOS)/makefiles/common.mk
TWEAK_NAME = iSwipe
iSwipe_FILES = source/Tweak.xm source/ISAlgoHybrid.m source/ISAlgoAngleDiffDP.mm source/ISController.m source/ISScribbleView.m source/ISKey.m source/ISData.m source/ISSuggestionsView.m source/ISWord.m source/fmdb/FMDatabase.m source/fmdb/FMDatabaseAdditions.m source/fmdb/FMDatabasePool.m source/fmdb/FMResultSet.m
iSwipe_FRAMEWORKS = Foundation UIKit CoreGraphics
iSwipe_LDFLAGS = -lsqlite3

include $(THEOS)/makefiles/tweak.mk
