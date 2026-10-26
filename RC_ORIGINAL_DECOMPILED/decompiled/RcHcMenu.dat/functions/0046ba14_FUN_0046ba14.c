/*
 * FUN_0046ba14 at 0046ba14
 * undefined __register FUN_0046ba14(int * param_1, int * param_2, undefined4 param_3)
 * Address ranges: 0046ba14-0046ba52
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x463fa4 slot 22 for TBooleanField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x463fa4 slot 22 for
   TBooleanField. Original bytes unchanged; names and types still inferred. */

void FUN_0046ba14(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 local_c;
  
  local_c = param_3;
  cVar1 = FUN_00469218(param_1,(int)&local_c,CONCAT31((int3)((uint)param_3 >> 8),1));
  if (cVar1 == '\0') {
    FUN_00403db0(param_2);
  }
  else {
    FUN_00403e04(param_2,(undefined4 *)param_1[((short)local_c != 0) + 0x35]);
  }
  return;
}

