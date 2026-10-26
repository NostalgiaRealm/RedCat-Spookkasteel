/*
 * FUN_0053e450 at 0053e450
 * undefined __register FUN_0053e450(int * param_1, int param_2, undefined4 param_3, undefined2 param_4, LONG * param_5)
 * Address ranges: 0053e450-0053e662
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x53dec4 slot 47 for TAppObjMatrixBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x53dec4 slot 47 for
   TAppObjMatrixBox. Original bytes unchanged; names and types still inferred. */

void FUN_0053e450(int *param_1,int param_2,undefined4 param_3,undefined2 param_4,LONG *param_5)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  HDC pHVar5;
  int iVar6;
  int extraout_ECX;
  tagRECT *ptVar7;
  tagRECT *ptVar8;
  undefined4 *in_FS_OFFSET;
  byte bVar9;
  bool bVar10;
  UINT UVar11;
  undefined *puVar12;
  UINT UVar13;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  byte local_58 [28];
  tagRECT local_3c;
  tagRECT local_2c;
  undefined *local_1c;
  undefined4 local_18;
  int *local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  bVar9 = 0;
  puStack_68 = &stack0xfffffffc;
  local_1c = (undefined *)0x0;
  ptVar7 = &local_2c;
  for (iVar6 = 4; iVar6 != 0; iVar6 = iVar6 + -1) {
    ptVar7->left = *param_5;
    param_5 = param_5 + 1;
    ptVar7 = (tagRECT *)&ptVar7->top;
  }
  puStack_6c = &LAB_0053e663;
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004f854c((int)param_1,param_2,param_3,CONCAT22((short)((uint)&local_2c >> 0x10),param_4),
               &local_2c.left);
  uVar3 = FUN_0053e30c((int)local_8);
  if ((((char)uVar3 != '\0') && (local_8[0xf7] != 0)) && (-1 < local_c)) {
    iVar6 = FUN_0048ec24(local_8[0xf7]);
    uVar4 = iVar6 - 1;
    if (SBORROW4(iVar6,1)) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    if (local_c <= (int)uVar4) {
      cVar2 = (**(code **)(*(int *)local_8[0xf6] + 100))();
      piVar1 = local_8;
      if (cVar2 == '\0') {
        if (((char)local_8[0xf9] != '\0') && (local_c == 0)) {
          ptVar7 = &local_2c;
          ptVar8 = &local_3c;
          for (iVar6 = 4; iVar6 != 0; iVar6 = iVar6 + -1) {
            ptVar8->left = ptVar7->left;
            ptVar7 = (tagRECT *)((int)ptVar7 + ((uint)bVar9 * -2 + 1) * 4);
            ptVar8 = (tagRECT *)((int)ptVar8 + ((uint)bVar9 * -2 + 1) * 4);
          }
          bVar10 = SCARRY4(local_3c.left,1);
          local_3c.left = local_3c.left + 1;
          if (bVar10) {
            thunk_FUN_00402874((uint)piVar1);
          }
          uVar4 = local_3c.left + 0xf;
          if (SCARRY4(local_3c.left,0xf)) {
            uVar4 = thunk_FUN_00402874(uVar4);
          }
          local_3c.right = uVar4;
          iVar6 = (**(code **)(*(int *)local_8[0xf6] + 4))();
          cVar2 = FUN_004f9df4(local_8[0xf8],iVar6);
          if (cVar2 == '\0') {
            UVar13 = 0;
            UVar11 = 4;
            ptVar7 = &local_3c;
            pHVar5 = (HDC)FUN_0041cf6c((int *)local_8[0x7e]);
            uVar4 = DrawFrameControl(pHVar5,ptVar7,UVar11,UVar13);
          }
          else {
            UVar13 = 0x400;
            UVar11 = 4;
            ptVar7 = &local_3c;
            pHVar5 = (HDC)FUN_0041cf6c((int *)local_8[0x7e]);
            uVar4 = DrawFrameControl(pHVar5,ptVar7,UVar11,UVar13);
          }
          bVar10 = SCARRY4(local_2c.left,0xf);
          local_2c.left = local_2c.left + 0xf;
          if (bVar10) {
            thunk_FUN_00402874(uVar4);
          }
        }
        local_14 = (int *)FUN_00549b80(local_8[0xf6]);
        FUN_0048f02c((int *)local_8[0xf7],local_c,(undefined4 *)local_58);
        local_18 = FUN_00494c5c(local_14,local_58);
        (**(code **)(*local_8 + 0xc0))(local_8,local_18,&local_1c);
        InflateRect(&local_2c,-2,0);
        uVar4 = local_2c.top - 1;
        if (SBORROW4(local_2c.top,1)) {
          uVar4 = thunk_FUN_00402874(uVar4);
        }
        iVar6 = local_2c.left + 1;
        puVar12 = local_1c;
        if (SCARRY4(local_2c.left,1)) {
          thunk_FUN_00402874((uint)local_1c);
          iVar6 = extraout_ECX;
        }
        FUN_0041ccc0((int *)local_8[0x7e],&local_2c.left,iVar6,puVar12,uVar4);
        InflateRect(&local_2c,2,0);
        FUN_004f854c((int)local_8,local_c,local_10,
                     CONCAT22((short)((uint)&local_2c >> 0x10),param_4),&local_2c.left);
      }
    }
  }
  *in_FS_OFFSET = uStack_70;
  puStack_68 = &LAB_0053e66a;
  puStack_6c = (undefined1 *)0x53e662;
  FUN_00403db0((int *)&local_1c);
  return;
}

