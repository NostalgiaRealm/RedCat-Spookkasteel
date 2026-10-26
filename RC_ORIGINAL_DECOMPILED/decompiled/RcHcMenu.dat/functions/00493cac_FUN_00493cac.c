/*
 * FUN_00493cac at 00493cac
 * int __register FUN_00493cac(int param_1)
 * Address ranges: 00493cac-00493ce0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00493cac(int param_1)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = FUN_00493c6c(param_1);
  while( true ) {
    iVar1 = FUN_00493c6c(local_c);
    if (iVar1 == local_c) break;
    local_c = FUN_00493c6c(local_c);
  }
  return local_c;
}

