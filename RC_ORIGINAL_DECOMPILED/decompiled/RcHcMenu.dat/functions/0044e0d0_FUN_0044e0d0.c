/*
 * FUN_0044e0d0 at 0044e0d0
 * undefined4 __register FUN_0044e0d0(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 0044e0d0-0044e0fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0044e0d0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  if ((param_1 != (int *)0x0) &&
     (uVar1 = FUN_00403270(param_1,*(undefined4 *)(*(int *)(param_4 + -4) + 8),param_3),
     (char)uVar1 != '\0')) {
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return 0;
}

