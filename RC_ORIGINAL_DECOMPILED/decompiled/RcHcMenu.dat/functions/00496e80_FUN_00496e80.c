/*
 * FUN_00496e80 at 00496e80
 * undefined4 __register FUN_00496e80(undefined4 param_1)
 * Address ranges: 00496e80-00496edb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00496e80(undefined4 param_1)

{
  char cVar1;
  undefined3 uVar2;
  undefined3 extraout_var;
  undefined1 local_6;
  
  cVar1 = (char)param_1;
  if ((cVar1 != '\x02') && (cVar1 != '\x01')) {
    param_1 = FUN_00403d94("InvertSortorderDirection:  Parameter has an illegal value");
  }
  uVar2 = (undefined3)((uint)param_1 >> 8);
  if (cVar1 == '\x01') {
    local_6 = 2;
  }
  else if (cVar1 == '\x02') {
    local_6 = 1;
  }
  else {
    FUN_00403d94("Assertion failure");
    local_6 = 2;
    uVar2 = extraout_var;
  }
  return CONCAT31(uVar2,local_6);
}

