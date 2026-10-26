/*
 * FUN_00465120 at 00465120
 * undefined FUN_00465120(void)
 * Address ranges: 00465120-0046513b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00465120(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x7c) != '\0') {
    cVar1 = FUN_00421560();
    if (cVar1 != '\0') {
      FUN_00465220();
    }
  }
  return;
}

