/*
 * FUN_0040d9bc at 0040d9bc
 * int __register FUN_0040d9bc(int param_1, int param_2)
 * Address ranges: 0040d9bc-0040da1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0040d9bc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_10;
  int local_c;
  
  local_10 = 0;
  iVar1 = local_10;
  if (0 < param_2) {
    iVar1 = FUN_00404030(param_1);
    if (iVar1 < param_2) {
      param_2 = FUN_00404030(param_1);
    }
    iVar1 = param_2;
    if (DAT_005735bc != '\0') {
      FUN_0040d8e4(param_1,param_2,&local_c,&local_10);
      iVar2 = FUN_00404030(param_1);
      iVar1 = local_10;
      if (iVar2 < local_10) {
        iVar1 = FUN_00404030(param_1);
      }
    }
  }
  local_10 = iVar1;
  return local_10;
}

