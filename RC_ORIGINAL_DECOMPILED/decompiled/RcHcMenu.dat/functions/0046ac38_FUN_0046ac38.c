/*
 * FUN_0046ac38 at 0046ac38
 * uint __register FUN_0046ac38(int * param_1, undefined4 param_2, uint param_3)
 * Address ranges: 0046ac38-0046ac53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x46352c slot 21 for TIntegerField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x46352c slot 21 for
   TIntegerField. Original bytes unchanged; names and types still inferred. */

uint FUN_0046ac38(int *param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  uint local_8;
  
  local_8 = param_3;
  cVar1 = FUN_0046adb8(param_1,&local_8,param_3);
  if (cVar1 == '\0') {
    local_8 = 0;
  }
  return local_8;
}

