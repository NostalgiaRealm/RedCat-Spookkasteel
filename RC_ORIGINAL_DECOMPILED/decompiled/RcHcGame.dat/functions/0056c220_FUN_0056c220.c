/*
 * FUN_0056c220 at 0056c220
 * undefined FUN_0056c220(void)
 * Address ranges: 0056c220-0056c399
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0056c220(undefined4 *param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 local_2c [4];
  undefined4 *local_28;
  uint local_24;
  undefined1 auStack_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006409f0;
  pvStack_c = ExceptionList;
  iVar5 = *(int *)(param_2 + 4);
  if (((iVar5 == 0) || ((*(int *)(param_2 + 8) - iVar5) / 0x18 != 1)) ||
     (ExceptionList = &pvStack_c, *(int *)(iVar5 + 8) != 3)) {
    local_2c[0] = (undefined1)param_2;
    ExceptionList = &pvStack_c;
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
      puVar11 = local_28;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      *(undefined1 *)((int)local_28 + uVar7) = 0;
      local_24 = uVar7;
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s__args_size____1______args_0__IsS_006a43b8,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a4280,0x1b8,local_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar3 = FUN_00515db0();
  iVar5 = *(int *)(iVar3 + 100);
  if (iVar5 == -0x80000000) {
    puVar4 = *(undefined1 **)(iVar3 + 0x18);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    iVar5 = FUN_0060af10(puVar4);
    *(int *)(iVar3 + 100) = iVar5;
  }
  if (iVar5 != 0) {
    uVar6 = FUN_0045da10(auStack_1c);
    local_4 = 1;
    FUN_005aff00(uVar6);
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
      }
    }
  }
  *param_1 = &PTR_FUN_0064f00c;
  param_1[2] = 0;
  ExceptionList = pvStack_c;
  return;
}

