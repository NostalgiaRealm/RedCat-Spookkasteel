/*
 * FUN_0047627c at 0047627c
 * undefined __register FUN_0047627c(int param_1, int param_2)
 * Address ranges: 0047627c-004762bd;00476306-004763ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0047627c(int param_1,int param_2)

{
  int *in_FS_OFFSET;
  int iVar1;
  int iStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_14;
  undefined1 local_10;
  byte *local_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_c = (byte *)0x0;
  local_8 = 0;
  puStack_28 = &LAB_004763cf;
  iStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_2c;
  switch(*(byte *)(param_2 + 0x20)) {
  default:
    iVar1 = 0;
    puStack_24 = &stack0xfffffffc;
    FUN_00406a48((undefined4 *)PTR_PTR_00572244,(int *)&local_c);
    local_14 = param_2 + 8;
    local_10 = 0xd;
    FUN_00466e30(local_c,&local_14,0,iVar1);
    break;
  case 1:
  case 0x17:
  case 0x18:
  case 0x23:
    puStack_24 = &stack0xfffffffc;
    FUN_004052a4(&local_8,(VARIANTARG *)(param_2 + 8));
    iVar1 = 0x47633f;
    FUN_00476148(param_1,local_8);
    break;
  case 2:
  case 3:
  case 4:
  case 0xe:
    iVar1 = 0x476312;
    puStack_24 = &stack0xfffffffc;
    FUN_00475fe8(param_1,*(byte *)(param_2 + 0x20),(VARIANTARG *)(param_2 + 8));
    break;
  case 5:
    iVar1 = 0x476377;
    puStack_24 = &stack0xfffffffc;
    FUN_00475ec0(param_1,(VARIANTARG *)(param_2 + 8),0);
    break;
  case 6:
  case 7:
    iVar1 = 0x476323;
    puStack_24 = &stack0xfffffffc;
    FUN_00475fa4(param_1,(VARIANTARG *)(param_2 + 8));
    break;
  case 8:
    iVar1 = 0x476388;
    puStack_24 = &stack0xfffffffc;
    FUN_00475e5c(param_1,(VARIANTARG *)(param_2 + 8),*(uint *)(param_2 + 0x24));
    break;
  case 9:
    iVar1 = 0x47634d;
    puStack_24 = &stack0xfffffffc;
    FUN_00475ee8(param_1,(VARIANTARG *)(param_2 + 8));
    break;
  case 10:
    iVar1 = 0x47635b;
    puStack_24 = &stack0xfffffffc;
    FUN_004761f8(param_1,(VARIANTARG *)(param_2 + 8));
    break;
  case 0xb:
    iVar1 = 0x476369;
    FUN_00475f40(param_1,(VARIANTARG *)(param_2 + 8));
  }
  *in_FS_OFFSET = iVar1;
  puStack_28 = &LAB_004763d6;
  iStack_2c = 0x4763ce;
  FUN_00403dd4((int *)&local_c,2);
  return;
}

