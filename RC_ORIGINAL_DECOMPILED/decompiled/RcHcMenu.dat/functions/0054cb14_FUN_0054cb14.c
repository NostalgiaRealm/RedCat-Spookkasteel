/*
 * FUN_0054cb14 at 0054cb14
 * undefined4 __register FUN_0054cb14(int * param_1, char param_2)
 * Address ranges: 0054cb14-0054cb99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0054cb14(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 local_10;
  
  if (*(int *)(param_1[199] + 8) < 1) {
    local_10 = 0xffffffff;
  }
  else {
    iVar1 = *(int *)(param_1[199] + 8);
    iVar2 = iVar1 + -1;
    if (SBORROW4(iVar1,1)) {
      thunk_FUN_00402874(param_1[199]);
      iVar2 = extraout_EDX;
    }
    local_10 = FUN_004b0b9c((undefined4 *)param_1[199],iVar2);
    iVar1 = *(int *)(param_1[199] + 8);
    iVar2 = iVar1 + -1;
    if (SBORROW4(iVar1,1)) {
      thunk_FUN_00402874(param_1[199]);
      iVar2 = extraout_EDX_00;
    }
    FUN_004b0bdc((int *)param_1[199],iVar2);
    if (param_2 != '\0') {
      FUN_0054cb9c(param_1,'\0');
    }
  }
  return local_10;
}

