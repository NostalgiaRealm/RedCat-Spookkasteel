/*
 * FUN_004b7790 at 004b7790
 * undefined __register FUN_004b7790(int param_1)
 * Address ranges: 004b7790-004b77fb;004b784a-004b787a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b7790(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *in_FS_OFFSET;
  int iStackY_30;
  undefined1 *puStackY_2c;
  undefined1 *puStackY_28;
  int *local_c;
  int local_8;
  
  local_c = (int *)0x0;
  iVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&stack0xffffffdc;
  local_8 = param_1;
  if (*(int *)(param_1 + 0x18) == 0) {
    puStackY_28 = (undefined1 *)0x4b77c5;
    FUN_004b6e60();
    puStackY_2c = &LAB_004b77fc;
    iStackY_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStackY_30;
    puStackY_28 = &stack0xfffffffc;
    FUN_00406aa0((int *)&local_c);
    iVar1 = (**(code **)(**(int **)(local_8 + 0xc) + 0x40))();
    iStackY_30 = 0x4b77ed;
    FUN_00406b9c(iVar1);
    iStackY_30 = 0x4b77f2;
    FUN_004b6e4c();
    *in_FS_OFFSET = (int)puStackY_2c;
    puStackY_28 = (undefined1 *)0x4b785d;
    iVar1 = local_8;
    uVar2 = FUN_004b70d4((int *)&PTR_FUN_004b67fc,'\x01',local_c,local_8);
    *(undefined4 *)(local_8 + 0x18) = uVar2;
  }
  *in_FS_OFFSET = iVar1;
  FUN_00406aa0((int *)&local_c);
  return;
}

