/*
 * FUN_00502590 at 00502590
 * undefined __register FUN_00502590(int * param_1)
 * Address ranges: 00502590-005025d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00502590(int *param_1)

{
  if ((*(byte *)(param_1 + 0x97) & 4) != 0) {
    (**(code **)(*param_1 + 0x104))();
    (**(code **)(*param_1 + 0x138))();
    *(byte *)(param_1 + 0x97) = *(byte *)(param_1 + 0x97) & 0xfb;
  }
  (**(code **)(*param_1 + 0x10c))();
  return;
}

