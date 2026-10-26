/*
 * FUN_005e3620 at 005e3620
 * undefined FUN_005e3620(void)
 * Address ranges: 005e3620-005e381d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005e37c9) */
/* WARNING: Removing unreachable block (ram,0x005e37e0) */
/* WARNING: Removing unreachable block (ram,0x005e37ef) */
/* WARNING: Removing unreachable block (ram,0x005e37f8) */

void __thiscall FUN_005e3620(int param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064655b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x20);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    FUN_00429a30(param_2);
    uVar2 = FUN_005e3820();
  }
  local_4 = 0xffffffff;
  puVar7 = *(undefined4 **)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x10) - (int)puVar7 >> 2 == 0) {
    iVar3 = *(int *)(param_1 + 8);
    if ((iVar3 == 0) || (uVar5 = (int)puVar7 - iVar3 >> 2, uVar5 < 2)) {
      uVar5 = 1;
    }
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)puVar7 - iVar3 >> 2;
    }
    iVar3 = iVar3 + uVar5;
    iVar4 = iVar3;
    if (iVar3 < 0) {
      iVar4 = 0;
    }
    pvVar1 = operator_new(iVar4 * 4);
    for (puVar6 = *(undefined4 **)(param_1 + 8); puVar6 != puVar7; puVar6 = puVar6 + 1) {
      FUN_005f0760();
    }
    FUN_004a7300();
    FUN_004dddf0();
    FUN_00587d50();
    FUN_005fe5f0();
    iVar4 = *(int *)(param_1 + 8);
    *(void **)(param_1 + 0x10) = (void *)((int)pvVar1 + iVar3 * 4);
    if (iVar4 == 0) {
      *(void **)(param_1 + 8) = pvVar1;
      *(int *)(param_1 + 0xc) = (int)pvVar1 + 4;
    }
    else {
      *(void **)(param_1 + 8) = pvVar1;
      *(int *)(param_1 + 0xc) = (int)pvVar1 + (*(int *)(param_1 + 0xc) - iVar4 >> 2) * 4 + 4;
    }
  }
  else {
    FUN_004dddf0();
    FUN_004a7300();
    puVar6 = *(undefined4 **)(param_1 + 0xc);
    for (; puVar7 != puVar6; puVar7 = puVar7 + 1) {
      *puVar7 = uVar2;
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
  }
  ExceptionList = local_c;
  return;
}

