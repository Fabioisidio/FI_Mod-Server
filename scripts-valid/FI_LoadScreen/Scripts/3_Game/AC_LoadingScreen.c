modded class AC_LoadingScreen
{
    // --------------- OLD --------------- //

    override static string GetScreenA()
    {
        return "FI_LoadScreen/GUI/Textures/LoadScreen1.edds";
    }

    override static string GetScreenB()
    {
        return "FI_LoadScreen/GUI/Textures/LoadScreen2.edds";
    }

    override static string GetScreenC()
    {
        return "FI_LoadScreen/GUI/Textures/LoadScreen2.edds";
    }

    // --------------- NEW --------------- //

    // override static string GetScreenA()
    // {
    //     array< string > textures = {

    //         "AC-Mod-Sample/GUI/Textures/LoadingScreenA.edds",
    //         "AC-Mod-Sample/GUI/Textures/LoadingScreenB.edds",
    //         "AC-Mod-Sample/GUI/Textures/LoadingScreenC.edds"

    //     };

    //     return textures.GetRandomElement();
    // }

    // override static string GetScreenB()
    // {
    //     array< string > textures = {

    //         "AC-Mod-Sample/GUI/Textures/LoadingScreenA.edds",
    //         "AC-Mod-Sample/GUI/Textures/LoadingScreenB.edds",
    //         "AC-Mod-Sample/GUI/Textures/LoadingScreenC.edds"

    //     };

    //     return textures.GetRandomElement();
    // }

    // override static string GetScreenC()
    // {
    //     array< string > textures = {

    //         "AC-Mod-Sample/GUI/Textures/LoadingScreenA.edds",
    //         "AC-Mod-Sample/GUI/Textures/LoadingScreenB.edds",
    //         "AC-Mod-Sample/GUI/Textures/LoadingScreenC.edds"

    //     };

    //     return textures.GetRandomElement();
    // }
}
