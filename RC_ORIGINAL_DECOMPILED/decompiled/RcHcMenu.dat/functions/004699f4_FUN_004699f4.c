/*
 * FUN_004699f4 at 004699f4
 * undefined __register FUN_004699f4(int * param_1, undefined2 * param_2)
 * Address ranges: 004699f4-00469aad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004699f4(int *param_1,undefined2 *param_2)

{
  bool bVar1;
  undefined2 uVar2;
  ushort uVar3;
  undefined2 extraout_var;
  LONG LVar4;
  int iVar5;
  LONG extraout_ECX;
  int *in_FS_OFFSET;
  int iVar6;
  int iStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  byte *local_14;
  int local_10;
  int local_c;
  undefined1 local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = (byte *)0x0;
  puStack_28 = &LAB_00469aae;
  iStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_2c;
  bVar1 = FUN_00405df8((int)param_2);
  if (bVar1) {
    uVar2 = FUN_00405d70((int)param_2);
    if (CONCAT22(extraout_var,uVar2) == 1) {
      uVar3 = FUN_00405bf8(param_2);
      if ((uVar3 & 0xfff) == 0x11) {
        LVar4 = FUN_00405d8c((int)param_2,1,extraout_ECX);
        iVar6 = 0x469a52;
        iVar5 = (**(code **)(*param_1 + 0x68))();
        if (LVar4 <= iVar5) goto LAB_00469a88;
      }
    }
  }
  iVar6 = 0;
  FUN_004692f8((int)param_1,&local_10);
  local_c = local_10;
  local_8 = 0xb;
  FUN_00406a48((undefined4 *)PTR_PTR_0057239c,(int *)&local_14);
  FUN_00466e30(local_14,&local_c,0,iVar6);
LAB_00469a88:
  FUN_00469acc((int)param_1,param_2,0);
  *in_FS_OFFSET = iVar6;
  puStack_28 = &LAB_00469ab5;
  iStack_2c = 0x469aad;
  FUN_00403dd4((int *)&local_14,2);
  return;
}

