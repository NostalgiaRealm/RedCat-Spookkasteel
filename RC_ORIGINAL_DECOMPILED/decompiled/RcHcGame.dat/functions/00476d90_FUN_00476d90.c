/*
 * FUN_00476d90 at 00476d90
 * undefined FUN_00476d90(void)
 * Address ranges: 00476d90-00476dab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00476d90(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x7c) != '\0') {
    cVar1 = FUN_00421560();
    if (cVar1 != '\0') {
      FUN_00476e90();
    }
  }
  return;
}

