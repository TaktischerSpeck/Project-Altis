/* Author:  TaktischerSpeck aka Vincent Buß | !USE ONLY FOR https://Project-Altis.de!  */

/* IDD/IDCs Macros */
#define ProjectAltis_IDD_TuevCreate 31738
#define ProjectAltis_IDC_mainbackground -1
#define ProjectAltis_IDC_glow_1 -1
#define ProjectAltis_IDC_glow_2 -1
#define ProjectAltis_IDC_glow_3 -1
#define ProjectAltis_IDC_glow_4 -1
#define ProjectAltis_IDC_glow_numberplate_4 -1
#define ProjectAltis_IDC_glow_numberplate_3 -1
#define ProjectAltis_IDC_glow_numberplate_2 -1
#define ProjectAltis_IDC_glow_numberplate_1 -1
#define ProjectAltis_IDC_glow_create_1 -1
#define ProjectAltis_IDC_glow_close_1 -1
#define ProjectAltis_IDC_numberplate -1
#define ProjectAltis_IDC_create 31756
#define ProjectAltis_IDC_close -1
#define ProjectAltis_IDC_plate_text 31754
#define ProjectAltis_IDC_glow_info_4 -1
#define ProjectAltis_IDC_glow_info_3 -1
#define ProjectAltis_IDC_glow_info_2 -1
#define ProjectAltis_IDC_glow_info_1 -1
#define ProjectAltis_IDC_info 31755

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

class TuevCreate {
	idd = ProjectAltis_IDD_TuevCreate;
	class controlsBackground {
		class mainbackground: RscText {
			idc = ProjectAltis_IDC_mainbackground;
			ProjectAltis_POSITION(556,344,808,393)
			colorBackground[] = {0,0,0,0.85};
		};
		class glow_1: life_RscText {
			idc = ProjectAltis_IDC_glow_1;
			ProjectAltis_POSITION(551,344,5,398)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_2: life_RscText {
			idc = ProjectAltis_IDC_glow_2;
			ProjectAltis_POSITION(556,737,813,5)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_3: life_RscText {
			idc = ProjectAltis_IDC_glow_3;
			ProjectAltis_POSITION(1364,339,5,398)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_4: life_RscText {
			idc = ProjectAltis_IDC_glow_4;
			ProjectAltis_POSITION(551,339,813,5)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_numberplate_4: life_RscText {
			idc = ProjectAltis_IDC_glow_numberplate_4;
			ProjectAltis_POSITION(808,652,1,32)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_numberplate_3: life_RscText {
			idc = ProjectAltis_IDC_glow_numberplate_3;
			ProjectAltis_POSITION(607,652,202,1)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_numberplate_2: life_RscText {
			idc = ProjectAltis_IDC_glow_numberplate_2;
			ProjectAltis_POSITION(606,683,203,1)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_numberplate_1: life_RscText {
			idc = ProjectAltis_IDC_glow_numberplate_1;
			ProjectAltis_POSITION(606,652,1,32)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_create_1: life_RscText {
			idc = ProjectAltis_IDC_glow_create_1;
			ProjectAltis_POSITION(1112,682,202,5)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_close_1: life_RscText {
			idc = ProjectAltis_IDC_glow_close_1;
			ProjectAltis_POSITION(860,682,202,5)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_info_4: life_RscText {
			idc = ProjectAltis_IDC_glow_info_4;
			ProjectAltis_POSITION(606,601,708,1)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_info_3: life_RscText {
			idc = ProjectAltis_IDC_glow_info_3;
			ProjectAltis_POSITION(1313,394,1,208)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_info_2: life_RscText {
			idc = ProjectAltis_IDC_glow_info_2;
			ProjectAltis_POSITION(606,394,708,1)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_info_1: life_RscText {
			idc = ProjectAltis_IDC_glow_info_1;
			ProjectAltis_POSITION(606,394,1,208)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class numberplate: life_RscText {
			idc = ProjectAltis_IDC_numberplate;
			ProjectAltis_POSITION(607,653,201,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
		};
	};

	class Controls {
		class create: ProjectAltis_Button {
			idc = ProjectAltis_IDC_create;
			ProjectAltis_POSITION(860,652,202,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
		};
		class close: ProjectAltis_Button_Close {
			idc = ProjectAltis_IDC_close;
			ProjectAltis_POSITION(1112,652,202,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
		};
		class plate_text: ProjectAltis_RscStructuredText {
			idc = ProjectAltis_IDC_plate_text;
			ProjectAltis_POSITION(610,656,195,24)
		};
		class info: ProjectAltis_RscEdit {
			idc = ProjectAltis_IDC_info;
			ProjectAltis_POSITION(607,395,706,206)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
			text = "";
			class Attributes {
				align = "left";
			};
		};
	};
};
