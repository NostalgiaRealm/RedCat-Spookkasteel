/*
 * FUN_00421560 at 00421560
 * undefined FUN_00421560(void)
 * Address ranges: 00421560-0042174a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_00421560(int *param_1)

{
  float10 fVar1;
  char cVar2;
  int *piVar3;
  code *pcVar4;
  undefined2 extraout_var;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  float10 fVar11;
  undefined1 *puVar12;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [12];
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00622290;
  local_c = ExceptionList;
  if ((char)param_1[0x1f] == '\0') {
    return (uint)ExceptionList & 0xffffff00;
  }
  iVar5 = param_1[0x38] + 1;
  ExceptionList = &local_c;
  param_1[0x38] = iVar5;
  if (0xd < iVar5) {
    param_1[0x38] = 0;
    if (DAT_006c8de0 == 0) {
      FUN_0055b280();
    }
    piVar3 = (int *)FUN_00421750(&local_38);
    local_4 = 0;
    if (*piVar3 == 0) {
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      uVar6 = ~uVar6 - 1;
      cVar2 = FUN_00401940(uVar6,1);
      if (cVar2 != '\0') {
        puVar8 = (undefined4 *)&DAT_006b3f70;
        puVar10 = local_18;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        FUN_00404190(uVar6);
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar4)();
      if (local_18 != (undefined4 *)0x0) {
        cVar2 = *(char *)((int)local_18 + -1);
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_005fe5f0((char *)((int)local_18 + -1));
        }
        else {
          *(char *)((int)local_18 + -1) = cVar2 + -1;
        }
      }
      local_18 = (undefined4 *)0x0;
      uStack_14 = 0;
      uStack_10 = 0;
    }
    iVar5 = *piVar3;
    local_4 = 0xffffffff;
    local_34 = *(undefined4 *)(iVar5 + 0x210);
    local_30 = *(undefined4 *)(iVar5 + 0x214);
    local_2c = *(undefined4 *)(iVar5 + 0x218);
    if ((local_38 != 0) &&
       (iVar5 = *(int *)(local_38 + 0x14) + -1, *(int *)(local_38 + 0x14) = iVar5, iVar5 == 0)) {
      FUN_005abfc0(0);
    }
    puVar12 = auStack_28;
    (**(code **)(*param_1 + 0x48))(local_1c,puVar12);
    FUN_005b2fe0(puVar12);
    fVar11 = (float10)FUN_005b2fc0();
    fVar1 = (float10)(float)param_1[0x39];
    iVar5 = CONCAT22(extraout_var,
                     (ushort)(fVar11 < fVar1) << 8 | (ushort)(NAN(fVar11) || NAN(fVar1)) << 10 |
                     (ushort)(fVar11 == fVar1) << 0xe);
    if (fVar11 < fVar1 == 0 && (fVar11 == fVar1) == 0) {
      *(undefined1 *)((int)param_1 + 0xde) = 0;
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)iVar5 >> 8),*(undefined1 *)((int)param_1 + 0xde));
    }
    *(undefined1 *)((int)param_1 + 0xde) = 1;
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)iVar5 >> 8),*(undefined1 *)((int)param_1 + 0xde));
}

