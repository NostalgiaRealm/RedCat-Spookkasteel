/*
 * FUN_0046e5d0 at 0046e5d0
 * undefined __register FUN_0046e5d0(int param_1, int * param_2)
 * Address ranges: 0046e5d0-0046e5f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046e5d0(int param_1,int *param_2)

{
  if ((*(byte *)(param_1 + 0x20) & 0x10) != 0) {
    FUN_00403e04(param_2,*(undefined4 **)(param_1 + 0x14));
    return;
  }
  FUN_00403db0(param_2);
  return;
}

