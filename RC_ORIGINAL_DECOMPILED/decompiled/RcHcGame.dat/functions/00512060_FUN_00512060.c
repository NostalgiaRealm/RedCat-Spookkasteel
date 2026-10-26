/*
 * FUN_00512060 at 00512060
 * undefined FUN_00512060(void)
 * Address ranges: 00512060-00512084
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_00512060(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x1c0) != 0) {
    FUN_00425080();
    cVar1 = FUN_005530e0();
    return cVar1 == '\0';
  }
  return true;
}

