/*
 * FUN_004d0460 at 004d0460
 * undefined __register FUN_004d0460(int param_1)
 * Address ranges: 004d0460-004d047f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d0460(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    iVar1 = FUN_004d0424(param_1);
    FUN_004b10b0(iVar1);
  }
  return;
}

