/*
 * FUN_00475cbc at 00475cbc
 * undefined __register FUN_00475cbc(int param_1, int * param_2, undefined1 param_3, VARIANTARG * param_4)
 * Address ranges: 00475cbc-00475d52
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00475cbc(int param_1,int *param_2,undefined1 param_3,VARIANTARG *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *in_FS_OFFSET;
  VARIANTARG *pVVar3;
  int iStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  _union_2683 local_18;
  undefined3 uStack_8;
  undefined1 local_5;
  
  puStack_28 = &stack0xfffffffc;
  local_18._12_4_ = 0;
  local_18._8_4_ = 0;
  local_18.decVal.Hi32 = 0;
  local_18._0_4_ = 0;
  uStack_8 = 0;
  puStack_2c = &LAB_00475d53;
  iStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_30;
  local_5 = param_3;
  iVar1 = FUN_00475d68(param_1,'\x01',0,0,0,param_4);
  *(char *)(iVar1 + 0x20) = (char)param_2[0xd];
  uVar2 = (**(code **)(*param_2 + 0x80))();
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  FUN_004054ac((VARIANTARG *)&local_18.n2,(undefined4 *)param_2[0xb]);
  pVVar3 = (VARIANTARG *)0x0;
  uVar2 = FUN_00475d68(param_1,'\0',0,0,0,(VARIANTARG *)&local_18.n2);
  FUN_00475d68(param_1,'\x02',local_5,iVar1,uVar2,pVVar3);
  *in_FS_OFFSET = iVar1;
  FUN_00405bcc((VARIANTARG *)&local_18.n2);
  return;
}

