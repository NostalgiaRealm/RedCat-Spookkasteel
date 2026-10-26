/*
 * FUN_0044c304 at 0044c304
 * undefined __register FUN_0044c304(int * param_1, int param_2, char param_3)
 * Address ranges: 0044c304-0044c348
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044c304(int *param_1,int param_2,char param_3)

{
  bool bVar1;
  undefined4 extraout_ECX;
  
  if (param_3 != '\0') {
    bVar1 = thunk_FUN_0043554d(param_2,param_1[0x83]);
    if (bVar1) {
      param_1[0x83] = *(int *)(param_2 + 0x24);
    }
  }
  bVar1 = thunk_FUN_0043554d(param_2,param_1[0x82]);
  if (bVar1) {
    FUN_0044c24c(param_1,(int *)0x0,extraout_ECX);
  }
  return;
}

