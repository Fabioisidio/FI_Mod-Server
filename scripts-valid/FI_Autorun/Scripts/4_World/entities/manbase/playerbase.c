modded class PlayerBase extends ManBase
{
    const int FI_RPC_AUTORUN = 98600;
    int FI_AutoRunning;

    override void OnRPC(PlayerIdentity sender, int rpc_type, ParamsReadContext ctx)
    {
        super.OnRPC(sender, rpc_type, ctx);

        if (rpc_type == FI_RPC_AUTORUN)
        {
            FIRpcAutorun(ctx);
        }
    }

    private void FIRpcAutorun(ParamsReadContext ctx)
    {
        Param3<int, int, bool> data;

        if (ctx.Read(data))
        {
            this.GetInputController().OverrideMovementSpeed(data.param3, data.param1);
            this.GetInputController().OverrideMovementAngle(data.param3, data.param2);
        }
    }
}