/*
 * FUN_0049fa18 at 0049fa18
 * undefined __register FUN_0049fa18(int * param_1)
 * Address ranges: 0049fa18-0049fa62
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049fa18(int *param_1)

{
  if (param_1[0x12] != 0) {
    FUN_0040e4b4(param_1 + 0x12);
  }
  if (param_1[9] != 0) {
    FUN_004a0048(param_1,param_1 + 9);
  }
  *(undefined4 *)(param_1[10] + 4) = 0;
  FUN_0045b8fc((undefined4 *)param_1[0xc]);
  return;
}

