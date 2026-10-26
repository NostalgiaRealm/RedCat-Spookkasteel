/*
 * FUN_0044cd30 at 0044cd30
 * undefined FUN_0044cd30(void)
 * Address ranges: 0044cd30-0044d178
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0044cd30(undefined1 **param_1,undefined4 param_2,undefined1 **param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined1 **ppuVar10;
  undefined1 **ppuStack_110;
  undefined1 *local_fc;
  undefined1 uStack_f5;
  undefined1 *local_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined1 local_d0;
  undefined1 local_cf;
  undefined1 local_ce;
  undefined1 local_cd;
  undefined1 local_cc;
  undefined1 local_cb;
  undefined1 local_ca;
  int local_c8;
  int local_c4;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_88;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 **ppuStack_18;
  undefined1 **ppuStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00625966;
  local_c = ExceptionList;
  local_fc = (undefined1 *)&ppuStack_110;
  ExceptionList = &local_c;
  ppuStack_110 = param_1;
  FUN_004042e0(&ppuStack_110);
  FUN_00565c30();
  local_9c = _DAT_00691530 * 0.1;
  local_a8 = -local_9c;
  local_88 = _DAT_00691530 * 0.5;
  ppuStack_110 = param_3;
  local_c8 = (-(uint)(*(char *)((int)param_1 + 0x1d1) != '\0') & 0xfffffffc) + 8;
  local_4 = 0;
  local_cf = 1;
  local_ce = 1;
  local_cd = 0;
  local_cc = 1;
  local_cb = 0;
  local_d0 = 1;
  local_ca = 0;
  local_a4 = local_a8;
  local_a0 = local_a8;
  local_98 = local_9c;
  local_94 = local_9c;
  cVar1 = FUN_00565e10(param_2);
  if (cVar1 == '\0') {
    local_4 = 3;
    ppuStack_110 = (undefined1 **)0x44ce13;
    FUN_00514430();
    local_4._0_1_ = 2;
    ppuStack_110 = (undefined1 **)0x44ce27;
    FUN_00514430();
    local_4 = CONCAT31(local_4._1_3_,1);
    if (local_c4 != 0) {
      ppuStack_110 = (undefined1 **)0x44ce3c;
      FUN_004098d0();
      local_c4 = 0;
    }
    local_4 = 0xffffffff;
    ppuStack_110 = (undefined1 **)0x44ce54;
    FUN_005ab4d0();
    uVar6 = 0;
  }
  else {
    ppuStack_110 = (undefined1 **)0x44ce64;
    iVar2 = FUN_00566370();
    if (iVar2 == 0) {
      ppuStack_110 = (undefined1 **)0x44d0b9;
      iVar2 = FUN_005665a0();
      if (iVar2 != 0) {
        ppuStack_110 = (undefined1 **)0x44d0c6;
        FUN_005665a0();
        ppuStack_110 = (undefined1 **)0x0;
        FUN_004d0630();
      }
      *param_3 = local_48;
      param_3[1] = local_44;
      param_3[2] = local_40;
      param_1[0x90] = local_48;
      param_1[0x91] = local_44;
      param_1[0x92] = local_40;
      ppuStack_110 = (undefined1 **)0x44d104;
      FUN_0044c530();
      local_4 = 0xc;
      ppuStack_110 = (undefined1 **)0x44d11b;
      FUN_00514430();
      local_4._0_1_ = 0xb;
      ppuStack_110 = (undefined1 **)0x44d12f;
      FUN_00514430();
      local_4 = CONCAT31(local_4._1_3_,10);
      if (local_c4 != 0) {
        ppuStack_110 = (undefined1 **)0x44d144;
        FUN_004098d0();
        local_c4 = 0;
      }
    }
    else {
      ppuStack_110 = (undefined1 **)0x44ce75;
      iVar2 = FUN_00566370();
      if (*(char *)(iVar2 + 0x200) != '\0') {
        local_fc = param_1[0x76];
        ppuStack_110 = &local_f4;
        ppuStack_110 = (undefined1 **)(**(code **)(*param_1 + 0x48))();
        puVar9 = local_fc;
        ppuVar10 = param_1;
        FUN_00566370(local_fc,param_1);
        FUN_00503fc0(puVar9,ppuVar10);
        ppuStack_110 = &local_fc;
        piVar3 = (int *)FUN_004042e0();
        local_4._0_1_ = 4;
        if (*piVar3 == 0) {
          ppuStack_110 = (undefined1 **)0x0;
          local_f4._0_1_ = uStack_f5;
          FUN_004040a0();
          uVar7 = 0xffffffff;
          pcVar8 = &DAT_006b3f70;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          ppuStack_110 = (undefined1 **)(~uVar7 - 1);
          FUN_004040f0(&DAT_006b3f70);
          ppuStack_110 = &local_f4;
          local_4._0_1_ = 5;
          pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
          (*pcVar4)();
          local_4._0_1_ = 4;
          ppuStack_110 = (undefined1 **)0x1;
          FUN_004040a0();
        }
        ppuStack_110 = (undefined1 **)0x44cf3e;
        FUN_004fb300();
        local_4 = (uint)local_4._1_3_ << 8;
        if (local_fc != (undefined1 *)0x0) {
          ppuStack_110 = (undefined1 **)0x44cf52;
          FUN_004098d0();
        }
      }
      ppuStack_110 = (undefined1 **)0x44cf57;
      iVar5 = FUN_00518870();
      iVar2 = *(int *)(iVar5 + 100);
      if (iVar2 == -0x80000000) {
        ppuStack_110 = *(undefined1 ***)(iVar5 + 0x18);
        if (ppuStack_110 == (undefined1 **)0x0) {
          ppuStack_110 = (undefined1 **)&DAT_0064a3b4;
        }
        iVar2 = FUN_0060af10();
        *(int *)(iVar5 + 100) = iVar2;
      }
      if (iVar2 != 0) {
        ppuStack_110 = (undefined1 **)0x44cf8c;
        iVar2 = FUN_00566370();
        puVar9 = &DAT_0064a3b4;
        if (*(undefined1 **)(iVar2 + 0x60) != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)(iVar2 + 0x60);
        }
        ppuStack_110 = (undefined1 **)0x44cfa6;
        ppuStack_110 = (undefined1 **)FUN_00566370();
        FUN_0060a613();
        ppuStack_110 = (undefined1 **)0x44cfb6;
        ppuStack_110 = (undefined1 **)FUN_0060b060();
        uVar6 = FUN_005ae390(&local_f4,s_Projectile_collides_with_actor___00691674,puVar9);
        local_4._0_1_ = 6;
        FUN_005aff00(uVar6);
        local_4 = (uint)local_4._1_3_ << 8;
        if (iStack_f0 != 0) {
          ppuStack_110 = (undefined1 **)(iStack_f0 + -1);
          cVar1 = *(char *)(iStack_f0 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_005fe5f0();
          }
          else {
            *(char *)ppuStack_110 = cVar1 + -1;
          }
        }
        iStack_f0 = 0;
        uStack_ec = 0;
        uStack_e8 = 0;
      }
      param_1[0x90] = local_48;
      param_1[0x91] = local_44;
      param_1[0x92] = local_40;
      ppuStack_110 = (undefined1 **)0x44d03e;
      FUN_0044c530();
      ppuStack_110 = ppuStack_14;
      local_4 = 9;
      FUN_00587d50(ppuStack_18);
      ppuStack_110 = ppuStack_18;
      FUN_005fe5f0();
      ppuStack_18 = (undefined1 **)0x0;
      ppuStack_14 = (undefined1 **)0x0;
      uStack_10 = 0;
      local_4._0_1_ = 8;
      ppuStack_110 = (undefined1 **)0x44d09e;
      FUN_00514430();
      local_4 = CONCAT31(local_4._1_3_,7);
      ppuStack_110 = (undefined1 **)0x44d0af;
      FUN_0057d310();
    }
    local_4 = 0xffffffff;
    ppuStack_110 = (undefined1 **)0x44d15c;
    FUN_005ab4d0();
    uVar6 = 1;
  }
  ExceptionList = local_c;
  return uVar6;
}

