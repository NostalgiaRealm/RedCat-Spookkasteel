/*
 * FUN_004f5c40 at 004f5c40
 * undefined __register FUN_004f5c40(int param_1)
 * Address ranges: 004f5c40-004f5c5d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f5c40(int param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 500) == 0) || (*(char *)(param_1 + 0x1f8) == '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  FUN_004f5be8(param_1,cVar1);
  return;
}

