/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNMovieSegment : NSObject {
    TSPData * mMovieData;
    double  mStartTime;
}

@property (getter=isEmptySegment, nonatomic, readonly) BOOL emptySegment;
@property (nonatomic, readonly) TSPData *movieData;
@property (nonatomic, readonly) double startTime;

- (void)dealloc;
- (id)init;
- (id)initEmptySegmentWithStartTime:(double)arg1;
- (id)initWithContext:(id)arg1 archive:(const struct MovieSegmentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DataReference {} *x5; double x6; struct Reference {} *x7; }*)arg2 unarchiver:(id)arg3;
- (id)initWithMovieData:(id)arg1 startTime:(double)arg2;
- (BOOL)isEmptySegment;
- (id)movieData;
- (id)movieSegmentByAddingTimeOffset:(double)arg1;
- (void)saveToArchive:(struct MovieSegmentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DataReference {} *x5; double x6; struct Reference {} *x7; }*)arg1 archiver:(id)arg2;
- (double)startTime;

@end
