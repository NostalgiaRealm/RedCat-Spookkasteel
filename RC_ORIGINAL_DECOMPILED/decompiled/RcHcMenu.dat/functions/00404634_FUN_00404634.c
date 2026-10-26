/*
 * FUN_00404634 at 00404634
 * int * __register FUN_00404634(int * param_1, int * param_2)
 * Address ranges: 00404634-004046b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00404634(int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = param_1;
  if (param_1 != param_2) {
    if (param_1 == (int *)0x0) {
      piVar1 = (int *)-param_2[-1];
    }
    else if (param_2 == (int *)0x0) {
      piVar1 = (int *)param_1[-1];
    }
    else {
      uVar2 = param_2[-1];
      piVar1 = (int *)(param_1[-1] - uVar2);
      if ((uint)param_1[-1] < uVar2 || piVar1 == (int *)0x0) {
        uVar2 = uVar2 + (int)piVar1;
      }
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 2) {
        if (*param_1 != *param_2) {
          return piVar1;
        }
        if (uVar3 == 1) {
          param_1 = param_1 + 1;
          param_2 = param_2 + 1;
          break;
        }
        if (param_1[1] != param_2[1]) {
          return piVar1;
        }
        param_1 = param_1 + 2;
        param_2 = param_2 + 2;
      }
      if (((uVar2 & 2) == 0) || ((short)*param_1 == (short)*param_2)) {
        piVar1 = (int *)((int)piVar1 * 2);
      }
    }
  }
  return piVar1;
}

