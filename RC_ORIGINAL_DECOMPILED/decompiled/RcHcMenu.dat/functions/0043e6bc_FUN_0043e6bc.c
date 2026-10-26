/*
 * FUN_0043e6bc at 0043e6bc
 * undefined __register FUN_0043e6bc(int * param_1, int * param_2, int * param_3)
 * Address ranges: 0043e6bc-0043e74d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043e6bc(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  HBITMAP hbmMask;
  HBITMAP hbmImage;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  puStack_20 = (undefined1 *)0x43e6d7;
  piVar1 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',param_3);
  puStack_24 = &LAB_0043e76b;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x43e6f4;
  puStack_20 = &stack0xfffffffc;
  piVar2 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',extraout_ECX);
  puStack_30 = &LAB_0043e74e;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  FUN_0043e3bc(param_1);
  hbmMask = (HBITMAP)FUN_0043e598((int)param_1,param_3,piVar2);
  hbmImage = (HBITMAP)FUN_0043e598((int)param_1,param_2,piVar1);
  ImageList_Add((HIMAGELIST)param_1[0xc],hbmImage,hbmMask);
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0043e755;
  puStack_30 = (undefined1 *)0x43e74d;
  FUN_00403094(piVar2);
  return;
}

