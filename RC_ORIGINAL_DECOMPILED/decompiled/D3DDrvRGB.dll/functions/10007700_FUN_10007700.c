/*
 * FUN_10007700 at 10007700
 * undefined __stdcall FUN_10007700(void)
 * Address ranges: 10007700-1000771b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10007700(void)

{
  int *piVar1;
  
  piVar1 = (int *)&DAT_100ec090;
  do {
    FUN_10007820(piVar1);
    piVar1 = piVar1 + 4;
  } while ((int)piVar1 < 0x100ec0f0);
  return;
}

