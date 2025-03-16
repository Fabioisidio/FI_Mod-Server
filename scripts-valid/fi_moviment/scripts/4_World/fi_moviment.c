modded class DayZPlayerTypeUtils
{
    override static void DayZPlayerTypeInitMovement(DayZPlayerType pType)
    {
        SHumanCommandMoveSettings hmcs = pType.CommandMoveSettingsW();
        hmcs.m_fRunSpringTimeout = 0.01;
        hmcs.m_fRunSpringMaxChange = 100.0;
        hmcs.m_fDirFilterTimeout = 0.1;
        hmcs.m_fDirFilterSprintTimeout = 0.1;
        hmcs.m_fDirFilterSpeed = Math.DEG2RAD * 360;
        hmcs.m_fMaxSprintAngle = Math.DEG2RAD * 45.01;
        hmcs.m_fTurnAngle = 45;
        hmcs.m_fTurnEndUpdateNTime = 0.7;
        hmcs.m_fTurnNextNTime = 0.9;
        hmcs.m_fHeadingChangeLimiterIdle = 500000;
        hmcs.m_fHeadingChangeLimiterWalk = 2000;
        hmcs.m_fHeadingChangeLimiterRun = 1500;
        hmcs.m_iMaxSpeedNormal_WaterLevelLow = -1;
        hmcs.m_iMaxSpeedFast_WaterLevelLow = -1;
        hmcs.m_iMaxSpeedNormal_WaterLevelHigh = -1;
        hmcs.m_iMaxSpeedFast_WaterLevelHigh = -1;
        hmcs.m_fLeaningSpeed = 5;
    }
}

modded class DayzPlayerItemBehaviorCfg extends HumanItemBehaviorCfg
{
    void DayzPlayerItemBehaviorCfg()
    {
        // Define que o jogador pode usar o item em qualquer postura (em pé, agachado, deitado, etc.)
        m_iStanceMask = DayZPlayerConstants.STANCEMASK_ALL;
        
        // Define os tipos de movimentos permitidos para cada postura do jogador
        
        // Em pé (padrão), pode ficar parado, andar, correr e sprintar
        m_StanceMovements[DayZPlayerConstants.STANCEIDX_ERECT] = 
            DayZPlayerConstants.MOVEMENT_IDLE | DayZPlayerConstants.MOVEMENT_WALK | 
            DayZPlayerConstants.MOVEMENT_RUN | DayZPlayerConstants.MOVEMENT_SPRINT;

        // Agachado, pode ficar parado, andar e sprintar (não pode correr normalmente)
        m_StanceMovements[DayZPlayerConstants.STANCEIDX_CROUCH] = 
            DayZPlayerConstants.MOVEMENT_IDLE | DayZPlayerConstants.MOVEMENT_WALK | 
            DayZPlayerConstants.MOVEMENT_SPRINT;

        // Deitado, pode apenas ficar parado e andar (não pode correr ou sprintar)
        m_StanceMovements[DayZPlayerConstants.STANCEIDX_PRONE] = 
            DayZPlayerConstants.MOVEMENT_IDLE | DayZPlayerConstants.MOVEMENT_WALK;

        // Em pé e mirando (com arma levantada), pode ficar parado, andar, correr e sprintar
        m_StanceMovements[DayZPlayerConstants.STANCEIDX_RAISEDERECT] = 
            DayZPlayerConstants.MOVEMENT_IDLE | DayZPlayerConstants.MOVEMENT_WALK | 
            DayZPlayerConstants.MOVEMENT_RUN | DayZPlayerConstants.MOVEMENT_SPRINT;

        // Agachado e mirando, pode ficar parado, andar e correr (não pode sprintar)
        m_StanceMovements[DayZPlayerConstants.STANCEIDX_RAISEDCROUCH] = 
            DayZPlayerConstants.MOVEMENT_IDLE | DayZPlayerConstants.MOVEMENT_WALK | 
            DayZPlayerConstants.MOVEMENT_RUN;

        // Deitado e mirando, só pode ficar parado (não pode andar)
        m_StanceMovements[DayZPlayerConstants.STANCEIDX_RAISEDPRONE] = 
            DayZPlayerConstants.MOVEMENT_IDLE;
        
        // Define se o jogador pode girar enquanto está em determinada postura
        
        // Permite rotação da câmera em todas as posturas
        m_StanceRotation[DayZPlayerConstants.STANCEIDX_ERECT] = DayZPlayerConstants.ROTATION_ENABLE;
        m_StanceRotation[DayZPlayerConstants.STANCEIDX_CROUCH] = DayZPlayerConstants.ROTATION_ENABLE;
        m_StanceRotation[DayZPlayerConstants.STANCEIDX_PRONE] = DayZPlayerConstants.ROTATION_ENABLE;
        m_StanceRotation[DayZPlayerConstants.STANCEIDX_RAISEDERECT] = DayZPlayerConstants.ROTATION_ENABLE;
        m_StanceRotation[DayZPlayerConstants.STANCEIDX_RAISEDCROUCH] = DayZPlayerConstants.ROTATION_ENABLE;
        m_StanceRotation[DayZPlayerConstants.STANCEIDX_RAISEDPRONE] = DayZPlayerConstants.ROTATION_ENABLE;
        
        // Define a câmera do item como inválida (a ser configurada posteriormente)
        m_iPerItemCameraUserData = DayZPlayerCameras.PERITEMUD_INVALID;
        
        // Define a suavização do movimento ao girar a câmera
        // Esses valores controlam a velocidade com que o personagem responde à rotação
        m_fMoveHeadingFilterSpan = CfgGameplayHandler.GetMovementRotationSpeedJog();  // Para caminhada normal
        m_fMoveHeadingSprintFilterSpan = CfgGameplayHandler.GetMovementRotationSpeedSprint();  // Para sprint
        m_fMoveHeadingProneFilterSpan = 0.7; // Para movimento deitado
        
        // **Aqui está a principal alteração que torna o movimento lateral mais rápido**
        // Aumenta a velocidade de resposta ao girar enquanto se move
        // O valor original era 360 (graus/s), agora é 300, o que suaviza um pouco a rotação.
        m_fMoveHeadingFilterSpeed = Math.DEG2RAD * 300;

        // Configurações de suavização para esquiva em combate corpo a corpo (melee)
        m_fMeleeEvadeHeadingFilterSpan = 0.07;
        m_fMeleeEvadeHeadingFilterSpeed = Math.DEG2RAD * 1440; // Movimento rápido durante esquivas

        // Permite inclinar enquanto ataca (antes estava desativado)
        m_bAttackLean = true;

        // Permite que o jogador pule
        m_bJumpAllowed = true;
    }
}

