/*
 * FUN_00473600 at 00473600
 * undefined __register FUN_00473600(int * param_1)
 * Address ranges: 00473600-00473619
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00473600(int *param_1)

{
  if (0 < param_1[0x1c]) {
    (**(code **)(*param_1 + 0x174))();
    return;
  }
  FUN_0047345c(param_1,1);
  return;
}

