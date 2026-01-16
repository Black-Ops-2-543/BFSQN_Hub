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
        requiredAddons[] = { "bfsqn_core" };
    };
};

class CfgUnitInsignia
{
    class insignia_bfsqn_general
    {
        displayName = "Blackforce Squadron | Member";
        author = "Blackforce Squadron";
        texture = "\x\bfsqn_hub\addons\bfsqn_insignia\images\general_insignia.paa";
        scope = 2;
    };
};