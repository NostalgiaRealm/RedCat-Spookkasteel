/*
 * FUN_004e92dc at 004e92dc
 * undefined1 __register FUN_004e92dc(undefined4 param_1, uint param_2)
 * Address ranges: 004e92dc-004e92dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated native virtual-method table 0x4e91bc slot 1 for TBooleanPropDesc. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated native virtual-method table 0x4e91bc
   slot 1 for TBooleanPropDesc. Original bytes unchanged; names and types still inferred. */

undefined1 FUN_004e92dc(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  undefined1 uStack_d;
  
  if (param_2 == 0xb) {
    uStack_d = 1;
  }
  else {
    uVar1 = FUN_004958c8(param_1,param_2);
    uStack_d = (undefined1)uVar1;
  }
  return uStack_d;
}

