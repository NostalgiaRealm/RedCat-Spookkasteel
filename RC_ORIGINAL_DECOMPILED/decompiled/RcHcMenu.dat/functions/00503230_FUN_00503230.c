/*
 * FUN_00503230 at 00503230
 * undefined __register FUN_00503230(int * param_1)
 * Address ranges: 00503230-005033dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00503230(int *param_1)

{
  int iVar1;
  uint uVar2;
  HDC hdc;
  BOOL BVar3;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined *puVar4;
  RECT *lprect;
  LONG LVar5;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined *local_2c;
  RECT local_28;
  int local_18;
  char local_11;
  uint local_10;
  int local_c;
  int *local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_2c = (undefined *)0x0;
  puStack_38 = &LAB_005033dd;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_8 = param_1;
  iVar1 = FUN_00502c08(param_1);
  if (-1 < iVar1) {
    local_18 = iVar1 + 1;
    local_c = 0;
    do {
      uVar2 = local_8[0x83] + local_c;
      if (SCARRY4(local_8[0x83],local_c)) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      local_10 = uVar2;
      FUN_005033ec(local_8,uVar2,&local_28.left);
      lprect = &local_28;
      hdc = (HDC)FUN_0041cf6c((int *)local_8[0x7c]);
      BVar3 = RectVisible(hdc,lprect);
      if (BVar3 != 0) {
        if (((local_10 == local_8[0x81]) && ((char)local_8[0x85] == '\0')) ||
           ((local_10 == local_8[0x84] && ((char)local_8[0x85] != '\0')))) {
          local_11 = '\x01';
        }
        else {
          local_11 = '\0';
        }
        FUN_0041c318(*(int **)(local_8[0x7c] + 0x14),local_8[0x18]);
        FUN_0041ce68(local_8[0x7c]);
        if (local_11 != '\0') {
          FUN_0041c318(*(int **)(local_8[0x7c] + 0x14),0x8000000d);
          FUN_0041bb48(*(int **)(local_8[0x7c] + 0xc),-0x7ffffff2,extraout_ECX);
        }
        FUN_0041c9f8((int *)local_8[0x7c],&local_28);
        iVar1 = (**(code **)(*(int *)local_8[0x82] + 0x14))();
        if ((int)local_10 < iVar1) {
          LVar5 = local_28.top;
          (**(code **)(*(int *)local_8[0x82] + 0xc))((int *)local_8[0x82],local_10,&local_2c);
          iVar1 = local_28.left + 2;
          puVar4 = local_2c;
          if (SCARRY4(local_28.left,2)) {
            thunk_FUN_00402874((uint)local_2c);
            iVar1 = extraout_ECX_00;
          }
          FUN_0041ccc0((int *)local_8[0x7c],&local_28.left,iVar1,puVar4,LVar5);
        }
        if (local_11 != '\0') {
          FUN_0041c97c((int *)local_8[0x7c],&local_28);
        }
      }
      local_c = local_c + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_005033e4;
  puStack_38 = (undefined1 *)0x5033dc;
  FUN_00403db0((int *)&local_2c);
  return;
}

