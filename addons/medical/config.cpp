class CfgPatches
{
	class metal_weapons
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			""
		};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"ace_medical_status",
			"ace_medical_damage",
			"ace_apl"
		};
		authors[]=
		{
			"LCDR Wolf"
		};
	};
};
class CfgEditorCategories
{
	class MET_Med
	{
		displayname="[16th] Medical Extension";
	};
};
class CfgEditorSubcategories
{
	class MET_Med_Assets
	{
		displayName="[16th] Medical Assets";
	};
};
class ace_medical_treatment
{
	class Bandaging
	{
		class BasicBandage
		{
			effectiveness=5;
			reopeningChance=0;
			reopeningMinDelay=0;
			reopeningMaxDelay=0;
		};
		class FieldDressing
		{
			effectiveness=1;
			reopeningChance=0.1;
			reopeningMinDelay=120;
			reopeningMaxDelay=200;
			class Abrasion
			{
				effectiveness=3;
				reopeningChance=0;
				reopeningMinDelay=200;
				reopeningMaxDelay=1000;
			};
			class AbrasionMinor: Abrasion
			{
				effectiveness=3;
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness=2.5;
				reopeningChance=0.69999999;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness=2;
				reopeningChance=0.89999998;
			};
			class Avulsion: Abrasion
			{
				effectiveness=1;
				reopeningChance=0.5;
				reopeningMinDelay=120;
				reopeningMaxDelay=200;
			};
			class AvulsionMinor: Avulsion
			{
				effectiveness=1;
			};
			class AvulsionMedium: Avulsion
			{
				effectiveness=0.89999998;
			};
			class AvulsionLarge: Avulsion
			{
				effectiveness=0.75;
			};
			class Contusion: Abrasion
			{
				effectiveness=1;
				reopeningChance=0;
				reopeningMinDelay=0;
				reopeningMaxDelay=0;
			};
			class ContusionMinor: Contusion
			{
			};
			class ContusionMedium: Contusion
			{
			};
			class ContusionLarge: Contusion
			{
			};
			class Crush: Abrasion
			{
				effectiveness=1;
				reopeningChance=0.2;
				reopeningMinDelay=200;
				reopeningMaxDelay=1000;
			};
			class CrushMinor: Crush
			{
				effectiveness=1;
				reopeningChance=0.2;
			};
			class CrushMedium: Crush
			{
				effectiveness=0.69999999;
				reopeningChance=0;
			};
			class CrushLarge: Crush
			{
				effectiveness=0.60000002;
				reopeningChance=0.40000001;
			};
			class Cut: Abrasion
			{
				effectiveness=4;
				reopeningChance=0.1;
				reopeningMinDelay=300;
				reopeningMaxDelay=1000;
			};
			class CutMinor: Cut
			{
				effectiveness=4;
				reopeningChance=0.1;
			};
			class CutMedium: Cut
			{
				effectiveness=3;
				reopeningChance=0;
			};
			class CutLarge: Cut
			{
				effectiveness=1;
				reopeningChance=0.5;
			};
			class Laceration: Abrasion
			{
				effectiveness=0.94999999;
				reopeningChance=0;
				reopeningMinDelay=100;
				reopeningMaxDelay=800;
			};
			class LacerationMinor: Laceration
			{
				effectiveness=0.94999999;
				reopeningChance=0;
			};
			class LacerationMedium: Laceration
			{
				effectiveness=0.69999999;
				reopeningChance=0.5;
			};
			class LacerationLarge: Laceration
			{
				effectiveness=0.5;
				reopeningChance=0.60000002;
			};
			class VelocityWound: Abrasion
			{
				effectiveness=2;
				reopeningChance=0.69999999;
				reopeningMinDelay=100;
				reopeningMaxDelay=500;
			};
			class VelocityWoundMinor: VelocityWound
			{
				effectiveness=2;
			};
			class VelocityWoundMedium: VelocityWound
			{
				effectiveness=1.5;
			};
			class VelocityWoundLarge: VelocityWound
			{
				effectiveness=1;
			};
			class PunctureWound: Abrasion
			{
				effectiveness=2;
				reopeningChance=0.5;
				reopeningMinDelay=200;
				reopeningMaxDelay=850;
			};
			class PunctureWoundMinor: PunctureWound
			{
				effectiveness=2;
			};
			class PunctureWoundMedium: PunctureWound
			{
				effectiveness=1.3;
			};
			class PunctureWoundLarge: PunctureWound
			{
				effectiveness=0.89999998;
			};
		};
		class PackingBandage: FieldDressing
		{
			class Abrasion
			{
				effectiveness=3;
				reopeningChance=0.60000002;
				reopeningMinDelay=800;
				reopeningMaxDelay=1500;
			};
			class AbrasionMinor: Abrasion
			{
				effectiveness=3;
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness=2.5;
				reopeningChance=0.89999998;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness=2;
				reopeningChance=1;
			};
			class Avulsion: Abrasion
			{
				effectiveness=1;
				reopeningChance=0.69999999;
				reopeningMinDelay=1000;
				reopeningMaxDelay=1600;
			};
			class AvulsionMinor: Avulsion
			{
				effectiveness=1;
			};
			class AvulsionMedium: Avulsion
			{
				effectiveness=0.89999998;
			};
			class AvulsionLarge: Avulsion
			{
				effectiveness=0.75;
			};
			class Contusion: Abrasion
			{
				effectiveness=1;
				reopeningChance=0;
				reopeningMinDelay=0;
				reopeningMaxDelay=0;
			};
			class ContusionMinor: Contusion
			{
			};
			class ContusionMedium: Contusion
			{
			};
			class ContusionLarge: Contusion
			{
			};
			class Crush: Abrasion
			{
				effectiveness=1;
				reopeningChance=0.5;
				reopeningMinDelay=600;
				reopeningMaxDelay=1000;
			};
			class CrushMinor: Crush
			{
				effectiveness=1;
				reopeningChance=0.60000002;
			};
			class CrushMedium: Crush
			{
				effectiveness=0.69999999;
				reopeningChance=0.69999999;
			};
			class CrushLarge: Crush
			{
				effectiveness=0.60000002;
				reopeningChance=0.80000001;
			};
			class Cut: Abrasion
			{
				effectiveness=4;
				reopeningChance=0.40000001;
				reopeningMinDelay=700;
				reopeningMaxDelay=1000;
			};
			class CutMinor: Cut
			{
				effectiveness=4;
				reopeningChance=0.60000002;
			};
			class CutMedium: Cut
			{
				effectiveness=3;
				reopeningChance=0.69999999;
			};
			class CutLarge: Cut
			{
				effectiveness=1;
				reopeningChance=0.80000001;
			};
			class Laceration: Abrasion
			{
				effectiveness=0.94999999;
				reopeningChance=0.64999998;
				reopeningMinDelay=500;
				reopeningMaxDelay=2000;
			};
			class LacerationMinor: Laceration
			{
				effectiveness=0.94999999;
				reopeningChance=0.64999998;
			};
			class LacerationMedium: Laceration
			{
				effectiveness=0.69999999;
				reopeningChance=0.80000001;
			};
			class LacerationLarge: Laceration
			{
				effectiveness=0.5;
				reopeningChance=0.89999998;
			};
			class VelocityWound: Abrasion
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=800;
				reopeningMaxDelay=2000;
			};
			class VelocityWoundMinor: VelocityWound
			{
				effectiveness=2;
			};
			class VelocityWoundMedium: VelocityWound
			{
				effectiveness=1.5;
			};
			class VelocityWoundLarge: VelocityWound
			{
				effectiveness=1;
			};
			class PunctureWound: Abrasion
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=1000;
				reopeningMaxDelay=3000;
			};
			class PunctureWoundMinor: PunctureWound
			{
				effectiveness=2;
			};
			class PunctureWoundMedium: PunctureWound
			{
				effectiveness=1.3;
			};
			class PunctureWoundLarge: PunctureWound
			{
				effectiveness=0.89999998;
			};
		};
		class ElasticBandage: FieldDressing
		{
			class Abrasion
			{
				effectiveness=4;
				reopeningChance=0.60000002;
				reopeningMinDelay=80;
				reopeningMaxDelay=150;
			};
			class AbrasionMinor: Abrasion
			{
				effectiveness=4;
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness=3;
				reopeningChance=0.89999998;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness=2.5;
				reopeningChance=1;
			};
			class Avulsion: Abrasion
			{
				effectiveness=2;
				reopeningChance=0.69999999;
				reopeningMinDelay=100;
				reopeningMaxDelay=160;
			};
			class AvulsionMinor: Avulsion
			{
				effectiveness=2;
			};
			class AvulsionMedium: Avulsion
			{
				effectiveness=1.4;
			};
			class AvulsionLarge: Avulsion
			{
				effectiveness=1;
			};
			class Contusion: Abrasion
			{
				effectiveness=2;
				reopeningChance=0;
				reopeningMinDelay=0;
				reopeningMaxDelay=0;
			};
			class ContusionMinor: Contusion
			{
			};
			class ContusionMedium: Contusion
			{
			};
			class ContusionLarge: Contusion
			{
			};
			class Crush: Abrasion
			{
				effectiveness=2;
				reopeningChance=0.5;
				reopeningMinDelay=60;
				reopeningMaxDelay=100;
			};
			class CrushMinor: Crush
			{
				effectiveness=2;
				reopeningChance=0.60000002;
			};
			class CrushMedium: Crush
			{
				effectiveness=1.7;
				reopeningChance=0.69999999;
			};
			class CrushLarge: Crush
			{
				effectiveness=1.6;
				reopeningChance=0.80000001;
			};
			class Cut: Abrasion
			{
				effectiveness=5;
				reopeningChance=0.40000001;
				reopeningMinDelay=70;
				reopeningMaxDelay=100;
			};
			class CutMinor: Cut
			{
				effectiveness=5;
				reopeningChance=0.60000002;
			};
			class CutMedium: Cut
			{
				effectiveness=3.5;
				reopeningChance=0.69999999;
			};
			class CutLarge: Cut
			{
				effectiveness=2;
				reopeningChance=0.80000001;
			};
			class Laceration: Abrasion
			{
				effectiveness=2;
				reopeningChance=0.64999998;
				reopeningMinDelay=50;
				reopeningMaxDelay=200;
			};
			class LacerationMinor: Laceration
			{
				effectiveness=2;
				reopeningChance=0.64999998;
			};
			class LacerationMedium: Laceration
			{
				effectiveness=1.5;
				reopeningChance=0.80000001;
			};
			class LacerationLarge: Laceration
			{
				effectiveness=1;
				reopeningChance=0.89999998;
			};
			class VelocityWound: Abrasion
			{
				effectiveness=2.2;
				reopeningChance=1;
				reopeningMinDelay=80;
				reopeningMaxDelay=200;
			};
			class VelocityWoundMinor: VelocityWound
			{
				effectiveness=2.2;
			};
			class VelocityWoundMedium: VelocityWound
			{
				effectiveness=1.75;
			};
			class VelocityWoundLarge: VelocityWound
			{
				effectiveness=1.5;
			};
			class PunctureWound: Abrasion
			{
				effectiveness=2.5;
				reopeningChance=1;
				reopeningMinDelay=100;
				reopeningMaxDelay=300;
			};
			class PunctureWoundMinor: PunctureWound
			{
				effectiveness=2.5;
			};
			class PunctureWoundMedium: PunctureWound
			{
				effectiveness=2;
			};
			class PunctureWoundLarge: PunctureWound
			{
				effectiveness=1.5;
			};
		};
		class QuikClot: FieldDressing
		{
			class Abrasion
			{
				effectiveness=2;
				reopeningChance=0;
				reopeningMinDelay=800;
				reopeningMaxDelay=1500;
			};
			class AbrasionMinor: Abrasion
			{
				effectiveness=2;
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness=1;
				reopeningChance=0.40000001;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness=0.69999999;
				reopeningChance=0.5;
			};
			class Avulsion: Abrasion
			{
				effectiveness=0.69999999;
				reopeningChance=0.2;
				reopeningMinDelay=1000;
				reopeningMaxDelay=1600;
			};
			class AvulsionMinor: Avulsion
			{
				effectiveness=0.69999999;
			};
			class AvulsionMedium: Avulsion
			{
				effectiveness=0.64999998;
			};
			class AvulsionLarge: Avulsion
			{
				effectiveness=0.5;
			};
			class Contusion: Abrasion
			{
				effectiveness=1;
				reopeningChance=0;
				reopeningMinDelay=0;
				reopeningMaxDelay=0;
			};
			class ContusionMinor: Contusion
			{
			};
			class ContusionMedium: Contusion
			{
			};
			class ContusionLarge: Contusion
			{
			};
			class Crush: Abrasion
			{
				effectiveness=0.60000002;
				reopeningChance=0.5;
				reopeningMinDelay=600;
				reopeningMaxDelay=1000;
			};
			class CrushMinor: Crush
			{
				effectiveness=0.60000002;
				reopeningChance=0;
			};
			class CrushMedium: Crush
			{
				effectiveness=0.5;
			};
			class CrushLarge: Crush
			{
				effectiveness=0.40000001;
			};
			class Cut: Abrasion
			{
				effectiveness=2;
				reopeningChance=0.2;
				reopeningMinDelay=700;
				reopeningMaxDelay=1000;
			};
			class CutMinor: Cut
			{
				effectiveness=2;
			};
			class CutMedium: Cut
			{
				effectiveness=1;
			};
			class CutLarge: Cut
			{
				effectiveness=0.60000002;
			};
			class Laceration: Abrasion
			{
				effectiveness=0.69999999;
				reopeningChance=0.40000001;
				reopeningMinDelay=500;
				reopeningMaxDelay=2000;
			};
			class LacerationMinor: Laceration
			{
				effectiveness=0.69999999;
				reopeningChance=0.40000001;
			};
			class LacerationMedium: Laceration
			{
				effectiveness=0.69999999;
			};
			class LacerationLarge: Laceration
			{
				effectiveness=0.5;
			};
			class VelocityWound: Abrasion
			{
				effectiveness=1;
				reopeningChance=0.5;
				reopeningMinDelay=800;
				reopeningMaxDelay=2000;
			};
			class VelocityWoundMinor: VelocityWound
			{
				effectiveness=1;
			};
			class VelocityWoundMedium: VelocityWound
			{
				effectiveness=0.75;
			};
			class VelocityWoundLarge: VelocityWound
			{
				effectiveness=0.5;
			};
			class PunctureWound: Abrasion
			{
				effectiveness=1;
				reopeningChance=0.5;
				reopeningMinDelay=1000;
				reopeningMaxDelay=3000;
			};
			class PunctureWoundMinor: PunctureWound
			{
				effectiveness=1;
			};
			class PunctureWoundMedium: PunctureWound
			{
				effectiveness=0.69999999;
			};
			class PunctureWoundLarge: PunctureWound
			{
				effectiveness=0.40000001;
			};
		};
		class MET_ClothBandage: FieldDressing
		{
			class Abrasion
			{
				effectiveness=1.5;
				reopeningChance=0;
				reopeningMinDelay=120;
				reopeningMaxDelay=200;
			};
			class AbrasionMinor: Abrasion
			{
				effectiveness=2;
				reopeningChance=0;
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness=1.5;
				reopeningChance=0;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness=1;
				reopeningChance=0;
			};
			class Avulsion: Abrasion
			{
				effectiveness=1.5;
				reopeningChance=0;
				reopeningMinDelay=120;
				reopeningMaxDelay=200;
			};
			class AvulsionMinor: Avulsion
			{
				effectiveness=2;
			};
			class AvulsionMedium: Avulsion
			{
				effectiveness=1.5;
			};
			class AvulsionLarge: Avulsion
			{
				effectiveness=1;
			};
			class Contusion: Abrasion
			{
				effectiveness=1.5;
				reopeningChance=0;
				reopeningMinDelay=0;
				reopeningMaxDelay=0;
			};
			class ContusionMinor: Contusion
			{
				effectiveness=2;
			};
			class ContusionMedium: Contusion
			{
				effectiveness=1.5;
			};
			class ContusionLarge: Contusion
			{
				effectiveness=1;
			};
			class Crush: Abrasion
			{
				effectiveness=1.5;
				reopeningChance=0;
				reopeningMinDelay=120;
				reopeningMaxDelay=200;
			};
			class CrushMinor: Crush
			{
				effectiveness=2;
				reopeningChance=0;
			};
			class CrushMedium: Crush
			{
				effectiveness=1.5;
				reopeningChance=0;
			};
			class CrushLarge: Crush
			{
				effectiveness=1;
				reopeningChance=0;
			};
			class Cut: Abrasion
			{
				effectiveness=1.5;
				reopeningChance=0;
				reopeningMinDelay=120;
				reopeningMaxDelay=200;
			};
			class CutMinor: Cut
			{
				effectiveness=2;
				reopeningChance=0;
			};
			class CutMedium: Cut
			{
				effectiveness=1.5;
				reopeningChance=0;
			};
			class CutLarge: Cut
			{
				effectiveness=1;
				reopeningChance=0;
			};
			class Laceration: Abrasion
			{
				effectiveness=2;
				reopeningChance=0;
				reopeningMinDelay=120;
				reopeningMaxDelay=200;
			};
			class LacerationMinor: Laceration
			{
				effectiveness=2;
				reopeningChance=0;
			};
			class LacerationMedium: Laceration
			{
				effectiveness=1.5;
				reopeningChance=0;
			};
			class LacerationLarge: Laceration
			{
				effectiveness=1;
				reopeningChance=0;
			};
			class VelocityWound: Abrasion
			{
				effectiveness=2;
				reopeningChance=0;
				reopeningMinDelay=100;
				reopeningMaxDelay=200;
			};
			class VelocityWoundMinor: VelocityWound
			{
				effectiveness=2;
				reopeningChance=0;
			};
			class VelocityWoundMedium: VelocityWound
			{
				effectiveness=1.5;
				reopeningChance=0;
			};
			class VelocityWoundLarge: VelocityWound
			{
				effectiveness=1;
				reopeningChance=0;
			};
			class PunctureWound: Abrasion
			{
				effectiveness=2;
				reopeningChance=0;
				reopeningMinDelay=100;
				reopeningMaxDelay=300;
			};
			class PunctureWoundMinor: PunctureWound
			{
				effectiveness=2;
				reopeningChance=0;
			};
			class PunctureWoundMedium: PunctureWound
			{
				effectiveness=1.5;
				reopeningChance=0;
			};
			class PunctureWoundLarge: PunctureWound
			{
				effectiveness=1;
				reopeningChance=0;
			};
		};
		class BactaBandage: FieldDressing
		{
			class Abrasion
			{
				effectiveness=5;
				reopeningChance=0;
				reopeningMinDelay=120;
				reopeningMaxDelay=200;
			};
			class AbrasionMinor: Abrasion
			{
				effectiveness=6;
				reopeningChance=0;
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness=5;
				reopeningChance=0;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness=4.5;
				reopeningChance=0;
			};
			class Avulsion: Abrasion
			{
				effectiveness=3;
				reopeningChance=0;
				reopeningMinDelay=120;
				reopeningMaxDelay=200;
			};
			class AvulsionMinor: Avulsion
			{
				effectiveness=3.5;
				reopeningChance=0;
			};
			class AvulsionMedium: Avulsion
			{
				effectiveness=3;
				reopeningChance=0;
			};
			class AvulsionLarge: Avulsion
			{
				effectiveness=2.5;
				reopeningChance=0;
			};
			class Contusion: Abrasion
			{
				effectiveness=5;
				reopeningChance=0;
				reopeningMinDelay=0;
				reopeningMaxDelay=0;
			};
			class ContusionMinor: Contusion
			{
			};
			class ContusionMedium: Contusion
			{
			};
			class ContusionLarge: Contusion
			{
			};
			class Crush: Abrasion
			{
				effectiveness=5;
				reopeningChance=0;
				reopeningMinDelay=120;
				reopeningMaxDelay=200;
			};
			class CrushMinor: Crush
			{
				effectiveness=6;
				reopeningChance=0;
			};
			class CrushMedium: Crush
			{
				effectiveness=5;
				reopeningChance=0;
			};
			class CrushLarge: Crush
			{
				effectiveness=4.5;
				reopeningChance=0;
			};
			class Cut: Abrasion
			{
				effectiveness=3;
				reopeningChance=0;
				reopeningMinDelay=120;
				reopeningMaxDelay=200;
			};
			class CutMinor: Cut
			{
				effectiveness=3.5;
				reopeningChance=0;
			};
			class CutMedium: Cut
			{
				effectiveness=3;
				reopeningChance=0;
			};
			class CutLarge: Cut
			{
				effectiveness=2.5;
				reopeningChance=0;
			};
			class Laceration: Abrasion
			{
				effectiveness=3;
				reopeningChance=0.34999999;
				reopeningMinDelay=120;
				reopeningMaxDelay=200;
			};
			class LacerationMinor: Laceration
			{
				effectiveness=3.5;
				reopeningChance=0;
			};
			class LacerationMedium: Laceration
			{
				effectiveness=3;
				reopeningChance=0;
			};
			class LacerationLarge: Laceration
			{
				effectiveness=2.5;
				reopeningChance=0;
			};
			class VelocityWound: Abrasion
			{
				effectiveness=2;
				reopeningChance=0;
				reopeningMinDelay=100;
				reopeningMaxDelay=200;
			};
			class VelocityWoundMinor: VelocityWound
			{
				effectiveness=2;
				reopeningChance=0;
			};
			class VelocityWoundMedium: VelocityWound
			{
				effectiveness=1.5;
				reopeningChance=0;
			};
			class VelocityWoundLarge: VelocityWound
			{
				effectiveness=1;
				reopeningChance=0;
			};
			class PunctureWound: Abrasion
			{
				effectiveness=2;
				reopeningChance=0;
				reopeningMinDelay=100;
				reopeningMaxDelay=300;
			};
			class PunctureWoundMinor: PunctureWound
			{
				effectiveness=2;
				reopeningChance=0;
			};
			class PunctureWoundMedium: PunctureWound
			{
				effectiveness=1.5;
				reopeningChance=0;
			};
			class PunctureWoundLarge: PunctureWound
			{
				effectiveness=1;
				reopeningChance=0;
			};
		};
		class BactaTank: FieldDressing
		{
			class Abrasion
			{
				effectiveness=50;
				reopeningChance=0;
				reopeningMinDelay=120;
				reopeningMaxDelay=200;
			};
			class AbrasionMinor: Abrasion
			{
				effectiveness=50;
				reopeningChance=0;
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness=50;
				reopeningChance=0;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness=50;
				reopeningChance=0;
			};
			class Avulsion: Abrasion
			{
				effectiveness=50;
				reopeningChance=0;
				reopeningMinDelay=120;
				reopeningMaxDelay=200;
			};
			class AvulsionMinor: Avulsion
			{
				effectiveness=50;
				reopeningChance=0;
			};
			class AvulsionMedium: Avulsion
			{
				effectiveness=50;
				reopeningChance=0;
			};
			class AvulsionLarge: Avulsion
			{
				effectiveness=50;
				reopeningChance=0;
			};
			class Contusion: Abrasion
			{
				effectiveness=50;
				reopeningChance=0;
				reopeningMinDelay=0;
				reopeningMaxDelay=0;
			};
			class ContusionMinor: Contusion
			{
			};
			class ContusionMedium: Contusion
			{
			};
			class ContusionLarge: Contusion
			{
			};
			class Crush: Abrasion
			{
				effectiveness=50;
				reopeningChance=0;
				reopeningMinDelay=120;
				reopeningMaxDelay=200;
			};
			class CrushMinor: Crush
			{
				effectiveness=50;
				reopeningChance=0;
			};
			class CrushMedium: Crush
			{
				effectiveness=50;
				reopeningChance=0;
			};
			class CrushLarge: Crush
			{
				effectiveness=50;
				reopeningChance=0;
			};
			class Cut: Abrasion
			{
				effectiveness=50;
				reopeningChance=0;
				reopeningMinDelay=120;
				reopeningMaxDelay=200;
			};
			class CutMinor: Cut
			{
				effectiveness=50;
				reopeningChance=0;
			};
			class CutMedium: Cut
			{
				effectiveness=50;
				reopeningChance=0;
			};
			class CutLarge: Cut
			{
				effectiveness=50;
				reopeningChance=0;
			};
			class Laceration: Abrasion
			{
				effectiveness=50;
				reopeningChance=0.34999999;
				reopeningMinDelay=120;
				reopeningMaxDelay=200;
			};
			class LacerationMinor: Laceration
			{
				effectiveness=50;
				reopeningChance=0;
			};
			class LacerationMedium: Laceration
			{
				effectiveness=50;
				reopeningChance=0;
			};
			class LacerationLarge: Laceration
			{
				effectiveness=50;
				reopeningChance=0;
			};
			class VelocityWound: Abrasion
			{
				effectiveness=50;
				reopeningChance=0;
				reopeningMinDelay=100;
				reopeningMaxDelay=200;
			};
			class VelocityWoundMinor: VelocityWound
			{
				effectiveness=50;
				reopeningChance=0;
			};
			class VelocityWoundMedium: VelocityWound
			{
				effectiveness=50;
				reopeningChance=0;
			};
			class VelocityWoundLarge: VelocityWound
			{
				effectiveness=50;
				reopeningChance=0;
			};
			class PunctureWound: Abrasion
			{
				effectiveness=50;
				reopeningChance=0;
				reopeningMinDelay=100;
				reopeningMaxDelay=300;
			};
			class PunctureWoundMinor: PunctureWound
			{
				effectiveness=50;
				reopeningChance=0;
			};
			class PunctureWoundMedium: PunctureWound
			{
				effectiveness=50;
				reopeningChance=0;
			};
			class PunctureWoundLarge: PunctureWound
			{
				effectiveness=50;
				reopeningChance=0;
			};
		};
		class BactaPatch: FieldDressing
		{
			class Abrasion
			{
				effectiveness=3;
				reopeningChance=0.5;
				reopeningMinDelay=120;
				reopeningMaxDelay=200;
			};
			class AbrasionMinor: Abrasion
			{
				effectiveness=3.5;
				reopeningChance=0.34999999;
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness=3;
				reopeningChance=0.5;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness=2.5;
				reopeningChance=0.64999998;
			};
			class Avulsion: Abrasion
			{
				effectiveness=3;
				reopeningChance=0.5;
				reopeningMinDelay=120;
				reopeningMaxDelay=200;
			};
			class AvulsionMinor: Avulsion
			{
				effectiveness=3.5;
				reopeningChance=0.34999999;
			};
			class AvulsionMedium: Avulsion
			{
				effectiveness=3;
				reopeningChance=0.5;
			};
			class AvulsionLarge: Avulsion
			{
				effectiveness=2.5;
				reopeningChance=0.64999998;
			};
			class Contusion: Abrasion
			{
				effectiveness=3;
				reopeningChance=0;
				reopeningMinDelay=0;
				reopeningMaxDelay=0;
			};
			class ContusionMinor: Contusion
			{
			};
			class ContusionMedium: Contusion
			{
			};
			class ContusionLarge: Contusion
			{
			};
			class Crush: Abrasion
			{
				effectiveness=2;
				reopeningChance=0.5;
				reopeningMinDelay=120;
				reopeningMaxDelay=200;
			};
			class CrushMinor: Crush
			{
				effectiveness=2;
				reopeningChance=0.34999999;
			};
			class CrushMedium: Crush
			{
				effectiveness=1.5;
				reopeningChance=0.5;
			};
			class CrushLarge: Crush
			{
				effectiveness=1;
				reopeningChance=0.64999998;
			};
			class Cut: Abrasion
			{
				effectiveness=5;
				reopeningChance=0;
				reopeningMinDelay=120;
				reopeningMaxDelay=200;
			};
			class CutMinor: Cut
			{
				effectiveness=6;
				reopeningChance=0.34999999;
			};
			class CutMedium: Cut
			{
				effectiveness=5;
				reopeningChance=0.5;
			};
			class CutLarge: Cut
			{
				effectiveness=4.5;
				reopeningChance=0.64999998;
			};
			class Laceration: Abrasion
			{
				effectiveness=3;
				reopeningChance=0.5;
				reopeningMinDelay=120;
				reopeningMaxDelay=200;
			};
			class LacerationMinor: Laceration
			{
				effectiveness=3.5;
				reopeningChance=0.34999999;
			};
			class LacerationMedium: Laceration
			{
				effectiveness=3;
				reopeningChance=0.5;
			};
			class LacerationLarge: Laceration
			{
				effectiveness=2.5;
				reopeningChance=0.64999998;
			};
			class VelocityWound: Abrasion
			{
				effectiveness=5;
				reopeningChance=0.5;
				reopeningMinDelay=100;
				reopeningMaxDelay=200;
			};
			class VelocityWoundMinor: VelocityWound
			{
				effectiveness=6;
				reopeningChance=0.34999999;
			};
			class VelocityWoundMedium: VelocityWound
			{
				effectiveness=5;
				reopeningChance=0.5;
			};
			class VelocityWoundLarge: VelocityWound
			{
				effectiveness=4.5;
				reopeningChance=0.64999998;
			};
			class PunctureWound: Abrasion
			{
				effectiveness=3;
				reopeningChance=0.5;
				reopeningMinDelay=100;
				reopeningMaxDelay=300;
			};
			class PunctureWoundMinor: PunctureWound
			{
				effectiveness=3.5;
				reopeningChance=0.34999999;
			};
			class PunctureWoundMedium: PunctureWound
			{
				effectiveness=3;
				reopeningChance=0.5;
			};
			class PunctureWoundLarge: PunctureWound
			{
				effectiveness=2.5;
				reopeningChance=0.64999998;
			};
		};
		class BactaSpray: FieldDressing
		{
			class Abrasion
			{
				effectiveness=2;
				reopeningChance=0.25;
				reopeningMinDelay=120;
				reopeningMaxDelay=200;
			};
			class AbrasionMinor: Abrasion
			{
				effectiveness=2;
				reopeningChance=0.1;
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness=1.5;
				reopeningChance=0.25;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness=1;
				reopeningChance=0.40000001;
			};
			class Avulsion: Abrasion
			{
				effectiveness=2;
				reopeningChance=0.25;
				reopeningMinDelay=120;
				reopeningMaxDelay=200;
			};
			class AvulsionMinor: Avulsion
			{
				effectiveness=2;
				reopeningChance=0.1;
			};
			class AvulsionMedium: Avulsion
			{
				effectiveness=1.5;
				reopeningChance=0.25;
			};
			class AvulsionLarge: Avulsion
			{
				effectiveness=1;
				reopeningChance=0.40000001;
			};
			class Contusion: Abrasion
			{
				effectiveness=2;
				reopeningChance=0;
				reopeningMinDelay=0;
				reopeningMaxDelay=0;
			};
			class ContusionMinor: Contusion
			{
			};
			class ContusionMedium: Contusion
			{
			};
			class ContusionLarge: Contusion
			{
			};
			class Crush: Abrasion
			{
				effectiveness=2;
				reopeningChance=0.25;
				reopeningMinDelay=120;
				reopeningMaxDelay=200;
			};
			class CrushMinor: Crush
			{
				effectiveness=2;
				reopeningChance=0.1;
			};
			class CrushMedium: Crush
			{
				effectiveness=1.5;
				reopeningChance=0.25;
			};
			class CrushLarge: Crush
			{
				effectiveness=1;
				reopeningChance=0.40000001;
			};
			class Cut: Abrasion
			{
				effectiveness=3;
				reopeningChance=0.25;
				reopeningMinDelay=120;
				reopeningMaxDelay=200;
			};
			class CutMinor: Cut
			{
				effectiveness=3.5;
				reopeningChance=0.1;
			};
			class CutMedium: Cut
			{
				effectiveness=3;
				reopeningChance=0.25;
			};
			class CutLarge: Cut
			{
				effectiveness=2.5;
				reopeningChance=0.40000001;
			};
			class Laceration: Abrasion
			{
				effectiveness=5;
				reopeningChance=0.25;
				reopeningMinDelay=120;
				reopeningMaxDelay=200;
			};
			class LacerationMinor: Laceration
			{
				effectiveness=6;
				reopeningChance=0.1;
			};
			class LacerationMedium: Laceration
			{
				effectiveness=5;
				reopeningChance=0.25;
			};
			class LacerationLarge: Laceration
			{
				effectiveness=4.5;
				reopeningChance=0.40000001;
			};
			class VelocityWound: Abrasion
			{
				effectiveness=3;
				reopeningChance=0.25;
				reopeningMinDelay=100;
				reopeningMaxDelay=200;
			};
			class VelocityWoundMinor: VelocityWound
			{
				effectiveness=3.5;
				reopeningChance=0.1;
			};
			class VelocityWoundMedium: VelocityWound
			{
				effectiveness=3;
				reopeningChance=0.25;
			};
			class VelocityWoundLarge: VelocityWound
			{
				effectiveness=2.5;
				reopeningChance=0.40000001;
			};
			class PunctureWound: Abrasion
			{
				effectiveness=5;
				reopeningChance=0.25;
				reopeningMinDelay=100;
				reopeningMaxDelay=300;
			};
			class PunctureWoundMinor: PunctureWound
			{
				effectiveness=6;
				reopeningChance=0.1;
			};
			class PunctureWoundMedium: PunctureWound
			{
				effectiveness=5;
				reopeningChance=0.25;
			};
			class PunctureWoundLarge: PunctureWound
			{
				effectiveness=4.5;
				reopeningChance=0.40000001;
			};
		};
	};
	class Medication
	{
		painReduce=0;
		hrIncreaseLow[]={0,0};
		hrIncreaseNormal[]={0,0};
		hrIncreaseHigh[]={0,0};
		timeInSystem=120;
		timeTillMaxEffect=30;
		maxDose=4;
		onOverDose="";
		viscosityChange=0;
		class Morphine
		{
			painReduce=0.80000001;
			hrIncreaseLow[]={-10,-20};
			hrIncreaseNormal[]={-10,-30};
			hrIncreaseHigh[]={-10,-35};
			timeInSystem=1800;
			timeTillMaxEffect=30;
			maxDose=4;
			incompatibleMedication[]={};
			viscosityChange=-10;
		};
		class Epinephrine
		{
			painReduce=0;
			hrIncreaseLow[]={10,20};
			hrIncreaseNormal[]={10,50};
			hrIncreaseHigh[]={10,40};
			timeInSystem=120;
			timeTillMaxEffect=10;
			maxDose=10;
			incompatibleMedication[]={};
		};
		class Adenosine
		{
			painReduce=0;
			hrIncreaseLow[]={-7,-10};
			hrIncreaseNormal[]={-15,-30};
			hrIncreaseHigh[]={-15,-35};
			timeInSystem=120;
			timeTillMaxEffect=15;
			maxDose=6;
			incompatibleMedication[]={};
		};
		class PainKillers
		{
			painReduce=0.1;
			timeInSystem=600;
			timeTillMaxEffect=60;
			maxDose=10;
			incompatibleMedication[]={};
			viscosityChange=5;
		};
		class Perigen
		{
			painReduce=0.85000002;
			hrIncreaseLow[]={0,0};
			hrIncreaseNormal[]={0,0};
			hrIncreaseHigh[]={0,0};
			timeInSystem=300;
			timeTillMaxEffect=30;
			maxDose=10;
			incompatibleMedication[]={};
			viscosityChange=5;
		};
		class Enkephalin
		{
			painReduce=0.64999998;
			hrIncreaseLow[]={-10,-15};
			hrIncreaseNormal[]={-10,-20};
			hrIncreaseHigh[]={-10,-25};
			timeInSystem=300;
			timeTillMaxEffect=20;
			maxDose=4;
			incompatibleMedication[]={};
		};
		class Nyex
		{
			painReduce=1;
			hrIncreaseLow[]={-10,-25};
			hrIncreaseNormal[]={-10,-30};
			hrIncreaseHigh[]={-10,-35};
			timeInSystem=600;
			timeTillMaxEffect=10;
			maxDose=2;
			incompatibleMedication[]={};
		};
		class Kyrprax
		{
			painReduce=0;
			hrIncreaseLow[]={10,30};
			hrIncreaseNormal[]={10,35};
			hrIncreaseHigh[]={10,40};
			timeInSystem=300;
			timeTillMaxEffect=20;
			maxDose=4;
			incompatibleMedication[]={};
		};
		class Polybiotics
		{
			painReduce=0;
			hrIncreaseLow[]={10,40};
			hrIncreaseNormal[]={10,55};
			hrIncreaseHigh[]={10,45};
			timeInSystem=600;
			timeTillMaxEffect=10;
			maxDose=2;
			incompatibleMedication[]={};
		};
		class Myocaine
		{
			painReduce=0;
			hrIncreaseLow[]={-10,-20};
			hrIncreaseNormal[]={-15,-30};
			hrIncreaseHigh[]={-15,-35};
			timeInSystem=300;
			timeTillMaxEffect=20;
			maxDose=4;
			incompatibleMedication[]={};
		};
		class Myoplexaril
		{
			painReduce=0;
			hrIncreaseLow[]={-15,-30};
			hrIncreaseNormal[]={-15,-35};
			hrIncreaseHigh[]={-15,-40};
			timeInSystem=600;
			timeTillMaxEffect=10;
			maxDose=2;
			incompatibleMedication[]={};
		};
		class Reedug
		{
			painReduce=1;
			hrIncreaseLow[]={-40,-50};
			hrIncreaseNormal[]={-50,-70};
			hrIncreaseHigh[]={-80,-90};
			timeInSystem=300;
			timeTillMaxEffect=10;
			maxDose=5;
			incompatibleMedication[]={};
		};
	};
	class IV
	{
		volume=1000;
		ratio[]={};
		type="Blood";
		class BloodIV
		{
			volume=1000;
			ratio[]=
			{
				"Plasma",
				1
			};
		};
		class BloodIV_500: BloodIV
		{
			volume=500;
		};
		class BloodIV_250: BloodIV
		{
			volume=250;
		};
		class PlasmaIV: BloodIV
		{
			volume=1000;
			ratio[]=
			{
				"Blood",
				1
			};
			type="Plasma";
		};
		class PlasmaIV_500: PlasmaIV
		{
			volume=500;
		};
		class PlasmaIV_250: PlasmaIV
		{
			volume=250;
		};
		class SalineIV: BloodIV
		{
			volume=1000;
			type="Saline";
			ratio[]={};
		};
		class SalineIV_500: SalineIV
		{
			volume=500;
		};
		class SalineIV_250: SalineIV
		{
			volume=250;
		};
		class MET_Vasko_1000: PlasmaIV
		{
			volume=1400;
			rateCoef = 1.5;
			ratio[]=
			{
				"Blood",
				1
			};
			type="Plasma";
		};
		class MET_Vasko_500: MET_Vasko_1000
		{
			volume=700;
		};
		class MET_Vasko_250: MET_Vasko_1000
		{
			volume=350;
		};
	};
};
class ace_medical_treatment_actions
{
	class BasicBandage;
	class Morphine;
	class BloodIV;
	class SurgicalKit;
	class PersonalAidKit;
	class AEDPlacePads;
	class MET_ClothBandage: BasicBandage
	{
		displayName="$STR_GW_Medical_Display_ClothBandage";
		displayNameProgress="$STR_GW_Medical_Using_Bandage";
        treatmentTime = 3;
		items[]=
		{
			"MET_Item_ClothBandage"
		};
		litter[]={};
	};
	class BactaBandage: BasicBandage
	{
		displayName="$STR_GW_Medical_Display_BactaBandage";
		displayNameProgress="$STR_GW_Medical_Using_Bandage";
		items[]=
		{
			"GW_BactaBandage"
		};
		litter[]={};
	};
	class BactaSpray: BasicBandage
	{
		displayName="$STR_GW_Medical_Display_BactaSpray";
		displayNameProgress="$STR_GW_Medical_Using_BactaSpray";
		items[]=
		{
			"GW_BactaSpray"
		};
		litter[]={};
	};
	class BactaPatch: BasicBandage
	{
		displayName="$STR_GW_Medical_Display_BactaPatch";
		displayNameProgress="$STR_GW_Medical_Using_BactaPatch";
		items[]=
		{
			"GW_BactaPatch"
		};
		litter[]={};
	};
	class Perigen: Morphine
	{
		displayName="$STR_GW_Medical_Display_Stim_Perigen";
		displayNameProgress="$STR_GW_Medical_Using_Perigen";
		items[]=
		{
			"GW_Stim_Perigen"
		};
		litter[]={};
	};
	class Enkephalin: Morphine
	{
		displayName="$STR_GW_Medical_Display_Stim_Enkephalin";
		displayNameProgress="$STR_GW_Medical_Using_Enkephalin";
		items[]=
		{
			"GW_Stim_Enkephalin"
		};
		litter[]={};
	};
	class Nyex: Morphine
	{
		displayName="$STR_GW_Medical_Display_Injector_Nyex";
		displayNameProgress="$STR_GW_Medical_Using_Nyex";
		items[]=
		{
			"GW_Injector_Nyex"
		};
		litter[]={};
	};
	class Kyrprax: Morphine
	{
		displayName="$STR_GW_Medical_Display_Stim_Kyrprax";
		displayNameProgress="$STR_GW_Medical_Using_Kyrprax";
		medicRequired="ace_medical_treatment_medicEpinephrine";
		items[]=
		{
			"GW_Stim_Kyrprax"
		};
		treatmentLocations="ace_medical_treatment_locationEpinephrine";
		litter[]={};
	};
	class Polybiotics: Morphine
	{
		displayName="$STR_GW_Medical_Display_Injector_Polybiotics";
		displayNameProgress="$STR_GW_Medical_Using_Polybiotics";
		medicRequired="ace_medical_treatment_medicEpinephrine";
		items[]=
		{
			"GW_Injector_Polybiotics"
		};
		treatmentLocations="ace_medical_treatment_locationEpinephrine";
		litter[]={};
	};
	class Myocaine: Morphine
	{
		displayName="$STR_GW_Medical_Display_Stim_Myocaine";
		displayNameProgress="$STR_GW_Medical_Using_Myocaine";
		condition="ace_medical_treatment_advancedMedication";
		items[]=
		{
			"GW_Stim_Myocaine"
		};
		litter[]={};
	};
	class Myoplexaril: Morphine
	{
		displayName="$STR_GW_Medical_Display_Injector_Myoplexaril";
		displayNameProgress="$STR_GW_Medical_Using_Myoplexaril";
		condition="ace_medical_treatment_advancedMedication";
		items[]=
		{
			"GW_Injector_Myoplexaril"
		};
		litter[]={};
	};
	class Reedug: Morphine
	{
		displayName="$STR_GW_Medical_Display_Stim_Reedug";
		displayNameProgress="$STR_GW_Medical_Using_Reedug";
		condition="ace_medical_treatment_advancedMedication";
		items[]=
		{
			"GW_Stim_Reedug"
		};
		litter[]={};
	};
	class MET_Vasko_1000: BloodIV
	{
		displayName="$STR_GW_Medical_Display_Vasko1000";
		displayNameProgress="$STR_GW_Medical_Using_Vasko";
		items[]=
		{
			"MET_ITEM_Vasko1000"
		};
		animationMedic="AinvPknlMstpSnonWnonDnon_medic1";
	};
	class MET_Vasko_500: MET_Vasko_1000
	{
		displayName="$STR_GW_Medical_Display_Vasko500";
		items[]=
		{
			"MET_ITEM_Vasko500"
		};
	};
	class MET_Vasko_250: MET_Vasko_1000
	{
		displayName="$STR_GW_Medical_Display_Vasko250";
		items[]=
		{
			"MET_ITEM_Vasko250"
		};
	};
	class MET_Medkit: PersonalAidKit {
        displayName = "Use Medkit"; // TODO: Localize
        displayNameProgress = "Using Medkit..."; // TODO: Localize
        items[] = {"Metal_MedKit"};
        icon = "OPTRE_Weapons\Items\icons\medkit.paa";
        litter[] = 
        {
            {},
            {"ACE_MedicalLitter_Medkit"}
        };
    };  
	class Cauterizer: AEDPlacePads
	{
		displayName="Place AED-S Pads";
		displayNameProgress="Placing AED-S Pads...";
		items[]=
		{
			"MET_Item_Cauterizer"
		};
		litter[]={};
	};
	class BactaTank: BasicBandage
	{
		displayName="$STR_GW_Medical_Display_BactaPack";
		displayNameProgress="$STR_GW_Medical_Using_BactaPack";
        treatmentTime = 10;
		items[]=
		{
			"MET_ITEM_BactaPack"
		};
		litter[]={};
	};
};
class CBA_Extended_EventHandlers;
class CfgVehicles
{
	class MapBoard_altis_F;
	class Item_Base_F;
	class MET_ClothBandage_Item: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		editorcategory="MET_Med";
		editorsubcategory="MET_Med_Assets";
		displayName="$STR_GW_Medical_Display_ClothBandage";
		author="Krinix";
		model="\TK\GW\GW_Medical_Assets\BandageCloth.p3d";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_MET_Item_ClothBandage
			{
				name="MET_Item_ClothBandage";
				count=1;
			};
		};
	};
	class MET_BactaBandage_Item: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		editorcategory="MET_Med";
		editorsubcategory="MET_Med_Assets";
		displayName="$STR_GW_Medical_Display_BactaBandage";
		author="Krinix";
		model="\TK\GW\GW_Medical_Assets\BandageBacta.p3d";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_GW_BactaBandage
			{
				name="GW_BactaBandage";
				count=1;
			};
		};
	};
	class MET_BactaSpray_Item: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		editorcategory="MET_Med";
		editorsubcategory="MET_Med_Assets";
		displayName="$STR_GW_Medical_Display_BactaSpray";
		author="Krinix";
		model="\TK\GW\GW_Medical_Assets\BactaSpray.p3d";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_GW_BactaSpray
			{
				name="GW_BactaSpray";
				count=1;
			};
		};
	};
	class MET_BactaPatch_Item: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		editorcategory="MET_Med";
		editorsubcategory="MET_Med_Assets";
		displayName="$STR_GW_Medical_Display_BactaPatch";
		author="Krinix";
		model="\TK\GW\GW_Medical_Assets\BactaPatch.p3d";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_GW_BactaPatch
			{
				name="GW_BactaPatch";
				count=1;
			};
		};
	};
	class MET_Stim_Perigen_Item: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		editorcategory="MET_Med";
		editorsubcategory="MET_Med_Assets";
		displayName="$STR_GW_Medical_Display_Stim_Perigen";
		author="Krinix";
		model="\TK\GW\GW_Medical_Assets\StimGreen.p3d";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_GW_Stim_Perigen
			{
				name="GW_Stim_Perigen";
				count=1;
			};
		};
	};
	class MET_Stim_Enkephalin_Item: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		editorcategory="MET_Med";
		editorsubcategory="MET_Med_Assets";
		displayName="$STR_GW_Medical_Display_Stim_Enkephalin";
		author="Krinix";
		model="\TK\GW\GW_Medical_Assets\StimRed.p3d";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_GW_Stim_Enkephalin
			{
				name="GW_Stim_Enkephalin";
				count=1;
			};
		};
	};
	class MET_Stim_Kyrprax_Item: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		editorcategory="MET_Med";
		editorsubcategory="MET_Med_Assets";
		displayName="$STR_GW_Medical_Display_Stim_Kyrprax";
		author="Krinix";
		model="\TK\GW\GW_Medical_Assets\StimYellow.p3d";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_GW_Stim_Kyrprax
			{
				name="GW_Stim_Kyrprax";
				count=1;
			};
		};
	};
	class MET_Stim_Myocaine_Item: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		editorcategory="MET_Med";
		editorsubcategory="MET_Med_Assets";
		displayName="$STR_GW_Medical_Display_Stim_Myocaine";
		author="Krinix";
		model="\TK\GW\GW_Medical_Assets\StimBlue.p3d";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_GW_Stim_Myocaine
			{
				name="GW_Stim_Myocaine";
				count=1;
			};
		};
	};
	class MET_Stim_Reedug_Item: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		editorcategory="MET_Med";
		editorsubcategory="MET_Med_Assets";
		displayName="$STR_GW_Medical_Display_Stim_Reedug";
		author="Krinix";
		model="\TK\GW\GW_Medical_Assets\StimBlack.p3d";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_GW_Stim_Reedug
			{
				name="GW_Stim_Reedug";
				count=1;
			};
		};
	};
	class MET_Injector_Myoplexaril_Item: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		editorcategory="MET_Med";
		editorsubcategory="MET_Med_Assets";
		displayName="$STR_GW_Medical_Display_Injector_Myoplexaril";
		author="Krinix";
		model="\TK\GW\GW_Medical_Assets\InjectorBlue.p3d";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_GW_Injector_Myoplexaril
			{
				name="GW_Injector_Myoplexaril";
				count=1;
			};
		};
	};
	class MET_Injector_Polybiotics_Item: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		editorcategory="MET_Med";
		editorsubcategory="MET_Med_Assets";
		displayName="$STR_GW_Medical_Display_Injector_Polybiotics";
		author="Krinix";
		model="\TK\GW\GW_Medical_Assets\InjectorYellow.p3d";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_GW_Injector_Polybiotics
			{
				name="GW_Injector_Polybiotics";
				count=1;
			};
		};
	};
	class MET_Injector_Nyex_Item: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		editorcategory="MET_Med";
		editorsubcategory="MET_Med_Assets";
		displayName="$STR_GW_Medical_Display_Injector_Nyex";
		author="Krinix";
		model="\TK\GW\GW_Medical_Assets\InjectorRed.p3d";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_GW_Injector_Nyex
			{
				name="GW_Injector_Nyex";
				count=1;
			};
		};
	};
	class MET_Vasko250_Item: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		editorcategory="MET_Med";
		editorsubcategory="MET_Med_Assets";
		displayName="$STR_GW_Medical_Display_Vasko250";
		author="Krinix";
		model="\TK\GW\GW_Medical_Assets\Vasko250ml.p3d";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_MET_ITEM_Vasko250
			{
				name="MET_ITEM_Vasko250";
				count=1;
			};
		};
	};
	class MET_Vasko500_Item: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		editorcategory="MET_Med";
		editorsubcategory="MET_Med_Assets";
		displayName="$STR_GW_Medical_Display_Vasko500";
		author="Krinix";
		model="\TK\GW\GW_Medical_Assets\Vasko500ml.p3d";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_MET_ITEM_Vasko500
			{
				name="MET_ITEM_Vasko500";
				count=1;
			};
		};
	};
	class MET_Vasko1000_Item: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		editorcategory="MET_Med";
		editorsubcategory="MET_Med_Assets";
		displayName="$STR_GW_Medical_Display_Vasko1000";
		author="Krinix";
		model="\TK\GW\GW_Medical_Assets\Vasko1000ml.p3d";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_MET_ITEM_Vasko1000
			{
				name="MET_ITEM_Vasko1000";
				count=1;
			};
		};
	};
	class MET_BactaPack_Item: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		editorcategory="MET_Med";
		editorsubcategory="MET_Med_Assets";
		displayName="$STR_GW_Medical_Display_BactaPack";
		author="Krinix";
		model="\TK\GW\GW_Medical_Assets\BactaCanister.p3d";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_MET_ITEM_BactaPack
			{
				name="MET_ITEM_BactaPack";
				count=1;
			};
		};
	};
	class MET_Cauterizer_Item: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		editorcategory="MET_Med";
		editorsubcategory="MET_Med_Assets";
		displayName="[16th] AED-S";
		author="Krinix";
		model="\TK\GW\GW_Medical_Assets\Cauterizer.p3d";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_MET_ITEM_Cauterizer
			{
				name="MET_ITEM_Cauterizer";
				count=1;
			};
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class InventoryFirstAidKitItem_Base_F;
	class MedikitItem;
	class kat_X_AED;
	class FirstAidKit: ItemCore
	{
		type=0;
		class ItemInfo: InventoryFirstAidKitItem_Base_F
		{
			mass=4;
		};
	};
	class Medikit: ItemCore
	{
		type=0;
		class ItemInfo: MedikitItem
		{
			mass=60;
		};
	};
	class MET_Item_ClothBandage: ACE_ItemCore
	{
		scope=2;
		author="Krinix";
		displayName="[16th] Cloth Bandage";
		model="\TK\GW\GW_Medical_Assets\BandageCloth.p3d";
		picture="\TK\GW\GW_Medical_Assets\ui\bandage_cloth_ui_ca.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=0.5;
		};
	};
	class GW_BactaBandage: ACE_ItemCore
	{
		scope=2;
		author="Krinix";
		displayName="[16th] Bacta Bandage";
		model="\TK\GW\GW_Medical_Assets\BandageBacta.p3d";
		picture="\TK\GW\GW_Medical_Assets\ui\bandage_bacta_ui_ca.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class GW_BactaSpray: ACE_ItemCore
	{
		scope=2;
		author="Krinix";
		displayName="[16th] Bacta Spray";
		model="\TK\GW\GW_Medical_Assets\BactaSpray.p3d";
		picture="\TK\GW\GW_Medical_Assets\ui\bacta_spray_ui_ca.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class GW_BactaPatch: ACE_ItemCore
	{
		scope=2;
		author="Krinix";
		displayName="[16th] Bacta Patch";
		model="\TK\GW\GW_Medical_Assets\BactaPatch.p3d";
		picture="\TK\GW\GW_Medical_Assets\ui\bacta_patch_ui_ca.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class GW_Stim_Perigen: ACE_ItemCore
	{
		scope=2;
		author="Krinix";
		displayName="$STR_GW_Medical_Display_Stim_Perigen";
		model="\TK\GW\GW_Medical_Assets\StimGreen.p3d";
		picture="\TK\GW\GW_Medical_Assets\ui\stim_green_ui_ca.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class GW_Stim_Enkephalin: ACE_ItemCore
	{
		scope=2;
		author="Krinix";
		displayName="$STR_GW_Medical_Display_Stim_Enkephalin";
		model="\TK\GW\GW_Medical_Assets\StimRed.p3d";
		picture="\TK\GW\GW_Medical_Assets\ui\stim_red_ui_ca.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class GW_Stim_Kyrprax: ACE_ItemCore
	{
		scope=2;
		author="Krinix";
		displayName="$STR_GW_Medical_Display_Stim_Kyrprax";
		model="\TK\GW\GW_Medical_Assets\StimYellow.p3d";
		picture="\TK\GW\GW_Medical_Assets\ui\stim_yellow_ui_ca.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class GW_Stim_Myocaine: ACE_ItemCore
	{
		scope=2;
		author="Krinix";
		displayName="$STR_GW_Medical_Display_Stim_Myocaine";
		model="\TK\GW\GW_Medical_Assets\StimBlue.p3d";
		picture="\TK\GW\GW_Medical_Assets\ui\stim_blue_ui_ca.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class GW_Stim_Reedug: ACE_ItemCore
	{
		scope=2;
		author="Krinix";
		displayName="$STR_GW_Medical_Display_Stim_Reedug";
		model="\TK\GW\GW_Medical_Assets\StimBlack.p3d";
		picture="\TK\GW\GW_Medical_Assets\ui\stim_black_ui_ca.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class GW_Injector_Myoplexaril: ACE_ItemCore
	{
		scope=2;
		author="Krinix";
		displayName="$STR_GW_Medical_Display_Injector_Myoplexaril";
		model="\TK\GW\GW_Medical_Assets\InjectorBlue.p3d";
		picture="\TK\GW\GW_Medical_Assets\ui\injector_Blue_ui_ca.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class GW_Injector_Polybiotics: ACE_ItemCore
	{
		scope=2;
		author="Krinix";
		displayName="$STR_GW_Medical_Display_Injector_Polybiotics";
		model="\TK\GW\GW_Medical_Assets\InjectorYellow.p3d";
		picture="\TK\GW\GW_Medical_Assets\ui\injector_yellow_ui_ca.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class GW_Injector_Nyex: ACE_ItemCore
	{
		scope=2;
		author="Krinix";
		displayName="$STR_GW_Medical_Display_Injector_Nyex";
		model="\TK\GW\GW_Medical_Assets\InjectorRed.p3d";
		picture="\TK\GW\GW_Medical_Assets\ui\injector_red_ui_ca.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class MET_ITEM_Vasko1000: ACE_ItemCore
	{
		scope=2;
		author="Krinix";
		displayName="[16th] Vasko 1000ml";
		model="\TK\GW\GW_Medical_Assets\Vasko1000ml.p3d";
		picture="\TK\GW\GW_Medical_Assets\ui\vasko_ui_ca.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=10;
		};
	};
	class MET_ITEM_Vasko500: MET_ITEM_Vasko1000
	{
		displayName="[16th] Vasko 500ml";
		model="\TK\GW\GW_Medical_Assets\Vasko500ml.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=5;
		};
	};
	class MET_ITEM_Vasko250: MET_ITEM_Vasko1000
	{
		displayName="[16th] Vasko 250ml";
		model="\TK\GW\GW_Medical_Assets\Vasko250ml.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=2.5;
		};
	};
	class MET_ITEM_BactaPack: ACE_ItemCore
	{
		scope=2;
		author="Krinix and a touch of Hazmat";
		displayName="[16th] Bacta Pack";
		model="\TK\GW\GW_Medical_Assets\BactaCanister.p3d";
		picture="\TK\GW\GW_Medical_Assets\ui\bacta_canister_ui_ca.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=10;
		};
	};
	class MET_ITEM_Cauterizer: ACE_ItemCore
	{
		scope=2;
		author="Krinix";
		displayName="[16th] AED-S";
		model="\TK\GW\GW_Medical_Assets\Cauterizer.p3d";
		picture="\TK\GW\GW_Medical_Assets\ui\cauterizer_ui_ca.paa";
        descriptionShort = "Automated External Defibrillator";
        ACE_isMedicalItem = 1;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=40;
		};
	};
	class Metal_MedKit: ACE_ItemCore
    {
        scope = 2;
        author = "Article 2 Studios";
        displayName = "[16th] Medical Kit";
        picture = "\OPTRE_weapons\items\icons\medkit.paa";
        model = "\OPTRE_Weapons\items\MedKit.p3d";
        descriptionShort = "Medical Kit to treat all combat inflicted wounds and injuries";
        type = 0;
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass=10;
        };
    };
};