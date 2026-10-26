/*
 * FUN_0043e788 at 0043e788
 * undefined __register FUN_0043e788(int * param_1, int * param_2, int param_3)
 * Address ranges: 0043e788-0043e848;0043e850-0043e886
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043e788(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  HBITMAP pHVar4;
  HBITMAP pHVar5;
  HIMAGELIST himl;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  puStack_20 = (undefined1 *)0x43e7a3;
  piVar1 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',param_3);
  puStack_24 = &LAB_0043e887;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if ((*(char *)((int)param_1 + 0x35) != '\0') && (param_3 != -1)) {
    puStack_20 = &stack0xfffffffc;
    piVar2 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',extraout_ECX);
    uVar6 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffcc;
    (**(code **)(*piVar2 + 8))(piVar2,param_2);
    FUN_004223a8(piVar2,param_3);
    FUN_0043e3bc(param_1);
    iVar3 = (**(code **)(*piVar2 + 100))();
    pHVar4 = (HBITMAP)FUN_0043e578((int)param_1,iVar3);
    pHVar5 = (HBITMAP)FUN_0043e598((int)param_1,param_2,piVar1);
    ImageList_Add((HIMAGELIST)param_1[0xc],pHVar5,pHVar4);
    *in_FS_OFFSET = uVar6;
    FUN_00403094(piVar2);
    return;
  }
  pHVar5 = (HBITMAP)0x0;
  puStack_20 = &stack0xfffffffc;
  pHVar4 = (HBITMAP)FUN_0043e598((int)param_1,param_2,piVar1);
  himl = (HIMAGELIST)FUN_0043e588(param_1);
  ImageList_Add(himl,pHVar4,pHVar5);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0043e88e;
  puStack_24 = (undefined1 *)0x43e886;
  FUN_00403094(piVar1);
  return;
}

