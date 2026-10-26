/*
 * FUN_00403504 at 00403504
 * undefined __register FUN_00403504(undefined4 param_1, ULONG_PTR param_2)
 * Address ranges: 00403504-0040351e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00403504(undefined4 param_1,ULONG_PTR param_2)

{
  ULONG_PTR UStack_4;
  
  if (1 < DAT_0056f008) {
    UStack_4 = param_2;
    RaiseException(0xeedfae2,0,1,&UStack_4);
  }
  return;
}

