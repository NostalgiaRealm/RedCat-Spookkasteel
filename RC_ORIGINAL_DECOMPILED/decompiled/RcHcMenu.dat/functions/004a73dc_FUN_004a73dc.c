/*
 * FUN_004a73dc at 004a73dc
 * undefined __register FUN_004a73dc(int * param_1)
 * Address ranges: 004a73dc-004a7597;004a759f-004a75a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4a6dac slot 33 for TCustomGDIGraphic. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4a6dac slot 33 for
   TCustomGDIGraphic. Original bytes unchanged; names and types still inferred. */

void FUN_004a73dc(int *param_1)

{
  char cVar1;
  int iVar2;
  LPCSTR lpchText;
  HDC hdc;
  int *piVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  tagRECT *ptVar5;
  UINT format;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  tagRECT local_1c;
  int *local_c;
  int *local_8;
  
  piVar3 = param_1 + 0x50;
  iVar2 = *piVar3;
  *piVar3 = *piVar3 + 1;
  local_8 = param_1;
  if (SCARRY4(iVar2,1)) {
    puStack_20 = (undefined1 *)0x4a73f6;
    thunk_FUN_00402874((uint)param_1);
  }
  if ((char)local_8[0x4a] != '\0') {
    return;
  }
  *(undefined1 *)(local_8 + 0x4a) = 1;
  puStack_24 = &LAB_004a7598;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x40))(local_8,&local_1c);
  local_c = FUN_004a72f8(local_8);
  if (local_c != (int *)0x0) {
    cVar1 = (**(code **)(*local_c + 0x1c))();
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*local_c + 0x28))();
      if ((cVar1 == '\0') && ((char)local_8[0x4f] == '\0')) {
        FUN_0041c8d0((int *)local_8[0x48],0,0,local_c);
      }
      else {
        ptVar5 = &local_1c;
        piVar3 = (int *)FUN_0049ac74(local_8[0x4c],extraout_EDX,extraout_ECX);
        FUN_0041c848(piVar3,&local_1c.left,(int *)local_8[0x48],&ptVar5->left);
        cVar1 = FUN_00498668(local_8[0x4c],local_c,(char)local_8[0x4f],
                             *(char *)((int)local_8 + 0x13d));
        if (cVar1 == '\0') {
          piVar3 = local_c;
          piVar4 = (int *)FUN_0049ac74(local_8[0x4c],extraout_EDX_00,extraout_ECX_00);
          FUN_0041c8d0(piVar4,0,0,piVar3);
        }
        FUN_0041c8d0((int *)local_8[0x48],0,0,(int *)local_8[0x4c]);
      }
      goto LAB_004a7553;
    }
  }
  if ((*(byte *)(local_8 + 8) & 0x10) != 0) {
    FUN_0041c434(*(int **)(local_8[0x48] + 0x14),'\x01');
    format = 0x25;
    ptVar5 = &local_1c;
    iVar2 = FUN_00404030(local_8[2]);
    lpchText = FUN_004041f4((undefined *)local_8[2]);
    hdc = (HDC)FUN_0041cf6c((int *)local_8[0x48]);
    DrawTextA(hdc,lpchText,iVar2,ptVar5,format);
  }
LAB_004a7553:
  if ((*(byte *)(local_8 + 8) & 0x10) != 0) {
    FUN_0041c434(*(int **)(local_8[0x48] + 0x14),'\0');
    FUN_0041c97c((int *)local_8[0x48],&local_1c);
  }
  *in_FS_OFFSET = uStack_28;
  *(undefined1 *)(local_8 + 0x4a) = 0;
  return;
}

