/*
 * FUN_004e3338 at 004e3338
 * undefined __register FUN_004e3338(int * param_1, int param_2)
 * Address ranges: 004e3338-004e33ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e3338(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 extraout_ECX;
  
  FUN_0054728c(param_1,param_2);
  piVar1 = FUN_004e2964((int *)&PTR_FUN_004e2414,'\x01',param_1[0xf],10);
  param_1[0x20] = (int)piVar1;
  piVar1 = FUN_004e2430((int *)&PTR_FUN_004e23b0,'\x01',10);
  param_1[0x21] = (int)piVar1;
  param_1[0x22] = -0x80000000;
  piVar1 = FUN_0048ea9c((int *)&PTR_FUN_0048e30c,'\x01',extraout_ECX);
  param_1[0x25] = (int)piVar1;
  return;
}

