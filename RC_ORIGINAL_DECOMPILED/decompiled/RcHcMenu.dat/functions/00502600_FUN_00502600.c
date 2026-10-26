/*
 * FUN_00502600 at 00502600
 * undefined2 __register FUN_00502600(undefined4 param_1, char param_2)
 * Address ranges: 00502600-00502627
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x500d84 slot 70 for TDaviComboBase. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x500d84 slot 70 for
   TDaviComboBase. Original bytes unchanged; names and types still inferred. */

undefined2 FUN_00502600(undefined4 param_1,char param_2)

{
  undefined2 local_c;
  
  if (param_2 == '\0') {
    local_c = 0xfffe;
  }
  else {
    local_c = 0xfffc;
  }
  return local_c;
}

