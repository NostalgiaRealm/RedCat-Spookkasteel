/*
 * FUN_004b1a88 at 004b1a88
 * undefined1 __register FUN_004b1a88(undefined4 param_1, uint param_2)
 * Address ranges: 004b1a88-004b1ab4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated native virtual-method table 0x4b1968 slot 1 for TDatePropDesc. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated native virtual-method table 0x4b1968
   slot 1 for TDatePropDesc. Original bytes unchanged; names and types still inferred. */

undefined1 FUN_004b1a88(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  undefined1 local_d;
  
  if (param_2 == 7) {
    local_d = 1;
  }
  else {
    uVar1 = FUN_004958c8(param_1,param_2);
    local_d = (undefined1)uVar1;
  }
  return local_d;
}

