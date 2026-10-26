/*
 * FUN_00415418 at 00415418
 * int __register FUN_00415418(char * param_1, byte * param_2)
 * Address ranges: 00415418-0041542d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00415418(char *param_1,byte *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0040f8f4(param_1,param_2);
  if (iVar1 == -1) {
    FUN_00415400();
  }
  return iVar1;
}

