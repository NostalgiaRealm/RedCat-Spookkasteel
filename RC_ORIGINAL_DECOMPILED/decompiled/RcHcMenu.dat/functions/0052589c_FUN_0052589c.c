/*
 * FUN_0052589c at 0052589c
 * undefined __register FUN_0052589c(int param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 0052589c-005258d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0052589c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  *(undefined4 *)(param_4 + 8) = *(undefined4 *)(param_1 + 0x268);
  *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(param_1 + 0x26c);
  *(undefined4 *)(param_4 + 0x30) = *(undefined4 *)(*(int *)PTR_DAT_005723fc + 0x68);
  return;
}

