/*
 * FUN_005f5360 at 005f5360
 * undefined FUN_005f5360(void)
 * Address ranges: 005f5360-005f5408
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_005f5360(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = FUN_005e5d20(param_2,s_Member_006b14e8,param_1 + 0x1c,&DAT_00693460);
  uVar1 = FUN_005eeea0(uVar1);
  uVar1 = FUN_005e5d20(uVar1);
  puVar2 = *(undefined1 **)(param_1 + 0x10);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0064a3b4;
  }
  FUN_005e5d20(uVar1,puVar2);
  piVar3 = (int *)FUN_005f94d0(uVar1,param_1 + 0x40);
  FUN_005e9da0(10);
  uVar5 = 0;
  if ((*(byte *)((int)piVar3 + *(int *)(*piVar3 + 4) + 4) & 6) == 0) {
    iVar4 = (**(code **)(**(int **)((int)piVar3 + *(int *)(*piVar3 + 4) + 0x28) + 0x2c))();
    if (iVar4 == -1) {
      uVar5 = 4;
    }
  }
  if (uVar5 != 0) {
    uVar5 = *(uint *)((int)piVar3 + *(int *)(*piVar3 + 4) + 4) | uVar5;
    if (*(int *)((int)piVar3 + *(int *)(*piVar3 + 4) + 0x28) == 0) {
      uVar5 = uVar5 | 4;
    }
    FUN_005fe7e4(uVar5,0);
  }
  return piVar3;
}

