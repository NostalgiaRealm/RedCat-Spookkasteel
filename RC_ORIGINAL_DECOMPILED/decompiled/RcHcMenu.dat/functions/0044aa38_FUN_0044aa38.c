/*
 * FUN_0044aa38 at 0044aa38
 * undefined __register FUN_0044aa38(int * param_1, int param_2)
 * Address ranges: 0044aa38-0044aa62
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044aa38(int *param_1,int param_2)

{
  if ((*(byte *)(param_1 + 0x11) & 8) != 0) {
    param_1[0x94] = param_2;
    *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 4;
    return;
  }
  FUN_00432190(param_1,param_2);
  return;
}

