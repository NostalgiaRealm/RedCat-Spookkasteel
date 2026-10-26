/*
 * FUN_00481670 at 00481670
 * undefined FUN_00481670(void)
 * Address ranges: 00481670-00481975
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e374 slot 2 for .?AVCRcCutScene@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e374 slot 2 for
   .?AVCRcCutScene@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_00481670(int param_1)

{
  int iVar1;
  float fVar2;
  void *pvVar3;
  char cVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar3 = ExceptionList;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00629418;
  local_c = ExceptionList;
  iVar6 = *(int *)(param_1 + 0x14);
  if (iVar6 < 1) {
    iVar6 = *(int *)(param_1 + 0x30);
  }
  iVar1 = *(int *)(param_1 + 0xa8);
  if (iVar1 == 1) {
    if (iVar6 == 0) {
      fVar2 = 255.0;
    }
    else {
      fVar2 = ((float)*(int *)(param_1 + 0x2c) / (float)iVar6) * 255.0;
    }
LAB_004816f2:
    ExceptionList = &local_c;
    *(float *)(param_1 + 0x28) = fVar2;
  }
  else if (iVar1 == 2) {
    ExceptionList = &local_c;
    *(undefined4 *)(param_1 + 0x28) = 0x437f0000;
  }
  else {
    ExceptionList = &local_c;
    if (iVar1 == 3) {
      if (iVar6 == 0) {
        fVar2 = 0.0;
      }
      else {
        fVar2 = 255.0 - ((float)*(int *)(param_1 + 0x2c) / (float)iVar6) * 255.0;
      }
      goto LAB_004816f2;
    }
  }
  if (iVar1 == 0) {
    ExceptionList = pvVar3;
    return;
  }
  FUN_00449760(param_1 + 0x4c);
  FUN_005614e0();
  FUN_00449760(param_1 + 0x4c);
  FUN_005614e0();
  if (*(int *)(param_1 + 0xa8) != 2) {
    ExceptionList = local_c;
    return;
  }
  if (*(int *)(param_1 + 0xb0) == 0) {
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar4 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar4 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar4 = FUN_00401940();
    if (cVar4 == '\0') goto LAB_00481893;
    puVar9 = (undefined4 *)&DAT_006b3f70;
    puVar11 = *(undefined4 **)(param_1 + 0x1c);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
  }
  else {
    if (*(int *)(param_1 + 0xb0) == 0) {
      FUN_004040a0();
      iVar6 = -1;
      pcVar10 = &DAT_006b3f70;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        cVar4 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar4 != '\0');
      FUN_004040f0();
      local_4 = 0;
      pcVar5 = (code *)FUN_005a07f0();
      (*pcVar5)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    cVar4 = FUN_005530e0();
    if (cVar4 != '\0') goto LAB_00481893;
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar4 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar4 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar4 = FUN_00401940();
    if (cVar4 == '\0') goto LAB_00481893;
    puVar9 = (undefined4 *)&DAT_006b3f70;
    puVar11 = *(undefined4 **)(param_1 + 0x1c);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
  }
  for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  *(uint *)(param_1 + 0x20) = uVar7;
  *(undefined1 *)(uVar7 + *(int *)(param_1 + 0x1c)) = 0;
LAB_00481893:
  if (((*(char *)(param_1 + 0xb4) != '\0') && (*(int *)(param_1 + 0xb8) != 0)) &&
     (*(int *)(param_1 + 0x20) != 0)) {
    local_4 = 1;
    FUN_00514e80();
    local_4 = 2;
    FUN_004f07d0();
    FUN_004f0630();
    FUN_005fe5f0();
  }
  ExceptionList = local_c;
  return;
}

