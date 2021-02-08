#include "id\WinMenuID.sqf"
/* Author:  TaktischerSpeck aka Vincent Buß | !USE ONLY FOR https://Project-Altis.de!  */
/* IDD/IDCs Macros */

/* Positions Macros */
#define SCREEN_X (getResolution select 0)
#define SCREEN_Y (getResolution select 1)
#define SCREEN_RATIO (getResolution select 4)
#define RATIO ((16/9) / SCREEN_RATIO)
#define ProjectAltis_POSITION(X, Y, W, H) \
	x = ((X)/1920*SCREEN_X*RATIO) * pixelW + safeZoneX; \
	y = ((Y)/1080*SCREEN_Y) * pixelH + safeZoneY; \
	w = (W)/1920*SCREEN_X*RATIO * pixelW; \
	h = (H)/1080*SCREEN_Y * pixelH;

class WinMenu {
	idd = ProjectAltis_IDD_WinMenu;

	class controlsBackground {
		class MainBackground: life_RscText {
			idc = ProjectAltis_IDC_MainBackground;
			ProjectAltis_POSITION(698,348,525,385)
			colorBackground[] = {0,0,0,0.85};
		};
		class glow_01: life_RscText {
			idc = ProjectAltis_IDC_glow_01;
			ProjectAltis_POSITION(693,343,535,5)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_02: life_RscText {
			idc = ProjectAltis_IDC_glow_02;
			ProjectAltis_POSITION(693,733,535,5)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_03: life_RscText {
			idc = ProjectAltis_IDC_glow_03;
			ProjectAltis_POSITION(693,343,5,395)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_04: life_RscText {
			idc = ProjectAltis_IDC_glow_04;
			ProjectAltis_POSITION(1223,343,5,395)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class Buttonnine_Under: ProjectAltis_Button_Under {
			idc = ProjectAltis_IDC_Buttonnine_Under;
			ProjectAltis_POSITION(723,643,225,5)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class Buttonten_Under: ProjectAltis_Button_Under {
			idc = ProjectAltis_IDC_Buttonten_Under;
			ProjectAltis_POSITION(973,643,225,5)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class buttonOne_Under: ProjectAltis_Button_Under {
			idc = ProjectAltis_IDC_buttonOne_Under;
			ProjectAltis_POSITION(723,403,225,5)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class ButtonTwo_Under: ProjectAltis_Button_Under {
			idc = ProjectAltis_IDC_ButtonTwo_Under;
			ProjectAltis_POSITION(973,403,225,5)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class ButtonThree_Under: ProjectAltis_Button_Under {
			idc = ProjectAltis_IDC_ButtonThree_Under;
			ProjectAltis_POSITION(723,463,225,5)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class ButtonFour_Under: ProjectAltis_Button_Under {
			idc = ProjectAltis_IDC_ButtonFour_Under;
			ProjectAltis_POSITION(973,463,225,5)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class ButtonFive_Under: ProjectAltis_Button_Under {
			idc = ProjectAltis_IDC_ButtonFive_Under;
			ProjectAltis_POSITION(723,523,225,5)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class ButtonSix_Under: ProjectAltis_Button_Under {
			idc = ProjectAltis_IDC_ButtonSix_Under;
			ProjectAltis_POSITION(973,523,225,5)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class ButtonSeven_Under: ProjectAltis_Button_Under {
			idc = ProjectAltis_IDC_ButtonSeven_Under;
			ProjectAltis_POSITION(723,583,225,5)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class ButtonEight_Under: ProjectAltis_Button_Under {
			idc = ProjectAltis_IDC_ButtonEight_Under;
			ProjectAltis_POSITION(973,583,225,5)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class close_Under: ProjectAltis_Button_Close_Under {
			idc = ProjectAltis_IDC_glow_15;
			ProjectAltis_POSITION(861,703,200,5)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
	};

	class Controls {
		class ButtonClose: ProjectAltis_Button_Close {
			idc = ProjectAltis_IDC_ButtonClose;
			ProjectAltis_POSITION(861,673,200,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
		};
		class Buttonten: ProjectAltis_Button {
			idc = ProjectAltis_IDC_Buttonten;
			ProjectAltis_POSITION(973,613,225,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
		};
		class Buttonnine: ProjectAltis_Button {
			idc = ProjectAltis_IDC_Buttonnine;
			ProjectAltis_POSITION(723,613,225,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
		};
		class ButtonEight: ProjectAltis_Button {
			idc = ProjectAltis_IDC_ButtonEight;
			ProjectAltis_POSITION(973,553,225,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
		};
		class ButtonSeven: ProjectAltis_Button {
			idc = ProjectAltis_IDC_ButtonSeven;
			ProjectAltis_POSITION(723,553,225,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
		};
		class ButtonSix: ProjectAltis_Button {
			idc = ProjectAltis_IDC_ButtonSix;
			ProjectAltis_POSITION(973,493,225,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
		};
		class ButtonFive: ProjectAltis_Button {
			idc = ProjectAltis_IDC_ButtonFive;
			ProjectAltis_POSITION(723,493,225,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
		};
		class ButtonFour: ProjectAltis_Button {
			idc = ProjectAltis_IDC_ButtonFour;
			ProjectAltis_POSITION(973,433,225,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
		};
		class ButtonThree: ProjectAltis_Button {
			idc = ProjectAltis_IDC_ButtonThree;
			ProjectAltis_POSITION(723,433,225,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
		};
		class ButtonTwo: ProjectAltis_Button {
			idc = ProjectAltis_IDC_ButtonTwo;
			ProjectAltis_POSITION(973,373,225,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
		};
		class buttonOne: ProjectAltis_Button {
			idc = ProjectAltis_IDC_buttonOne;
			ProjectAltis_POSITION(723,373,225,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
		};
	};
};
