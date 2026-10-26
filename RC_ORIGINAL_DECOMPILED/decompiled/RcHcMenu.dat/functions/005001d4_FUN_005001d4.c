/*
 * FUN_005001d4 at 005001d4
 * undefined __register FUN_005001d4(int * param_1, uint * param_2)
 * Address ranges: 005001d4-005001fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ff028 slot 27 for TOAEdit2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ff028 slot 27 for
   TOAEdit2. Original bytes unchanged; names and types still inferred. */

void FUN_005001d4(int *param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  
  uVar1 = FUN_00500148((int)param_1,(int *)param_2);
  if ((char)uVar1 == '\0') {
    FUN_004361cc(param_1,param_2,extraout_ECX);
  }
  return;
}

