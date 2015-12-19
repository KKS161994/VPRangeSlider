//
//  VPRangeSlider.h
//  Version 0.0.1
//
//  Created by Varun P M on 13/12/15.
//

// The MIT License (MIT)
//
// Copyright (c) 2015 Varun P M
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <UIKit/UIKit.h>

@interface VPRangeSlider : UIView

// Bool value representing whether segments is needed or not. If NO, then simple 2 way slider will be generated. If YES, then numberOfSegments should be specified. Default is YES.
@property (nonatomic, assign) BOOL requireSegments;

// The number of points in slider (Including the extreme points).
@property (nonatomic, assign) NSInteger numberOfSegments;

// If the reuiqreSegments is set no NO, then this value should be set to define minimum distance between the range sliders. Default to 44.
@property (nonatomic, assign) CGFloat sliderSepertorWidth;

// The color for the extrem slider points. Default is redColor
@property (nonatomic, strong) UIColor *rangeSliderButtonColor;

// The color that is used for rangeSlider unselected range view. (i.e., the view that is not within the slider points). Default is grayColor.
@property (nonatomic, strong) UIColor *rangeSliderBackgroundColor;

// The color that is used for rangeSlider selected range view. (i.e., the view that is between the slider points). Default is greenColor.
@property (nonatomic, strong) UIColor *rangeSliderForegroundColor;

@end
