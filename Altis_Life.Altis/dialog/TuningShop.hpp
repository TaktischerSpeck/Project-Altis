/* Author:  TaktischerSpeck aka Vincent Buß | !USE ONLY FOR https://Project-Altis.de!  */
/* IDD/IDCs Macros */
#define ProjectAltis_IDD_TuningShop 18071

#define ProjectAltis_IDC_text_engine_tuning 18072
#define ProjectAltis_IDC_text_engine_tuning_need 18073

#define ProjectAltis_IDC_text_spring_tuning 18074
#define ProjectAltis_IDC_text_spring_tuning_need 18075

#define ProjectAltis_IDC_text_brake_tuning 18076
#define ProjectAltis_IDC_text_brake_tuning_need 18077

#define ProjectAltis_IDC_text_gear_tuning 18078
#define ProjectAltis_IDC_text_gear_tuning_need 18079

#define ProjectAltis_IDC_Upgrade_1 18080
#define ProjectAltis_IDC_Upgrade_2 18081
#define ProjectAltis_IDC_Upgrade_3 18082
#define ProjectAltis_IDC_Upgrade_4 18083

#define ProjectAltis_IDC_mainbackground -1
#define ProjectAltis_IDC_stage -1
#define ProjectAltis_IDC_need -1
#define ProjectAltis_IDC_box_gear_tuning -1
#define ProjectAltis_IDC_box_gear_tuning_need -1
#define ProjectAltis_IDC_box_brake_tuning -1
#define ProjectAltis_IDC_box_brake_tuning_need -1
#define ProjectAltis_IDC_box_spring_tuning -1
#define ProjectAltis_IDC_box_spring_tuning_need -1
#define ProjectAltis_IDC_glow_01 -1
#define ProjectAltis_IDC_glow_02 -1
#define ProjectAltis_IDC_glow_03 -1
#define ProjectAltis_IDC_glow_04 -1
#define ProjectAltis_IDC_glow_05 -1
#define ProjectAltis_IDC_glow_06 -1
#define ProjectAltis_IDC_glow_07 -1
#define ProjectAltis_IDC_glow_08 -1
#define ProjectAltis_IDC_glow_09 -1
#define ProjectAltis_IDC_glow_10 -1
#define ProjectAltis_IDC_glow_11 -1
#define ProjectAltis_IDC_glow_12 -1
#define ProjectAltis_IDC_glow_13 -1
#define ProjectAltis_IDC_glow_14 -1
#define ProjectAltis_IDC_glow_15 -1
#define ProjectAltis_IDC_glow_16 -1
#define ProjectAltis_IDC_glow_17 -1
#define ProjectAltis_IDC_glow_18 -1
#define ProjectAltis_IDC_glow_19 -1
#define ProjectAltis_IDC_glow_20 -1
#define ProjectAltis_IDC_glow_21 -1
#define ProjectAltis_IDC_glow_22 -1
#define ProjectAltis_IDC_glow_23 -1
#define ProjectAltis_IDC_glow_24 -1
#define ProjectAltis_IDC_glow_25 -1
#define ProjectAltis_IDC_glow_26 -1
#define ProjectAltis_IDC_glow_27 -1
#define ProjectAltis_IDC_glow_28 -1
#define ProjectAltis_IDC_glow_29 -1
#define ProjectAltis_IDC_glow_30 -1
#define ProjectAltis_IDC_glow_31 -1
#define ProjectAltis_IDC_glow_32 -1
#define ProjectAltis_IDC_glow_33 -1
#define ProjectAltis_IDC_glow_34 -1
#define ProjectAltis_IDC_glow_35 -1
#define ProjectAltis_IDC_glow_36 -1
#define ProjectAltis_IDC_glow_37 -1
#define ProjectAltis_IDC_glow_38 -1
#define ProjectAltis_IDC_glow_39 -1
#define ProjectAltis_IDC_glow_40 -1
#define ProjectAltis_IDC_glow_41 -1
#define ProjectAltis_IDC_box_engine_tuning -1
#define ProjectAltis_IDC_box_engine_tuning_need -1
#define ProjectAltis_IDC_close -1
#define ProjectAltis_IDC_engine_pic -1
#define ProjectAltis_IDC_gearbox_pic -1
#define ProjectAltis_IDC_sping_pic -1
#define ProjectAltis_IDC_brake_pic -1
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

