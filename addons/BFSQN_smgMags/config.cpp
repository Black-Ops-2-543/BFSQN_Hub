#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = SPOKE;
        author = AUTHOR;
        requiredVersion = REQUIRED_VERSION;
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
            "BFSQN_core",
            "A3_Data_F",
            "A3_Weapons_F"
        };
    };
};

class CfgAmmo
{
    class B_45ACP_Ball;
    class B_45ACP_Ball_Green;
    class B_45ACP_Ball_Yellow;

    class B_9x21_Ball;
    class B_9x21_Ball_Tracer_Red;
    class B_9x21_Ball_Tracer_Yellow;
    class B_9x21_Ball_Tracer_Green;

    class B_570x28_Ball;
    class B_460x30_Ball;

    class JCA_B_45ACP_Ball;
    class JCA_B_9x21_Ball;

    class HLC_9x19_M882_SMG;
    class HLC_9x19_JHP_SMG;
    class HLC_9x19_Subsonic;

    class BFSQN_45ACP_Ball : B_45ACP_Ball
    {
        author = "Blackforce Squadron";
        caliber = 1.582;      // 1.4  * 1.13
        hit = 5.5;           // 5    * 1.10
        typicalSpeed = 302.4; // 280  * 1.08
    };

    class BFSQN_45ACP_Ball_Green : B_45ACP_Ball_Green
    {
        author = "Blackforce Squadron";
        caliber = 1.582;
        hit = 5.5;
        typicalSpeed = 302.4;
    };

    class BFSQN_45ACP_Ball_Yellow : B_45ACP_Ball_Yellow
    {
        author = "Blackforce Squadron";
        caliber = 1.582;
        hit = 5.5;
        typicalSpeed = 302.4;
    };

    class BFSQN_9x21_Ball : B_9x21_Ball
    {
        author = "Blackforce Squadron";
        caliber = 1.356;       // 1.2  * 1.13
        hit = 5.5;            // 5    * 1.10
        typicalSpeed = 410.4;  // 380  * 1.08
    };

    class BFSQN_9x21_Ball_Tracer_Red : B_9x21_Ball_Tracer_Red
    {
        author = "Blackforce Squadron";
        caliber = 1.356;
        hit = 5.5;
        typicalSpeed = 410.4;
    };

    class BFSQN_9x21_Ball_Tracer_Yellow : B_9x21_Ball_Tracer_Yellow
    {
        author = "Blackforce Squadron";
        caliber = 1.356;
        hit = 5.5;
        typicalSpeed = 410.4;
    };

    class BFSQN_9x21_Ball_Tracer_Green : B_9x21_Ball_Tracer_Green
    {
        author = "Blackforce Squadron";
        caliber = 1.356;
        hit = 5.5;
        typicalSpeed = 410.4;
    };

    class BFSQN_570x28_Ball : B_570x28_Ball
    {
        author = "Blackforce Squadron";
        caliber = 0.63216833; // 0.559441 * 1.13
        hit = 8.8;            // 8        * 1.10
        typicalSpeed = 772.2; // 715      * 1.08
    };

    class BFSQN_460x30_Ball : B_460x30_Ball
    {
        author = "Blackforce Squadron";
        caliber = 0.5730795; // 0.50715 * 1.13
        hit = 8.8;           // 8       * 1.10
        typicalSpeed = 783.0; // 725     * 1.08
    };

    class BFSQN_B_45ACP_Ball : JCA_B_45ACP_Ball
    {
        author = "Blackforce Squadron";
        caliber = 1.695;      // 1.5  * 1.13
        hit = 7.7;           // 7    * 1.10
        typicalSpeed = 302.4; // 280  * 1.08
    };

    class BFSQN_B_9x21_Ball : JCA_B_9x21_Ball
    {
        author = "Blackforce Squadron";
        caliber = 1.469;      // 1.3  * 1.13
        hit = 7.7;           // 7    * 1.10
        typicalSpeed = 410.4; // 380  * 1.08
    };

    class BFSQN_9x19_M882_SMG : HLC_9x19_M882_SMG
    {
        author = "Blackforce Squadron";
        caliber = 0.40341;    // 0.357  * 1.13
        hit = 5.808;         // 5.28   * 1.10
        typicalSpeed = 449.388; // 416.1 * 1.08
    };

    class BFSQN_9x19_JHP_SMG : HLC_9x19_JHP_SMG
    {
        author = "Blackforce Squadron";
        caliber = 0.36838;    // 0.326  * 1.13
        hit = 7.997;         // 7.27   * 1.10
        typicalSpeed = 341.064; // 315.8 * 1.08
    };

    class BFSQN_9x19_Subsonic : HLC_9x19_Subsonic
    {
        author = "Blackforce Squadron";
        caliber = 0.37742;     // 0.334     * 1.13
        hit = 8.437836;       // 7.67076   * 1.10
        typicalSpeed = 359.64; // 333       * 1.08
    };
};

class CfgMagazines
{
    class 30Rnd_45ACP_Mag_SMG_01;
    class 30Rnd_45ACP_Mag_SMG_01_tracer_green;
    class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red;
    class 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow;

    class 30Rnd_9x21_Mag_SMG_02;
    class 30Rnd_9x21_Mag_SMG_02_Tracer_Red;
    class 30Rnd_9x21_Mag_SMG_02_Tracer_Yellow;
    class 30Rnd_9x21_Mag_SMG_02_Tracer_Green;

