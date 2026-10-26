/*
 * FUN_0046b0e8 at 0046b0e8
 * undefined4 __register FUN_0046b0e8(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0046b0e8-0046b105
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x463810 slot 21 for TLargeintField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x463810 slot 21 for
   TLargeintField. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_0046b0e8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 local_c [2];
  
  cVar1 = FUN_0046b2b0(param_1,(int)local_c,param_3);
  if (cVar1 == '\0') {
    local_c[0] = 0;
  }
  return local_c[0];
}

