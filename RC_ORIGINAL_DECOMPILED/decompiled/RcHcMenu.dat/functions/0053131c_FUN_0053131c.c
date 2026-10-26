/*
 * FUN_0053131c at 0053131c
 * undefined __register FUN_0053131c(void)
 * Address ranges: 0053131c-0053142f;00531437-00531451
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053131c(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  int *in_FS_OFFSET;
  undefined1 uVar2;
  int in_stack_00000004;
  int iStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int iStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  uint *local_1c;
  int local_18;
  int local_14;
  undefined4 *local_10;
  int *local_c;
  undefined4 uStack_8;
  
  puStack_20 = &stack0xfffffffc;
  local_c = (int *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  local_18 = 0;
  local_1c = (uint *)0x0;
  puStack_24 = &LAB_00531452;
  iStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_28;
  uStack_8 = 0;
  if (*(int *)(*(int *)(*(int *)(in_stack_00000004 + -4) + 0x210) + 0x234) != 0) {
    puStack_2c = (undefined1 *)0x531366;
    FUN_00520c58(*(int *)(*(int *)(in_stack_00000004 + -4) + 0x210),&local_14);
    if (local_14 != 0) {
      puStack_2c = (undefined1 *)0x53137c;
      local_c = FUN_005167c0((int *)&DAT_0051670c,'\x01',extraout_ECX);
      uVar2 = 1;
      puStack_30 = &LAB_00531430;
      iStack_34 = *in_FS_OFFSET;
      *in_FS_OFFSET = (int)&iStack_34;
      puStack_2c = &stack0xfffffffc;
      FUN_00516860((int)local_c,(HKEY)0x80000001);
      FUN_00520c58(*(int *)(*(int *)(in_stack_00000004 + -4) + 0x210),&local_18);
      iVar1 = local_18;
      FUN_004040f0((int *)&local_10,3);
      FUN_00404238((int)local_10,1,1,(int *)&local_1c);
      FUN_00404140(local_1c,(uint *)&DAT_00531468);
      if (!(bool)uVar2) {
        FUN_0040407c((int *)&local_10,(undefined4 *)&DAT_00531468,local_10);
      }
      uVar2 = FUN_005168c4((int)local_c,(int)local_10,'\0');
      uStack_8 = CONCAT13(uVar2,(undefined3)uStack_8);
      *in_FS_OFFSET = iVar1;
      FUN_00403094(local_c);
      return;
    }
  }
  *in_FS_OFFSET = iStack_28;
  puStack_20 = &LAB_00531459;
  puStack_24 = (undefined1 *)0x531451;
  FUN_00403dd4((int *)&local_1c,4);
  return;
}

