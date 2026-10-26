/*
 * FUN_00479a10 at 00479a10
 * undefined FUN_00479a10(void)
 * Address ranges: 00479a10-00479dd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00479a10(int param_1,int param_2,undefined1 **param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  uint uVar8;
  undefined1 **ppuVar9;
  char *pcVar10;
  undefined1 **ppuStack_3c;
  undefined1 **local_38;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00628ba8;
  pvStack_c = ExceptionList;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  if (param_3 != (undefined1 **)0x0) {
    local_38 = *(undefined1 ***)(param_1 + 0xfc);
    ExceptionList = &pvStack_c;
    if (local_38 != (undefined1 **)0x0) {
      local_28 = (undefined1 *)&local_38;
      ExceptionList = &pvStack_c;
      local_38[5] = local_38[5] + 1;
      local_4._0_1_ = 1;
      local_4._1_3_ = 0;
      ppuStack_3c = (undefined1 **)0x479a69;
      FUN_00421430();
      ppuStack_3c = (undefined1 **)0x479a70;
      cVar3 = FUN_004fbca0();
      if (cVar3 == '\0') {
        local_38 = *(undefined1 ***)(param_1 + 0xfc);
        if (local_38 != (undefined1 **)0x0) {
          local_38[5] = local_38[5] + 1;
        }
        local_4._0_1_ = 1;
        ppuStack_3c = (undefined1 **)0x479a98;
        local_28 = (undefined1 *)&local_38;
        FUN_00421430();
        ppuStack_3c = (undefined1 **)0x479a9f;
        FUN_004fb310();
      }
    }
    if (param_3 != (undefined1 **)0x0) {
      local_38 = *(undefined1 ***)(param_1 + 0x100);
      if (local_38 != (undefined1 **)0x0) {
        local_28 = (undefined1 *)&local_38;
        local_38[5] = local_38[5] + 1;
        local_4._0_1_ = 1;
        ppuStack_3c = (undefined1 **)0x479ad3;
        FUN_00421430();
        ppuStack_3c = (undefined1 **)0x479ada;
        cVar3 = FUN_004fbca0();
        if (cVar3 == '\0') {
          local_38 = *(undefined1 ***)(param_1 + 0x100);
          if (local_38 != (undefined1 **)0x0) {
            local_38[5] = local_38[5] + 1;
          }
          local_4._0_1_ = 1;
          ppuStack_3c = (undefined1 **)0x479b02;
          local_28 = (undefined1 *)&local_38;
          FUN_00421430();
          ppuStack_3c = (undefined1 **)0x479b09;
          FUN_004fb310();
        }
      }
      if (param_3 != (undefined1 **)0x0) {
        local_38 = *(undefined1 ***)(param_1 + 0x104);
        if (local_38 != (undefined1 **)0x0) {
          local_28 = (undefined1 *)&local_38;
          local_38[5] = local_38[5] + 1;
          local_4._0_1_ = 1;
          ppuStack_3c = (undefined1 **)0x479b3d;
          FUN_00421430();
          ppuStack_3c = (undefined1 **)0x479b44;
          cVar3 = FUN_004fbca0();
          if (cVar3 == '\0') {
            local_38 = *(undefined1 ***)(param_1 + 0x104);
            if (local_38 != (undefined1 **)0x0) {
              local_38[5] = local_38[5] + 1;
            }
            local_4._0_1_ = 1;
            ppuStack_3c = (undefined1 **)0x479b6c;
            local_28 = (undefined1 *)&local_38;
            FUN_00421430();
            ppuStack_3c = (undefined1 **)0x479b73;
            FUN_004fb310();
          }
        }
        if (param_3 != (undefined1 **)0x0) {
          local_38 = *(undefined1 ***)(param_1 + 0x108);
          if (local_38 != (undefined1 **)0x0) {
            local_28 = (undefined1 *)&local_38;
            local_38[5] = local_38[5] + 1;
            local_4._0_1_ = 1;
            ppuStack_3c = (undefined1 **)0x479ba3;
            FUN_00421430();
            ppuStack_3c = (undefined1 **)0x479baa;
            cVar3 = FUN_004fbca0();
            if (cVar3 == '\0') {
              local_38 = *(undefined1 ***)(param_1 + 0x108);
              if (local_38 != (undefined1 **)0x0) {
                local_38[5] = local_38[5] + 1;
              }
              local_4._0_1_ = 1;
              ppuStack_3c = (undefined1 **)0x479bd2;
              local_28 = (undefined1 *)&local_38;
              FUN_00421430();
              ppuStack_3c = (undefined1 **)0x479bd9;
              FUN_004fb310();
            }
          }
          if (param_3 != (undefined1 **)0x0) {
            ppuVar9 = (undefined1 **)0x0;
            do {
              ppuStack_3c = (undefined1 **)0x479beb;
              local_38 = ppuVar9;
              FUN_0047cf20();
              ppuVar9 = (undefined1 **)((int)ppuVar9 + 1);
            } while ((int)ppuVar9 < 6);
            local_38 = (undefined1 **)0x479bf8;
            FUN_0047c760();
          }
        }
      }
    }
  }
  iVar4 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    local_38 = (undefined1 **)0x479c07;
    iVar4 = FUN_004bc480();
  }
  iVar5 = *(int *)(iVar4 + 0x4e8);
  if (iVar5 == -0x80000000) {
    local_38 = *(undefined1 ***)(iVar4 + 0x49c);
    if (local_38 == (undefined1 **)0x0) {
      local_38 = (undefined1 **)&DAT_0064a3b4;
    }
    ppuStack_3c = (undefined1 **)0x479c2b;
    iVar5 = FUN_0060af10();
    *(int *)(iVar4 + 0x4e8) = iVar5;
  }
  if (iVar5 == 0) {
    if ((param_3 != (undefined1 **)0x0) && (*(int *)(param_1 + 0x374) != 0)) {
      local_38 = &local_28;
      ppuStack_3c = (undefined1 **)0x479c62;
      piVar6 = (int *)FUN_004042e0();
      local_4._0_1_ = 10;
      uVar2 = (undefined1)local_4;
      local_4._0_1_ = 10;
      if (*piVar6 == 0) {
        local_38 = (undefined1 **)0x0;
        local_1c[0] = param_3._0_1_;
        ppuStack_3c = (undefined1 **)0x479c82;
        FUN_004040a0();
        uVar8 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar3 != '\0');
        local_38 = (undefined1 **)(~uVar8 - 1);
        ppuStack_3c = (undefined1 **)&DAT_006b3f70;
        FUN_004040f0();
        local_38 = (undefined1 **)local_1c;
        local_4._0_1_ = 0xb;
        ppuStack_3c = (undefined1 **)0xb6;
        pcVar7 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638);
        (*pcVar7)();
        local_4._0_1_ = 10;
        local_38 = (undefined1 **)0x1;
        ppuStack_3c = (undefined1 **)0x479cd3;
        FUN_004040a0();
        uVar2 = (undefined1)local_4;
      }
      local_4._0_1_ = uVar2;
      local_38 = *(undefined1 ***)(param_1 + 0x374);
      ppuStack_3c = (undefined1 **)0x479ce1;
      FUN_004f41c0();
      local_4._0_1_ = 1;
      if (local_28 != (undefined1 *)0x0) {
        iVar4 = *(int *)(local_28 + 0x14);
        *(int *)(local_28 + 0x14) = iVar4 + -1;
        if (iVar4 + -1 == 0) {
          local_38 = (undefined1 **)0x0;
          ppuStack_3c = (undefined1 **)0x479d06;
          FUN_005abfc0();
        }
        local_28 = (undefined1 *)0x0;
      }
      local_38 = (undefined1 **)0x1;
      ppuStack_3c = (undefined1 **)0x479d1b;
      FUN_00502350();
    }
    piVar6 = (int *)(param_1 + 0x378);
    iVar4 = 5;
    do {
      if (*piVar6 != 0) {
        local_24 = (undefined1 *)&local_38;
        local_38 = param_3;
        if (param_3 != (undefined1 **)0x0) {
          param_3[5] = param_3[5] + 1;
        }
        local_20 = (undefined1 *)&ppuStack_3c;
        ppuStack_3c = param_3;
        local_4._0_1_ = 0xc;
        FUN_00449760(&param_2);
        local_4._0_1_ = 1;
        (**(code **)(*(int *)*piVar6 + 8))();
      }
      piVar6 = piVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (param_2 != 0) {
    iVar4 = *(int *)(param_2 + 0x14) + -1;
    *(int *)(param_2 + 0x14) = iVar4;
    if (iVar4 == 0) {
      local_38 = (undefined1 **)0x0;
      ppuStack_3c = (undefined1 **)0x479d90;
      FUN_005abfc0();
    }
    param_2 = 0;
  }
  local_4 = 0xffffffff;
  if ((param_3 != (undefined1 **)0x0) &&
     (puVar1 = param_3[5], param_3[5] = puVar1 + -1, puVar1 + -1 == (undefined1 *)0x0)) {
    local_38 = (undefined1 **)0x0;
    ppuStack_3c = (undefined1 **)0x479dc0;
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

