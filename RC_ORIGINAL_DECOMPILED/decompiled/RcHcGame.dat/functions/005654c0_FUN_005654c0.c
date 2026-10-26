/*
 * FUN_005654c0 at 005654c0
 * undefined FUN_005654c0(void)
 * Address ranges: 005654c0-005656f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_005654c0(int param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int iVar10;
  float10 fVar11;
  float fStack_24;
  undefined4 *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063ffe0;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (param_3 == 0) {
    ExceptionList = &pvStack_c;
    FUN_004040a0();
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar2 = FUN_00401940();
    if (cVar2 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar9 = local_18;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar5) = 0;
    }
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0();
  }
  FUN_004f3d70();
  FUN_00567010();
  FUN_005654a0();
  iVar10 = 0;
  iVar4 = FUN_00566b60();
  if (0 < iVar4) {
    do {
      iVar4 = FUN_00566b50();
      if (*(int *)(iVar4 + 0x24) == 0) {
LAB_0056563a:
        fStack_24 = 1.0;
LAB_00565642:
        FUN_00449760(&param_3);
        cVar2 = FUN_00594df0();
        if ((cVar2 != '\0') &&
           ((fVar1 = (*(float *)(iVar4 + 0x18) + *(float *)(iVar4 + 0x14) + *(float *)(iVar4 + 0x10)
                     ) * (float)*(int *)(iVar4 + 0x20) * fStack_24, *(int *)(param_1 + 0x14) == 0 ||
            (*(float *)(param_1 + 0x20) < fVar1)))) {
          *(int *)(param_1 + 0x14) = iVar4;
          *(float *)(param_1 + 0x20) = fVar1;
          *(int *)(param_1 + 0x18) = iVar10;
          *(float *)(param_1 + 0x1c) = fStack_24;
        }
      }
      else {
        fVar11 = (float10)FUN_005b30a0();
        fVar1 = (float)fVar11;
        if (fVar11 <= (float10)*(float *)(iVar4 + 0x28)) {
          if ((*(int *)(iVar4 + 0x24) < 2) || (fVar1 <= *(float *)(iVar4 + 0x2c)))
          goto LAB_0056563a;
          if ((*(float *)(iVar4 + 0x28) <= *(float *)(iVar4 + 0x2c)) ||
             (*(float *)(iVar4 + 0x2c) <= 0.0)) {
            fStack_24 = 1.0 - fVar1 / *(float *)(iVar4 + 0x28);
          }
          else {
            fStack_24 = 1.0 - (fVar1 - *(float *)(iVar4 + 0x2c)) /
                              (*(float *)(iVar4 + 0x28) - *(float *)(iVar4 + 0x2c));
          }
          goto LAB_00565642;
        }
      }
      iVar10 = iVar10 + 1;
      iVar4 = FUN_00566b60();
    } while (iVar10 < iVar4);
  }
  iVar4 = *(int *)(param_1 + 0x14);
  local_4 = 0xffffffff;
  if (param_3 != 0) {
    iVar10 = *(int *)(param_3 + 0x14) + -1;
    *(int *)(param_3 + 0x14) = iVar10;
    if (iVar10 == 0) {
      FUN_005abfc0();
    }
  }
  ExceptionList = pvStack_c;
  return iVar4 != 0;
}

