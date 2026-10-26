/*
 * FUN_0051b364 at 0051b364
 * undefined __register FUN_0051b364(int param_1)
 * Address ranges: 0051b364-0051b466
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051b364(int param_1)

{
  char cVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined *local_1c;
  int local_18;
  int local_14;
  int local_10;
  char local_9;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_1c = (undefined *)0x0;
  puStack_28 = &LAB_0051b467;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_8 = param_1;
  local_10 = FUN_0042a950(*(int **)(param_1 + 0x2f0));
  local_14 = FUN_0042a950(*(int **)(local_8 + 0x2f4));
  local_18 = FUN_0042a950(*(int **)(local_8 + 0x2f8));
  if ((((local_10 == 0) || ((local_10 != local_14 && (local_10 != local_18)))) &&
      ((local_14 == 0 || ((local_14 != local_10 && (local_14 != local_18)))))) &&
     ((local_18 == 0 || ((local_18 != local_10 && (local_18 != local_14)))))) {
    local_9 = '\x01';
  }
  else {
    local_9 = '\0';
  }
  if (local_9 == '\0') {
    FUN_00432bf4(*(int **)(local_8 + 0x2f0),extraout_EDX,extraout_ECX);
    cVar1 = FUN_00403270(*(int **)(local_8 + 0x2f0),extraout_EDX_00,extraout_ECX_00);
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(local_8 + 0x2f0) + 0xb0))();
    }
    FUN_00406a48(&PTR_DAT_0051a0e0,(int *)&local_1c);
    FUN_004579bc(local_1c,'\0');
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0051b46e;
  puStack_28 = (undefined1 *)0x51b466;
  FUN_00403db0((int *)&local_1c);
  return;
}

