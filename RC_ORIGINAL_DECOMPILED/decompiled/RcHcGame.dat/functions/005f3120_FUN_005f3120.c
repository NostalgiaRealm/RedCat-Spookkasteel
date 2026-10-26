/*
 * FUN_005f3120 at 005f3120
 * undefined FUN_005f3120(void)
 * Address ranges: 005f3120-005f31bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_005f3120(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  uVar1 = FUN_005e5d20(param_2,s_Const_Obj_006b1444,param_1 + 0x1c,&DAT_00693460);
  uVar1 = FUN_005eeea0(uVar1);
  piVar2 = (int *)FUN_005e5d20(uVar1);
  puVar4 = *(undefined1 **)(param_1 + 0x10);
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &DAT_0064a3b4;
  }
  FUN_005e5d20(piVar2,puVar4);
  FUN_005e9da0(10);
  uVar5 = 0;
  if ((*(byte *)((int)piVar2 + *(int *)(*piVar2 + 4) + 4) & 6) == 0) {
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

