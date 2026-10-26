/*
 * FUN_00439ac0 at 00439ac0
 * undefined __register FUN_00439ac0(int * param_1, int param_2)
 * Address ranges: 00439ac0-00439b37;00439b62-00439b65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00439ac0(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  if (*(int *)(param_2 + 4) != 0) {
    puStack_10 = (undefined1 *)0x439ae2;
    FUN_0041caa8(param_1[0x48]);
    puStack_14 = &LAB_00439b5b;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_1c = (undefined1 *)0x439b01;
    puStack_10 = &stack0xfffffffc;
    FUN_0041cfec((int *)param_1[0x48],*(int *)(param_2 + 4));
    puStack_20 = &LAB_00439b38;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    (**(code **)(*param_1 + 0x84))();
    *in_FS_OFFSET = uStack_24;
    puStack_1c = &LAB_00439b3f;
    puStack_20 = (undefined1 *)0x439b37;
    FUN_0041cfec((int *)param_1[0x48],0);
    return;
  }
  return;
}

