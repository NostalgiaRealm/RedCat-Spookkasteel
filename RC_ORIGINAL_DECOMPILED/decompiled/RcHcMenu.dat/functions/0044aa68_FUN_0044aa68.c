/*
 * FUN_0044aa68 at 0044aa68
 * undefined __register FUN_0044aa68(int * param_1, int param_2)
 * Address ranges: 0044aa68-0044aa92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044aa68(int *param_1,int param_2)

{
  if ((*(byte *)(param_1 + 0x11) & 8) != 0) {
    param_1[0x95] = param_2;
    *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 8;
    return;
  }
  FUN_004321d4(param_1,param_2);
  return;
}

