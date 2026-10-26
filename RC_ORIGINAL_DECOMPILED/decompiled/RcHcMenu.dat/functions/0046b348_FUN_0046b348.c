/*
 * FUN_0046b348 at 0046b348
 * undefined __register FUN_0046b348(int * param_1, int param_2)
 * Address ranges: 0046b348-0046b3f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046b348(int *param_1,int param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar1;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar2;
  int *in_FS_OFFSET;
  int *piVar3;
  int iVar4;
  int iStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  byte *local_2c;
  int local_28;
  int local_24;
  undefined1 local_20;
  int local_1c;
  undefined1 local_18;
  uint local_14;
  int local_10;
  int local_8;
  
  puStack_38 = &stack0xfffffffc;
  local_28 = 0;
  local_2c = (byte *)0x0;
  puStack_3c = &LAB_0046b3f4;
  iStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_40;
  if (param_2 == 0) {
    iVar4 = 0x46b378;
    puStack_38 = &stack0xfffffffc;
    (**(code **)(*param_1 + 0xc0))();
  }
  else {
    iVar4 = 0x46b384;
    local_14 = FUN_00406074(param_2,&local_8,0);
    uVar1 = extraout_ECX;
    iVar2 = extraout_EDX;
    local_10 = extraout_EDX;
    if (local_8 != 0) {
      iVar4 = 0;
      local_20 = 0xb;
      local_24 = param_2;
      FUN_004692f8((int)param_1,&local_28);
      local_1c = local_28;
      local_18 = 0xb;
      piVar3 = &local_24;
      FUN_00406a48((undefined4 *)PTR_PTR_00572254,(int *)&local_2c);
      FUN_00466e30(local_2c,piVar3,1,iVar4);
      uVar1 = extraout_ECX_00;
      iVar2 = extraout_EDX_00;
    }
    FUN_0046b2e8((int)param_1,iVar2,uVar1,local_14,local_10);
  }
  *in_FS_OFFSET = iVar4;
  puStack_3c = &LAB_0046b3fb;
  iStack_40 = 0x46b3f3;
  FUN_00403dd4((int *)&local_2c,2);
  return;
}

