/*
 * FUN_0049a370 at 0049a370
 * undefined __register FUN_0049a370(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 0049a370-0049a5b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049a370(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  HPALETTE hpal;
  HANDLE h;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar5;
  undefined4 extraout_EDX_01;
  int *piVar6;
  undefined4 *puVar7;
  byte bVar8;
  UINT iStart;
  UINT cEntries;
  tagPALETTEENTRY *pPalEntries;
  undefined1 *pv;
  int local_c40 [12];
  undefined4 local_c10 [256];
  tagPALETTEENTRY local_810 [256];
  undefined1 local_410 [18];
  ushort local_3fe;
  int local_3d0;
  int local_3cc;
  int local_3c8;
  undefined1 *local_10;
  undefined1 *local_c;
  int *local_8;
  
  bVar8 = 0;
  pPalEntries = local_810;
  cEntries = 0x100;
  iStart = 0;
  local_8 = param_1;
  hpal = (HPALETTE)(**(code **)(*param_1 + 0x24))();
  GetPaletteEntries(hpal,iStart,cEntries,pPalEntries);
  FUN_00498bf8((int)local_810,(int)local_c10);
  puVar1 = local_c10;
  puVar7 = (undefined4 *)(*(int *)(param_4 + -4) + 0x94);
  for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar1;
    puVar1 = puVar1 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  FUN_0049b9f8(*(int **)(param_4 + -4));
  pv = local_410;
  iVar3 = 0x400;
  h = (HANDLE)(**(code **)(*local_8 + 0x60))();
  iVar3 = GetObjectA(h,iVar3,pv);
  if (iVar3 == 0x18) {
    local_c = local_410;
    if (local_3fe == 0x10) {
      FUN_004989fc(5,5,5,local_c40);
      piVar6 = local_c40;
      piVar2 = (int *)(*(int *)(param_4 + -4) + 0x494);
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar2 = *piVar6;
        piVar6 = piVar6 + (uint)bVar8 * -2 + 1;
        piVar2 = piVar2 + (uint)bVar8 * -2 + 1;
      }
    }
    else {
      FUN_004989fc(8,8,8,local_c40);
      piVar6 = local_c40;
      piVar2 = (int *)(*(int *)(param_4 + -4) + 0x494);
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar2 = *piVar6;
        piVar6 = piVar6 + (uint)bVar8 * -2 + 1;
        piVar2 = piVar2 + (uint)bVar8 * -2 + 1;
      }
    }
    FUN_0049b884(*(int **)(param_4 + -4),*(int **)(local_c + 4),*(int *)(local_c + 8),
                 (undefined *)(uint)*(ushort *)(local_c + 0x12));
    uVar4 = extraout_ECX;
    uVar5 = extraout_EDX;
  }
  else {
    if (iVar3 != 0x54) {
      return;
    }
    local_10 = local_410;
    if (local_3fe < 0x18) {
      if (local_3fe < 9) {
        FUN_004989fc(8,8,8,local_c40);
        piVar6 = local_c40;
        piVar2 = (int *)(*(int *)(param_4 + -4) + 0x494);
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar2 = *piVar6;
          piVar6 = piVar6 + (uint)bVar8 * -2 + 1;
          piVar2 = piVar2 + (uint)bVar8 * -2 + 1;
        }
      }
      else {
        FUN_004989fc(local_3d0,local_3cc,local_3c8,local_c40);
        piVar6 = local_c40;
        piVar2 = (int *)(*(int *)(param_4 + -4) + 0x494);
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar2 = *piVar6;
          piVar6 = piVar6 + (uint)bVar8 * -2 + 1;
          piVar2 = piVar2 + (uint)bVar8 * -2 + 1;
        }
      }
    }
    else {
      FUN_004989fc(8,8,8,local_c40);
      piVar6 = local_c40;
      piVar2 = (int *)(*(int *)(param_4 + -4) + 0x494);
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar2 = *piVar6;
        piVar6 = piVar6 + (uint)bVar8 * -2 + 1;
        piVar2 = piVar2 + (uint)bVar8 * -2 + 1;
      }
    }
    FUN_0049b884(*(int **)(param_4 + -4),*(int **)(local_10 + 4),*(int *)(local_10 + 8),
                 (undefined *)(uint)*(ushort *)(local_10 + 0x12));
    uVar4 = extraout_ECX_00;
    uVar5 = extraout_EDX_00;
  }
  puVar1 = (undefined4 *)FUN_0049ae0c(*(int **)(param_4 + -4),uVar5,uVar4);
  FUN_00402cfc(puVar1,*(uint *)(*(int *)(param_4 + -4) + 0x7c),0);
  piVar6 = local_8;
  piVar2 = (int *)FUN_0049ac74(*(int *)(param_4 + -4),extraout_EDX_01,extraout_ECX_01);
  FUN_0041c8d0(piVar2,0,0,piVar6);
  return;
}

