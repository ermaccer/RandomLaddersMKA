#pragma once

enum characters
{
	ASHRAH,
	BARAKA,
	BORAICHO,
	BLAZE,
	CAGE,
	CHAMELEON,
	CYRAX,
	DAEGON,
	DAIROU,
	DARRIUS,
	ONAGA,
	DRAHMIN,
	ERMAC,
	FROST,
	FUJIN,
	GORO,
	HAVIK,
	HOTARU,
	HSUHAO,
	JADE,
	JAREK,
	JAX,
	KABAL,
	KAI,
	KANO,
	KENSHI,
	KINTARO,
	KIRA,
	KITANA,
	KOBRA,
	KUNGLAO,
	LIMEI,
	LIUKANG,
	MAVADO,
	MEAT,
	MILEENA,
	MOKAP,
	MOLOCH,
	MOTARO,
	NIGHTWOLF,
	NITARA,
	NOOB,
	QUANCHI,
	RAIDEN,
	RAIN,
	REIKO,
	REPTILE,
	SAREENA,
	SCORPION,
	SEKTOR,
	SHANGTSUNG,
	SHAOKAHN,
	SHEEVA,
	SHINNOK,
	SHUJINKO,
	SINDEL,
	SMOKE,
	SONYA,
	STRYKER,
	SUBZERO,
	TANYA,
	TAVEN,
	KAF,
	RANDOM,

	TOTAL_CHARACTERS
};


typedef struct {
	int characterID;
	int soundID;
	char* headName;
	char* headLockedName;
	char* bodyName;
	char* bodyArchiveName;
	char* difficulty;
	char* style1;
	char* style2;
	char* style3;
}select_screen_entry;
