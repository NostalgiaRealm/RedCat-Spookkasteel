/*
 * FUN_00605866 at 00605866
 * undefined FUN_00605866(void)
 * Address ranges: 00605866-006058d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_00605866(int param_1,uint param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  if (*(uint *)(param_1 + 8) < param_2) {
    FUN_005fe747();
  }
  FUN_00605c41();
  uVar2 = *(int *)(param_1 + 8) - param_2;
  if (uVar2 < param_3) {
    param_3 = uVar2;
  }
  if (param_3 != 0) {
    FUN_00605821(*(int *)(param_1 + 4) + param_2 * 2,*(int *)(param_1 + 4) + (param_2 + param_3) * 2
                 ,uVar2 - param_3);
    iVar3 = *(int *)(param_1 + 8) - param_3;
    cVar1 = FUN_006058fe(iVar3,0);
    if (cVar1 != '\0') {
      *(int *)(param_1 + 8) = iVar3;
      *(undefined2 *)(*(int *)(param_1 + 4) + iVar3 * 2) = 0;
    }
  }
  return param_1;
}

