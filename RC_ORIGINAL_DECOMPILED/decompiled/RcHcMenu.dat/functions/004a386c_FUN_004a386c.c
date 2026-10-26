/*
 * FUN_004a386c at 004a386c
 * undefined __register FUN_004a386c(int param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 004a386c-004a38c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4a2c88 slot 49 for TDaviGraphicButton. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4a2c88 slot 49 for
   TDaviGraphicButton. Original bytes unchanged; names and types still inferred. */

void FUN_004a386c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x208) != 0) {
    piVar2 = (int *)FUN_004a252c(*(int *)(param_1 + 0x208),6);
    cVar1 = (**(code **)(*piVar2 + 0x1c))();
    if (cVar1 == '\0') {
      *(undefined ***)(param_4 + 4) = &PTR_FUN_004a27a4;
      *(undefined4 *)(param_4 + 0x3c) = *(undefined4 *)(param_1 + 0x208);
    }
  }
  return;
}

