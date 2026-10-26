/*
 * FUN_004a1060 at 004a1060
 * undefined FUN_004a1060(void)
 * Address ranges: 004a1060-004a1091
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 __fastcall FUN_004a1060(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_004a0640();
  if (cVar1 != '\0') {
    return (float10)(*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x2c)) /
           (float10)*(int *)(param_1 + 0x34);
  }
  return (float10)0.0;
}

