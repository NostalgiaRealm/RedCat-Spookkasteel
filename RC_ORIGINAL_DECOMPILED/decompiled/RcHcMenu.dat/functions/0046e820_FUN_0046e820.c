/*
 * FUN_0046e820 at 0046e820
 * undefined __register FUN_0046e820(int * param_1, int param_2)
 * Address ranges: 0046e820-0046e88c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046e820(int *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_18 = &LAB_0046e88d;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (param_2 != param_1[1]) {
    puVar1 = &stack0xfffffffc;
    if (*(char *)((int)param_1 + 0x19) != '\0') {
      FUN_00406a48((undefined4 *)PTR_PTR_005724f8,(int *)&local_8);
      FUN_00466d84(local_8,param_1[1]);
      puVar1 = puStack_14;
    }
    puStack_14 = puVar1;
    if (param_1[1] != 0) {
      FUN_0046edb4(param_1[1],param_1);
    }
    if (param_2 != 0) {
      FUN_0046ed88(param_2,param_1);
    }
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0046e894;
  puStack_18 = (undefined1 *)0x46e88c;
  FUN_00403db0((int *)&local_8);
  return;
}

