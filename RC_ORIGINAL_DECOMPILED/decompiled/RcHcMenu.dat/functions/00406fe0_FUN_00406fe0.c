/*
 * FUN_00406fe0 at 00406fe0
 * undefined __register FUN_00406fe0(undefined * param_1)
 * Address ranges: 00406fe0-00407007
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00406fe0(undefined *param_1)

{
  char cVar1;
  
  do {
    cVar1 = FUN_00406ed4(param_1);
    if (cVar1 == '\x1a') {
      return;
    }
  } while (cVar1 != '\r');
  cVar1 = FUN_00406ed4(param_1);
  if (cVar1 != '\n') {
    if (cVar1 == '\x1a') {
      return;
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return;
}

