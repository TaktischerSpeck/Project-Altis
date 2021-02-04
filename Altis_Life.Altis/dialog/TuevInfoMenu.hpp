/* Author:  TaktischerSpeck aka Vincent Buß | !USE ONLY FOR https://Project-Altis.de!  */
/* IDD/IDCs Macros */
#define ProjectAltis_IDD_TuevInfoMenu 39949
#define ProjectAltis_IDC_mainbackground -1
#define ProjectAltis_IDC_glow_background_4 -1
#define ProjectAltis_IDC_glow_background_3 -1
#define ProjectAltis_IDC_glow_background_2 -1
#define ProjectAltis_IDC_glow_background_1 -1
#define ProjectAltis_IDC_glow_numberplate_4 -1
#define ProjectAltis_IDC_glow_numberplate_3 -1
#define ProjectAltis_IDC_glow_numberplate_2 -1
#define ProjectAltis_IDC_glow_numberplate_1 -1
#define ProjectAltis_IDC_glow_close_1 -1
#define ProjectAltis_IDC_glow_create_1 39959
#define ProjectAltis_IDC_glow_info_4 -1
#define ProjectAltis_IDC_glow_info_3 -1
#define ProjectAltis_IDC_glow_info_2 -1
#define ProjectAltis_IDC_glow_info_1 -1
#define ProjectAltis_IDC_glow_checker_4 -1
#define ProjectAltis_IDC_glow_checker_3 -1
#define ProjectAltis_IDC_glow_checker_2 -1
#define ProjectAltis_IDC_glow_checker_1 -1
#define ProjectAltis_IDC_engine_pic -1
#define ProjectAltis_IDC_gearbox_pic -1
#define ProjectAltis_IDC_sping_pic -1
#define ProjectAltis_IDC_brake_pic -1
#define ProjectAltis_IDC_info 39950
#define ProjectAltis_IDC_box_checker -1
#define ProjectAltis_IDC_box_numberplate -1
#define ProjectAltis_IDC_engine 39953
#define ProjectAltis_IDC_gear 39954
#define ProjectAltis_IDC_brake 39955
#define ProjectAltis_IDC_spring 39956
#define ProjectAltis_IDC_close -1
#define ProjectAltis_IDC_create 39958
#define ProjectAltis_IDC_checker_text 39951
#define ProjectAltis_IDC_plate_text 39952
/* Positions Macros */
#define SCREEN_X (getResolution select 0)
#define SCREEN_Y (getResolution select 1)
#define SCREEN_RATIO (getResolution select 4)
#define RATIO ((16/9) / SCREEN_RATIO)
#define SIZE(SIZE) (SIZE)/1080*SCREEN_Y*pixelH
#define ProjectAltis_POSITION(X, Y, W, H) \
	x = ((X)/1920*SCREEN_X*RATIO) * pixelW + safeZoneX; \
	y = ((Y)/1080*SCREEN_Y) * pixelH + safeZoneY; \
	w = (W)/1920*SCREEN_X*RATIO * pixelW; \
	h = (H)/1080*SCREEN_Y * pixelH;

class TuevInfoMenu {
	idd = ProjectAltis_IDD_TuevInfoMenu;

