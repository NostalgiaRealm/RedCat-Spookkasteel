/*
 * FUN_004b632c at 004b632c
 * undefined __register FUN_004b632c(int param_1, int * param_2)
 * Address ranges: 004b632c-004b63c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b632c(int param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int *piVar3;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  byte *local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  undefined1 local_10;
  int *local_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_20 = (byte *)0x0;
  puStack_28 = &LAB_004b63c2;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_1 == 0) {
    FUN_00403d94("GetMessage_FieldMustHaveValue:  Parameter cannot be nil");
    puVar1 = puStack_24;
  }
  puStack_24 = puVar1;
  piVar3 = local_c;
  iVar2 = FUN_00496d84(local_8);
  local_1c = *(undefined4 *)(iVar2 + 0x24);
  local_18 = 0xb;
  iVar2 = FUN_00496d84(local_8);
  local_14 = *(undefined4 *)(iVar2 + 0x24);
  local_10 = 0xb;
  FUN_00406a48(&PTR_DAT_004b6324,(int *)&local_20);
  FUN_0040a894(local_20,&local_1c,1,piVar3);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004b63c9;
  puStack_28 = (undefined1 *)0x4b63c1;
  FUN_00403db0((int *)&local_20);
  return;
}

