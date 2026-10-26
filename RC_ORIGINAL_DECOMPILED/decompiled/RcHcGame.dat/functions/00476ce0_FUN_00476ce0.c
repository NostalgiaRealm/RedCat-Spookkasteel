/*
 * FUN_00476ce0 at 00476ce0
 * undefined FUN_00476ce0(void)
 * Address ranges: 00476ce0-00476d07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00476ce0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x7c) != '\0') {
    cVar1 = FUN_00421560();
    if (cVar1 != '\0') {
      FUN_00477410(param_2,param_3);
    }
  }
  return;
}

