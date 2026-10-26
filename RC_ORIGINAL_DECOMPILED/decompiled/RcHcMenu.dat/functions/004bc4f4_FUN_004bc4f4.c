/*
 * FUN_004bc4f4 at 004bc4f4
 * undefined __register FUN_004bc4f4(int param_1, LPCSTR param_2, undefined4 param_3)
 * Address ranges: 004bc4f4-004bc554
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004bc4f4(int param_1,LPCSTR param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  VARIANTARG *pVVar1;
  VARIANTARG *pVVar2;
  VARIANTARG *pVVar3;
  VARIANTARG *pVVar4;
  VARIANTARG *pVVar5;
  VARIANTARG *pVVar6;
  VARIANTARG *pVVar7;
  VARIANTARG *pVVar8;
  VARIANTARG *pVVar9;
  VARIANTARG *pVVar10;
  VARIANTARG *pVVar11;
  VARIANTARG *pVVar12;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_004bc555;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  pVVar12 = (VARIANTARG *)&DAT_005744b4;
  pVVar11 = (VARIANTARG *)&DAT_005744b4;
  pVVar10 = (VARIANTARG *)&DAT_005744b4;
  pVVar9 = (VARIANTARG *)&DAT_005744b4;
  pVVar8 = (VARIANTARG *)&DAT_005744b4;
  pVVar7 = (VARIANTARG *)&DAT_005744b4;
  pVVar6 = (VARIANTARG *)&DAT_005744b4;
  pVVar5 = (VARIANTARG *)&DAT_005744b4;
  pVVar4 = (VARIANTARG *)&DAT_005744b4;
  pVVar3 = (VARIANTARG *)&DAT_005744b4;
  pVVar2 = (VARIANTARG *)&DAT_005744b4;
  pVVar1 = (VARIANTARG *)&DAT_005744b4;
  local_8 = param_3;
  FUN_004045b8((BSTR)&local_c,param_2);
  FUN_004ba7d8(param_1,local_c,local_8,pVVar1,pVVar2,pVVar3,pVVar4,pVVar5,pVVar6,pVVar7,pVVar8,
               pVVar9,pVVar10,pVVar11,pVVar12);
  *in_FS_OFFSET = pVVar1;
  FUN_00404474(&local_c);
  return;
}

