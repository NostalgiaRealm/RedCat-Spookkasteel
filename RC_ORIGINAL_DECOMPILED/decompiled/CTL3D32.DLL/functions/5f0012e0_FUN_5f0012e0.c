/*
 * FUN_5f0012e0 at 5f0012e0
 * undefined __stdcall FUN_5f0012e0(void)
 * Address ranges: 5f0012e0-5f001308
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_5f0012e0(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_5f005284;
  do {
    FUN_5f0012c0(puVar1);
    puVar1 = puVar1 + 1;
  } while (puVar1 < &DAT_5f005290);
  FUN_5f0012c0(&DAT_5f005290);
  return;
}

