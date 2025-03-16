modded class MissionGameplay extends MissionBase
{
    override void OnKeyPress(int key) 
    {
        super.OnKeyPress(key);

        PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());

        if (player) {
            AutoRun(player, key);
        }
    }
}