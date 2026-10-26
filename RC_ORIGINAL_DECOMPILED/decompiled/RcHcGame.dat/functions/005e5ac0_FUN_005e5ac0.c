/*
 * FUN_005e5ac0 at 005e5ac0
 * undefined FUN_005e5ac0(void)
 * Address ranges: 005e5ac0-005e5b71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_005e5ac0(int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00646797;
  local_c = ExceptionList;
  local_4 = 2;
  if (DAT_0070fc0c == 0) {
    DAT_0070fc04 = DAT_0070fc04 + 1;
    DAT_0070fc0c = DAT_0070fc04;
  }
  ExceptionList = &local_c;
  piVar2 = (int *)FUN_005fef36(param_3,DAT_0070fc0c,2);
  iVar1 = *piVar2;
  *param_1 = iVar1;
  if (*(int *)(iVar1 + 4) != -1) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  local_4 = local_4 & 0xffffff00;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 4);
    if ((iVar1 != 0) && (iVar1 != -1)) {
      *(int *)(param_2 + 4) = iVar1 + -1;
    }
    puVar3 = (undefined4 *)(~-(uint)(*(int *)(param_2 + 4) != 0) & param_2);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
  }
  ExceptionList = local_c;
  return param_1;
}

