/*
 * FUN_0045b8fc at 0045b8fc
 * undefined __register FUN_0045b8fc(undefined4 * param_1)
 * Address ranges: 0045b8fc-0045b924
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045b8fc(undefined4 *param_1)

{
  if (*(char *)(param_1 + 2) == '\0') {
    FUN_0045b9f0(param_1);
    return;
  }
  (**(code **)(*(int *)param_1[1] + 8))();
  return;
}