	class controlsBackground {
		class mainbackground: RscText {
			idc = ProjectAltis_IDC_mainbackground;
			ProjectAltis_POSITION(470,307,968,475)
			colorBackground[] = {0,0,0,0.85};
		};
		class glow_background_4: life_RscText {
			idc = ProjectAltis_IDC_glow_background_4;
			ProjectAltis_POSITION(465,302,978,5)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_background_2: life_RscText {
			idc = ProjectAltis_IDC_glow_background_2;
			ProjectAltis_POSITION(465,782,978,5)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_background_3: life_RscText {
			idc = ProjectAltis_IDC_glow_background_3;
			ProjectAltis_POSITION(1438,302,5,485)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_background_1: life_RscText {
			idc = ProjectAltis_IDC_glow_background_1;
			ProjectAltis_POSITION(465,302,5,485)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_numberplate_4: life_RscText {
			idc = ProjectAltis_IDC_glow_numberplate_4;
			ProjectAltis_POSITION(1386,357,1,32)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_numberplate_3: life_RscText {
			idc = ProjectAltis_IDC_glow_numberplate_3;
			ProjectAltis_POSITION(1084,357,302,1)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_numberplate_2: life_RscText {
			idc = ProjectAltis_IDC_glow_numberplate_2;
			ProjectAltis_POSITION(1083,388,304,1)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_numberplate_1: life_RscText {
			idc = ProjectAltis_IDC_glow_numberplate_1;
			ProjectAltis_POSITION(1083,357,1,32)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_close_1: life_RscText {
			idc = ProjectAltis_IDC_glow_close_1;
			ProjectAltis_POSITION(1083,727,200,5)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_create_1: life_RscText {
			idc = ProjectAltis_IDC_glow_create_1;
			ProjectAltis_POSITION(783,727,200,5)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_info_4: life_RscText {
			idc = ProjectAltis_IDC_glow_info_4;
			ProjectAltis_POSITION(681,646,706,1)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_info_3: life_RscText {
			idc = ProjectAltis_IDC_glow_info_3;
			ProjectAltis_POSITION(1387,439,1,208)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_info_2: life_RscText {
			idc = ProjectAltis_IDC_glow_info_2;
			ProjectAltis_POSITION(681,439,706,1)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_info_1: life_RscText {
			idc = ProjectAltis_IDC_glow_info_1;
			ProjectAltis_POSITION(680,439,1,208)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_checker_4: life_RscText {
			idc = ProjectAltis_IDC_glow_checker_4;
			ProjectAltis_POSITION(982,357,1,32)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_checker_3: life_RscText {
			idc = ProjectAltis_IDC_glow_checker_3;
			ProjectAltis_POSITION(679,357,304,1)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_checker_2: life_RscText {
			idc = ProjectAltis_IDC_glow_checker_2;
			ProjectAltis_POSITION(679,388,304,1)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_checker_1: life_RscText {
			idc = ProjectAltis_IDC_glow_checker_1;
			ProjectAltis_POSITION(679,357,1,32)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class engine_pic: Life_RscPicture {
			idc = ProjectAltis_IDC_engine_pic;
			ProjectAltis_POSITION(520,357,75,75)
			text = "textures\misc\tuning\dialog\engine.paa";
		};
		class gearbox_pic: Life_RscPicture {
			idc = ProjectAltis_IDC_gearbox_pic;
			ProjectAltis_POSITION(520,457,75,75)
			text = "textures\misc\tuning\dialog\gearbox.paa";
		};
		class sping_pic: Life_RscPicture {
			idc = ProjectAltis_IDC_sping_pic;
			ProjectAltis_POSITION(520,657,75,75)
			text = "textures\misc\tuning\dialog\sping.paa";
		};
		class brake_pic: Life_RscPicture {
			idc = ProjectAltis_IDC_brake_pic;
			ProjectAltis_POSITION(520,557,75,75)
			text = "textures\misc\tuning\dialog\brake.paa";
		};
		class box_checker: life_RscText {
			idc = ProjectAltis_IDC_box_checker;
			ProjectAltis_POSITION(680,358,302,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
		};
		class box_numberplate: life_RscText {
			idc = ProjectAltis_IDC_box_numberplate;
			ProjectAltis_POSITION(1084,358,302,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
		};
	};

	class Controls {
		class close: ProjectAltis_Button_Close {
			idc = ProjectAltis_IDC_close;
			ProjectAltis_POSITION(1083,697,200,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
		};
		class create: ProjectAltis_Button {
			idc = ProjectAltis_IDC_create;
			ProjectAltis_POSITION(783,697,200,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
		};
		class info: ProjectAltis_RscStructuredText {
			idc = ProjectAltis_IDC_info;
			ProjectAltis_POSITION(681,440,706,206)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
			class Attributes {
				align = "left";
			};
		};
		class checker_text: ProjectAltis_RscStructuredText {
			idc = ProjectAltis_IDC_checker_text;
			ProjectAltis_POSITION(683,361,296,24)
			colorBackground[] = {0,0,0,0};
		};
		class plate_text: ProjectAltis_RscStructuredText {
			idc = ProjectAltis_IDC_plate_text;
			ProjectAltis_POSITION(1087,361,296,24)
			colorBackground[] = {0,0,0,0};
		};
		class engine: ProjectAltis_RscStructuredText {
			idc = ProjectAltis_IDC_engine;
			ProjectAltis_POSITION(605,383,50,24)
			colorBackground[] = {0,0,0,0};
			text="-1";
		};
		class gear: ProjectAltis_RscStructuredText {
			idc = ProjectAltis_IDC_gear;
			ProjectAltis_POSITION(605,483,50,24)
			colorBackground[] = {0,0,0,0};
			text="-1";
		};
		class brake: ProjectAltis_RscStructuredText {
			idc = ProjectAltis_IDC_brake;
			ProjectAltis_POSITION(605,583,50,24)
			colorBackground[] = {0,0,0,0};
			text="-1";
		};
		class spring: ProjectAltis_RscStructuredText {
			idc = ProjectAltis_IDC_spring;
			ProjectAltis_POSITION(605,683,50,24)
			colorBackground[] = {0,0,0,0};
			text="-1";
		};
	};
};