    class 30Rnd_9x21_Mag;
    class 30Rnd_9x21_Red_Mag;
    class 30Rnd_9x21_Yellow_Mag;
    class 30Rnd_9x21_Green_Mag;

    class 50Rnd_570x28_SMG_03;

    class 40Rnd_460x30_Mag_F;
    class 20Rnd_460x30_Mag_F;

    class JCA_25Rnd_45ACP_UMP_Mag;
    class JCA_30Rnd_9x21_MP5_Mag;

    class hlc_30Rnd_9x19_B_MP5;
    class hlc_30Rnd_9x19_GD_MP5;
    class hlc_30Rnd_9x19_SD_MP5;

    class BFSQN_30Rnd_45ACP_Mag_SMG_01 : 30Rnd_45ACP_Mag_SMG_01
    {
        author = "Blackforce Squadron";
        ammo = "BFSQN_45ACP_Ball";
    };

    class BFSQN_30Rnd_45ACP_Mag_SMG_01_tracer_green : 30Rnd_45ACP_Mag_SMG_01_tracer_green
    {
        author = "Blackforce Squadron";
        ammo = "BFSQN_45ACP_Ball_Green";
    };

    class BFSQN_30Rnd_45ACP_Mag_SMG_01_Tracer_Red : 30Rnd_45ACP_Mag_SMG_01_Tracer_Red
    {
        author = "Blackforce Squadron";
        ammo = "BFSQN_45ACP_Ball";
    };

    class BFSQN_30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow : 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow
    {
        author = "Blackforce Squadron";
        ammo = "BFSQN_45ACP_Ball_Yellow";
    };

    class BFSQN_30Rnd_9x21_Mag_SMG_02 : 30Rnd_9x21_Mag_SMG_02
    {
        author = "Blackforce Squadron";
        ammo = "BFSQN_9x21_Ball";
    };

    class BFSQN_30Rnd_9x21_Mag_SMG_02_Tracer_Red : 30Rnd_9x21_Mag_SMG_02_Tracer_Red
    {
        author = "Blackforce Squadron";
        ammo = "BFSQN_9x21_Ball_Tracer_Red";
    };

    class BFSQN_30Rnd_9x21_Mag_SMG_02_Tracer_Yellow : 30Rnd_9x21_Mag_SMG_02_Tracer_Yellow
    {
        author = "Blackforce Squadron";
        ammo = "BFSQN_9x21_Ball_Tracer_Yellow";
    };

    class BFSQN_30Rnd_9x21_Mag_SMG_02_Tracer_Green : 30Rnd_9x21_Mag_SMG_02_Tracer_Green
    {
        author = "Blackforce Squadron";
        ammo = "BFSQN_9x21_Ball_Tracer_Green";
    };

    class BFSQN_30Rnd_9x21_Mag : 30Rnd_9x21_Mag
    {
        author = "Blackforce Squadron";
        ammo = "BFSQN_9x21_Ball";
    };

    class BFSQN_30Rnd_9x21_Red_Mag : 30Rnd_9x21_Red_Mag
    {
        author = "Blackforce Squadron";
        ammo = "BFSQN_9x21_Ball_Tracer_Red";
    };

    class BFSQN_30Rnd_9x21_Yellow_Mag : 30Rnd_9x21_Yellow_Mag
    {
        author = "Blackforce Squadron";
        ammo = "BFSQN_9x21_Ball_Tracer_Yellow";
    };

    class BFSQN_30Rnd_9x21_Green_Mag : 30Rnd_9x21_Green_Mag
    {
        author = "Blackforce Squadron";
        ammo = "BFSQN_9x21_Ball_Tracer_Green";
    };

    class BFSQN_50Rnd_570x28_SMG_03 : 50Rnd_570x28_SMG_03
    {
        author = "Blackforce Squadron";
        ammo = "BFSQN_570x28_Ball";
    };

    class BFSQN_40Rnd_460x30_Mag_F : 40Rnd_460x30_Mag_F
    {
        author = "Blackforce Squadron";
        ammo = "BFSQN_460x30_Ball";
    };

    class BFSQN_20Rnd_460x30_Mag_F : 20Rnd_460x30_Mag_F
    {
        author = "Blackforce Squadron";
        ammo = "BFSQN_460x30_Ball";
    };

    class BFSQN_25Rnd_45ACP_UMP_Mag : JCA_25Rnd_45ACP_UMP_Mag
    {
        author = "Blackforce Squadron";
        ammo = "BFSQN_B_45ACP_Ball";
    };

    class BFSQN_30Rnd_9x21_MP5_Mag : JCA_30Rnd_9x21_MP5_Mag
    {
        author = "Blackforce Squadron";
        ammo = "BFSQN_B_9x21_Ball";
    };

    class BFSQN_30Rnd_9x19_B_MP5 : hlc_30Rnd_9x19_B_MP5
    {
        author = "Blackforce Squadron";
        ammo = "BFSQN_9x19_M882_SMG";
    };

    class BFSQN_30Rnd_9x19_GD_MP5 : hlc_30Rnd_9x19_GD_MP5
    {
        author = "Blackforce Squadron";
        ammo = "BFSQN_9x19_JHP_SMG";
    };

    class BFSQN_30Rnd_9x19_SD_MP5 : hlc_30Rnd_9x19_SD_MP5
    {
        author = "Blackforce Squadron";
        ammo = "BFSQN_9x19_Subsonic";
    };
};