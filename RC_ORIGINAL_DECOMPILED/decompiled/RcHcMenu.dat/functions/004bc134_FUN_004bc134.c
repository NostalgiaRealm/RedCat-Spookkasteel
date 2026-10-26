/*
 * FUN_004bc134 at 004bc134
 * undefined __register FUN_004bc134(int param_1)
 * Address ranges: 004bc134-004bc19f;004bc1ee-004bc21e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004bc134(int param_1)

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
    puStackY_28 = (undefined1 *)0x4bc169;
    FUN_004b6e60();
    puStackY_2c = &LAB_004bc1a0;
    iStackY_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStackY_30;
    puStackY_28 = &stack0xfffffffc;
    FUN_00406aa0((int *)&local_c);
    iVar1 = (**(code **)(**(int **)(local_8 + 0xc) + 0x40))();
    iStackY_30 = 0x4bc191;
    FUN_00406b9c(iVar1);
    iStackY_30 = 0x4bc196;
    FUN_004b6e4c();
    *in_FS_OFFSET = (int)puStackY_2c;
    puStackY_28 = (undefined1 *)0x4bc201;
    iVar1 = local_8;
    uVar2 = FUN_004b70d4((int *)&PTR_FUN_004b6b48,'\x01',local_c,local_8);
    *(undefined4 *)(local_8 + 0x14) = uVar2;
  }
  *in_FS_OFFSET = iVar1;
  FUN_00406aa0((int *)&local_c);
  return;
}

