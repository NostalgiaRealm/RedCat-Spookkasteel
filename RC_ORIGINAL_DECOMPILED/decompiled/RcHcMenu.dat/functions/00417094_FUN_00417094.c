/*
 * FUN_00417094 at 00417094
 * undefined __register FUN_00417094(uint param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 00417094-004170e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00417094(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 local_104 [64];
  
  while (0 < (int)param_1) {
    if ((int)param_1 < 0x101) {
      FUN_0041586c(*(int *)(param_4 + -4),local_104,param_1);
      param_1 = 0;
    }
    else {
      FUN_0041586c(*(int *)(param_4 + -4),local_104,0x100);
      param_1 = param_1 - 0x100;
    }
  }
  return;
}

