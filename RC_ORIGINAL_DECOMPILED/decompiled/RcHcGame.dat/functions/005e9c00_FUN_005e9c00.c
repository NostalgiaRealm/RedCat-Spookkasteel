/*
 * FUN_005e9c00 at 005e9c00
 * undefined FUN_005e9c00(void)
 * Address ranges: 005e9c00-005e9c8e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __fastcall FUN_005e9c00(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  puVar6 = &DAT_00693460;
  uVar1 = FUN_005e7140(*(undefined4 *)(param_1 + 4));
  piVar2 = (int *)FUN_005e5d20(uVar1,puVar6);
  puVar4 = *(undefined1 **)(param_1 + 0x10);
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &DAT_0064a3b4;
  }
  FUN_005e5d20(piVar2,puVar4);
  FUN_005e9da0(10);
  uVar5 = 0;
  if ((*(byte *)(*(int *)(*piVar2 + 4) + 4 + (int)piVar2) & 6) == 0) {
    iVar3 = (**(code **)(**(int **)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x28) + 0x2c))();
    if (iVar3 == -1) {
      uVar5 = 4;
    }
  }
  if (uVar5 != 0) {
    uVar5 = *(uint *)((int)piVar2 + *(int *)(*piVar2 + 4) + 4) | uVar5;
    if (*(int *)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x28) == 0) {
      uVar5 = uVar5 | 4;
    }
    FUN_005fe7e4(uVar5,0);
  }
  return piVar2;
}

