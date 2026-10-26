/*
 * FUN_10001540 at 10001540
 * undefined FUN_10001540(void)
 * Address ranges: 10001540-1000155b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10001540(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  while (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*param_1;
    FUN_10001040(param_1);
    param_1 = puVar1;
  }
  return;
}

