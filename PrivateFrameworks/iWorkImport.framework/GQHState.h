/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQSDocument, GQHXML, <GQHContext>, GQHTableState;

@interface GQHState : NSObject  {
    GQHXML *mHtmlDoc;
    struct CGSize { 
        float width; 
        float height; 
    } mScale;
    struct __CFString { } *mStyleData;
    GQHTableState *mTableState;
    GQSDocument *mProcessorState;
    struct __CFDictionary { } *mStyleIndexes;
    struct __CFDictionary { } *mStyleNameMap;
    struct __CFArray { } *mImplicitStyles;
    int mColoredBackgroundLayerCount;
    int mMultiColumnedDepth;
    struct __CFArray { } *mGraphicPropertiesStack;
    int mParagraphCount;
    int mParagraphIndex;
    int mCachedCellStyleIndex;
    struct __CFDictionary { } *mCachedTableStyles;
    int mCachedTextStyleIndex;
    struct __CFDictionary { } *mCachedTextStyles;
    int mInlineStyleIndex;
    struct __CFDictionary { } *mInlineStyles;
    struct __CFDictionary { } *mColorStrings;
    <GQHContext> *mShapeContext;
    int mOutlineLevel;
    int mOutlineStyleType;
    int mShapeIDCounter;
    unsigned int mTextScale;
}


- (id).cxx_construct;
- (void)dealloc;
- (void)setScale:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })scale;
- (struct __CFString { }*)addCacheForCellStyle:(id)arg1 fillStyle:(id)arg2 cellClass:(Class)arg3 vectorStyles:(id*)arg4 groupLevel:(unsigned short)arg5 hasFormula:(BOOL)arg6 baseClassString:(struct __CFString { }*)arg7 cssCachedStyle:(id)arg8;
- (struct __CFString { }*)cachedClassStringForCellStyle:(id)arg1 fillStyle:(id)arg2 cellClass:(Class)arg3 vectorStyles:(id*)arg4 groupLevel:(unsigned short)arg5 hasFormula:(BOOL)arg6;
- (BOOL)multiColumned;
- (struct __CFString { }*)createStyleName:(id)arg1 type:(const char *)arg2;
- (void)setMultiColumned:(BOOL)arg1;
- (int)indexForStyle:(const char *)arg1;
- (id)initWithState:(id)arg1 needIndexFile:(BOOL)arg2 documentSize:(struct CGSize { float x1; float x2; })arg3;
- (void)invalidateTextScale;
- (void)setTextScale:(unsigned int)arg1;
- (struct __CFString { }*)addCachedClassStringForTextStyle:(id)arg1 implicitStyle:(id)arg2 isColoredBackground:(BOOL)arg3 outlineLevel:(int)arg4 outlineType:(int)arg5 isSpan:(BOOL)arg6 baseClassString:(struct __CFString { }*)arg7 cssCachedStyle:(id)arg8;
- (int)paragraphIndex;
- (struct __CFString { }*)cachedClassStringForTextStyle:(id)arg1 implicitStyle:(id)arg2 isColoredBackground:(BOOL)arg3 outlineLevel:(int)arg4 outlineType:(int)arg5 isSpan:(BOOL)arg6;
- (BOOL)coloredBackground;
- (int)outlineStyleType;
- (void)popImplicitStyle;
- (id)implicitStyle;
- (void)pushImplicitStyle:(id)arg1;
- (BOOL)needAbsolutelyPositionedTables;
- (void)setOutlineStyleType:(int)arg1;
- (void)addCachedStyle:(struct __CFString { }*)arg1;
- (struct __CFString { }*)makeInlineStyle:(struct __CFString { }*)arg1;
- (struct __CFString { }*)makeInlineStyle:(struct __CFString { }*)arg1 inDocument:(id)arg2;
- (struct __CFString { }*)className:(id)arg1;
- (void)addStyle:(struct __CFString { }*)arg1 className:(struct __CFString { }*)arg2 srcStyle:(id)arg3;
- (struct __CFString { }*)cssZOrderClassForDrawableUid:(const char *)arg1;
- (id)initWithState:(id)arg1 documentSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)finishMainHtml;
- (void)leaveGraphicObject;
- (void)enterGraphicObject;
- (id)shapeContext;
- (struct __CFString { }*)createUniqueShapeId:(const char *)arg1;
- (void)setColoredBackground:(BOOL)arg1;
- (struct __CFString { }*)getColorString:(id)arg1;
- (BOOL)allowInlineWrap;
- (id)processorState;
- (void)addedDrawableWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)shouldMapLinkWithUrl:(struct __CFString { }*)arg1;
- (struct __CFString { }*)cssZOrderClassForDrawable:(id)arg1;
- (BOOL)drawablesNeedCssZOrdering;
- (void)setParagraphIndex:(int)arg1;
- (void)setParagraphCount:(int)arg1;
- (id)htmlDoc;
- (BOOL)useOutline;
- (unsigned int)textScale;
- (id)tableState;
- (id)initWithState:(id)arg1;
- (int)outlineLevel;
- (void)setOutlineLevel:(int)arg1;
- (int)paragraphCount;

@end
