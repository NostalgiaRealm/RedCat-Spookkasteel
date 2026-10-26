/*
 * FUN_004680d8 at 004680d8
 * undefined __register FUN_004680d8(int * param_1, undefined4 param_2, char param_3)
 * Address ranges: 004680d8-0046816e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004680d8(int *param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined1 local_10;
  byte *local_c;
  char local_5;
  
  puStack_20 = &stack0xfffffffc;
  local_c = (byte *)0x0;
  puStack_24 = &LAB_0046816f;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_5 = param_3;
  cVar1 = (**(code **)(*param_1 + 0x84))();
  if (cVar1 == '\0') {
    FUN_00468200(param_1);
  }
  iVar2 = (**(code **)(*param_1 + 0x50))(param_1,param_2);
  if (iVar2 < 0) {
    if (local_5 != '\0') {
      iVar2 = param_1[0xc];
      FUN_00406a48((undefined4 *)PTR_PTR_005724e0,(int *)&local_c);
      local_10 = 0xb;
      local_14 = param_2;
      FUN_00466e30(local_c,&local_14,0,iVar2);
    }
  }
  else {
    (**(code **)(*param_1 + 0x18))(param_1,iVar2);
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00468176;
  puStack_24 = (undefined1 *)0x46816e;
  FUN_00403db0((int *)&local_c);
  return;
}

