//
//  SceneControl.h
//  Fissure
//
//  Created by Jason Fieldman on 4/20/14.
//  Copyright (c) 2014 fieldman.org. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum ControlType {
	
	CONTROL_TYPE_PUSH       = 0,
	CONTROL_TYPE_GRAVITY,
	CONTROL_TYPE_PROPEL,
	CONTROL_TYPE_SLOW,
	
	NUM_CONTROL_TYPES,
	
} ControlType_t;



@interface SceneControl : NSObject

@property (nonatomic, assign) ControlType_t controlType;
@property (nonatomic, assign) float angle;
@property (nonatomic, assign) CGPoint position;
@property (nonatomic, assign) float radius;
@property (nonatomic, assign) float minRadius;
@property (nonatomic, assign) float maxRadius;
@property (nonatomic, assign) BOOL canScale;
@property (nonatomic, assign) BOOL canRotate;

- (id) initWithDictionary:(NSDictionary*)dictionary forSceneSize:(CGSize)sceneSize;

@end