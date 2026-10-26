/*
 * FUN_00535af0 at 00535af0
 * undefined __register FUN_00535af0(int * param_1, int * param_2)
 * Address ranges: 00535af0-00535c09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00535af0(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  uint *local_14;
  uint *local_10;
  int *local_c;
  int *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_14 = (uint *)0x0;
  local_10 = (uint *)0x0;
  puStack_1c = &LAB_00535c0a;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == (int *)0x0) {
    FUN_004fec0c(param_1,'\0');
  }
  else {
    puStack_18 = &stack0xfffffffc;
    uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0048ce0c);
    if ((char)uVar1 == '\0') {
      FUN_00403d94("Assertion failure");
    }
    piVar2 = (int *)FUN_00403224(local_c,(int)&PTR_FUN_0048ce0c);
    piVar2 = (int *)FUN_004744a0(piVar2);
    iVar3 = FUN_00494858(piVar2);
    FUN_0052f9c8(local_8,iVar3);
    iVar3 = FUN_00496d84((int)local_c);
    FUN_004fec0c(local_8,(*(byte *)(iVar3 + 0x18) & 0x20) != 0);
    if ((char)local_8[0x91] == '\0') {
      FUN_00406a48((undefined4 *)PTR_PTR_005720f4,(int *)&local_14);
      FUN_004fec40(local_8,local_14);
    }
    else {
      FUN_00406a48((undefined4 *)PTR_PTR_005724f0,(int *)&local_10);
      FUN_004fec40(local_8,local_10);
    }
  }
  FUN_004f1924((undefined4 *)local_8[0xbf],(int)local_c);
  if (local_c == (int *)0x0) {
    FUN_00502590(local_8);
    (**(code **)(*local_8 + 0x138))();
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00535c11;
  puStack_1c = (undefined1 *)0x535c09;
  FUN_00403dd4((int *)&local_14,2);
  return;
}

