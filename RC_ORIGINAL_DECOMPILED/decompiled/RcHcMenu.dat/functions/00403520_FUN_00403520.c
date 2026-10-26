/*
 * FUN_00403520 at 00403520
 * undefined4 __register FUN_00403520(undefined4 param_1, ULONG_PTR param_2)
 * Address ranges: 00403520-0040353c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00403520(undefined4 param_1,ULONG_PTR param_2)

{
  ULONG_PTR UStack_8;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (1 < DAT_0056f008) {
    UStack_8 = param_2;
    RaiseException(0xeedfae3,0,2,&UStack_8);
  }
  return uStack_4;
}

