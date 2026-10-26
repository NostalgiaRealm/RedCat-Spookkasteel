/*
 * FUN_004e2bf4 at 004e2bf4
 * undefined __register FUN_004e2bf4(int param_1)
 * Address ranges: 004e2bf4-004e2cb0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e2bf4(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar4;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_1c;
  undefined4 local_18;
  undefined1 local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puVar4 = &stack0xfffffffc;
  local_c = param_1;
  if (*(int *)(param_1 + 0x1c) == 0) {
    puStack_20 = (undefined1 *)0x4e2c1a;
    FUN_00403d94("Assertion failure");
  }
  local_8 = (int *)0x0;
  puStack_24 = &LAB_004e2cb1;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  local_8 = FUN_004e2430((int *)&PTR_FUN_004e23b0,'\x01',10);
  local_18 = 0;
  local_14 = 0;
  iVar1 = FUN_0045da14(local_c);
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_1c = uVar2 + 1;
    local_10 = 0;
    do {
      FUN_004e2654(local_8,&local_18);
      local_10 = local_10 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  uVar2 = FUN_0045da14(local_c);
  iVar1 = uVar2 - 1;
  uVar3 = extraout_ECX;
  if (SBORROW4(uVar2,1)) {
    thunk_FUN_00402874(uVar2);
    uVar3 = extraout_ECX_00;
    iVar1 = extraout_EDX;
  }
  FUN_004e2a28(0,iVar1,uVar3,(int)puVar4);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004e2cb8;
  puStack_24 = (undefined1 *)0x4e2cb0;
  FUN_00403094(local_8);
  return;
}

