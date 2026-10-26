/*
 * FUN_0055cec0 at 0055cec0
 * undefined FUN_0055cec0(void)
 * Address ranges: 0055cec0-0055cfe0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_0055cec0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063f6b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_2 == 0) {
    local_1c[0] = 0;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar2 = FUN_00401940(uVar5,1);
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
      *(undefined1 *)(uVar5 + (int)local_18) = 0;
      local_14 = uVar5;
    }
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_a_SubLevel____0_0069c4d8,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x1ea,local_1c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  piVar10 = *(int **)(param_1 + 0xec);
  if (piVar10 != *(int **)(param_1 + 0xf0)) {
    do {
      if (param_2 != 0) {
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      }
      iVar1 = *piVar10;
      if (param_2 != 0) {
        iVar4 = *(int *)(param_2 + 0x14) + -1;
        *(int *)(param_2 + 0x14) = iVar4;
        if (iVar4 == 0) {
          FUN_005abfc0(0);
        }
      }
      if (iVar1 == param_2) {
        ExceptionList = pvStack_c;
        return 1;
      }
      piVar10 = piVar10 + 1;
    } while (piVar10 != *(int **)(param_1 + 0xf0));
  }
  ExceptionList = pvStack_c;
  return 0;
}

