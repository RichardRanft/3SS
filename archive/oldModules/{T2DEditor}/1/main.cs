//-----------------------------------------------------------------------------
// Torque 2D
// Copyright GarageGames, LLC 2012
//-----------------------------------------------------------------------------
function initializeT2DEditor()
{
    //-----------------------------------------------------------------------------
    // Load scripts
    //-----------------------------------------------------------------------------
    exec("./scripts/events.cs");
    exec("./scripts/NewProjectDlg.ed.cs");
    
    //-----------------------------------------------------------------------------
    // Load GUIs
    //-----------------------------------------------------------------------------
    TamlRead("./gui/NewProjectDlg.gui.taml");
}

function destroyT2DEditor()
{
}