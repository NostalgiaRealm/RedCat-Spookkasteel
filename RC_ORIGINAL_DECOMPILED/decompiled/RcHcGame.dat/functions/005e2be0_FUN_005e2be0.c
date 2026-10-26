/*
 * FUN_005e2be0 at 005e2be0
 * undefined FUN_005e2be0(void)
 * Address ranges: 005e2be0-005e2d95
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005e2c4d) */

undefined4 * __thiscall FUN_005e2be0(undefined4 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064647b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064f00c;
  param_1[2] = 3;
  puVar4 = operator_new(0x10);
  local_4 = 0;
  if (puVar4 == (undefined1 *)0x0) {
    param_1[4] = 0;
    ExceptionList = local_c;
    return param_1;
  }
  uVar1 = *param_2;
  *(undefined4 *)(puVar4 + 4) = 0;
  *puVar4 = uVar1;
  *(undefined4 *)(puVar4 + 8) = 0;
  *(undefined4 *)(puVar4 + 0xc) = 0;
  uVar2 = *(uint *)(param_2 + 8);
  if (puVar4 == param_2) {
    if (uVar2 != 0) {
      FUN_005fe747();
    }
    FUN_0040ce10();
    iVar5 = *(int *)(puVar4 + 8) - uVar2;
    iVar8 = -1;
    if (iVar5 != -1) {
      iVar8 = iVar5;
    }
    if (iVar8 != 0) {
      FUN_0060ab50(uVar2 + *(int *)(puVar4 + 4),uVar2 + *(int *)(puVar4 + 4) + iVar8,iVar5 - iVar8);
      iVar5 = *(int *)(puVar4 + 8);
      cVar3 = FUN_00401940(iVar5 - iVar8,0);
      if (cVar3 != '\0') {
        FUN_00404190(iVar5 - iVar8);
      }
    }
    FUN_0040ce10();
    param_1[4] = puVar4;
    ExceptionList = local_c;
    return param_1;
  }
  if (uVar2 != 0) {
    puVar6 = *(undefined1 **)(param_2 + 4);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    if ((byte)puVar6[-1] < 0xfe) {
      FUN_004040a0(1);
      puVar6 = *(undefined1 **)(param_2 + 4);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      *(undefined1 **)(puVar4 + 4) = puVar6;
      *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(puVar4 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      puVar6[-1] = puVar6[-1] + '\x01';
      param_1[4] = puVar4;
      ExceptionList = local_c;
      return param_1;
    }
  }
  cVar3 = FUN_00401940(uVar2,1);
  if (cVar3 != '\0') {
    puVar9 = *(undefined4 **)(param_2 + 4);
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)&DAT_0064a3b4;
    }
    puVar10 = *(undefined4 **)(puVar4 + 4);
    for (uVar7 = uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = uVar2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(uint *)(puVar4 + 8) = uVar2;
    *(undefined1 *)(*(int *)(puVar4 + 4) + uVar2) = 0;
  }
  param_1[4] = puVar4;
  ExceptionList = local_c;
  return param_1;
}

