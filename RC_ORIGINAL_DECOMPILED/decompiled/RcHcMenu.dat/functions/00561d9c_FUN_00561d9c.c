/*
 * FUN_00561d9c at 00561d9c
 * undefined __register FUN_00561d9c(int param_1)
 * Address ranges: 00561d9c-00561dd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00561d9c(int param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = 0;
  do {
    bVar2 = 0;
    do {
      FUN_00403094(*(int **)(param_1 + (uint)bVar1 * 0x10 + 0x1fc + (uint)bVar2 * 4));
      bVar2 = bVar2 + 1;
    } while (bVar2 != 3);
    bVar1 = bVar1 + 1;
  } while (bVar1 != 9);
  return;
}

