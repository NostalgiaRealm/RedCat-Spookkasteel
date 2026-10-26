/*
 * FUN_004b748c at 004b748c
 * undefined __register FUN_004b748c(int * param_1)
 * Address ranges: 004b748c-004b74a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b748c(int *param_1)

{
  if (*param_1 != 0) {
    SafeArrayDestroy((SAFEARRAY *)*param_1);
    *param_1 = 0;
  }
  return;
}

