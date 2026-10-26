/*
 * FUN_00472b8c at 00472b8c
 * undefined __register FUN_00472b8c(int param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 00472b8c-00472bb1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00472b8c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (param_1 != 0) {
    for (iVar1 = *(int *)(*(int *)(param_4 + -4) + 0x3c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      if (*(char *)(iVar1 + 0x15) != '\0') {
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + param_1;
      }
    }
  }
  return;
}

