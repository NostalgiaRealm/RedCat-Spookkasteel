/*
 * FUN_0048e148 at 0048e148
 * char __register FUN_0048e148(int param_1, int param_2, undefined4 param_3)
 * Address ranges: 0048e148-0048e1b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_0048e148(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined1 local_d;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    local_d = '\x01';
  }
  else if (param_2 == 0) {
    local_d = '\0';
  }
  else {
    piVar1 = (int *)FUN_00497394(param_1,param_2,param_3);
    iVar2 = FUN_0049756c(piVar1,*(int *)(param_1 + 0x18));
    piVar1 = (int *)FUN_00497394(iVar2,extraout_EDX,extraout_ECX);
    iVar3 = FUN_0049756c(piVar1,param_2);
    local_d = iVar2 == iVar3;
    if (!(bool)local_d) {
      local_d = FUN_0048e0dc(param_1,param_2);
    }
  }
  return local_d;
}

