/*
 * FUN_0044d11c at 0044d11c
 * int __register FUN_0044d11c(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 0044d11c-0044d158
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0044d11c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = FUN_00444390(param_1,*(int *)(*(int *)(*(int *)(param_4 + -4) + 8) + 8),'\x01');
    if (iVar1 == 0) {
      iVar1 = FUN_00444390(param_1,*(int *)(*(int *)(*(int *)(param_4 + -4) + 8) + 0xc),'\0');
    }
  }
  return iVar1;
}

