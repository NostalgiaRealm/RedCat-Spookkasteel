/*
 * FUN_0043484c at 0043484c
 * undefined4 __register FUN_0043484c(int param_1)
 * Address ranges: 0043484c-0043487d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42761c slot 11 for TButtonActionLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42761c slot 11 for
   TButtonActionLink. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_0043484c(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_0043dac0(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_00403224(*(int **)(param_1 + 0x10),(int)&PTR_FUN_0043d40c);
    if (*(int *)(iVar2 + 0x5c) == *(int *)(*(int *)(param_1 + 0x20) + 0x150)) {
      return CONCAT31((int3)((uint)*(int *)(iVar2 + 0x5c) >> 8),1);
    }
  }
  return 0;
}

