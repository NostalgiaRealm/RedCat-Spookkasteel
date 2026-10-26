/*
 * FUN_0040d958 at 0040d958
 * int __register FUN_0040d958(int param_1, int param_2)
 * Address ranges: 0040d958-0040d9bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0040d958(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_10;
  int local_c;
  
  local_10 = 0;
  iVar2 = local_10;
  if ((((0 < param_2) && (iVar1 = FUN_00404030(param_1), iVar2 = local_10, param_2 <= iVar1)) &&
      (iVar2 = param_2, 1 < param_2)) && (iVar2 = param_2, DAT_005735bc != '\0')) {
    FUN_0040d8e4(param_1,param_2 + -1,&local_c,&local_10);
    if ((local_c < param_2 + -1) || (iVar2 = FUN_00404030(param_1), iVar2 <= local_10)) {
      local_10 = 0;
      iVar2 = local_10;
    }
    else {
      iVar2 = local_10 + 1;
    }
  }
  local_10 = iVar2;
  return local_10;
}

