/*
 * FUN_0056ca70 at 0056ca70
 * undefined __register FUN_0056ca70(int * param_1)
 * Address ranges: 0056ca70-0056cb3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0056ca70(int *param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined *local_1c;
  int local_18;
  undefined *local_14;
  int local_10;
  char *local_c;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_c = (char *)0x0;
  local_10 = 0;
  local_14 = (undefined *)0x0;
  local_18 = 0;
  local_1c = (undefined *)0x0;
  puStack_24 = &LAB_0056cb40;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_8 = param_1;
  FUN_00402a5c(0,(int *)&local_14);
  FUN_0040a014(local_14,(int *)&local_c);
  local_10 = FUN_0040431c(".",local_c);
  if (0 < local_10) {
    uVar1 = FUN_00404030((int)local_c);
    iVar2 = uVar1 - local_10;
    if (SBORROW4(uVar1,local_10)) {
      uVar1 = thunk_FUN_00402874(uVar1);
      iVar2 = extraout_ECX;
    }
    iVar3 = local_10 + 1;
    if (SCARRY4(local_10,1)) {
      thunk_FUN_00402874(uVar1);
      iVar2 = extraout_ECX_00;
      iVar3 = extraout_EDX;
    }
    FUN_00404278((int *)&local_c,iVar3,iVar2);
  }
  FUN_00402a5c(0,(int *)&local_1c);
  FUN_00409fb8(local_1c,&local_18);
  FUN_004040f0((int *)&local_c,4);
  FUN_00403e04(local_8,(undefined4 *)local_c);
  *in_FS_OFFSET = &DAT_0056cb6c;
  FUN_00403dd4((int *)&local_1c,3);
  FUN_00403db0((int *)&local_c);
  return;
}

