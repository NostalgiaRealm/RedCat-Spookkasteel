/*
 * FUN_0046b5a4 at 0046b5a4
 * undefined __register FUN_0046b5a4(int * param_1, int * param_2, undefined4 param_3)
 * Address ranges: 0046b5a4-0046b5da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x463c40 slot 22 for TFloatField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x463c40 slot 22 for
   TFloatField. Original bytes unchanged; names and types still inferred. */

void FUN_0046b5a4(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 local_10 [8];
  
  cVar1 = FUN_00469218(param_1,(int)local_10,CONCAT31((int3)((uint)param_3 >> 8),1));
  if (cVar1 == '\0') {
    FUN_00403db0(param_2);
  }
  else {
    FUN_0040a970(param_2);
  }
  return;
}

