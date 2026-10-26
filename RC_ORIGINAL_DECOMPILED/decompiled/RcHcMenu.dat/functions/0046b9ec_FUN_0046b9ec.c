/*
 * FUN_0046b9ec at 0046b9ec
 * bool __register FUN_0046b9ec(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0046b9ec-0046ba11
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x463fa4 slot 16 for TBooleanField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x463fa4 slot 16 for
   TBooleanField. Original bytes unchanged; names and types still inferred. */

bool FUN_0046b9ec(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 local_8;
  
  local_8 = param_3;
  cVar1 = FUN_00469218(param_1,(int)&local_8,CONCAT31((int3)((uint)param_3 >> 8),1));
  if (cVar1 != '\0') {
    return (short)local_8 != 0;
  }
  return false;
}

