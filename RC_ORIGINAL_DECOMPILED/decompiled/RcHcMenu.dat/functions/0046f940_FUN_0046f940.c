/*
 * FUN_0046f940 at 0046f940
 * undefined4 __register FUN_0046f940(int param_1)
 * Address ranges: 0046f940-0046f96e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0046f940(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 0x2c) == 0)) {
      *(int *)(param_1 + 0xc) = param_1;
    }
    else {
      uVar1 = FUN_0046f240(*(int *)(param_1 + 4),*(undefined **)(param_1 + 0x2c));
      *(undefined4 *)(param_1 + 0xc) = uVar1;
    }
  }
  return *(undefined4 *)(param_1 + 0xc);
}