class TuningShop {
	idd = ProjectAltis_IDD_TuningShop;

	class controlsBackground {
		class mainbackground: life_RscText {
			idc = ProjectAltis_IDC_mainbackground;
			ProjectAltis_POSITION(688,361,545,359)
			colorBackground[] = {0,0,0,0.85};
		};
		class box_gear_tuning: life_RscText {
			idc = ProjectAltis_IDC_box_gear_tuning;
			ProjectAltis_POSITION(929,487,75,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
		};
		class box_gear_tuning_need: life_RscText {
			idc = ProjectAltis_IDC_box_gear_tuning_need;
			ProjectAltis_POSITION(929,544,75,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
		};
		class box_brake_tuning: life_RscText {
			idc = ProjectAltis_IDC_box_brake_tuning;
			ProjectAltis_POSITION(1031,487,75,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
		};
		class box_brake_tuning_need: life_RscText {
			idc = ProjectAltis_IDC_box_brake_tuning_need;
			ProjectAltis_POSITION(1031,544,75,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
		};
		class box_spring_tuning: life_RscText {
			idc = ProjectAltis_IDC_box_spring_tuning;
			ProjectAltis_POSITION(1133,487,75,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
		};
		class box_spring_tuning_need: life_RscText {
			idc = ProjectAltis_IDC_box_spring_tuning_need;
			ProjectAltis_POSITION(1133,544,75,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
		};
		class stage: ProjectAltis_RscStructuredText {
			idc = ProjectAltis_IDC_stage;
			ProjectAltis_POSITION(713,490,85,24)
            text = "Verbaut";
		};
		class need: ProjectAltis_RscStructuredText {
			idc = ProjectAltis_IDC_need;
			ProjectAltis_POSITION(713,547,85,24)
            text = "Benötigt";
		};
		class glow_01: life_RscText {
			idc = ProjectAltis_IDC_glow_01;
			ProjectAltis_POSITION(1004,486,1,32)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_02: life_RscText {
			idc = ProjectAltis_IDC_glow_02;
			ProjectAltis_POSITION(928,486,1,32)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_03: life_RscText {
			idc = ProjectAltis_IDC_glow_03;
			ProjectAltis_POSITION(928,517,77,1)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_04: life_RscText {
			idc = ProjectAltis_IDC_glow_04;
			ProjectAltis_POSITION(928,486,77,1)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_05: life_RscText {
			idc = ProjectAltis_IDC_glow_05;
			ProjectAltis_POSITION(1004,543,1,32)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_06: life_RscText {
			idc = ProjectAltis_IDC_glow_06;
			ProjectAltis_POSITION(928,543,1,32)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_07: life_RscText {
			idc = ProjectAltis_IDC_glow_07;
			ProjectAltis_POSITION(928,543,77,1)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_08: life_RscText {
			idc = ProjectAltis_IDC_glow_08;
			ProjectAltis_POSITION(928,574,77,1)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_09: life_RscText {
			idc = ProjectAltis_IDC_glow_09;
			ProjectAltis_POSITION(928,630,77,5)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_10: life_RscText {
			idc = ProjectAltis_IDC_glow_10;
			ProjectAltis_POSITION(897,690,127,5)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_11: life_RscText {
			idc = ProjectAltis_IDC_glow_11;
			ProjectAltis_POSITION(683,356,555,5)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_12: life_RscText {
			idc = ProjectAltis_IDC_glow_12;
			ProjectAltis_POSITION(683,720,555,5)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_13: life_RscText {
			idc = ProjectAltis_IDC_glow_13;
			ProjectAltis_POSITION(1233,356,5,369)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_14: life_RscText {
			idc = ProjectAltis_IDC_glow_14;
			ProjectAltis_POSITION(683,356,5,369)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_15: life_RscText {
			idc = ProjectAltis_IDC_glow_15;
			ProjectAltis_POSITION(902,486,1,32)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_16: life_RscText {
			idc = ProjectAltis_IDC_glow_16;
			ProjectAltis_POSITION(826,486,1,32)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_17: life_RscText {
			idc = ProjectAltis_IDC_glow_17;
			ProjectAltis_POSITION(826,517,77,1)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_18: life_RscText {
			idc = ProjectAltis_IDC_glow_18;
			ProjectAltis_POSITION(826,486,77,1)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_19: life_RscText {
			idc = ProjectAltis_IDC_glow_19;
			ProjectAltis_POSITION(1106,486,1,32)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_20: life_RscText {
			idc = ProjectAltis_IDC_glow_20;
			ProjectAltis_POSITION(1030,486,1,32)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_21: life_RscText {
			idc = ProjectAltis_IDC_glow_21;
			ProjectAltis_POSITION(1030,517,77,1)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_22: life_RscText {
			idc = ProjectAltis_IDC_glow_22;
			ProjectAltis_POSITION(1030,486,77,1)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_23: life_RscText {
			idc = ProjectAltis_IDC_glow_23;
			ProjectAltis_POSITION(1106,543,1,32)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_24: life_RscText {
			idc = ProjectAltis_IDC_glow_24;
			ProjectAltis_POSITION(1030,543,1,32)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_25: life_RscText {
			idc = ProjectAltis_IDC_glow_25;
			ProjectAltis_POSITION(1030,543,77,1)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_26: life_RscText {
			idc = ProjectAltis_IDC_glow_26;
			ProjectAltis_POSITION(1030,574,77,1)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_27: life_RscText {
			idc = ProjectAltis_IDC_glow_27;
			ProjectAltis_POSITION(1030,630,77,5)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_28: life_RscText {
			idc = ProjectAltis_IDC_glow_28;
			ProjectAltis_POSITION(1208,486,1,32)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_29: life_RscText {
			idc = ProjectAltis_IDC_glow_29;
			ProjectAltis_POSITION(1132,486,1,32)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_30: life_RscText {
			idc = ProjectAltis_IDC_glow_30;
			ProjectAltis_POSITION(1132,517,77,1)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_31: life_RscText {
			idc = ProjectAltis_IDC_glow_31;
			ProjectAltis_POSITION(1132,486,77,1)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_32: life_RscText {
			idc = ProjectAltis_IDC_glow_32;
			ProjectAltis_POSITION(902,543,1,32)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_33: life_RscText {
			idc = ProjectAltis_IDC_glow_33;
			ProjectAltis_POSITION(826,543,1,32)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_34: life_RscText {
			idc = ProjectAltis_IDC_glow_34;
			ProjectAltis_POSITION(826,543,77,1)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_35: life_RscText {
			idc = ProjectAltis_IDC_glow_35;
			ProjectAltis_POSITION(826,574,77,1)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_36: life_RscText {
			idc = ProjectAltis_IDC_glow_36;
			ProjectAltis_POSITION(826,630,77,5)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_37: life_RscText {
			idc = ProjectAltis_IDC_glow_37;
			ProjectAltis_POSITION(1208,543,1,32)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_38: life_RscText {
			idc = ProjectAltis_IDC_glow_38;
			ProjectAltis_POSITION(1132,543,1,32)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_39: life_RscText {
			idc = ProjectAltis_IDC_glow_39;
			ProjectAltis_POSITION(1132,543,77,1)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_40: life_RscText {
			idc = ProjectAltis_IDC_glow_40;
			ProjectAltis_POSITION(1132,574,77,1)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class glow_41: life_RscText {
			idc = ProjectAltis_IDC_glow_41;
			ProjectAltis_POSITION(1132,630,77,5)
			colorBackground[] = {0.1451,0.54118,0.81176,1};
		};
		class box_engine_tuning: life_RscText {
			idc = ProjectAltis_IDC_box_engine_tuning;
			ProjectAltis_POSITION(827,487,75,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
		};
		class box_engine_tuning_need: life_RscText {
			idc = ProjectAltis_IDC_box_engine_tuning_need;
			ProjectAltis_POSITION(827,544,75,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
		};
		class engine_pic: Life_RscPicture {
			idc = ProjectAltis_IDC_engine_pic;
			ProjectAltis_POSITION(827,386,75,75)
			text = "textures\misc\tuning\dialog\engine.paa";
		};
		class gearbox_pic: Life_RscPicture {
			idc = ProjectAltis_IDC_gearbox_pic;
			ProjectAltis_POSITION(929,386,75,75)
			text = "textures\misc\tuning\dialog\gearbox.paa";
		};
		class sping_pic: Life_RscPicture {
			idc = ProjectAltis_IDC_sping_pic;
			ProjectAltis_POSITION(1133,386,75,75)
			text = "textures\misc\tuning\dialog\sping.paa";
		};
		class brake_pic: Life_RscPicture {
			idc = ProjectAltis_IDC_brake_pic;
			ProjectAltis_POSITION(1031,386,75,75)
			text = "textures\misc\tuning\dialog\brake.paa";
		};
	};

	class Controls {
		class Upgrade_1: ProjectAltis_Button {
			idc = ProjectAltis_IDC_Upgrade_1;
			ProjectAltis_POSITION(826,600,77,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
			text = "Upgrade";
            onButtonClick = "[1] call life_fnc_TuningUpgrade";
		};
		class Upgrade_2: ProjectAltis_Button {
			idc = ProjectAltis_IDC_Upgrade_2;
			ProjectAltis_POSITION(928,600,77,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
			text = "Upgrade";
            onButtonClick = "[2] call life_fnc_TuningUpgrade";
		};
		class Upgrade_3: ProjectAltis_Button {
			idc = ProjectAltis_IDC_Upgrade_3;
			ProjectAltis_POSITION(1030,600,77,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
			text = "Upgrade";
            onButtonClick = "[3] call life_fnc_TuningUpgrade";
		};
		class Upgrade_4: ProjectAltis_Button {
			idc = ProjectAltis_IDC_Upgrade_4;
			ProjectAltis_POSITION(1132,600,77,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
			text = "Upgrade";
            onButtonClick = "[4] call life_fnc_TuningUpgrade";
		};
		class text_engine_tuning: ProjectAltis_RscStructuredText {
			idc = ProjectAltis_IDC_text_engine_tuning;
			ProjectAltis_POSITION(831,490,67,24)
		};
		class text_engine_tuning_need: ProjectAltis_RscStructuredText {
			idc = ProjectAltis_IDC_text_engine_tuning_need;
			ProjectAltis_POSITION(831,547,67,24)
			text = "Maximal";
		};
		class text_spring_tuning: ProjectAltis_RscStructuredText {
			idc = ProjectAltis_IDC_text_spring_tuning;
			ProjectAltis_POSITION(1137,490,67,24)
		};
		class text_spring_tuning_need: ProjectAltis_RscStructuredText {
			idc = ProjectAltis_IDC_text_spring_tuning_need;
			ProjectAltis_POSITION(1137,547,67,24)
			text = "Maximal";
		};
		class text_brake_tuning: ProjectAltis_RscStructuredText {
			idc = ProjectAltis_IDC_text_brake_tuning;
			ProjectAltis_POSITION(1035,490,67,24)
		};
		class text_brake_tuning_need: ProjectAltis_RscStructuredText {
			idc = ProjectAltis_IDC_text_brake_tuning_need;
			ProjectAltis_POSITION(1035,547,67,24)
			text = "Maximal";
		};
		class text_gear_tuning: ProjectAltis_RscStructuredText {
			idc = ProjectAltis_IDC_text_gear_tuning;
			ProjectAltis_POSITION(933,490,67,24)
		};
		class text_gear_tuning_need: ProjectAltis_RscStructuredText {
			idc = ProjectAltis_IDC_text_gear_tuning_need;
			ProjectAltis_POSITION(933,547,67,24)
			text = "Maximal";
		};
		class close: ProjectAltis_Button_Close {
			idc = ProjectAltis_IDC_close;
			ProjectAltis_POSITION(897,660,127,30)
			colorBackground[] = {0.0549,0.08235,0.1098,1};
		};
	};
};
