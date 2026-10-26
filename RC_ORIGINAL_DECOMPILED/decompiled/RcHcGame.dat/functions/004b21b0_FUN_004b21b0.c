/*
 * FUN_004b21b0 at 004b21b0
 * undefined FUN_004b21b0(void)
 * Address ranges: 004b21b0-004b239c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_004b21b0(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined1 local_1c [4];
  int local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e898;
  pvStack_c = ExceptionList;
  local_1c[0] = *param_1;
  ExceptionList = &pvStack_c;
  FUN_004040a0(0);
  FUN_0040cc00(param_1,0,0xffffffff);
  local_4 = 0;
  iVar2 = FUN_00518f30();
  iVar4 = *(int *)(iVar2 + 100);
  if (iVar4 == -0x80000000) {
    puVar3 = *(undefined1 **)(iVar2 + 0x18);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    iVar4 = FUN_0060af10(puVar3);
    *(int *)(iVar2 + 100) = iVar4;
  }
  if (iVar4 != 0) {
    uVar5 = FUN_004b1410(local_2c,local_1c);
    local_4._0_1_ = 1;
    FUN_0040cc00(uVar5,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_28 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_28 + -1));
      }
      else {
        *(char *)((int)local_28 + -1) = cVar1 + -1;
      }
    }
  }
  iVar4 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar4 = FUN_0055b280();
  }
  if (*(char *)(iVar4 + 0x125) == '\0') {
    local_2c[0] = param_1._0_1_;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar1 = FUN_00401940(uVar7,1);
    if (cVar1 != '\0') {
      puVar9 = (undefined4 *)&DAT_006b3f70;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *local_28 = *puVar9;
        puVar9 = puVar9 + 1;
        local_28 = local_28 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)local_28 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        local_28 = (undefined4 *)((int)local_28 + 1);
      }
      FUN_00404190(uVar7);
    }
    local_4._0_1_ = 2;
    pcVar6 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,s___AdamSource_AdamEngine_h_0068eb58,
                                  0x127,local_2c);
    (*pcVar6)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  iVar4 = *(int *)(iVar4 + 0x40);
  FUN_004b0230();
  iVar2 = FUN_005bff90();
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_18 + -1);
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return (float10)((float)iVar2 / (float)iVar4);
}

