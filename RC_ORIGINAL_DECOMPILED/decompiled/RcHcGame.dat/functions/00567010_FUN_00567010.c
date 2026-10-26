/*
 * FUN_00567010 at 00567010
 * undefined FUN_00567010(void)
 * Address ranges: 00567010-0056719a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00567010(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640160;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00566fd0(param_1);
  if (iVar2 == 0) {
    iVar2 = FUN_00566ce0(param_1);
    if (iVar2 == 0) {
      local_2c[0] = (undefined1)param_1;
      uVar7 = 0xffffffff;
      local_28 = (undefined4 *)0x0;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7 - 1;
      local_24 = 0;
      local_20 = 0;
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
        FUN_00404190(uVar7);
      }
      local_4 = 0;
      pcVar3 = (code *)FUN_005a07f0(s_result_00691bc0,s_D__Work_RCHorror_AdamSource_Adam_006a3df0,
                                    0x87,local_2c);
      (*pcVar3)();
      local_4 = 0xffffffff;
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
    iVar4 = FUN_00566fd0(param_1);
    if (iVar4 != iVar2) {
      iVar4 = FUN_005a1d60();
      puVar5 = *(undefined1 **)(iVar4 + 4);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0064a3b4;
      }
      uVar6 = FUN_005ae390(auStack_1c,s_EntityName____s__006a3e48,puVar5);
      local_4 = 1;
      pcVar3 = (code *)FUN_005a07f0(s_FindEntityList_a_EntityName_____r_006a3e20,
                                    s_D__Work_RCHorror_AdamSource_Adam_006a3df0,0x89,uVar6);
      (*pcVar3)();
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
  }
  ExceptionList = local_c;
  return iVar2;
}

