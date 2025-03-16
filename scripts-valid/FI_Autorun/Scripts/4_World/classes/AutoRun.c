class AutoRun
{
    const int FI_RPC_AUTORUN = 98600;
    ref array<int> inputs = new array<int>;

    void AutoRun(PlayerBase player, int key)
    {
        if (GetGame().GetUIManager().GetMenu() != NULL)
            return;

        if (!player.IsAlive() || player.IsUnconscious())
        {
            if (player.FI_AutoRunActived == 1)
                InitAutoRun(player, DayZPlayerConstants.MOVEMENTIDX_IDLE, 0, 0);

            return;
        }

        if (player.FI_AutoRunActived == 1)
        {
            SetCheckStopKeys();

            CheckStopKeyPress(player, key);

            return;
        }

        if (player.FI_AutoRunActived == 0 && CheckKeyPress(key))
        {
            int speed = DayZPlayerConstants.MOVEMENTIDX_RUN;

            if (CheckKeyHold("UATurbo"))
                speed = DayZPlayerConstants.MOVEMENTIDX_SPRINT;
            else if (CheckKeyHold("UAWalkRunTemp"))
                speed = DayZPlayerConstants.MOVEMENTIDX_WALK;

            InitAutoRun(player, speed, 1, 1);
        }
    }

    void InitAutoRun(PlayerBase player, int speed, int angle, int run)
    {
        player.FI_AutoRunActived = run;
        player.GetInputController().OverrideMovementSpeed(run, speed);
        player.GetInputController().OverrideMovementAngle(run, angle);

        GetGame().RPCSingleParam(player, FI_RPC_AUTORUN, new Param3<int, int, bool>(speed, angle, run), true);
    }

    bool CheckKeyPress(int key)
    {
        if (key == KeyCode.KC_ADD)
            return true;

        return false;
    }

    void CheckStopKeyPress(PlayerBase player, int key)
    {
        foreach(int keypress : inputs)
        {
            if (keypress == key)
                InitAutoRun(player, DayZPlayerConstants.MOVEMENTIDX_IDLE, 0, 0);
        }
    }

    bool CheckKeyHold(string keyCheck)
    {
        UAInput input = GetUApi().GetInputByName(keyCheck);

        if (input && input.LocalHold())
            return true;

        return false;
    }

    void SetCheckStopKeys()
    {
        inputs.Insert(KeyCode.KC_ADD);
        inputs.Insert(KeyCode.KC_W);
        inputs.Insert(KeyCode.KC_S);
        inputs.Insert(KeyCode.KC_A);
        inputs.Insert(KeyCode.KC_D);
        inputs.Insert(KeyCode.KC_ESCAPE);
    }
}