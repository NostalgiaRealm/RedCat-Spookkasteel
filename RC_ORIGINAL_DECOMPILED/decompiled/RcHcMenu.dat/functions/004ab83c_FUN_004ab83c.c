/*
 * FUN_004ab83c at 004ab83c
 * undefined __register FUN_004ab83c(int * param_1, int * param_2, int * param_3, undefined4 param_4)
 * Address ranges: 004ab83c-004ab996
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ab83c(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  HDC pHVar5;
  int cx;
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  int x;
  int y;
  int x1;
  RECT *pRVar6;
  int y1;
  COLORREF CVar7;
  DWORD rop;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  RECT local_24;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  puStack_28 = (undefined1 *)0x4ab857;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  local_14 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',param_3);
  puStack_2c = &LAB_004ab997;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  uVar1 = (**(code **)(*local_10 + 0x2c))();
  (**(code **)(*local_14 + 0x40))(local_14,uVar1);
  uVar1 = (**(code **)(*local_10 + 0x20))();
  (**(code **)(*local_14 + 0x34))(local_14,uVar1);
  iVar2 = FUN_00421490(local_14);
  FUN_0041c318(*(int **)(iVar2 + 0x14),0x808000);
  uVar1 = (**(code **)(*local_14 + 0x20))();
  pRVar6 = &local_24;
  uVar3 = (**(code **)(*local_14 + 0x2c))();
  FUN_00411624(0,0,uVar3,&pRVar6->left,uVar1);
  pRVar6 = &local_24;
  piVar4 = (int *)FUN_00421490(local_14);
  FUN_0041c9f8(piVar4,pRVar6);
  (**(code **)(*local_14 + 0x3c))(local_14,1);
  FUN_004223a8(local_14,0x808000);
  CVar7 = 0;
  piVar4 = (int *)FUN_00421490(local_14);
  pHVar5 = (HDC)FUN_0041cf6c(piVar4);
  SetTextColor(pHVar5,CVar7);
  CVar7 = 0xffffff;
  piVar4 = (int *)FUN_00421490(local_14);
  pHVar5 = (HDC)FUN_0041cf6c(piVar4);
  SetBkColor(pHVar5,CVar7);
  iVar2 = FUN_00421490(local_14);
  FUN_0041c318(*(int **)(iVar2 + 0x14),param_4);
  rop = 0xe20746;
  y1 = 0;
  x1 = 0;
  piVar4 = (int *)FUN_00421490(local_10);
  pHVar5 = (HDC)FUN_0041cf6c(piVar4);
  iVar2 = (**(code **)(*local_10 + 0x20))();
  cx = (**(code **)(*local_10 + 0x2c))();
  y = 0;
  x = 0;
  piVar4 = (int *)FUN_00421490(local_14);
  hdc = (HDC)FUN_0041cf6c(piVar4);
  BitBlt(hdc,x,y,cx,iVar2,pHVar5,x1,y1,rop);
  FUN_0041c8d0(local_8,*local_c,local_c[1],local_14);
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004ab99e;
  puStack_2c = (undefined1 *)0x4ab996;
  FUN_00403094(local_14);
  return;
}

