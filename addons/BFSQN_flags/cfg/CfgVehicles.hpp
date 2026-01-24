class CfgVehicles
{
    class FlagCarrier;

    class BFSQN_Flagpole : FlagCarrier
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Flag (Blackforce Squadron)";
        author = AUTHOR;
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Flag_NATO_F.jpg";
        hiddenSelectionsTextures[] =  { "\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"};
        hiddenSelectionsMaterials[] = { "\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat" };

        class EventHandlers
        {
            init = "(_this select 0) setFlagTexture '\x\BFSQN_Hub\addons\BFSQN_flags\images\BFSQN_flag.paa';";
        };
    };
};