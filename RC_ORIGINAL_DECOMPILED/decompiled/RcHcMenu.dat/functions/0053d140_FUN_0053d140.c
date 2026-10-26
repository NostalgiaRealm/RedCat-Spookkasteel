/*
 * FUN_0053d140 at 0053d140
 * undefined __register FUN_0053d140(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0053d140-0053d16d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 19 for TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 19 for
   TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred. */

void FUN_0053d140(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x40) + -1;
  if (*(char *)(param_1 + 0x40) == '\0') {
    FUN_0053cf18(CONCAT31((int3)((uint)param_1 >> 8),cVar1),param_2,param_3,(int)&stack0xfffffffc);
  }
  else if (cVar1 == '\0') {
    FUN_0053cfc4();
  }
  return;
}

