/*
 * FUN_0045a1f8 at 0045a1f8
 * undefined1 __register FUN_0045a1f8(int * param_1, undefined * param_2, uint * param_3)
 * Address ranges: 0045a1f8-0045a243
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x45984c slot 30 for TUniqueStringList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x45984c slot 30 for
   TUniqueStringList. Original bytes unchanged; names and types still inferred. */

undefined1 FUN_0045a1f8(int *param_1,undefined *param_2,uint *param_3)

{
  uint uVar1;
  undefined1 local_11;
  
  if ((char)param_1[6] == '\0') {
    uVar1 = (**(code **)(*param_1 + 0x50))(param_1,param_2);
    *param_3 = uVar1;
    local_11 = *param_3 != 0xffffffff;
  }
  else {
    local_11 = FUN_004143fc((int)param_1,param_2,param_3);
  }
  return local_11;
}

