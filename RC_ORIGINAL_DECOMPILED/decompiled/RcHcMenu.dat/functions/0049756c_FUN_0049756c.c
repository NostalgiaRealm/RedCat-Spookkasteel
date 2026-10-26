/*
 * FUN_0049756c at 0049756c
 * int __register FUN_0049756c(int * param_1, int param_2)
 * Address ranges: 0049756c-004975d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0049756c(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int local_20;
  int local_1c;
  
  iVar1 = FUN_00497724((int)param_1);
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_20 = uVar2 + 1;
    local_1c = 0;
    do {
      piVar3 = (int *)FUN_00497868(param_1,local_1c);
      iVar1 = FUN_00490354(piVar3,param_2);
      if (iVar1 != 0) {
        return iVar1;
      }
      local_1c = local_1c + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  return 0;
}

