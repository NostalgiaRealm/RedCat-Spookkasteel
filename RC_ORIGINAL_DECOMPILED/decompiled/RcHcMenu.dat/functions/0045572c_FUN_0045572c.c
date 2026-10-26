/*
 * FUN_0045572c at 0045572c
 * undefined __register FUN_0045572c(int * param_1, int * param_2)
 * Address ranges: 0045572c-0045577d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4539c0 slot 36 for TCustomPanel. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4539c0 slot 36 for
   TCustomPanel. Original bytes unchanged; names and types still inferred. */

void FUN_0045572c(int *param_1,int *param_2)

{
  FUN_004358f8(param_1,param_2);
  param_2[1] = param_2[1] | *(uint *)(&DAT_0056fb0c + (uint)*(byte *)(param_1 + 0x81) * 4);
  if (((*PTR_DAT_005722c4 != '\0') && ((char)param_1[0x4e] != '\0')) &&
     ((char)param_1[0x81] == '\x01')) {
    param_2[1] = param_2[1] & 0xff7fffff;
    param_2[2] = param_2[2] | 0x200;
  }
  param_2[9] = param_2[9] & 0xfffffffc;
  return;
}

