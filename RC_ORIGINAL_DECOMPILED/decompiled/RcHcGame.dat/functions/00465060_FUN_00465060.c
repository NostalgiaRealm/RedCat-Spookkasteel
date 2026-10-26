/*
 * FUN_00465060 at 00465060
 * undefined FUN_00465060(void)
 * Address ranges: 00465060-00465087
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00465060(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x7c) != '\0') {
    cVar1 = FUN_00421560();
    if (cVar1 != '\0') {
      FUN_004654f0(param_2,param_3);
    }
  }
  return;
}

