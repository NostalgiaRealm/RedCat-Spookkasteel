/*
 * FUN_004b8640 at 004b8640
 * undefined __register FUN_004b8640(int param_1)
 * Address ranges: 004b8640-004b86ab;004b86fa-004b872a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b8640(int param_1)

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
  if (*(int *)(param_1 + 0x14) == 0) {
    puStackY_28 = (undefined1 *)0x4b8675;
    FUN_004b6e60();
    puStackY_2c = &LAB_004b86ac;
    iStackY_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStackY_30;
    puStackY_28 = &stack0xfffffffc;
    FUN_00406aa0((int *)&local_c);
    iVar1 = (**(code **)(**(int **)(local_8 + 0xc) + 0x44))();
    iStackY_30 = 0x4b869d;
    FUN_00406b9c(iVar1);
    iStackY_30 = 0x4b86a2;
    FUN_004b6e4c();
    *in_FS_OFFSET = (int)puStackY_2c;
    puStackY_28 = (undefined1 *)0x4b870d;
    iVar1 = local_8;
    uVar2 = FUN_004b70d4((int *)&PTR_FUN_004b68cc,'\x01',local_c,local_8);
    *(undefined4 *)(local_8 + 0x14) = uVar2;
  }
  *in_FS_OFFSET = iVar1;
  FUN_00406aa0((int *)&local_c);
  return;
}

