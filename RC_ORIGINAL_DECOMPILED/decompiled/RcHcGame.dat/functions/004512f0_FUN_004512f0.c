/*
 * FUN_004512f0 at 004512f0
 * undefined FUN_004512f0(void)
 * Address ranges: 004512f0-00451471
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64d2e8 slot 4 for .?AVCRcHudIconContainer@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64d2e8 slot 4 for
   .?AVCRcHudIconContainer@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_004512f0(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  float10 fVar9;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  uVar7 = *(uint *)(param_1 + 0x2c) >> 1;
  fVar9 = (float10)FUN_0060b0da();
  if ((float10)0.0 < fVar9) {
    uVar7 = uVar7 + 1;
  }
  iStack_70 = *(int *)(param_1 + 0x18);
  iVar8 = *(int *)(param_1 + 0x14);
  iStack_6c = *(int *)(iVar8 + 0x3c) + iStack_70;
  iStack_68 = *(int *)(param_1 + 0x20);
  iStack_64 = *(int *)(iVar8 + 0x40) + iStack_68;
  if (0 < (int)uVar7) {
    iVar2 = __ftol();
    iVar6 = 1;
    do {
      if (iVar2 < iVar6) {
        iVar3 = __ftol();
        if (iVar3 < iVar6) {
          puVar4 = (undefined4 *)FUN_00451480(auStack_20,iVar8,2);
          uStack_50 = *puVar4;
          uStack_4c = puVar4[1];
          uStack_48 = puVar4[2];
          puVar5 = &uStack_50;
          uStack_44 = puVar4[3];
        }
        else {
          puVar4 = (undefined4 *)FUN_00451480(auStack_30,iVar8,1);
          uStack_60 = *puVar4;
          uStack_5c = puVar4[1];
          uStack_58 = puVar4[2];
          puVar5 = &uStack_60;
          uStack_54 = puVar4[3];
        }
      }
      else {
        puVar4 = (undefined4 *)FUN_00451480(auStack_10,iVar8,0);
        uStack_40 = *puVar4;
        uStack_3c = puVar4[1];
        uStack_38 = puVar4[2];
        puVar5 = &uStack_40;
        uStack_34 = puVar4[3];
      }
      FUN_00454090(puVar5,&iStack_70);
      iVar8 = *(int *)(param_1 + 0x14);
      iStack_70 = iStack_70 + *(int *)(iVar8 + 0x3c);
      iStack_6c = iStack_6c + *(int *)(iVar8 + 0x40);
      bVar1 = iVar6 < (int)uVar7;
      iVar6 = iVar6 + 1;
    } while (bVar1);
  }
  return;
}

