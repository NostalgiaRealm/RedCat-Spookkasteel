/*
 * FUN_004cb430 at 004cb430
 * undefined __register FUN_004cb430(int * param_1)
 * Address ranges: 004cb430-004cb667
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4c9dc4 slot 33 for TSpeedButton. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4c9dc4 slot 33 for
   TSpeedButton. Original bytes unchanged; names and types still inferred. */

void FUN_004cb430(int *param_1)

{
  char cVar1;
  HDC pHVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  UINT UVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  tagRECT *ptVar10;
  UINT UVar11;
  undefined *puVar12;
  int *piVar13;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined *local_30;
  tagRECT local_2c;
  tagRECT local_1c;
  int local_c [2];
  
  puStack_3c = &stack0xfffffffc;
  local_30 = (undefined *)0x0;
  puStack_40 = &LAB_004cb668;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if (cVar1 == '\0') {
    *(undefined1 *)((int)param_1 + 0x142) = 1;
    *(undefined1 *)((int)param_1 + 0x131) = 0;
  }
  else if (*(char *)((int)param_1 + 0x142) == '\x01') {
    if (((char)param_1[0x4c] == '\0') || (param_1[0x4a] == 0)) {
      *(undefined1 *)((int)param_1 + 0x142) = 0;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x142) = 3;
    }
  }
  FUN_0041ce68(param_1[0x48]);
  FUN_00411624(0,0,param_1[0xe],&local_1c.left,param_1[0xf]);
  if ((char)param_1[0x50] == '\0') {
    UVar5 = 0x2010;
    if ((byte)(*(char *)((int)param_1 + 0x142) - 2U) < 2) {
      UVar5 = 0x2210;
    }
    UVar11 = 4;
    ptVar10 = &local_1c;
    pHVar2 = (HDC)FUN_0041cf6c((int *)param_1[0x48]);
    DrawFrameControl(pHVar2,ptVar10,UVar11,UVar5);
  }
  else {
    if (((byte)(*(char *)((int)param_1 + 0x142) - 2U) < 2) ||
       (((*(char *)((int)param_1 + 0x141) != '\0' && (*(char *)((int)param_1 + 0x142) != '\x01')) ||
        ((*(byte *)(param_1 + 8) & 0x10) != 0)))) {
      uVar4 = *(uint *)(&DAT_00571d18 + (uint)*(byte *)(param_1 + 0x4e) * 4) | 0xf;
      UVar5 = *(UINT *)(&DAT_00571d10 + (uint)((byte)(*(char *)((int)param_1 + 0x142) - 2U) < 2) * 4
                       );
      ptVar10 = &local_1c;
      pHVar2 = (HDC)FUN_0041cf6c((int *)param_1[0x48]);
      DrawEdge(pHVar2,ptVar10,UVar5,uVar4);
    }
    else if ((char)param_1[0x4e] == '\0') {
      FUN_0041c318(*(int **)(param_1[0x48] + 0x14),param_1[0x18]);
      FUN_0041c9f8((int *)param_1[0x48],&local_1c);
    }
    InflateRect(&local_1c,-1,-1);
  }
  if ((byte)(*(char *)((int)param_1 + 0x142) - 2U) < 2) {
    if ((*(char *)((int)param_1 + 0x142) == '\x03') &&
       (((char)param_1[0x50] == '\0' || (*(char *)((int)param_1 + 0x141) == '\0')))) {
      uVar3 = FUN_004230a8(0x8000000f,0x80000014);
      FUN_0041c2ec(*(int **)(param_1[0x48] + 0x14),uVar3);
      FUN_0041c9f8((int *)param_1[0x48],&local_1c);
    }
    local_c[0] = 1;
    local_c[1] = 1;
  }
  else {
    local_c[0] = 0;
    local_c[1] = 0;
  }
  piVar13 = local_c;
  FUN_00432714((int)param_1,(int *)&local_30);
  bVar9 = *(byte *)((int)param_1 + 0x133);
  iVar8 = param_1[0x4f];
  iVar7 = param_1[0x4d];
  bVar6 = *(byte *)((int)param_1 + 0x142);
  cVar1 = (char)param_1[0x4e];
  puVar12 = local_30;
  uVar4 = FUN_00434648(param_1,0,extraout_ECX);
  FUN_004cb2cc(param_1[0x4b],(int *)param_1[0x48],&local_1c.left,&local_2c,uVar4,cVar1,bVar6,iVar7,
               iVar8,bVar9,puVar12,piVar13);
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_004cb66f;
  puStack_40 = (undefined1 *)0x4cb667;
  FUN_00403db0((int *)&local_30);
  return;
}

