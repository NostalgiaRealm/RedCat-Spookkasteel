/*
 * FUN_0048c498 at 0048c498
 * undefined1 __register FUN_0048c498(undefined4 param_1, uint param_2)
 * Address ranges: 0048c498-0048c4ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48c388 slot 1 for TFKIntegerPropDesc. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48c388 slot 1 for
   TFKIntegerPropDesc. Original bytes unchanged; names and types still inferred. */

undefined1 FUN_0048c498(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  undefined1 local_d;
  
  if ((param_2 - 2 < 2) || (param_2 - 2 == 0xf)) {
    local_d = 1;
  }
  else {
    uVar1 = FUN_004958c8(param_1,param_2);
    local_d = (undefined1)uVar1;
  }
  return local_d;
}

