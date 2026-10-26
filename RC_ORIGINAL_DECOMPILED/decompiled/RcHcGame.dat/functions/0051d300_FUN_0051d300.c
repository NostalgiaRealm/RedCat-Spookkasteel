/*
 * FUN_0051d300 at 0051d300
 * undefined FUN_0051d300(void)
 * Address ranges: 0051d300-0051d592
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f658 slot 13 for .?AVCAdamGameState_GS_RESTART@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f658 slot 13 for
   .?AVCAdamGameState_GS_RESTART@@. Original bytes unchanged; names and types still inferred. */

void FUN_0051d300(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puStack_38;
  undefined4 *puStack_28;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638aa8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_006c8de0 == 0) {
    ExceptionList = &pvStack_c;
    FUN_0055b280();
  }
  iVar3 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar3 = FUN_004bc480();
  }
  if (*(int *)(iVar3 + 0x3a4) == 0) {
    FUN_004040a0();
    iVar5 = -1;
    pcVar9 = &DAT_006b3f70;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0();
    local_4 = 0;
    pcVar4 = (code *)FUN_005a07f0();
    (*pcVar4)();
    local_4 = 0xffffffff;
    FUN_004040a0();
  }
  iVar5 = *(int *)(*(int *)(iVar3 + 0x3a4) + 0xdc);
  piVar1 = (int *)(*(int *)(iVar3 + 0x3a4) + 0xdc);
  if (iVar5 != 0) {
    if (iVar5 == 0) {
      FUN_004040a0();
      uVar6 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      cVar2 = FUN_00401940();
      if (cVar2 != '\0') {
        puVar8 = (undefined4 *)&DAT_006b3f70;
        for (uVar7 = ~uVar6 - 1 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puStack_38 = *puVar8;
          puVar8 = puVar8 + 1;
          puStack_38 = puStack_38 + 1;
        }
        for (uVar6 = ~uVar6 - 1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puStack_38 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puStack_38 = (undefined4 *)((int)puStack_38 + 1);
        }
        FUN_00404190();
      }
      local_4 = 1;
      pcVar4 = (code *)FUN_005a07f0();
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    FUN_00439d60();
    if (*piVar1 == 0) {
      FUN_004040a0();
      uVar6 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      cVar2 = FUN_00401940();
      if (cVar2 != '\0') {
        puVar8 = (undefined4 *)&DAT_006b3f70;
        for (uVar7 = ~uVar6 - 1 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puStack_28 = *puVar8;
          puVar8 = puVar8 + 1;
          puStack_28 = puStack_28 + 1;
        }
        for (uVar6 = ~uVar6 - 1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puStack_28 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puStack_28 = (undefined4 *)((int)puStack_28 + 1);
        }
        FUN_00404190();
      }
      local_4 = 2;
      pcVar4 = (code *)FUN_005a07f0();
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    FUN_00439e20();
    FUN_00449760(piVar1);
    FUN_005614e0();
  }
  ExceptionList = pvStack_c;
  return;
}

