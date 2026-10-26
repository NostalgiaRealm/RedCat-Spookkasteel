/*
 * FUN_0049b580 at 0049b580
 * undefined __register FUN_0049b580(int * param_1, int * param_2)
 * Address ranges: 0049b580-0049b5e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49893c slot 17 for TDIB. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49893c slot 17 for TDIB.
   Original bytes unchanged; names and types still inferred. */

void FUN_0049b580(int *param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  if (cVar1 == '\0') {
    if (*(char *)(param_1[9] + 0x42c) == '\0') {
      GdiFlush();
    }
    FUN_0041483c(param_2,*(undefined4 *)(param_1[9] + 0xc),*(int *)(param_1[9] + 0x10));
    FUN_0041483c(param_2,*(undefined4 *)(param_1[9] + 0x440),
                 *(int *)(*(int *)(param_1[9] + 0xc) + 0x14));
  }
  return;
}

