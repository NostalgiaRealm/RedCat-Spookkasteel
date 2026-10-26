/*
 * FUN_0051a420 at 0051a420
 * undefined FUN_0051a420(void)
 * Address ranges: 0051a420-0051a43f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_0051a420(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x14))();
  if (((cVar1 != '\0') && (param_1[0xf] != 2)) && (param_1[0xf] != 0)) {
    return 0;
  }
  return 1;
}

