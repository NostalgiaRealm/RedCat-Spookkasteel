/*
 * FUN_004bd6d0 at 004bd6d0
 * undefined __register FUN_004bd6d0(int * param_1)
 * Address ranges: 004bd6d0-004bd74a;004bd7c3-004bd829;004bd8b5-004bd943
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcd20 slot 11 for TAppDAOQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcd20 slot 11 for
   TAppDAOQuery. Original bytes unchanged; names and types still inferred. */

void FUN_004bd6d0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *in_FS_OFFSET;
  int local_14c [4];
  undefined4 local_13c;
  VARIANTARG local_138 [15];
  undefined4 uStackY_40;
  VARIANTARG *pVStackY_3c;
  VARIANTARG *pVVar4;
  VARIANTARG *pVVar5;
  VARIANTARG *pVVar6;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *local_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = &stack0xfffffffc;
  iVar2 = 0x29;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puStack_20 = &LAB_004bd944;
  puStack_24 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_24;
  local_28 = (undefined1 *)0x4bd6fb;
  iVar2 = FUN_004d68f0((int)param_1);
  if (iVar2 == 0) {
    puStack_2c = &LAB_004bd82a;
    puStack_30 = (undefined1 *)*in_FS_OFFSET;
    *in_FS_OFFSET = &puStack_30;
    pVStackY_3c = (VARIANTARG *)0x4bd7ed;
    pVVar4 = (VARIANTARG *)PTR_DAT_005725ac;
    pVVar6 = (VARIANTARG *)PTR_DAT_005725ac;
    local_28 = &stack0xfffffffc;
    FUN_004053dc(local_138,2);
    pVStackY_3c = local_138;
    uStackY_40 = 0x4bd805;
    FUN_004045b8((BSTR)&local_13c,(LPCSTR)param_1[0xb]);
    pVVar5 = pVStackY_3c;
    pVStackY_3c = (VARIANTARG *)0x4bd817;
    iVar2 = FUN_004b9204(param_1[0xc],local_13c,pVVar5,pVVar4,pVVar6);
    param_1[0xd] = iVar2;
    *in_FS_OFFSET = pVVar4;
    puVar3 = puStack_30;
  }
  else {
    puStack_2c = &LAB_004bd74b;
    puStack_30 = (undefined1 *)*in_FS_OFFSET;
    *in_FS_OFFSET = &puStack_30;
    pVVar5 = (VARIANTARG *)PTR_DAT_005725ac;
    local_28 = &stack0xfffffffc;
    FUN_004053dc((VARIANTARG *)&stack0xffffffe8,2);
    iVar2 = FUN_004b9804(param_1[0xe],(VARIANTARG *)&stack0xffffffe8,PTR_DAT_005725ac,pVVar5);
    param_1[0xd] = iVar2;
    *in_FS_OFFSET = pVVar5;
    puVar3 = puStack_2c;
  }
  if (param_1[0xd] != 0) {
    puStack_30 = (undefined1 *)0x4bd8c6;
    cVar1 = (**(code **)(*param_1 + 0x3c))(param_1,*param_1,puVar3);
    if (cVar1 != '\0') {
      puStack_30 = (undefined1 *)0x4bd8d5;
      FUN_004ba5b8(param_1[0xd]);
    }
  }
  puStack_30 = (undefined1 *)0x4bd8e0;
  FUN_00403094((int *)param_1[10]);
  param_1[10] = 0;
  puStack_30 = (undefined1 *)0x4bd8f3;
  FUN_00403094((int *)param_1[9]);
  param_1[9] = 0;
  *in_FS_OFFSET = puStack_2c;
  puStack_24 = &LAB_004bd94b;
  local_28 = (undefined1 *)0x4bd918;
  FUN_00403dd4(local_14c,4);
  local_28 = (undefined1 *)0x4bd923;
  FUN_00404474(&local_13c);
  local_28 = (undefined1 *)0x4bd92e;
  FUN_00405bcc(local_138);
  local_28 = (undefined1 *)0x4bd93b;
  FUN_00403dd4((int *)&local_28,4);
  local_28 = (undefined1 *)0x4bd943;
  FUN_00405bcc((VARIANTARG *)&stack0xffffffe8);
  return;
}

