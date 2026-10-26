/*
 * FUN_0053ee5c at 0053ee5c
 * undefined __register FUN_0053ee5c(int * param_1, char param_2)
 * Address ranges: 0053ee5c-0053eebb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053ee5c(int *param_1,char param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0053eb9c((int)param_1);
  if ((char)uVar1 != param_2) {
    if (param_2 == '\0') {
      if (param_1[0x85] != 0) {
        FUN_00549a9c((int *)param_1[0x85]);
        FUN_00403094((int *)param_1[0x85]);
        param_1[0x85] = 0;
      }
    }
    else {
      FUN_0053f5f4(param_1);
    }
  }
  return;
}

