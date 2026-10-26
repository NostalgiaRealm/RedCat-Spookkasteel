/*
 * FUN_0054bd44 at 0054bd44
 * undefined __register FUN_0054bd44(undefined4 * param_1)
 * Address ranges: 0054bd44-0054be13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054bd44(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar3;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 *local_8;
  
  puStack_c = (undefined1 *)0x54bd53;
  local_8 = param_1;
  FUN_004041e4((int)param_1);
  puStack_10 = &LAB_0054be14;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  puStack_c = &stack0xfffffffc;
  if (DAT_00571f74 != (undefined *)0x0) {
    puStack_c = &stack0xfffffffc;
    FUN_00403d94("Help context file already set");
  }
  FUN_00403e04((int *)&DAT_00571f74,local_8);
  uVar1 = FUN_00409dd0(DAT_00571f74);
  uVar3 = extraout_ECX;
  if ((char)uVar1 == '\0') {
    FUN_00403d94("Help context file not found");
    uVar3 = extraout_ECX_00;
  }
  if (DAT_00571f78 != 0) {
    FUN_00403d94("Help contexts already set");
    uVar3 = extraout_ECX_01;
  }
  DAT_00571f78 = FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',uVar3);
  piVar2 = FUN_0045bee8(&DAT_0045bbbc,extraout_EDX,extraout_ECX_02);
  FUN_0045c024(piVar2,0x54b9c8);
  FUN_0054b9e4(&DAT_00571f78,&DAT_00571f74);
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_0054be1b;
  puStack_10 = (undefined1 *)0x54be13;
  FUN_00403db0((int *)&local_8);
  return;
}

