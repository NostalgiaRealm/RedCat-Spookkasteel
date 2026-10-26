/*
 * FUN_00409c44 at 00409c44
 * undefined4 __register FUN_00409c44(byte * param_1)
 * Address ranges: 00409c44-00409c7c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00409c44(byte *param_1)

{
  undefined4 uVar1;
  int local_14;
  byte *local_10;
  undefined1 local_c;
  
  uVar1 = FUN_00402d88(param_1,&local_14);
  if (local_14 != 0) {
    local_c = 0xb;
    local_10 = param_1;
    FUN_004095ac((undefined4 *)PTR_PTR_00572238,&local_10,0);
  }
  return uVar1;
}

