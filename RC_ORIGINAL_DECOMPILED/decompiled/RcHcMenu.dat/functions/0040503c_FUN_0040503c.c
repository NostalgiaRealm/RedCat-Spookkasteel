/*
 * FUN_0040503c at 0040503c
 * undefined __register FUN_0040503c(VARIANT * param_1, VARIANTARG * param_2, undefined4 param_3)
 * Address ranges: 0040503c-004050b4;004050bc-00405119;00405121-0040512f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040503c(VARIANT *param_1,VARIANTARG *param_2,undefined4 param_3)

{
  VARTYPE VVar1;
  VARTYPE VVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  _union_2683 local_14;
  
  VVar1 = (param_2->n1).n2.vt;
  VVar2 = (VARTYPE)param_3;
  if (VVar2 == VVar1) {
    puStack_20 = (undefined1 *)0x405058;
    FUN_00404e28(param_1,param_2);
  }
  else if (VVar1 == 0x100) {
    if (VVar2 != 8) {
      local_14.n2.vt = 0;
      puStack_20 = (undefined1 *)0x405084;
      FUN_0040501c((VARIANTARG *)&local_14.n2,(int)param_2);
      puStack_24 = &LAB_004050b5;
      uStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_28;
      puStack_20 = &stack0xfffffffc;
      FUN_00404f48(param_1,(VARIANTARG *)&local_14.n2,param_3);
      *in_FS_OFFSET = uStack_28;
      puStack_20 = (undefined1 *)0x40512b;
      puStack_24 = (undefined1 *)0x4050b4;
      FUN_00404de4((VARIANTARG *)&local_14.n2);
      return;
    }
    puStack_20 = (undefined1 *)0x405071;
    FUN_0040501c(param_1,(int)param_2);
  }
  else if ((VVar2 == 0x100) && (VVar1 != 0x101)) {
    if (VVar1 != 8) {
      local_14.n2.vt = 0;
      puStack_20 = (undefined1 *)0x4050eb;
      FUN_00404f48((VARIANTARG *)&local_14.n2,param_2,CONCAT22((short)((uint)param_3 >> 0x10),8));
      puStack_24 = &LAB_0040511a;
      uStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_28;
      puStack_20 = &stack0xfffffffc;
      FUN_00404fec(param_1,(int)&local_14);
      *in_FS_OFFSET = uStack_28;
      puStack_20 = (undefined1 *)0x40512b;
      puStack_24 = (undefined1 *)0x405119;
      FUN_00404de4((VARIANTARG *)&local_14.n2);
      return;
    }
    puStack_20 = (undefined1 *)0x4050d7;
    FUN_00404fec(param_1,(int)param_2);
  }
  else {
    puStack_20 = (undefined1 *)0x40512b;
    FUN_00404f48(param_1,param_2,param_3);
  }
  return;
}

