/*
 * FUN_0041b1ac at 0041b1ac
 * undefined __register FUN_0041b1ac(int param_1, int * param_2, undefined4 * param_3)
 * Address ranges: 0041b1ac-0041b207
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041b1ac(int param_1,int *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x41b1c2;
  FUN_0041af88(param_1);
  puStack_1c = &LAB_0041b208;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = (undefined4 *)param_2[4];
  if (param_3 != puVar1) {
    param_3[1] = param_3[1] + 1;
    param_2[4] = (int)param_3;
    puStack_18 = &stack0xfffffffc;
    FUN_00403270(param_2,extraout_EDX,extraout_ECX);
    FUN_0041b084(param_1,puVar1);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0041b20f;
  puStack_1c = (undefined1 *)0x41b207;
  FUN_0041af94(param_1);
  return;
}

