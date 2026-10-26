/*
 * FUN_00449b48 at 00449b48
 * undefined __register FUN_00449b48(int * param_1, int param_2)
 * Address ranges: 00449b48-00449ba8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00449b48(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_10 = *(undefined4 *)(param_2 + 4);
  puStack_18 = &LAB_00449ba9;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_c = param_2;
  local_8 = param_1;
  uVar1 = FUN_0040320c(param_1,(int)&PTR_FUN_004460ec);
  if ((char)uVar1 == '\0') {
    *(undefined4 *)(local_c + 4) = 1;
  }
  FUN_00437dac(local_8,local_c);
  *in_FS_OFFSET = uStack_1c;
  *(undefined4 *)(local_c + 4) = local_10;
  return;
}

