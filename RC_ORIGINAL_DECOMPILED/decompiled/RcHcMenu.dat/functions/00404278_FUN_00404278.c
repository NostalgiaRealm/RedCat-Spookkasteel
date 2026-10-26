/*
 * FUN_00404278 at 00404278
 * undefined __register FUN_00404278(int * param_1, int param_2, int param_3)
 * Address ranges: 00404278-004042bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00404278(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_00404200(param_1);
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar3 = param_2 + -1;
    if (((0 < param_2) && (iVar3 < *(int *)(iVar1 + -4))) && (0 < param_3)) {
      iVar2 = *(int *)(iVar1 + -4) - iVar3;
      if (iVar2 < param_3) {
        param_3 = iVar2;
      }
      FUN_00402944((undefined4 *)(iVar1 + iVar3 + param_3),(undefined4 *)(iVar1 + iVar3),
                   iVar2 - param_3);
      FUN_00404364(param_1,*(int *)(*param_1 + -4) - param_3);
    }
  }
  return;
}

