//
//  LetraAViewController.h
//  Navigation
//
//  Created by Vinicius Miana on 2/23/14.
//  Copyright (c) 2014 Vinicius Miana. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Contador.h"
#import "Teste.h"
#import "AlfabetoLista.h"
@interface LetraAViewController : UIViewController{
     NSArray *alfabeto ;

}

-(UIColor* )getRandomColor;
@property UIDatePicker *datePicker;

@property LetraAViewController *proximo1;
@property LetraAViewController *proximo2 ;
@property (nonatomic, strong) UINavigationController *navigationController;
@property UITabBarController *tabBarController;
@property UITextField *fromLabel;
@property UIImageView *img;
@property NSArray *alfabeto;
@property UIButton *btnEdit;
//@property (nonatomic, strong)  Teste *editar;
@property CGPoint *currentPoint;
@property int _x, _y, _width, _height;


@property int j;
@property (nonatomic, strong) LetraAViewController *myVC;
-(void)alterar:
(id)sender;
-(void)zoomIn;
@end
