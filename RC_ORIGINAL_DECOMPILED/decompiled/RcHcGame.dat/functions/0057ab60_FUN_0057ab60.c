/*
 * FUN_0057ab60 at 0057ab60
 * undefined FUN_0057ab60(void)
 * Address ranges: 0057ab60-0057ae15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64fab4 slot 3 for .?AVCAdamEffectCorona@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64fab4 slot 3 for
   .?AVCAdamEffectCorona@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_0057ab60(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 *puVar12;
  int local_34;
  undefined4 uStack_30;
  undefined1 local_2c [4];
  undefined4 *puStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00641c90;
  local_c = ExceptionList;
  if ((*(char *)(param_1 + 0x7c) != '\0') && (*(char *)(param_1 + 0xde) != '\0')) {
    ExceptionList = &local_c;
    iVar2 = FUN_00518cf0();
    iVar4 = *(int *)(iVar2 + 100);
    if (iVar4 == -0x80000000) {
      puVar3 = *(undefined1 **)(iVar2 + 0x18);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0064a3b4;
      }
      iVar4 = FUN_0060af10(puVar3);
      *(int *)(iVar2 + 100) = iVar4;
    }
    if (iVar4 == 0) {
      piVar5 = (int *)FUN_004042e0(&local_34);
      local_4 = 0;
      if (*piVar5 == 0) {
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar11 = &DAT_006b3f70;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
        local_4._0_1_ = 1;
        pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_2c);
        (*pcVar6)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      iVar4 = *piVar5;
      if (*(int *)(iVar4 + 0x5c) == 0) {
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar11 = &DAT_006b3f70;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
        local_4._0_1_ = 2;
        pcVar6 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,
                                      s___AdamSource_AdamSubLevel_h_0068e1b8,0x144,local_1c);
        (*pcVar6)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      uStack_30 = *(undefined4 *)(iVar4 + 0x5c);
      local_4 = 0xffffffff;
      if ((local_34 != 0) &&
         (iVar4 = *(int *)(local_34 + 0x14) + -1, *(int *)(local_34 + 0x14) = iVar4, iVar4 == 0)) {
        FUN_005abfc0(0);
      }
      if (0.0 < **(float **)(param_1 + 0xfc)) {
        if (*(int *)(param_1 + 0x100) == 0) {
          FUN_004040a0(0);
          uVar8 = 0xffffffff;
          pcVar11 = &DAT_006b3f70;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8 - 1;
          cVar1 = FUN_00401940(uVar8,1);
          if (cVar1 != '\0') {
            puVar10 = (undefined4 *)&DAT_006b3f70;
            puVar12 = puStack_28;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *puVar12 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar12 = puVar12 + 1;
            }
            for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
              puVar10 = (undefined4 *)((int)puVar10 + 1);
              puVar12 = (undefined4 *)((int)puVar12 + 1);
            }
            *(undefined1 *)((int)puStack_28 + uVar8) = 0;
            uStack_24 = uVar8;
          }
          local_4 = 3;
          pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                        local_2c);
          (*pcVar6)();
          local_4 = 0xffffffff;
          if (puStack_28 != (undefined4 *)0x0) {
            cVar1 = *(char *)((int)puStack_28 + -1);
            if ((cVar1 == '\0') || (cVar1 == -1)) {
              FUN_005fe5f0((char *)((int)puStack_28 + -1));
            }
            else {
              *(char *)((int)puStack_28 + -1) = cVar1 + -1;
            }
          }
          puStack_28 = (undefined4 *)0x0;
          uStack_24 = 0;
          uStack_20 = 0;
        }
        uVar7 = FUN_0050aa70(2,2,(*(float **)(param_1 + 0xfc))[0x11] * **(float **)(param_1 + 0xfc)
                                 * 0.25);
        FUN_005b6e90(uStack_30,*(int *)(param_1 + 0xfc) + 8,1,uVar7);
      }
    }
  }
  ExceptionList = local_c;
  return;
}

