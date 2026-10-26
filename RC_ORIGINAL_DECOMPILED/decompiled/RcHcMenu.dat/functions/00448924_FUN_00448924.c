/*
 * FUN_00448924 at 00448924
 * undefined __register FUN_00448924(int param_1)
 * Address ranges: 00448924-0044895a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00448924(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    uVar1 = FUN_00448adc(param_1);
    if ((char)uVar1 != '\0') {
      uVar1 = FUN_00432d6c(*(int *)(param_1 + 4));
      if ((char)uVar1 == '\0') {
        FUN_0044902c(param_1,0);
      }
      else {
        FUN_0044902c(param_1,*(int *)(param_1 + 0x10));
      }
    }
  }
  return;
}