modded class DayZPlayerImplement extends DayZPlayer
{       
    void OnMovementChanged()
    {
    }
    
    void OnSprintStart()
    {
    }
    
    void OnSprintEnd()
    {
    }
}

modded class DayZPlayerImplementAiming extends DayZPlayer
{
    protected float CalculateWeight(int stance_index, float current_stamina, float camera_sway_modifier, bool holding_breath)
    {
        if (m_PlayerDpi.GetCommand_Move() && m_PlayerDpi.GetCommand_Move().IsInRoll())
        {
        }
        float stance_modifier;
        switch (stance_index)
        {
            case DayZPlayerConstants.STANCEIDX_RAISEDERECT:
            stance_modifier = 0.5;
            break;
            stance_modifier = 0.85;
            break;
            case DayZPlayerConstants.STANCEIDX_RAISEDPRONE:
            stance_modifier = 0.95;
            break;
            default:
            stance_modifier = 0.95;
            break;
        }
        return (1 - stance_modifier) * m_AimNoiseAllowed * camera_sway_modifier * SWAY_WEIGHT_SCALER;
    }
}

modded class PlayerBase extends ManBase
{
    bool IsSprinting()
    {
        return m_MovementState.m_iMovement == DayZPlayerConstants.MOVEMENT_SPRINT;
    }

    bool CanSprint()
    {
        ItemBase item = GetItemInHands();
        if ((item && item.IsHeavyBehaviour()))
        {
            return false;
        }
        
        if (GetBrokenLegs() != eBrokenLegs.NO_BROKEN_LEGS)
        {
            return false;
        }
        
        return true;
    }
    
    bool CanLean()
    {
        return true;
    }
    
    bool IsInProne()
    {
        return m_MovementState.IsInProne();
    }
    
    bool IsInRasedProne()
    {
        return m_MovementState.IsInRaisedProne();
    }
    
    bool IsLeaning()
    {
        return m_MovementState.IsLeaning();
    }
    
    bool IsRolling()
    {
        if (GetCommand_Move() && GetCommand_Move().IsInRoll())
            return true;
        return false;
    }
    
    override bool IsRaised()
    {
        return m_MovementState.IsRaised();
    }

    override void OnStanceChange(int previousStance, int newStance)
    {
        int prone = DayZPlayerConstants.STANCEMASK_PRONE | DayZPlayerConstants.STANCEMASK_RAISEDPRONE;
        int notProne = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_RAISEDERECT | DayZPlayerConstants.STANCEMASK_RAISEDCROUCH;
        
        if ((IsStance(previousStance, prone) && IsStance(newStance, notProne)) || (IsStance(previousStance, notProne) && IsStance(newStance, prone)))
        {
            AbortWeaponEvent();
            GetWeaponManager().RefreshAnimationState();
        }
    }

    override bool CanChangeStance(int previousStance, int newStance)
    {
        return true;
    }
    
    override void OnCommandMoveStart()
    {
    }

    override bool CanRoll()
    {
        if (!CanConsumeStamina(EStaminaConsumers.ROLL)) 
            return false;
        
        if (IsInFBEmoteState() || m_EmoteManager.m_MenuEmote)
        {
            return false;
        }
        
        return IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE | DayZPlayerConstants.STANCEMASK_RAISEDPRONE) && GetCommand_Move();
    }
    
    override void OnRollStart(bool isToTheRight)
    {
    }
    
    override void OnRollFinish()
    {
    }
    
    override void CheckLiftWeapon()
    {
        if (GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_CLIENT)
        {
            Weapon_Base weap;
            if (Weapon_Base.CastTo(weap, GetItemInHands()))
            {                
                bool limited = weap.LiftWeaponCheck(this);

                if (limited && !m_LiftWeapon_player)
                    SendLiftWeaponSync(false);
                else if (!limited && m_LiftWeapon_player)
                    SendLiftWeaponSync(false);
            }
            else if (m_LiftWeapon_player)
            {
                SendLiftWeaponSync(true);
            }
        }
    }
}