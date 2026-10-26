/*
 * FUN_004b1ab8 at 004b1ab8
 * undefined __register FUN_004b1ab8(int * param_1, int * param_2)
 * Address ranges: 004b1ab8-004b1cf2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4b1968 slot 0 for TDatePropDesc. Original bytes unchanged; names and types still inferred.
 */

/* WARNING: Type propagation algorithm not settling */
/* Recovered original virtual function entry from validated Delphi VMT 0x4b1968 slot 0 for
   TDatePropDesc. Original bytes unchanged; names and types still inferred. */

void FUN_004b1ab8(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int *in_FS_OFFSET;
  float10 in_ST0;
  float10 in_ST1;
  undefined4 *local_154;
  byte *local_150;
  int *local_14c;
  int local_148;
  undefined1 local_144 [4];
  byte local_140 [256];
  undefined4 *local_40;
  byte *local_3c;
  int *local_38;
  int local_34 [2];
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  int *piVar11;
  undefined4 *puVar12;
  
  iVar6 = 0x2a;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puVar12 = (undefined4 *)&LAB_004b1cf3;
  piVar11 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&stack0xffffffe8;
  cVar1 = (**(code **)(*param_2 + 0x50))();
  if (cVar1 == '\0') {
    piVar2 = (int *)FUN_00403224(param_2,(int)&PTR_FUN_004b19f0);
    (**(code **)(*piVar2 + 0x6c))();
    puVar7 = puVar12;
    piVar5 = param_2;
    if (in_ST0 < (float10)*(double *)(param_1 + 0x10)) {
      FUN_004966b4(piVar2,local_34 + 1);
      iVar6 = FUN_004b2490((int)piVar2);
      FUN_00409804(*(undefined **)(iVar6 + 0x24),local_34);
      FUN_0040bd30((int *)&local_38,extraout_EDX,extraout_ECX);
      piVar11 = (int *)CONCAT31((int3)((uint)piVar11 >> 8),0xb);
      puVar8 = &stack0xffffffd4;
      FUN_00406a48(&PTR_DAT_004b1a70,(int *)&local_3c);
      FUN_0040a894(local_3c,puVar8,2,local_38);
      pcVar10 = "DoValidate";
      puVar9 = puVar12;
      puVar7 = puVar12;
      piVar3 = (int *)FUN_00495ee0((int)param_2);
      local_34[1] = 0x4b1bad;
      piVar5 = param_2;
      FUN_00402fe0(*param_1,local_140);
      local_34[1] = 0x4b1bbb;
      FUN_00403fd4((int *)&local_40,local_140);
      local_34[1] = 0x4b1bca;
      uVar4 = FUN_004905f8((int *)&PTR_FUN_0048e734,'\x01',local_40,(int)param_2,piVar3,puVar12,
                           (int)puVar9,(undefined4 *)pcVar10);
      local_34[1] = 0x4b1bcf;
      FUN_0040382c(uVar4);
    }
    (**(code **)(*piVar2 + 0x6c))();
    if ((float10)*(double *)(param_1 + 0xe) < in_ST1) {
      FUN_004966b4(piVar2,local_144);
      iVar6 = FUN_004b2490((int)piVar2);
      FUN_00409804(*(undefined **)(iVar6 + 0x24),&local_148);
      FUN_0040bd30((int *)&local_14c,extraout_EDX_00,extraout_ECX_00);
      puVar8 = &stack0xffffffd4;
      FUN_00406a48((undefined4 *)&LAB_004b1a78,(int *)&local_150);
      FUN_0040a894(local_150,puVar8,2,local_14c);
      pcVar10 = "DoValidate";
      puVar12 = puVar7;
      piVar11 = piVar5;
      piVar5 = (int *)FUN_00495ee0((int)piVar5);
      local_34[1] = 0x4b1c98;
      FUN_00402fe0(*param_1,local_140);
      local_34[1] = 0x4b1ca9;
      FUN_00403fd4((int *)&local_154,local_140);
      local_34[1] = 0x4b1cbb;
      uVar4 = FUN_004905f8((int *)&PTR_FUN_0048e734,'\x01',local_154,(int)piVar11,piVar5,puVar7,
                           (int)puVar12,(undefined4 *)pcVar10);
      local_34[1] = 0x4b1cc0;
      FUN_0040382c(uVar4);
    }
  }
  *in_FS_OFFSET = (int)piVar11;
  FUN_00403dd4((int *)&local_154,5);
  FUN_00403dd4((int *)&local_40,5);
  FUN_00403db0((int *)&stack0xffffffec);
  return;
}

