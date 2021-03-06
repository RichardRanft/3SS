//-----------------------------------------------------------------------------
// 3 Step Studio
// Copyright GarageGames, LLC 2012
//-----------------------------------------------------------------------------

function initialize3SSFilesOSX()
{
    %fullPath = expandPath("^{3SSFilesOSX}/files");
    //echo("Full path: " @ %fullPath);
    addResPath(%fullPath);

    %file = findFirstFile(%fullPath @ "/*");
    while(%file !$= "")
    {
        //echo(%file);
        %relativeToApp = makeRelativePath(%file, getWorkingDirectory());
        //echo(%relativeToApp);

        %relativeToModule = makeRelativePath(%file, %fullPath);
        //echo(%relativeToModule);

        // Add file to patcher manifest
        OSFilesPatcher.AddFile(%relativeToApp, %relativeToModule);

        %file = findNextFile(%fullPath @ "/*");
    }

    removeResPath(%fullPath);
}
